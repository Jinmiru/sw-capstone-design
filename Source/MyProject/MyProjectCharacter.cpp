#include "MyProjectCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "MyProject/Public/StatusWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "HPWidget.h"
#include "PlayerAnim.h"
#include "Engine/StaticMeshActor.h"
#include "Net/UnrealNetwork.h"
#include "Enemy.h"
#include "EnemyFSM.h"
#include "DieWidget.h"
#include "PlayingCutsceneBox.h"
#include "GameController.h"
#include "Engine/SkyLight.h"//밤낮 조절
#include "Components/SkyLightComponent.h"
#include "Engine/DirectionalLight.h"        // ADirectionalLight
#include "Components/LightComponent.h"      // ULightComponent
DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AMyProjectCharacter

AMyProjectCharacter::AMyProjectCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 1000.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	CameraBoom->bInheritPitch = false;
	CameraBoom->bInheritRoll = false;
	CameraBoom->bInheritYaw = false;
	CameraBoom->bDoCollisionTest = false; // 무기랑 카메라 부딯히는거 방지	


	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm


	// -------------------대쉬 이펙트(나이아가라)------------------- 

	NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	NiagaraComp->SetupAttachment(RootComponent);


	// -------------------무기 설정-------------------
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	MeshComponent->SetupAttachment(GetMesh(), TEXT("Weapon_R")); // 무기 소켓에 부착

	// -------------------초기값 설정-------------------
	AttackRange = 50.f;
	Age = 8;
	money = 0;
	middle = true;
	high = true;
	HP_Player = 100;
	Power = 1;
	bCanDash = true;
	bCanUseSkill = true;

	//-------------------멀티 설정-------------------

}
void AMyProjectCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (!IsLocallyControlled())return;

	// 로그용: 서버에서 실행됐는지 확인
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("GameMode BeginPlay (HasAuthority)"));
	}

	UE_LOG(LogTemp, Warning, TEXT("소환됨 %s"), *GetName());

	// 로컬 플레이어만 UI, 마우스 설정 실행
	if (IsLocallyControlled())
	{
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		if (PlayerController)
		{
			PlayerController->bShowMouseCursor = true;
			PlayerController->SetInputMode(FInputModeGameAndUI());
		}

		if (!BP_StatusWidget)
		{
			UE_LOG(LogTemp, Error, TEXT("StatusWidget is NULL!"));
		}
		else
		{
			HUDWidget = CreateWidget<UStatusWidget>(GetWorld(), BP_StatusWidget);
			if (HUDWidget)
			{
				HUDWidget->AddToViewport();
				//UE_LOG(LogTemp, Error, TEXT("UI 갱신 성공"));

				UpdateStatus(); // 스텟 UI 갱신

			}
		}
	}

	//  서버든 클라이언트든 공통적으로 실행될 내용
	if (IsLocallyControlled())
	{
		// 타이머 여기서만 실행 (UI 있는 애만 돈 증가 표시함)
		GetWorldTimerManager().SetTimer(MoneyTimerHandle, this, &AMyProjectCharacter::IncreaseMoney, 5.0f, true);
	}
}


//////////////////////////////////////////////////////////////////////////
// Input

void AMyProjectCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyProjectCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyProjectCharacter::Look);
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &AMyProjectCharacter::Attack);
		EnhancedInputComponent->BindAction(levelup, ETriggerEvent::Started, this, &AMyProjectCharacter::PlusAge);
		EnhancedInputComponent->BindAction(printAction, ETriggerEvent::Started, this, &AMyProjectCharacter::Print);
		EnhancedInputComponent->BindAction(inventoryAction, ETriggerEvent::Started, this, &AMyProjectCharacter::Inventory);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Started, this, &AMyProjectCharacter::Dash);

		EnhancedInputComponent->BindAction(ChangeJob1, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill1);
		EnhancedInputComponent->BindAction(ChangeJob2, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill2);
		EnhancedInputComponent->BindAction(ChangeJob3, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill3);
		EnhancedInputComponent->BindAction(ChangeJob4, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill4);
		EnhancedInputComponent->BindAction(ChangeJob5, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill5);
		EnhancedInputComponent->BindAction(ChangeJob6, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill6);
		EnhancedInputComponent->BindAction(ChangeJob7, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill7);



		EnhancedInputComponent->BindAction(Skill, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack);


		EnhancedInputComponent->BindAction(Skill1, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack1);
		EnhancedInputComponent->BindAction(Skill2, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack2);
		EnhancedInputComponent->BindAction(Skill3, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack3);
		//EnhancedInputComponent->BindAction(Skill4, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack4);
		EnhancedInputComponent->BindAction(Skill5, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack5);

		EnhancedInputComponent->BindAction(Skill4, ETriggerEvent::Started, this, &AMyProjectCharacter::StartDashCharge);
		EnhancedInputComponent->BindAction(Skill4, ETriggerEvent::Completed, this, &AMyProjectCharacter::ReleaseDashCharge);



	}

}

void AMyProjectCharacter::Move(const FInputActionValue& Value)
{
	if (bIsMovementLocked) return;

	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{

		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}

}

void AMyProjectCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMyProjectCharacter::SwapToNewCharacter(const FString& BlueprintPath)
{
	if (HasAuthority())
	{
		Server_SwapToNewCharacter(BlueprintPath, GetController());
	}
	else
	{
		Server_SwapToNewCharacter(BlueprintPath, GetController());
	}
}

void AMyProjectCharacter::Server_SwapToNewCharacter_Implementation(const FString& BlueprintPath, AController* OwningController)
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC) return;

	AMyProjectCharacter* OldCharacter = Cast<AMyProjectCharacter>(PC->GetPawn());
	if (!OldCharacter) return;

	FCharacterRuntimeData SavedData = OldCharacter->SaveCurrentState();
	FVector SpawnLocation = OldCharacter->GetActorLocation();
	FRotator SpawnRotation = OldCharacter->GetActorRotation();

	PC->UnPossess();
	OldCharacter->Destroy();

	FString FullPath = BlueprintPath;
	if (!FullPath.Contains(TEXT("_C")))
	{
		FullPath += TEXT("_C");  // 반드시 클래스 경로로
	}

	// 정확한 타입 명시
	UClass* LoadedClass = LoadClass<APawn>(nullptr, *FullPath);
	if (!LoadedClass)
	{
		UE_LOG(LogTemp, Error, TEXT("캐릭터 클래스 로드 실패: %s"), *FullPath);
		return;
	}

	TSubclassOf<APawn> NewCharacterClass = LoadedClass;

	APawn* NewPawn = GetWorld()->SpawnActor<APawn>(NewCharacterClass, SpawnLocation, SpawnRotation);
	if (!NewPawn)
	{
		UE_LOG(LogTemp, Error, TEXT("캐릭터 스폰 실패!"));
		return;
	}

	NewPawn->SetReplicates(true);
	NewPawn->SetReplicateMovement(true);

	AMyProjectCharacter* NewCharacter = Cast<AMyProjectCharacter>(NewPawn);
	if (!NewCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("NewCharacter 캐스팅 실패! LoadStateFromStruct 호출 안 함"));
		return;
	}

	PC->Possess(NewCharacter);

	FTimerHandle DelayHandle;
	FTimerDelegate Delegate = FTimerDelegate::CreateUFunction(NewCharacter, FName("LoadStateFromStruct"), SavedData);
	NewCharacter->GetWorldTimerManager().SetTimer(DelayHandle, Delegate, 0.1f, false);
}

FCharacterRuntimeData AMyProjectCharacter::SaveCurrentState() const
{
	FCharacterRuntimeData Data;
	Data.Save_Age = this->Age;
	Data.Save_HP = this->HP_Player;
	Data.Save_JobSkill = this->jobskill;
	Data.Save_Physical = this->Physical;
	Data.Save_Sensory = this->Sensory;
	Data.Save_Logic = this->Logic;
	Data.Save_Linguistic = this->Linguistic;
	Data.Save_SocialSkill = this->SocialSkill;
	Data.Save_MentalStrength = this->MentalStrength;
	Data.Save_money = this->money;


	return Data;
}

void AMyProjectCharacter::LoadStateFromStruct(const FCharacterRuntimeData& Data)
{
	//UE_LOG(LogTemp, Warning, TEXT("Age : %d , HP : %d , skill : %d"),Data.Save_Age,Data.Save_HP, Data.Save_JobSkill);
	this->Age = Data.Save_Age;
	this->HP_Player = Data.Save_HP;
	this->jobskill = Data.Save_JobSkill;
	this->Physical = Data.Save_Physical;
	this->Sensory = Data.Save_Sensory;
	this->Logic = Data.Save_Logic;
	this->Linguistic = Data.Save_Linguistic;
	this->SocialSkill = Data.Save_SocialSkill;
	this->MentalStrength = Data.Save_MentalStrength;
	this->money = Data.Save_money;



	Player_Setting();

	if (IsLocallyControlled())
	{
		// HUD 바로 생성 가능
		SetupHUDIfNeeded();
	}
	else
	{
		// 아직 Possess 안 되었을 수도 있으니, 딜레이 후 재시도
		FTimerHandle DelayHandle;
		GetWorldTimerManager().SetTimer(DelayHandle, this, &AMyProjectCharacter::SetupHUDIfNeeded, 0.2f, false);
	}

}
void AMyProjectCharacter::SetupHUDIfNeeded()
{
	// 조건 체크
	if (!IsLocallyControlled())
	{
		return;
	}



	// 실제 위젯 생성
	HUDWidget = CreateWidget<UStatusWidget>(GetWorld(), BP_StatusWidget);

	if (HUDWidget)
	{
		HUDWidget->AddToViewport();
		UE_LOG(LogTemp, Warning, TEXT("[HUD] 생성 및 뷰포트 추가 완료"));
		UpdateStatus();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[HUD] CreateWidget 실패: %s"), *GetNameSafe(this));
	}
}
//-------------------스텟 멀티 설정-------------------
void AMyProjectCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyProjectCharacter, Age);
	DOREPLIFETIME(AMyProjectCharacter, HP_Player);
	DOREPLIFETIME(AMyProjectCharacter, jobskill);
	DOREPLIFETIME(AMyProjectCharacter, money);
	DOREPLIFETIME(AMyProjectCharacter, bCanDash);
	DOREPLIFETIME(AMyProjectCharacter, NiagaraSystem);
	DOREPLIFETIME(AMyProjectCharacter, Physical);
	DOREPLIFETIME(AMyProjectCharacter, Sensory);
	DOREPLIFETIME(AMyProjectCharacter, Logic);
	DOREPLIFETIME(AMyProjectCharacter, Linguistic);
	DOREPLIFETIME(AMyProjectCharacter, SocialSkill);
	DOREPLIFETIME(AMyProjectCharacter, MentalStrength);
}


//--------------------기본 공격-------------------
void AMyProjectCharacter::Attack(const FInputActionValue& Value)
{
	RequestAttack();

	if (HasAuthority())
	{
		PerformAttack();
	}
	else
	{
		ServerAttack();
	}
}
void AMyProjectCharacter::ServerAttack_Implementation()
{
	PerformAttack();
}

void AMyProjectCharacter::PerformAttack()
{
	FVector Start = GetActorLocation();
	FVector ForwardDirection = GetActorForwardVector();
	FVector End = Start + ForwardDirection * AttackRange;

	FCollisionShape Sphere = FCollisionShape::MakeSphere(AttackRange);
	TArray<FHitResult> HitResults;

	// 디버그용 시각화
	DrawDebugSphere(GetWorld(), End, AttackRange, 12, FColor::Red, false, 1.0f);

	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(this); // 자기 자신 무시

	bool bHit = GetWorld()->SweepMultiByChannel(
		HitResults,
		Start,
		End,
		FQuat::Identity,
		ECC_Visibility,
		Sphere,
		TraceParams
	);

	if (bHit)
	{
		for (const FHitResult& Hit : HitResults)
		{
			AActor* HitActor = Hit.GetActor();
			if (!HitActor) continue;


			if (AMyProjectCharacter* EnemyPlayer = Cast<AMyProjectCharacter>(HitActor))
			{
				// 자기 자신 제외
				if (EnemyPlayer == this)
				{
					UE_LOG(LogTemp, Warning, TEXT("Hit Myself — Skipping"));
					continue;
				}

				// 적 구분
				if (EnemyPlayer->HasAuthority())
				{
					EnemyPlayer->HP_Player -= 10;
					EnemyPlayer->Multicast_OnHitEvent();
					UE_LOG(LogTemp, Warning, TEXT("Hit Other Player! Damage Applied"));
				}
			}

			//  AI 적 구분
			auto enemy = Hit.GetActor()->GetDefaultSubobjectByName(TEXT("FSM"));
			if (enemy) {
				UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *HitActor->GetName());

				UEnemyFSM* enemyFSM = Cast<UEnemyFSM>(enemy);
				enemyFSM->OnDamageProcess();
				break;
			}

		}
	}
}
void AMyProjectCharacter::OnRep_Age()
{
	UpdateStatus();
	if (Age >= 14 && middle) {
		middle = false;
		//CameraBoom->TargetArmLength = 1300.0f;
		AttackRange += 50.0f;
	}

	if (Age >= 17 && high) {
		high = false;
		//CameraBoom->TargetArmLength = 1500.0f;
		AttackRange += 50.0f;

	}
}


void AMyProjectCharacter::PlusAge(const FInputActionValue& Value) { //클라이언트 -> 서버 호출하는중
	if (!IsLocallyControlled()) return;
	// 내 로컬 컨트롤러가 조종 중인 캐릭터인지 확인

	// 서버에 요청
	if (HasAuthority())
	{
		ServerPlusAge();
	}
	else
	{
		ServerPlusAge(); // 클라이언트도 무조건 서버 호출
	}

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), LevelupEffect, GetActorLocation(), FRotator::ZeroRotator, FVector(1.0f));
}



void AMyProjectCharacter::Print(const FInputActionValue& Value)
{
	OnHitEvent();
	bCanUseSkill = true; // 스킬 쿨 초기화

}

void AMyProjectCharacter::Player_Setting()
{
	if (HasAuthority())
	{
		// 서버에서 Multicast 호출
		Multicast_Player_Setting();
	}
}
void AMyProjectCharacter::Multicast_Player_Setting_Implementation()
{
	if (!IsLocallyControlled()) return;

	UE_LOG(LogTemp, Error, TEXT("JobSkill : %d,  Age : %d"), jobskill, Age);


	switch (jobskill) {
	case 0:
		if (Age < 14) {
			if (HUDWidget)
			{
				UE_LOG(LogTemp, Error, TEXT("초등학생입니다."));
				ChangeProfile(TEXT("/Game/Images/elemental.elemental"), TEXT("elemental school"), TEXT("/Game/Images/NoSkill.NoSkill"));
				Power = 1.5;
				if (HUDWidget->GuideText != nullptr)
					HUDWidget->GuideText->SetText(FText::FromString(TEXT("초등학교 수업을 진행하세요!")));
			}
			else {
				UE_LOG(LogTemp, Error, TEXT("초등학교 진학 실패"));

			}
		}
		else if (Age >= 14 && Age < 17) {

			if (CameraBoom)
				CameraBoom->TargetArmLength = 1300.0f;
			AttackRange += 50.0f;
			if (HUDWidget)
			{
				//UE_LOG(LogTemp, Error, TEXT("중학생입니다."));
				ChangeProfile(TEXT("/Game/Images/middle.middle"), TEXT("middle school"), TEXT("/Game/Images/NoSkill.NoSkill"));
				Power = 1.5;
				if (HUDWidget->GuideText != nullptr)
					HUDWidget->GuideText->SetText(FText::FromString(TEXT("중학교 수업을 진행하세요!")));

			}
			else {
				UE_LOG(LogTemp, Error, TEXT("중학교 진학 실패"));
			}


		}
		else if (Age >= 17 && Age < 20) {

			if (CameraBoom)
				CameraBoom->TargetArmLength = 1500.0f;
			AttackRange += 50.0f;
			if (HUDWidget)
			{
				//UE_LOG(LogTemp, Error, TEXT("고등학생입니다."));
				ChangeProfile(TEXT("/Game/Images/high.high"), TEXT("high school"), TEXT("/Game/Images/NoSkill.NoSkill"));
				Power = 2;
				if (HUDWidget->GuideText != nullptr)
					HUDWidget->GuideText->SetText(FText::FromString(TEXT("고등학교 수업을 진행하세요!")));
			}
			else {
				UE_LOG(LogTemp, Error, TEXT("고등학교 진학 실패 "));
			}

		}
		else {
			if (HUDWidget->GuideText != nullptr)
				HUDWidget->GuideText->SetText(FText::FromString(TEXT("스펙을 쌓아 취업하세요!")));
		}

		break;
	case 1:
		if (CameraBoom)
			CameraBoom->TargetArmLength = 1500.0f;
		UE_LOG(LogTemp, Warning, TEXT("Police"));
		ChangeProfile(TEXT("/Game/Images/police.police"), TEXT("police"), TEXT("/Game/Images/siren.siren"));
		if (HUDWidget && HUDWidget->GuideText != nullptr)
			HUDWidget->GuideText->SetText(FText::FromString(TEXT("최후의 승리자가 되세요!")));
		break;
	case 2:
		if (CameraBoom)
			CameraBoom->TargetArmLength = 1500.0f;
		UE_LOG(LogTemp, Warning, TEXT("cooking"));
		ChangeProfile(TEXT("/Game/Images/cooking.cooking"), TEXT("cooking"), TEXT("/Game/Images/fire.fire"));
		if (HUDWidget && HUDWidget->GuideText != nullptr)
			HUDWidget->GuideText->SetText(FText::FromString(TEXT("최후의 승리자가 되세요!")));

		break;
	case 3:
		if (CameraBoom)
			CameraBoom->TargetArmLength = 1500.0f;
		UE_LOG(LogTemp, Warning, TEXT("boxer"));
		ChangeProfile(TEXT("/Game/Images/boxer.boxer"), TEXT("boxer"), TEXT("/Game/Images/punch.punch"));
		if (HUDWidget && HUDWidget->GuideText != nullptr)
			HUDWidget->GuideText->SetText(FText::FromString(TEXT("최후의 승리자가 되세요!")));

		break;
	case 4:
		if (CameraBoom)
			CameraBoom->TargetArmLength = 1500.0f;
		ChangeProfile(TEXT("/Game/Images/doctor.doctor"), TEXT("doctor"), TEXT("/Game/Images/heal.heal"));
		if (HUDWidget && HUDWidget->GuideText != nullptr)
			HUDWidget->GuideText->SetText(FText::FromString(TEXT("최후의 승리자가 되세요!")));

		break;
	case 5:
		if (CameraBoom)
			CameraBoom->TargetArmLength = 1500.0f;
		ChangeProfile(TEXT("/Game/Images/artist.artist"), TEXT("artist"), TEXT("/Game/Images/ink.ink"));
		if (HUDWidget && HUDWidget->GuideText != nullptr)
			HUDWidget->GuideText->SetText(FText::FromString(TEXT("최후의 승리자가 되세요!")));

		break;
	}
	UpdateStatus();
}


void AMyProjectCharacter::UpdateStatus()
{
	if (!IsLocallyControlled()) return;
	// 내 로컬 컨트롤러가 조종 중인 캐릭터인지 확인

	if (!HUDWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("HUDWidget is NULL in UpdateStatus!"));
		return;
	}

	if (HUDWidget->AgeText)
	{
		FString AgeString = FString::Printf(TEXT("AGE : %d"), Age);
		HUDWidget->AgeText->SetText(FText::FromString(AgeString));
	}
	if (HUDWidget->PhysicalText)
		HUDWidget->PhysicalText->SetText(FText::AsNumber(Physical));
	if (HUDWidget->SensoryText)
		HUDWidget->SensoryText->SetText(FText::AsNumber(Sensory));
	if (HUDWidget->LogicText)
		HUDWidget->LogicText->SetText(FText::AsNumber(Logic));
	if (HUDWidget->LinguisticText)
		HUDWidget->LinguisticText->SetText(FText::AsNumber(Linguistic));
	if (HUDWidget->SocialSkillText)
		HUDWidget->SocialSkillText->SetText(FText::AsNumber(SocialSkill));
	if (HUDWidget->MentalStrengthText)
		HUDWidget->MentalStrengthText->SetText(FText::AsNumber(MentalStrength));
	if (HUDWidget->proficiency)
		HUDWidget->proficiency->SetText(FText::AsNumber(GetHighestStatName()));
}



int32 AMyProjectCharacter::GetHighestStatName()
{
	TMap<FString, int32> Stats = {
		{"Physical", Physical},
		{"Sensory", Sensory},
		{"Logic", Logic},
		{"Linguistic", Linguistic},
		{"SocialSkill", SocialSkill},
		{"MentalStrength", MentalStrength}
	};

	FString BestStatName;
	int32 MaxValue = TNumericLimits<int32>::Min();
	for (const auto& Stat : Stats)
	{
		if (Stat.Value > MaxValue)
		{
			MaxValue = Stat.Value;
			BestStatName = Stat.Key;
		}
	}

	return MaxValue;
}

void AMyProjectCharacter::Inventory(const FInputActionValue& Value)
{
	isNight = true;

	if (!GetWorld()) return;

	// === Directional Lights ===
	TArray<AActor*> FoundLights;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADirectionalLight::StaticClass(), FoundLights);

	for (AActor* Actor : FoundLights)
	{
		// 🎯 안전성 보장: Cast 전에 타입 체크!
		if (!IsValid(Actor) || !Actor->IsA(ADirectionalLight::StaticClass()))
			continue;

		ADirectionalLight* DirLight = Cast<ADirectionalLight>(Actor);
		if (!DirLight) continue;

		ULightComponent* LightComp = DirLight->GetLightComponent();
		if (LightComp)
		{
			LightComp->SetIntensity(1.0f);
		}
	}

	// === Sky Lights ===
	TArray<AActor*> FoundSkyLights;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASkyLight::StaticClass(), FoundSkyLights);

	for (AActor* Actor : FoundSkyLights)
	{
		if (!IsValid(Actor) || !Actor->IsA(ASkyLight::StaticClass()))
			continue;

		ASkyLight* SkyLight = Cast<ASkyLight>(Actor);
		if (!SkyLight) continue;

		USkyLightComponent* SkyLightComp = SkyLight->GetLightComponent();
		if (SkyLightComp)
		{
			SkyLightComp->SetIntensity(0.1f);
			SkyLightComp->MarkRenderStateDirty();
		}
	}

}

void AMyProjectCharacter::IncreaseMoney()
{
	money += 10;  // 돈 증가 
	if (HUDWidget && HUDWidget->moneyText)
	{
		FString MoneyString = FString::Printf(TEXT("+%d"), money);
		HUDWidget->moneyText->SetText(FText::FromString(MoneyString));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("HUDWidget or moneyText is NULL in IncreaseMoney!"));
	}

}

void AMyProjectCharacter::DecreaseMoney(int32 value)
{
	money -= value;
	if (IsLocallyControlled()) {
		FString MoneyString = FString::Printf(TEXT("+%d"), money);
		HUDWidget->moneyText->SetText(FText::FromString(MoneyString));
	}
}

void AMyProjectCharacter::OnHitEvent()
{

	HP_Player -= 10;

	if (HP_Player > 0) {
		UE_LOG(LogTemp, Warning, TEXT("OnHitEvent, HP : %d"), HP_Player);
		if (HitEffect)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, GetActorLocation());
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Player is Dead!"));

		HUDWidget->RemoveFromParent(); // UI 제거

		// UI 띄우기
		APlayerController* PC = Cast<APlayerController>(GetController()); // ← 추가됨
		if (!PC) {
			UE_LOG(LogTemp, Warning, TEXT("No PlayerController!"));
			return;
		}
		//UE_LOG(LogTemp, Warning, TEXT("DieWidgetClass: %s"), *GetNameSafe(DieWidgetClass));
		//UE_LOG(LogTemp, Warning, TEXT("PlayerController: %s"), *GetNameSafe(PC));
		//UE_LOG(LogTemp, Warning, TEXT("WidgetInstance: %s"), *GetNameSafe(DieWidgetInstance));

		if (DieWidgetClass && !DieWidgetInstance)
		{
			DieWidgetInstance = CreateWidget<UUserWidget>(PC, DieWidgetClass);
			if (DieWidgetInstance)
			{
				DieWidgetInstance->AddToViewport();
			}
		}
	}

}


void AMyProjectCharacter::OnHitEvent2()
{

}


void AMyProjectCharacter::Dash() {
	if (!bCanDash) return;

	RequestDash(); // dash animation

	if (!HasAuthority())
	{
		Server_RequestDash();
	}
}


void AMyProjectCharacter::StopDash()
{
	GetCharacterMovement()->StopMovementImmediately(); // 돌진 멈춤
}
void AMyProjectCharacter::PerformDash()
{
	bCanDash = false; // 연속 사용 방지


	FVector DashDirection = GetActorForwardVector(); // 바라보는 방향
	GetCharacterMovement()->Launch(DashDirection * 2000); // 순간적인 돌진

	// 쿨다운 설정
	GetWorldTimerManager().SetTimer(DashCooldownTimerHandle, [this]() { bCanDash = true; }, 1.0, false);
	UE_LOG(LogTemp, Warning, TEXT("Dash!"));

	Multicast_PlayDashEffects();
}

void AMyProjectCharacter::Server_RequestDash_Implementation()
{
	PerformDash(); // 서버에서 Dash 실행
}

//=========================================================================================changeProfile 멀티 적용
void AMyProjectCharacter::ChangeProfile(const FString& TextureAssetPath, const FString& name, const FString& skillIcon)
{
	if (!HUDWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("HUDWidget is NULL in ChangeProfile for %s \n %s"), *GetName(), *TextureAssetPath);
		return;
	}

	FString FullPath = FString::Printf(TEXT("Texture2D'%s'"), *TextureAssetPath);
	UTexture2D* NewTexture = LoadObject<UTexture2D>(nullptr, *FullPath);

	if (NewTexture && HUDWidget->profile)
	{
		HUDWidget->profile->SetBrushFromTexture(NewTexture);
	}

	if (HUDWidget->jobText)
	{
		HUDWidget->jobText->SetText(FText::FromString(name));
	}

	// 3. 스킬 아이콘 이미지 설정
	FString FullPath2 = FString::Printf(TEXT("Texture2D'%s'"), *skillIcon);
	UTexture2D* NewTexture2 = LoadObject<UTexture2D>(nullptr, *FullPath2); // 여기 수정됨!
	if (NewTexture2 && HUDWidget->SkillCoolProgressBar)
	{
		// 브러시 생성 및 설정
		FSlateBrush NewBrush;
		NewBrush.SetResourceObject(NewTexture2);
		NewBrush.ImageSize = FVector2D(256, 64); // 원하는 크기로 조절
		NewBrush.DrawAs = ESlateBrushDrawType::Image;

		// 기존 ProgressBar 스타일 불러와서 수정
		FProgressBarStyle BarStyle = HUDWidget->SkillCoolProgressBar->WidgetStyle;
		BarStyle.BackgroundImage = NewBrush; // 배경 이미지 변경 (또는 FillImage 등 필요에 따라)

		// 스타일 다시 적용
		HUDWidget->SkillCoolProgressBar->SetWidgetStyle(BarStyle);

		UE_LOG(LogTemp, Log, TEXT("Skill icon updated with texture: %s"), *skillIcon);
	}

}




//직업 변경 멀티 적용(스킬 적용 숫자)
void AMyProjectCharacter::ServerChangeJobSkill_Implementation(int32 changeJobSkill)
{
	jobskill = changeJobSkill;
	//OnRep_JobSkill();
	//ㄴ Replicated 변수(동기화 변수)의 변경을 감지해서 자동으로 호출되는 함수
}

void AMyProjectCharacter::OnRep_JobSkill()
{
	// 본인 클라이언트 플레이어 세팅
	Player_Setting();
	// 모든 클라에 반영해야 할 처리도 있으면 Multicast 호출
	Multicast_Player_Setting();
}


void AMyProjectCharacter::ChangeJobSkill1()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromParent();
	}
	ServerChangeJobSkill(1);
	SwapToNewCharacter(TEXT("/Game/MetaHumans/Police/BP_PoliceThirdPersonCharacter.BP_PoliceThirdPersonCharacter"));
}
void AMyProjectCharacter::ChangeJobSkill2()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromParent();
	}
	ServerChangeJobSkill(2);
	SwapToNewCharacter(TEXT("/Game/MetaHumans/Chef/BP_ChefThirdPersonCharacter.BP_ChefThirdPersonCharacter_C"));
}
void AMyProjectCharacter::ChangeJobSkill3()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromParent();
	}
	ServerChangeJobSkill(3);
	SwapToNewCharacter(TEXT("/Game/MetaHumans/Boxer/BP_BoxerThirdPersonCharacter.BP_BoxerThirdPersonCharacter"));
}
void AMyProjectCharacter::ChangeJobSkill4()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromParent();
	}
	ServerChangeJobSkill(4);
	SwapToNewCharacter(TEXT("/Game/MetaHumans/doctor/BP_DoctorThirdPersonCharacter.BP_DoctorThirdPersonCharacter"));
}
void AMyProjectCharacter::ChangeJobSkill5()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromParent();
	}
	ServerChangeJobSkill(5);
	SwapToNewCharacter(TEXT("/Game/MetaHumans/Painter/BP_PainterThirdPersonCharacter.BP_PainterThirdPersonCharacter"));
}

void AMyProjectCharacter::ChangeJobSkill6()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromParent();
	}
	ServerChangeJobSkill(0);
	SwapToNewCharacter(TEXT("/Game/MetaHumans/middle/BP_MiddleThirdPersonCharacter.BP_MiddleThirdPersonCharacter"));
}

void AMyProjectCharacter::ChangeJobSkill7()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromParent();
	}
	ServerChangeJobSkill(0);
	SwapToNewCharacter(TEXT("/Game/MetaHumans/goding/BP_GodingThirdPersonCharacter.BP_GodingThirdPersonCharacter"));
}

//=================================================================================================스킬 구현


void AMyProjectCharacter::SkillAttack() {
	if (!bCanUseSkill)
	{
		UE_LOG(LogTemp, Warning, TEXT("skill cooldown!"));
		return;
	}
	bCanUseSkill = false; // 스킬 사용 쿨 시작
	auto anim = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance());//스킬 애니메이션



	switch (jobskill)
	{
	case 1:
		SkillAttack3();// 경찰 스킬
		anim->PlayAttackPoliceAnim();
		break;
	case 2:
		SkillAttack1();// 요리사 스킬
		break;
	case 3:
		SkillAttack4(); // 복서 스킬
		anim->PlayAttackboxerAttackAnim();
		break;
	case 4:
		SkillAttack2(); //의사 스킬
		anim->PlayAttackHealAnim();

		break;
	case 5:
		anim->PlayAttackArtistAnim();
		SkillAttack5();// 화가 스킬

		break;
	default:
		break;
	}
}

//==================================================================================================스킬1 요리사
void AMyProjectCharacter::SkillAttack1()
{
	if (HasAuthority())
	{
		// 서버일 경우 바로 실행
		Multicast_SkillAttack1();
		StartSkill1DamageTick(); // 데미지 계산용
	}
	else
	{
		// 클라이언트는 서버에 요청
		Server_SkillAttack1();
	}

	if (IsLocallyControlled())
	{
		StartCooldown(30.f);
	}
}

void AMyProjectCharacter::Server_SkillAttack1_Implementation()
{
	Multicast_SkillAttack1();
	StartSkill1DamageTick();
}
void AMyProjectCharacter::Multicast_SkillAttack1_Implementation()
{
	// 애니메이션
	if (UPlayerAnim* anim = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance()))
	{
		anim->PlayAttackCookAnim();
	}

	// 이펙트
	FString Path1 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/FlameShield/Systems/N_FlameShield.N_FlameShield";
	FString Path2 = "/Game/SkillEffect_asset/Magic_Mist_VFX/VFX/NS_Dark_Mist.NS_Dark_Mist";
	//FString Path2 = "/Game/SkillEffect_asset/Magic_Mist_VFX/VFX/NS_Ice_Mist.NS_Ice_Mist";
	FVector Direction = GetActorForwardVector();
	FVector Scale = FVector(1.f);

	SpawnNiagara(Path1, Direction, Scale, 7);
	SpawnNiagara(Path2, Direction, Scale, 8);

	// 이동 정지
	GetCharacterMovement()->DisableMovement();

	// 7초 뒤 이동 가능
	FTimerHandle UnfreezeTimerHandle;
	GetWorldTimerManager().SetTimer(
		UnfreezeTimerHandle,
		this,
		&AMyProjectCharacter::UnfreezeMovement,
		7.0f,
		false
	);
}
void AMyProjectCharacter::StartSkill1DamageTick()
{
	if (!HasAuthority()) return;

	CurrentTick = 0;

	GetWorldTimerManager().SetTimer(
		ConeDamageTimerHandle,
		this,
		&AMyProjectCharacter::ApplyConeDamageTick,
		1.0f,
		true
	);

	DrawDebugCone(
		GetWorld(),
		GetActorLocation(),
		GetActorForwardVector(),
		1000.f,
		FMath::DegreesToRadians(40.f),
		FMath::DegreesToRadians(40.f),
		12,
		FColor::Red,
		false,
		5.0f
	);
}

bool IsInCone(AActor* Source, AActor* Target, float ConeHalfAngleDegrees, float ConeLength)
{
	if (!Source || !Target) return false;

	FVector SourceLocation = Source->GetActorLocation();
	FVector Forward = Source->GetActorForwardVector();
	FVector TargetDirection = (Target->GetActorLocation() - SourceLocation);

	float Distance = TargetDirection.Size();
	if (Distance > ConeLength) return false;

	TargetDirection.Normalize();
	float Dot = FVector::DotProduct(Forward, TargetDirection);
	float CosineThreshold = FMath::Cos(FMath::DegreesToRadians(ConeHalfAngleDegrees));

	return Dot >= CosineThreshold;
}
void AMyProjectCharacter::ApplyConeDamageTick()
{
	// 5회 이후 정지
	if (++CurrentTick > 5)
	{
		GetWorldTimerManager().ClearTimer(ConeDamageTimerHandle);
		return;
	}

	//UE_LOG(LogTemp, Warning, TEXT(" ConeDamageTick #%d"), CurrentTick);

	// 범위 판정
	const float ConeRadius = 1000.f;
	const float ConeAngle = 40.f;

	FVector Origin = GetActorLocation();
	TArray<AActor*> PotentialTargets;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), PotentialTargets);

	for (AActor* Actor : PotentialTargets)
	{
		if (Actor == this) continue;

		if (IsInCone(this, Actor, ConeAngle, ConeRadius))
		{
			if (AMyProjectCharacter* Enemy = Cast<AMyProjectCharacter>(Actor))
			{
				// 불 이펙트

				FString NiagaraPath = "/Game/SkillEffect_asset/SlashHitVFX/NS/NS_Hit_Axe.NS_Hit_Axe";
				Multicast_FireEffect(Enemy, NiagaraPath);

				// 데미지 적용!
				float DamageAmount = 10.f; // 원하는 만큼 조절 가능
				Enemy->ApplySkillDamage(DamageAmount, this); // this = 공격자
			}

		}
	}
}

void AMyProjectCharacter::ApplySkillDamage(float DamageAmount, AMyProjectCharacter* DamageCauser)
{
	if (!HasAuthority()) return;

	HP_Player -= DamageAmount;


	if (HP_Player <= 0.f)
	{
		// 죽었을 때 처리

	}
}

//==================================================================================================스킬2 힐러 멀티

void AMyProjectCharacter::SkillAttack2()
{
	if (HasAuthority())
	{
		HP_Player++;
		UE_LOG(LogTemp, Error, TEXT("HP Plus (서버) : %i "), HP_Player);
		Multicast_SkillAttack2(); // 전체 클라이언트에게 효과 전달
	}
	else
	{
		Server_SkillAttack2(); // 서버에게 요청
	}

	if (IsLocallyControlled())
	{
		StartCooldown(10.f);
	}
}

void AMyProjectCharacter::Server_SkillAttack2_Implementation()
{
	SkillAttack2(); // 다시 서버 로직 진입
}


void AMyProjectCharacter::Multicast_SkillAttack2_Implementation()
{
	if (UPlayerAnim* anim = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance()))
	{
		anim->PlayAttackHealAnim();
	}

	FString Path1 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/ArcaneShield/Systems/N_ArcaneShield.N_ArcaneShield";
	SpawnNiagara(Path1, GetActorForwardVector(), FVector(1.f), 3);

	GetCharacterMovement()->DisableMovement(); // 이동 비활성화
	FTimerHandle UnfreezeTimerHandle;
	GetWorldTimerManager().SetTimer(
		UnfreezeTimerHandle,
		this,
		&AMyProjectCharacter::UnfreezeMovement,
		2.5f, // 2.5초 뒤 이동 가능
		false
	);

	HealEffect(); // 전방향 이펙트
}


//==================================================================================================스킬3 경찰 멀티적용
void AMyProjectCharacter::SkillAttack3()
{
	if (!HasAuthority())
	{
		Server_SkillAttack3(); // 서버에게 실행 요청
	}
	else
	{
		ExecuteSkillAttack3();
	}

	if (IsLocallyControlled()) {
		StartCooldown(30.0f);
	}
}

void AMyProjectCharacter::Server_SkillAttack3_Implementation()
{
	ExecuteSkillAttack3();
}

void AMyProjectCharacter::ExecuteSkillAttack3()
{
	Multicast_SkillAttack3();
	Stun(); // 서버에서만 실행 (스턴 처리)
	StartCooldown(30.f);
}

void AMyProjectCharacter::Multicast_SkillAttack3_Implementation()
{
	if (UPlayerAnim* anim = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance()))
	{
		anim->PlayAttackPoliceAnim();
	}

	FString Path1 = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Blink_DarkMagic.NS_Blink_DarkMagic";
	SpawnNiagara(Path1, GetActorForwardVector(), FVector(1.f), 3);

	GetCharacterMovement()->DisableMovement();

	FTimerHandle UnfreezeTimerHandle;
	GetWorldTimerManager().SetTimer(
		UnfreezeTimerHandle,
		this,
		&AMyProjectCharacter::UnfreezeMovement,
		1.0f,
		false
	);
}

//==================================================================================================스킬4 복서 멀티적용

void AMyProjectCharacter::SkillAttack4() {
	auto anim = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance());//스킬 애니메이션

	anim->PlayAttackboxerAttackAnim();

}




//=============================================================================================스킬5 화가 멀티적용
void AMyProjectCharacter::SkillAttack5()
{
	if (!HasAuthority())
	{
		Server_SkillAttack5();
	}
	else
	{
		ExecuteSkillAttack5();
	}
	if (IsLocallyControlled()) {
		StartCooldown(10.f);
	}
}

void AMyProjectCharacter::Server_SkillAttack5_Implementation()
{
	ExecuteSkillAttack5();
}

void AMyProjectCharacter::ExecuteSkillAttack5()
{
	// 1. 멀티캐스트로 애니메이션 및 나이아가라
	Multicast_SkillAttack5();

	// 2. 가장 가까운 적 탐색 및 피해
	FVector MyLocation = GetActorLocation();
	AMyProjectCharacter* ClosestEnemy = nullptr;
	float ClosestDistSq = FLT_MAX;

	TArray<AActor*> AllCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), AllCharacters);

	for (AActor* Actor : AllCharacters)
	{
		if (Actor == this) continue;

		AMyProjectCharacter* OtherChar = Cast<AMyProjectCharacter>(Actor);
		if (!IsValid(OtherChar)) continue;

		float DistSq = FVector::DistSquared(OtherChar->GetActorLocation(), MyLocation);
		if (DistSq < ClosestDistSq)
		{
			ClosestDistSq = DistSq;
			ClosestEnemy = OtherChar;
		}
	}

	if (IsValid(ClosestEnemy))
	{
		// 클라이언트 시각화용 이펙트도 뿌림
		FString HitEffectPath = "/Game/SlashHitVFX/NS/NS_Hit_GroundCrack.NS_Hit_GroundCrack";
		FVector HitLocation = ClosestEnemy->GetActorLocation() + FVector(0, 0, 50);

		UNiagaraSystem* LoadedHitEffect = LoadObject<UNiagaraSystem>(nullptr, *FString::Printf(TEXT("NiagaraSystem'%s'"), *HitEffectPath));
		if (LoadedHitEffect)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),
				LoadedHitEffect,
				HitLocation,
				FRotator::ZeroRotator,
				FVector(1.f),
				true, true,
				ENCPoolMethod::None,
				true
			);
		}
		FString NiagaraPath = "/Game/SkillEffect_asset/SlashHitVFX/NS/NS_Hit_CurvedSwordBloodDirection.NS_Hit_CurvedSwordBloodDirection";
		FTimerHandle DelayHandle;
		GetWorld()->GetTimerManager().SetTimer(
			DelayHandle,
			[this, ClosestEnemy, NiagaraPath]()
			{
				Multicast_FireEffect(ClosestEnemy, NiagaraPath);
			},
			1.0f, // 1초 지연
			false
		);

		ClosestEnemy->OnHitEvent();
		UE_LOG(LogTemp, Warning, TEXT("Closest enemy : %s"), *ClosestEnemy->GetName());
	}

	StartCooldown(10.f); // 서버에서도 쿨타임
}

void AMyProjectCharacter::Multicast_SkillAttack5_Implementation()
{
	if (UPlayerAnim* anim = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance()))
	{
		anim->PlayAttackArtistAnim();
	}

	FString Path1 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/MagmaShield/Systems/N_MagmaShield.N_MagmaShield";
	SpawnNiagara(Path1, GetActorForwardVector(), FVector(1.f), 0.5f);

	FString BlinkPath = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Blink_Fire.NS_Blink_Fire";
	SkillOn(BlinkPath);
}


//	===========================================================================================

void AMyProjectCharacter::UnfreezeMovement()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}



void AMyProjectCharacter::SpawnNiagara(const FString& NiagaraPath, const FVector& Direction, const FVector& Scale, float Duration)
{
	// 경로 문자열 → 에셋 경로로 구성
	FString FullPath = FString::Printf(TEXT("NiagaraSystem'%s'"), *NiagaraPath);
	UNiagaraSystem* NiagaraEffect = LoadObject<UNiagaraSystem>(nullptr, *FullPath);

	if (!NiagaraEffect)
	{
		UE_LOG(LogTemp, Error, TEXT("NiagaraSystem 로드 실패: %s"), *NiagaraPath);
		return;
	}

	// 위치: 캐릭터 기준 + 방향 * 거리 + 살짝 위
	FVector SpawnLocation = GetActorLocation() + Direction + FVector(0.f, 0.f, 50.f);
	FRotator SpawnRotation = Direction.Rotation();

	// 나이아가라 이펙트 스폰
	UNiagaraComponent* NiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		NiagaraEffect,
		SpawnLocation,
		SpawnRotation,
		Scale,
		true,
		true,
		ENCPoolMethod::None,
		true
	);

	// 유효하면 타이머로 3초 뒤 제거
	if (NiagaraComponent)
	{
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, [NiagaraComponent]()
			{
				if (NiagaraComponent)
				{
					NiagaraComponent->DestroyComponent();
				}
			}, Duration, false);
	}
}



void AMyProjectCharacter::HealEffect()
{
	FString NiagaraPath = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicalExplosionsVFX/VFX/LightBlast/Systems/N_LightBlastCharged.N_LightBlastCharged";
	FVector Scale = FVector(1.f);

	TArray<FVector> Directions = {
		GetActorForwardVector(),         // 앞
		-GetActorForwardVector(),        // 뒤
		GetActorRightVector(),           // 오른쪽
		-GetActorRightVector()           // 왼쪽
	};

	for (const FVector& Dir : Directions)
	{
		FVector SpawnLocation = GetActorLocation() + Dir * 100.f + FVector(0, 0, 50.f); // 각 방향 300cm 거리, 살짝 위로
		FRotator Rotation = Dir.Rotation();

		FString FullPath = FString::Printf(TEXT("NiagaraSystem'%s'"), *NiagaraPath);
		UNiagaraSystem* NiagaraEffect = LoadObject<UNiagaraSystem>(nullptr, *FullPath);

		if (NiagaraEffect)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),
				NiagaraEffect,
				SpawnLocation,
				Rotation,
				Scale,
				true, true,
				ENCPoolMethod::None,
				true
			);
		}
	}
}


//==================================================================================================스턴 스킬 멀티

void AMyProjectCharacter::Stun()
{
	if (HasAuthority())
	{
		Server_Stun(); // 로컬 서버일 경우 그냥 서버 함수 실행
	}
	else
	{
		Server_Stun(); // 클라이언트 → 서버 호출
	}
}

void AMyProjectCharacter::Server_Stun_Implementation()
{
	FVector MyLocation = GetActorLocation();
	float BoxHalfSize = 400.f;

	FVector BoxExtent = FVector(BoxHalfSize, BoxHalfSize, 100.f); // Z는 적당한 높이
	DrawDebugBox(GetWorld(), MyLocation + FVector(0, 0, 50), BoxExtent, FQuat::Identity, FColor::Yellow, false, 1.5f, 0, 5.f);

	TArray<AActor*> AllPlayers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), AllPlayers);

	for (AActor* Actor : AllPlayers)
	{
		if (Actor == this) continue;

		AMyProjectCharacter* OtherPlayer = Cast<AMyProjectCharacter>(Actor);
		if (!OtherPlayer) continue;

		FVector OtherLocation = OtherPlayer->GetActorLocation();
		if (FMath::Abs(OtherLocation.X - MyLocation.X) <= BoxHalfSize &&
			FMath::Abs(OtherLocation.Y - MyLocation.Y) <= BoxHalfSize)
		{
			Multicast_StunEffect(OtherPlayer);
		}
	}
}

void AMyProjectCharacter::Multicast_StunEffect_Implementation(AMyProjectCharacter* Target)
{
	if (!IsValid(Target)) return;

	UE_LOG(LogTemp, Warning, TEXT("스턴 대상 감지: %s"), *Target->GetName());

	FString Path1 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicalExplosionsVFX/VFX/EnergyBlast/Systems/N_EnergyBlast.N_EnergyBlast";
	SpawnNiagara(Path1, GetActorForwardVector(), FVector(1.f), 3);

	// 이펙트
	FString NiagaraPath = "/Game/SkillEffect_asset/SlashHitVFX/NS/NS_Hit_Block.NS_Hit_Block";
	FString NiagaraPath2 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/LightningWall/Systems/N_LightningWall.N_LightningWall";

	FTimerHandle DelayedEffectHandle;
	GetWorld()->GetTimerManager().SetTimer(
		DelayedEffectHandle,
		[WeakTarget = TWeakObjectPtr<AMyProjectCharacter>(Target), NiagaraPath, NiagaraPath2]()
		{
			if (WeakTarget.IsValid())
			{
				WeakTarget->SpawnNiagara(NiagaraPath, FVector::UpVector, FVector(1.5f), 3);
				WeakTarget->SpawnNiagara(NiagaraPath2, FVector::UpVector, FVector(0.3f), 3);
			}
		},
		1.0f, // 1초 후 실행
		false
	);

	// 이동 불가 처리
	Target->DisablePlayerMovement();

	// 3초 후 복구
	FTimerHandle TempHandle;
	GetWorld()->GetTimerManager().SetTimer(TempHandle, [WeakTarget = TWeakObjectPtr<AMyProjectCharacter>(Target)]()
		{
			if (WeakTarget.IsValid())
			{
				WeakTarget->EnablePlayerMovement();
				UE_LOG(LogTemp, Warning, TEXT("스턴 해제: %s"), *WeakTarget->GetName());
			}
		}, 3.0f, false);
}


void AMyProjectCharacter::DisablePlayerMovement()
{
	UE_LOG(LogTemp, Warning, TEXT("stun on"));

	GetCharacterMovement()->DisableMovement();

	if (HasAuthority())
	{
		GetCharacterMovement()->DisableMovement();
	}

	if (IsLocallyControlled()) // 클라이언트 제어 중일 경우 입력 비활성화
	{
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC)
		{
			DisableInput(PC);
		}
	}
}

void AMyProjectCharacter::EnablePlayerMovement()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);

	if (HasAuthority())
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	}

	if (IsLocallyControlled())
	{
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC)
		{
			EnableInput(PC);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("stun off"));
}

//=========================================================================================대쉬 스킬 멀티
void AMyProjectCharacter::Skill_DashStun(float DashPower)
{
	if (HasAuthority())
	{
		Server_DashStun(DashPower);
	}
	else
	{
		Server_DashStun(DashPower);
	}
}

void AMyProjectCharacter::Server_DashStun_Implementation(float DashPower)
{
	FVector Forward = GetActorForwardVector();

	// 대시 실행
	LaunchCharacter(Forward * DashPower, true, true);

	// 서버에서 이펙트도 재생 (Multicast 대신 Spawn 가능)
	FString NiagaraPath = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Wind.NS_Dash_Wind";
	SpawnNiagara(NiagaraPath, Forward, FVector(1.f), 5);


	// 0.3초 후 충돌 확인
	FTimerHandle TempHandle;
	GetWorld()->GetTimerManager().SetTimer(
		TempHandle,
		this,
		&AMyProjectCharacter::DashStun_CheckHit,
		0.3f,
		false
	);

	StartCooldown(30.f);
}

void AMyProjectCharacter::DashStun_CheckHit()
{
	FVector MyLocation = GetActorLocation();
	float Radius = 200.f;
	DrawDebugSphere(
		GetWorld(),
		MyLocation,        // 중심 위치
		Radius,            // 반지름
		16,                // 세그먼트 (높을수록 더 부드러운 구)
		FColor::Red,       // 색상
		false,             // 지속 여부 (true면 영구, false면 시간 지나면 사라짐)
		2.0f,              // 지속 시간 (초)
		0,                 // Depth Priority
		1.0f               // 선 두께
	);

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (Actor == this) continue;

		AMyProjectCharacter* Target = Cast<AMyProjectCharacter>(Actor);
		if (!Target) continue;

		if (FVector::Dist(Target->GetActorLocation(), MyLocation) <= Radius)
		{
			Multicast_DashStunEffect(Target);
			break; // 하나만
		}
	}
}
void AMyProjectCharacter::Multicast_DashStunEffect_Implementation(AMyProjectCharacter* Target)
{
	if (!Target) return;

	FString NiagaraPath = "/Game/SkillEffect_asset/SlashHitVFX/NS/NS_Hit_Block.NS_Hit_Block";
	FString NiagaraPath2 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/LightningWall/Systems/N_LightningWall.N_LightningWall";

	FVector Direction = FVector::UpVector;

	Target->SpawnNiagara(NiagaraPath, Direction, FVector(1.f), 2);
	Target->SpawnNiagara(NiagaraPath2, Direction, FVector(0.3f), 5);

	Target->DisablePlayerMovement();



	FTimerHandle RecoverHandle;
	GetWorld()->GetTimerManager().SetTimer(RecoverHandle, [WeakTarget = TWeakObjectPtr<AMyProjectCharacter>(Target)]()
		{
			if (WeakTarget.IsValid())
			{
				WeakTarget->EnablePlayerMovement();
			}
		}, 3.f, false);
}



void AMyProjectCharacter::StartDashCharge()
{
	if (!IsLocallyControlled()) return;

	DashChargeStartTime = GetWorld()->GetTimeSeconds();

	// 로컬 클라이언트에서만 임시로 이펙트 보여줌
	//Multicast_SpawnChargeEffect();

	// 서버에 "시작했다" 알려줘야 다른 클라들도 이펙트 보임
	Server_StartChargeEffect();

	// 반복 이펙트 타이머
	GetWorld()->GetTimerManager().SetTimer(
		ChargeEffectTimerHandle,
		this,
		&AMyProjectCharacter::SpawnChargeEffect,
		0.2f,
		true
	);
}




void AMyProjectCharacter::ReleaseDashCharge()
{

	GetWorld()->GetTimerManager().ClearTimer(ChargeEffectTimerHandle); // 타이머 중단

	float HoldDuration = GetWorld()->GetTimeSeconds() - DashChargeStartTime;

	// 최소 0.2초 ~ 최대 2초 제한
	HoldDuration = FMath::Clamp(HoldDuration, 0.2f, 2.0f);

	float DashPower = 500.f + (HoldDuration * 1000.f); // 누를수록 더 멀리

	UE_LOG(LogTemp, Log, TEXT("차징 완료! 지속시간: %.2f초, 힘: %.1f"), HoldDuration, DashPower);

	Skill_DashStun(DashPower);
}


void AMyProjectCharacter::SpawnChargeEffect()
{

	if (HasAuthority())
	{
		Multicast_SpawnChargeEffect();
	}
	else
	{
		Server_StartChargeEffect(); // 서버에 요청해서 전체에 이펙트 전파
	}


}
void AMyProjectCharacter::Server_StartChargeEffect_Implementation()
{
	// 서버가 Multicast로 전체에 전달
	Multicast_SpawnChargeEffect();
}
void AMyProjectCharacter::Multicast_SpawnChargeEffect_Implementation()
{
	FString NiagaraPath = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Blink_Psionic.NS_Blink_Psionic";

	FString FullPath = FString::Printf(TEXT("NiagaraSystem'%s'"), *NiagaraPath);
	UNiagaraSystem* NiagaraEffect = LoadObject<UNiagaraSystem>(nullptr, *FullPath);

	if (!NiagaraEffect)
	{
		UE_LOG(LogTemp, Warning, TEXT("나이아가라 로드 실패 : % s"), *NiagaraPath);
		return;
	}

	FVector SpawnLocation = GetActorLocation() + FVector(0.f, 0.f, 50.f); // 약간 위
	FRotator SpawnRotation = FRotator::ZeroRotator;
	FVector SpawnScale = FVector(1.f); // 크기 조정 가능

	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		NiagaraEffect,
		SpawnLocation,
		SpawnRotation,
		SpawnScale,
		true,   // bAutoDestroy
		true,   // bAutoActivate
		ENCPoolMethod::None,
		true    // bPreCullCheck
	);

	//UE_LOG(LogTemp, Log, TEXT("차징 이펙트 실행"));
}
//==================================================================================================스킬 이펙트 멀티
void AMyProjectCharacter::SkillOn(const FString& NiagaraPath)
{
	if (HasAuthority())
	{
		Multicast_SkillOn(NiagaraPath);
	}
	else
	{
		Server_SkillOn(NiagaraPath);
	}
}

void AMyProjectCharacter::Server_SkillOn_Implementation(const FString& NiagaraPath)
{
	Multicast_SkillOn(NiagaraPath);
}
void AMyProjectCharacter::Multicast_SkillOn_Implementation(const FString& NiagaraPath)
{
	if (NiagaraPath.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT(" NiagaraPath가 비어있습니다."));
		return;
	}

	FString FullPath = NiagaraPath;
	if (!NiagaraPath.Contains(TEXT("NiagaraSystem'")))
	{
		FullPath = FString::Printf(TEXT("NiagaraSystem'%s'"), *NiagaraPath);
	}

	UNiagaraSystem* Effect = LoadObject<UNiagaraSystem>(nullptr, *FullPath);
	if (!IsValid(Effect))
	{
		UE_LOG(LogTemp, Error, TEXT(" Niagara 이펙트 로드 실패: %s"), *FullPath);
		return;
	}

	FVector SpawnLocation = GetActorLocation() + FVector(0, 0, 50);
	FRotator SpawnRotation = GetActorForwardVector().Rotation();
	FVector Scale = FVector(1.f);

	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		Effect,
		SpawnLocation,
		SpawnRotation,
		Scale,
		true,
		true,
		ENCPoolMethod::None,
		true
	);

	UE_LOG(LogTemp, Log, TEXT("SkillOn 이펙트 실행됨: %s"), *NiagaraPath);
}

//==================================================================================================스킬 쿨타임

void AMyProjectCharacter::StartCooldown(float CooldownTime)
{
	SkillCooldownDuration = CooldownTime;
	SkillCooldownElapsed = 0.0f;

	GetWorldTimerManager().SetTimer(
		CooldownTimerHandle,
		this,
		&AMyProjectCharacter::UpdateCooldownProgress,
		0.05f,
		true
	);

	FTimerHandle Skill1CooldownUnlockHandle;
	GetWorldTimerManager().SetTimer(
		Skill1CooldownUnlockHandle,
		[this]()
		{
			bCanUseSkill = true;
			UE_LOG(LogTemp, Log, TEXT("SkillAttack is ready again."));
		},
		CooldownTime,
		false
	);
}

void AMyProjectCharacter::UpdateCooldownProgress()
{
	SkillCooldownElapsed += 0.05f;

	float Progress = FMath::Clamp(SkillCooldownElapsed / SkillCooldownDuration, 0.f, 1.f);

	if (HUDWidget)
	{
		HUDWidget->SetSkillCoolProgress(1.0f - Progress); // 점점 줄어드는 형태
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("HUDWidget is NULL in UpdateCooldownProgress"));
	}

	if (Progress >= 1.0f)
	{
		GetWorldTimerManager().ClearTimer(CooldownTimerHandle);
	}
}



void AMyProjectCharacter::RequestAttack()
{
	if (HasAuthority())
	{
		MulticastPlayAttack();
	}
	else
		ServerPlayAttack();
}

void AMyProjectCharacter::ServerPlayAttack_Implementation()
{
	MulticastPlayAttack();
}

void AMyProjectCharacter::MulticastPlayAttack_Implementation()
{
	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		if (UAnimInstance* AnimInstance = MeshComp->GetAnimInstance())
		{
			if (UPlayerAnim* PlayerAnim = Cast<UPlayerAnim>(AnimInstance))
			{
				PlayerAnim->PlayAttackBaseAnim();
			}
		}
	}
}


// Dash RPC
void AMyProjectCharacter::RequestDash()
{
	if (HasAuthority())
		MulticastPlayDash();
	else
		ServerPlayDash();
}

void AMyProjectCharacter::ServerPlayDash_Implementation()
{
	MulticastPlayDash();
}

void AMyProjectCharacter::MulticastPlayDash_Implementation()
{
	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		if (UAnimInstance* AnimInstance = MeshComp->GetAnimInstance())
		{
			if (UPlayerAnim* PlayerAnim = Cast<UPlayerAnim>(AnimInstance))
			{
				PlayerAnim->PlayDashAnim();
			}
		}
	}
}

void AMyProjectCharacter::Multicast_PlayDashEffects_Implementation()
{
	UNiagaraSystem* SelectedNiagaraSystem = nullptr;

	switch (jobskill)
	{
	case 1:
		SelectedNiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Mana.NS_Dash_Mana"));
		break;
	case 2:
		SelectedNiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Fire.NS_Dash_Fire"));
		break;
	case 3:
		SelectedNiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Wind.NS_Dash_Wind"));
		break;
	case 4:
		SelectedNiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Paladin.NS_Dash_Paladin"));
		break;
	case 5:
		SelectedNiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Vampire.NS_Dash_Vampire"));
		break;
	default:
		break;
	}

	if (SelectedNiagaraSystem)
	{
		FVector ForwardVector = GetActorForwardVector();
		float SpawnDistance = 200.f;
		FVector SpawnLocation = GetActorLocation() + ForwardVector * SpawnDistance;
		FRotator SpawnRotation = ForwardVector.Rotation();
		FVector SpawnScale = FVector(0.5f, 0.7f, 0.7f);

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			SelectedNiagaraSystem,
			SpawnLocation,
			SpawnRotation,
			SpawnScale,
			true,
			true,
			ENCPoolMethod::None,
			true
		);
	}
}

void AMyProjectCharacter::OnRep_HPChanged() {}



void AMyProjectCharacter::ServerPlusAge_Implementation()
{
	Age++;
	Linguistic++;


	UE_LOG(LogTemp, Warning, TEXT("AGE : %d"), Age);
	Player_Setting();
}

void AMyProjectCharacter::OnRep_NiagaraSystem()
{
	UE_LOG(LogTemp, Warning, TEXT("클라이언트에서 나이아가라 이펙트 적용됨"));

	// 여기선 Spawn 해도 되고, NiagaraComponent에 바인딩해도 됨
	if (NiagaraComp && NiagaraSystem)
	{
		NiagaraComp->SetAsset(NiagaraSystem);
		NiagaraComp->Activate(true);
	}
}

void AMyProjectCharacter::Multicast_OnHitEvent_Implementation()
{
	// 예: 클라이언트에서 이펙트 보여주기
	if (HitEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, GetActorLocation());
	}

	//UE_LOG(LogTemp, Warning, TEXT("Multicast_OnHitEvent 실행됨"));
}


void AMyProjectCharacter::PlusStat(EPlayerStatType Stat)
{
	if (!IsLocallyControlled()) return;

	if (HasAuthority())
	{
		ApplyStatIncrease(Stat);
		MulticastStatEffect();
	}
	else
	{
		ServerPlusStat(Stat);
	}
}

void AMyProjectCharacter::ServerPlusStat_Implementation(EPlayerStatType Stat)
{
	ApplyStatIncrease(Stat);
	MulticastStatEffect();
}

void AMyProjectCharacter::ApplyStatIncrease(EPlayerStatType Stat)
{
	Age++;
	switch (Stat)
	{
	case EPlayerStatType::PhysicalStatus:
		Physical++;
		break;
	case EPlayerStatType::SensoryStatus:
		Sensory++;
		break;
	case EPlayerStatType::LogicStatus:
		Logic++;
		break;
	case EPlayerStatType::LinguisticStatus:
		Linguistic++;
		break;
	case EPlayerStatType::SocialSkillStatus:
		SocialSkill++;
		break;
	case EPlayerStatType::MentalStrengthStatus:
		MentalStrength++;
		break;
	default:
		break;
	}
}

void AMyProjectCharacter::MulticastStatEffect_Implementation()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), LevelupEffect, GetActorLocation(), FRotator::ZeroRotator, FVector(1.0f));
}


void AMyProjectCharacter::Multicast_FireEffect_Implementation(AMyProjectCharacter* Enemy, const FString& NiagaraPath)
{
	if (!IsValid(Enemy)) return;

	Enemy->SpawnNiagara(NiagaraPath, FVector::UpVector, FVector(3.0f), 3);
}

void AMyProjectCharacter::Server_NotifyCutsceneFinished_Implementation()
{
	// 서버에서 CutsceneBox 찾기
	APlayingCutsceneBox* Box = Cast<APlayingCutsceneBox>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayingCutsceneBox::StaticClass()));

	if (Box)
	{
		Box->Server_HandleCutsceneFinished(Cast<AGameController>(this->GetController()));
	}
}