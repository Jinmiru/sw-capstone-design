	// Copyright Epic Games, Inc. All Rights Reserved.

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
	CameraBoom->TargetArmLength = 600.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	CameraBoom->bInheritPitch = false;
	CameraBoom->bInheritRoll = false;
	CameraBoom->bInheritYaw = false;
	CameraBoom->bDoCollisionTest = false; // 무기랑 카메라 부딯히는거 방지	


	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	
	// 
	// 
	// -------------------대쉬 이펙트(나이아가라)------------------- 
	
	NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	NiagaraComp->SetupAttachment(RootComponent);

	

	// -------------------무기 설정-------------------
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	MeshComponent->SetupAttachment(GetMesh(), TEXT("Weapon_R")); // 무기 소켓에 부착
	ConstructorHelpers::FObjectFinder<UStaticMesh> WeaponAsset(TEXT("/Script/Engine.StaticMesh'/Game/SlashHitVFX/__GenericSource/FBX/SM_MagicStaff.SM_MagicStaff'"));
	if (WeaponAsset.Succeeded()) {
		MeshComponent->SetStaticMesh(WeaponAsset.Object);
		//MeshComponent->SetRelativeLocationAndRotation(FVector(0, 50, 200), FRotator(0, 0, 0));
		MeshComponent->SetWorldScale3D(FVector(1.0f)); // 크기 2배 증가

		//UE_LOG(LogTemp, Warning, TEXT("WeaponAsset Success"));
	}
	
	// -------------------초기값 설정-------------------
	AttackRange = 50.f;
	Age = 8;
	money = 0;
	middle = true;
	high = true;	
	HP_Player = 100;
	Power = 1;
	bCanDash = true;
}

void AMyProjectCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = true;
		PlayerController->SetInputMode(FInputModeGameAndUI()); // 마우스 출력 UI와 게임 둘 다 입력 가능
	}

	if (!BP_StatusWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("StatusWidget is NULL! "));
	}
	else {
		HUDWidget = CreateWidget<UStatusWidget>(GetWorld(), BP_StatusWidget);
		HUDWidget->AddToViewport();
	}

	

	UpdateStatus(); //스텟 UI 추가

	GetWorldTimerManager().SetTimer(MoneyTimerHandle, this, &AMyProjectCharacter::IncreaseMoney, 5.0f, true);
	// 5초마다 돈 증가
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


		EnhancedInputComponent->BindAction(Skill1, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack1);
		EnhancedInputComponent->BindAction(Skill2, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack2);
		EnhancedInputComponent->BindAction(Skill3, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack3);
		EnhancedInputComponent->BindAction(Skill4, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack4);
		EnhancedInputComponent->BindAction(Skill5, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack5);

		EnhancedInputComponent->BindAction(Skill4, ETriggerEvent::Started, this, &AMyProjectCharacter::StartDashCharge);
		EnhancedInputComponent->BindAction(Skill4, ETriggerEvent::Completed, this, &AMyProjectCharacter::ReleaseDashCharge);



	}

}

void AMyProjectCharacter::Move(const FInputActionValue& Value)
{
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
void AMyProjectCharacter::Attack(const FInputActionValue& Value)
{
	if (AttackMontage && GetMesh()->GetAnimInstance()) {
		GetMesh()->GetAnimInstance()->Montage_Play(AttackMontage);
	}

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

			UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *HitActor->GetName());
			
			if (AMyProjectCharacter* EnemyPlayer = Cast<AMyProjectCharacter>(HitActor))
			{
				// 자기 자신 제외
				// 현재 씬에 thirperson캐릭터 두명 놓고 했을대는 it Myself — Damage Applied실행중
				if (EnemyPlayer == this) 
				{
					UE_LOG(LogTemp, Warning, TEXT("Hit Myself — Skipping"));
					continue;
				}

				// 적 구분
				if (!EnemyPlayer->IsLocallyControlled())
				{
					EnemyPlayer->HP_Player -= 10;
					UE_LOG(LogTemp, Warning, TEXT("Hit Other Player! Damage Applied"));
				}
				else
				{
					// 자기 자신도 데미지 입는다면 (혹은 이 부분 삭제)
					EnemyPlayer->HP_Player -= 10;
					EnemyPlayer->OnHitEvent();
					UE_LOG(LogTemp, Warning, TEXT("Hit Myself — Damage Applied"));
				}
			}
		}
	}
}


void AMyProjectCharacter::PlusAge(const FInputActionValue& Value) {
	Age++;
	Linguistic++;
	UE_LOG(LogTemp, Warning, TEXT("AGE : %d"), Age);
	UpdateStatus();
	if (Age >= 14 && middle) {
		middle = false;
		CameraBoom->TargetArmLength = 800.0f;
		AttackRange += 50.0f;
	}

	if (Age >= 17 && high) {
		high = false;
		CameraBoom->TargetArmLength = 1000.0f;
		AttackRange += 50.0f;

	}
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), LevelupEffect, GetActorLocation(), FRotator::ZeroRotator, FVector(1.0f));
	//레벨업 이펙트


}


void AMyProjectCharacter::Print(const FInputActionValue& Value)
{
	OnHitEvent();
	//UE_LOG(LogTemp, Warning, TEXT("\n Physical : %d \n Sensory : %d \n Logic : %d \n Linguistic : %d \n SocialSkill : %d \n MentalStrength : %d "), Physical, Sensory, Logic, Linguistic, SocialSkill, MentalStrength);


}

void AMyProjectCharacter::UpdateStatus()
{
	if (!HUDWidget)  // HUDWidget이 nullptr이면 함수 종료
	{
		UE_LOG(LogTemp, Error, TEXT("HUDWidget is NULL in UpdateStatus!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("update"));

	if (HUDWidget->AgeText)
	{
		HUDWidget->AgeText->SetText(FText::AsNumber(Age));
	}
	if (HUDWidget->PhysicalText)
	{
		HUDWidget->PhysicalText->SetText(FText::AsNumber(Physical));
	}
	if (HUDWidget->SensoryText)
	{
		HUDWidget->SensoryText->SetText(FText::AsNumber(Sensory));
	}
	if (HUDWidget->LogicText)
	{
		HUDWidget->LogicText->SetText(FText::AsNumber(Logic));
	}
	if (HUDWidget->LinguisticText)
	{
		HUDWidget->LinguisticText->SetText(FText::AsNumber(Linguistic));
	}
	if (HUDWidget->SocialSkillText)
	{
		HUDWidget->SocialSkillText->SetText(FText::AsNumber(SocialSkill));
	}
	if (HUDWidget->MentalStrengthText)
	{
		HUDWidget->MentalStrengthText->SetText(FText::AsNumber(MentalStrength));
	}
	
	if (HUDWidget->proficiency)
	{
		HUDWidget->proficiency->SetText(FText::AsNumber(GetHighestStatName()));
	}

	if (HUDWidget->jobText)
	{
		if (Age < 14) {
			HUDWidget->jobText->SetText(FText::FromString(FString::Printf(TEXT("Elemental"))));
		}
		else if (Age < 17) {
			
			ChangeProfile(TEXT("/Game/Images/T_UI_middle.T_UI_middle"), TEXT("middle school"));

			Power = 1.5;

			UStaticMesh* chain = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/SlashHitVFX/__GenericSource/FBX/SM_Fist.SM_Fist'"));
			if (chain) {
				MeshComponent->SetStaticMesh(chain);
				MeshComponent->SetWorldScale3D(FVector(0.5f));//크기 1배
			}
		

		}
		else if(Age <20) {
			ChangeProfile(TEXT("/Game/Images/T_UI_high.T_UI_high"), TEXT("high school"));

			Power = 2;

			UStaticMesh* chain2 = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/SlashHitVFX/__GenericSource/FBX/SM_Scythe.SM_Scythe'"));
			if (chain2) {
				MeshComponent->SetStaticMesh(chain2);
				MeshComponent->SetWorldScale3D(FVector(0.5f));//크기 1배
			}

		}
		else {
			MeshComponent->SetStaticMesh(nullptr);
		}
		
	}


	else
	{
		UE_LOG(LogTemp, Error, TEXT("proficiency TextBlock is NULL in HUDWidget!"));
	}
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
	UE_LOG(LogTemp, Warning, TEXT("Inventory!"));
}

void AMyProjectCharacter::IncreaseMoney()
{
	money += 10;  // 돈 증가 
	//UE_LOG(LogTemp, Error, TEXT("plus monety"));
	if (HUDWidget->moneyText)
	{
		HUDWidget->moneyText->SetText(FText::AsNumber(money));
	}

}

void AMyProjectCharacter::OnHitEvent()
{
	HP_Player--;
	UE_LOG(LogTemp, Warning, TEXT("OnHitEvent, HP : %d"), HP_Player);
	if (HitEffect)
	{
		//UE_LOG(LogTemp, Warning, TEXT("effect on"));
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, GetActorLocation());
	}
}


void AMyProjectCharacter::OnHitEvent2()
{
	UE_LOG(LogTemp, Warning, TEXT("OnHitEvent2"));
}

void AMyProjectCharacter::Dash() {
	//UE_LOG(LogTemp, Warning, TEXT("Dash1"));

	if (!bCanDash) return;

	//UE_LOG(LogTemp, Warning, TEXT("Dash2"));


	if (DashMontage && GetMesh()->GetAnimInstance()) {
		GetMesh()->GetAnimInstance()->Montage_Play(DashMontage);
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("Dash3"));

	if (this->NiagaraSystem)
	{
		//UE_LOG(LogTemp, Warning, TEXT("NiagaraSystem Success"));

		FVector ForwardVector = GetActorForwardVector();
		float SpawnDistance = 200.f;

		// 생성 위치: 캐릭터 앞쪽
		FVector SpawnLocation = GetActorLocation() + ForwardVector * SpawnDistance;

		// 생성 회전: 바라보는 방향
		FRotator SpawnRotation = ForwardVector.Rotation();

		// 스케일 (원하는 크기로 조절 가능)
		FVector SpawnScale = FVector(0.5f, 0.7f, 0.7f); // 원하는 크기

		// 이펙트 생성
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			NiagaraSystem,
			SpawnLocation,
			SpawnRotation,
			SpawnScale,
			true,   // bAutoDestroy
			true,   // bAutoActivate
			ENCPoolMethod::None,
			true    // bPreCullCheck
		);


		bCanDash = false; // 연속 사용 방지

		FVector DashDirection = GetActorForwardVector(); // 바라보는 방향
		GetCharacterMovement()->Launch(DashDirection * 2000); // 순간적인 돌진

		// 일정 시간이 지나면 멈추기
		//GetWorldTimerManager().SetTimer(DashTimerHandle, this, &AMyProjectCharacter::StopDash, 0.5f, false);

		// 쿨다운 설정
		GetWorldTimerManager().SetTimer(DashCooldownTimerHandle, [this]() { bCanDash = true; }, 1.0, false);
		UE_LOG(LogTemp, Warning, TEXT("Dash!"));

	}
}


void AMyProjectCharacter::StopDash()
{
	GetCharacterMovement()->StopMovementImmediately(); // 돌진 멈춤
}

void AMyProjectCharacter::ChangeProfile(const FString& TextureAssetPath, const FString& name) {
	FString FullPath = FString::Printf(TEXT("Texture2D'%s'"), *TextureAssetPath);
	UTexture2D* NewTexture = LoadObject<UTexture2D>(nullptr, *FullPath);

	if (NewTexture)
	{
		HUDWidget->profile->SetBrushFromTexture(NewTexture);
	}

	HUDWidget->jobText->SetText(FText::FromString(name));

}


void AMyProjectCharacter::ChangeJobSkill1()
{

	ChangeProfile(TEXT("/Game/Images/police.police"), TEXT("police"));
	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill1"));

	if(this->NiagaraSystem)
		NiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Mana.NS_Dash_Mana"));

	// 이전 무기 제거
	if (EquippedWeaponActor)
	{
		EquippedWeaponActor->Destroy();
		EquippedWeaponActor = nullptr;
		//UE_LOG(LogTemp, Warning, TEXT("Previous weapon destroyed"));
	}

	// 바톤 블루프린트 클래스 로드
	TSubclassOf<AActor> BatonBPClass = StaticLoadClass(
		AActor::StaticClass(),
		nullptr,
		TEXT("/Game/Weapon/MeleePack/BlueprintClasses/BC_Baton.BC_Baton_C")
	);

	if (BatonBPClass)
	{
		FVector SpawnLocation = GetMesh()->GetSocketLocation(TEXT("Weapon_R"));
		FRotator SpawnRotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		// 바톤 액터 스폰
		AActor* SpawnedBaton = GetWorld()->SpawnActor<AActor>(BatonBPClass, SpawnLocation, SpawnRotation, SpawnParams);

		if (SpawnedBaton)
		{
			// 손에 부착
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			SpawnedBaton->AttachToComponent(GetMesh(), AttachRules, TEXT("Weapon_R"));

			// 충돌 비활성화
			if (UStaticMeshComponent* BatonMesh = SpawnedBaton->FindComponentByClass<UStaticMeshComponent>())
			{
				BatonMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}

			// 무기 저장
			EquippedWeaponActor = SpawnedBaton;

			UE_LOG(LogTemp, Warning, TEXT("Baton spawned and attached to hand"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load Baton BP class"));
	}
}

void AMyProjectCharacter::ChangeJobSkill2()
{
	ChangeProfile(TEXT("/Game/Images/cooking.cooking"), TEXT("cooking"));

	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill2"));

	if (this->NiagaraSystem)
		NiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Script/Niagara.NiagaraSystem'/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Fire.NS_Dash_Fire'"));

	// 기존 무기 제거
	if (EquippedWeaponActor)
	{
		EquippedWeaponActor->Destroy();
		EquippedWeaponActor = nullptr;
		//UE_LOG(LogTemp, Warning, TEXT("Previous weapon destroyed"));
	}

	// 프라이팬 블루프린트 클래스 로드
	TSubclassOf<AActor> FlyingPanBPClass = StaticLoadClass(
		AActor::StaticClass(),
		nullptr,
		TEXT("/Game/Weapon/Pan/FlyingPan.FlyingPan_C")
	);

	if (FlyingPanBPClass)
	{
		FVector SpawnLocation = GetMesh()->GetSocketLocation(TEXT("Weapon_R"));
		FRotator SpawnRotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		// 프라이팬 스폰
		AActor* SpawnedFlyingPan = GetWorld()->SpawnActor<AActor>(FlyingPanBPClass, SpawnLocation, SpawnRotation, SpawnParams);

		if (SpawnedFlyingPan)
		{
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			SpawnedFlyingPan->AttachToComponent(GetMesh(), AttachRules, TEXT("Weapon_R"));

			// 충돌 제거
			if (UStaticMeshComponent* FlyingPanMesh = SpawnedFlyingPan->FindComponentByClass<UStaticMeshComponent>())
			{
				FlyingPanMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				// 또는 FlyingPanMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
			}

			// 무기 저장
			EquippedWeaponActor = SpawnedFlyingPan;

			UE_LOG(LogTemp, Warning, TEXT("FlyingPan spawned and attached"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load FlyingPan BP class"));
	}
}

void AMyProjectCharacter::ChangeJobSkill3()
{
	ChangeProfile(TEXT("/Game/Images/boxer.boxer"), TEXT("boxer"));

	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill3"));

	if (this->NiagaraSystem)
		NiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Script/Niagara.NiagaraSystem'/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Wind.NS_Dash_Wind'"));



	if (EquippedWeaponActor)
	{
		EquippedWeaponActor->Destroy();
		EquippedWeaponActor = nullptr;
		//UE_LOG(LogTemp, Warning, TEXT("Previous weapon destroyed"));
	}
	//무기 변경
	TSubclassOf<AActor> GloveBPClass = StaticLoadClass(
		AActor::StaticClass(),
		nullptr,
		TEXT("/Game/Weapon/source/Gloves.Gloves_C") 
	);
	if (GloveBPClass)
	{
		FVector SpawnLocation = GetMesh()->GetSocketLocation(TEXT("hand_lSocket"));
		FRotator SpawnRotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		AActor* SpawnedGlove = GetWorld()->SpawnActor<AActor>(GloveBPClass, SpawnLocation, SpawnRotation, SpawnParams);

		if (SpawnedGlove)
		{
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			SpawnedGlove->AttachToComponent(GetMesh(), AttachRules, TEXT("hand_lSocket"));

			// 충돌 끄기
			if (UStaticMeshComponent* playerMesh = SpawnedGlove->FindComponentByClass<UStaticMeshComponent>())
			{
				playerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				// 또는 Mesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
			}

			//  새 무기 저장
			EquippedWeaponActor = SpawnedGlove;

			UE_LOG(LogTemp, Warning, TEXT("New weapon spawned and attached"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load Glove BP class"));
	}
}

void AMyProjectCharacter::ChangeJobSkill4()
{
	ChangeProfile(TEXT("/Game/Images/doctor.doctor"), TEXT("doctor"));

	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill4"));

	if (this->NiagaraSystem)
		NiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Script/Niagara.NiagaraSystem'/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Paladin.NS_Dash_Paladin'"));


	if (EquippedWeaponActor)
	{
		EquippedWeaponActor->Destroy();
		EquippedWeaponActor = nullptr;
		//UE_LOG(LogTemp, Warning, TEXT("Previous weapon destroyed"));
	}

	//무기 변경 메스
	TSubclassOf<AActor> GloveBPClass = StaticLoadClass(
		AActor::StaticClass(),
		nullptr,
		TEXT("/Game/Weapon/scalpel/scalpel.scalpel_C")
	);
	if (GloveBPClass)
	{
		FVector SpawnLocation = GetMesh()->GetSocketLocation(TEXT("Weapon_R"));
		FRotator SpawnRotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		AActor* SpawnedGlove = GetWorld()->SpawnActor<AActor>(GloveBPClass, SpawnLocation, SpawnRotation, SpawnParams);

		if (SpawnedGlove)
		{
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			SpawnedGlove->AttachToComponent(GetMesh(), AttachRules, TEXT("Weapon_R"));
			// 충돌 끄기
			if (UStaticMeshComponent* playerMesh = SpawnedGlove->FindComponentByClass<UStaticMeshComponent>())
			{
				playerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				// 또는 Mesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
			}
			//  새 무기 저장
			EquippedWeaponActor = SpawnedGlove;

			UE_LOG(LogTemp, Warning, TEXT("New weapon spawned and attached"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load Glove BP class"));
	}

}

void AMyProjectCharacter::ChangeJobSkill5()
{
	ChangeProfile(TEXT("/Game/Images/artist.artist"), TEXT("artist"));

	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill5"));

	
	if (this->NiagaraSystem)
		NiagaraSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("/Script/Niagara.NiagaraSystem'/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Vampire.NS_Dash_Vampire'"));



	//무기 변경 붓
	if (EquippedWeaponActor)
	{
		EquippedWeaponActor->Destroy();
		EquippedWeaponActor = nullptr;
		//UE_LOG(LogTemp, Warning, TEXT("Previous weapon destroyed"));
	}

	TSubclassOf<AActor> GloveBPClass = StaticLoadClass(
		AActor::StaticClass(),
		nullptr,
		TEXT("/Game/Weapon/Brush/Brush.Brush_C")
	);
	if (GloveBPClass)
	{
		FVector SpawnLocation = GetMesh()->GetSocketLocation(TEXT("Weapon_R"));
		FRotator SpawnRotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		AActor* SpawnedGlove = GetWorld()->SpawnActor<AActor>(GloveBPClass, SpawnLocation, SpawnRotation, SpawnParams);

		if (SpawnedGlove)
		{
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
			SpawnedGlove->AttachToComponent(GetMesh(), AttachRules, TEXT("Weapon_R"));
			// 충돌 끄기
			if (UStaticMeshComponent* playerMesh = SpawnedGlove->FindComponentByClass<UStaticMeshComponent>())
			{
				playerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				playerMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
				playerMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);


			}
			//  새 무기 저장
			EquippedWeaponActor = SpawnedGlove;
			//UE_LOG(LogTemp, Warning, TEXT("New weapon spawned and attached"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load Glove BP class"));
	}



}


//=================================================================================================스킬 구현
void AMyProjectCharacter::SkillAttack1()
{



	FString NiagaraPath = "/Game/SkillEffect_asset/Magic_Mist_VFX/VFX/NS_Dark_Mist.NS_Dark_Mist";
	FVector Direction = GetActorForwardVector();
	FVector Scale = FVector(1.f);

	// 새로 만든 함수 호출
	SpawnNiagara(NiagaraPath, Direction, Scale);

	if (!HasAuthority()) return;

	// 데미지 적용용 타이머 시작
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


void AMyProjectCharacter::SkillAttack2()
{
	FString Path1 = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Curse_Blink.NS_Curse_Blink";
	SkillOn(Path1);
	Skill2SpawnCount = 0; // 초기화
	GetWorldTimerManager().SetTimer(
		Skill2TimerHandle,
		this,
		&AMyProjectCharacter::SpawnNextNiagaraEffect,
		0.1f,
		true // 반복
	);

	UE_LOG(LogTemp, Error, TEXT("HP Plus : %i "), HP_Player++);
}

void AMyProjectCharacter::SkillAttack3() {
	FString Path1 = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Blink_DarkMagic.NS_Blink_DarkMagic";
	SkillOn(Path1);
	Stun();
	UE_LOG(LogTemp, Error, TEXT("skill3 end"));
}

void AMyProjectCharacter::SkillAttack4() {

	//StartDashCharge();
	UE_LOG(LogTemp, Error, TEXT("skill4 end"));
}
void AMyProjectCharacter::SkillAttack5()
{
	FVector MyLocation = GetActorLocation();
	AMyProjectCharacter* ClosestEnemy = nullptr;
	float ClosestDistSq = FLT_MAX;

	// 전체 캐릭터 찾기
	TArray<AActor*> AllCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), AllCharacters);

	for (AActor* Actor : AllCharacters)
	{
		if (Actor == this) continue;

		AMyProjectCharacter* OtherChar = Cast<AMyProjectCharacter>(Actor);
		if (!IsValid(OtherChar)) continue;
		// 거리 계산 (제곱 거리로 비교)
		float DistSq = FVector::DistSquared(OtherChar->GetActorLocation(), MyLocation);
		if (DistSq < ClosestDistSq)
		{
			ClosestDistSq = DistSq;
			ClosestEnemy = OtherChar;
		}
	}

	// 적이 있으면 디버그 라인 그리기
	if (IsValid(ClosestEnemy))
	{
		FString Path = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Blink_Fire.NS_Blink_Fire";
		SkillOn(Path);
		

		DrawDebugLine(
			GetWorld(),
			MyLocation + FVector(0, 0, 50), // 내 위치에서 살짝 위
			ClosestEnemy->GetActorLocation() + FVector(0, 0, 50),
			FColor::Red,
			false,
			2.f,
			0,
			5.f
		);
		ClosestEnemy->OnHitEvent();
		UE_LOG(LogTemp, Warning, TEXT("Closest enemy : % s"), *ClosestEnemy->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT(" No enemy found."));
	}
}
void AMyProjectCharacter::SpawnNiagara(const FString& NiagaraPath, const FVector& Direction, const FVector& Scale)
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
	FVector SpawnLocation = GetActorLocation() + Direction * 50.f + FVector(0.f, 0.f, 50.f);
	FRotator SpawnRotation = Direction.Rotation();

	// 나이아가라 이펙트 스폰
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
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
				Enemy->OnHitEvent();
				UE_LOG(LogTemp, Warning, TEXT("Hit Enemy HP : %i"), Enemy->HP_Player);
			}
		}
	}
}

void AMyProjectCharacter::SpawnNextNiagaraEffect()
{
	if (Skill2SpawnCount >= 10)
	{
		GetWorldTimerManager().ClearTimer(Skill2TimerHandle);
		UE_LOG(LogTemp, Error, TEXT("Skill2"));
		return;
	}
	FString NiagaraPath = "/Game/SlashHitVFX/NS/NS_Hit_MagicWand.NS_Hit_MagicWand";
	FVector Scale = FVector(1.f);

	// 랜덤 방향 (Yaw)
	float RandomYaw = FMath::RandRange(0.f, 360.f);
	FRotator RandomRotator = FRotator(0.f, RandomYaw, 0.f);
	FVector RandomDirection = RandomRotator.Vector();

	SpawnNiagara(NiagaraPath, RandomDirection, Scale);

	Skill2SpawnCount++;
}

void AMyProjectCharacter::Stun()
{
	
	FVector MyLocation = GetActorLocation();
	float BoxHalfSize = 400.f; // 500x500 

	// 디버그 시각화
	DrawDebugBox(
		GetWorld(),
		MyLocation,
		FVector(BoxHalfSize, BoxHalfSize, 100.f),
		FColor::Red,
		false,
		5.f
	);

	// 모든 플레이어 탐색
	TArray<AActor*> AllPlayers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), AllPlayers);

	for (AActor* Actor : AllPlayers)
	{
		if (Actor == this) continue;

		AMyProjectCharacter* OtherPlayer = Cast<AMyProjectCharacter>(Actor);
		if (!OtherPlayer) continue;

		FVector OtherLocation = OtherPlayer->GetActorLocation();

		// 500x500 범위 안에 있는지 확인
		if (FMath::Abs(OtherLocation.X - MyLocation.X) <= BoxHalfSize &&
			FMath::Abs(OtherLocation.Y - MyLocation.Y) <= BoxHalfSize)
		{
			UE_LOG(LogTemp, Warning, TEXT("스턴 대상 감지: %s"), *OtherPlayer->GetName());
			
			// 1) 이펙트 소환
			FString NiagaraPath = "/Game/SlashHitVFX/NS/NS_Hit_Block.NS_Hit_Block";
			FVector Scale = FVector(1.5f);
			FVector Direction = FVector::UpVector;
			OtherPlayer->SpawnNiagara(NiagaraPath, Direction, Scale);

			// 2) 이동 정지
			OtherPlayer->DisablePlayerMovement();

			// 3) 3초 후 이동 복구 (람다 방식)
			FTimerHandle TempHandle;
			if (OtherPlayer && OtherPlayer->IsValidLowLevelFast())
			{
				GetWorld()->GetTimerManager().SetTimer(TempHandle, [WeakPlayer = TWeakObjectPtr<AMyProjectCharacter>(OtherPlayer)]()
					{
						if (WeakPlayer.IsValid())
						{
							WeakPlayer->EnablePlayerMovement();
						}
					}, 3.0f, false);
			}

		}
	}
}



void AMyProjectCharacter::DisablePlayerMovement()
{
	UE_LOG(LogTemp, Warning, TEXT("stun on"));

	GetCharacterMovement()->DisableMovement();

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		DisableInput(PC);
	}
}

void AMyProjectCharacter::EnablePlayerMovement()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		EnableInput(PC);
	}
	UE_LOG(LogTemp, Warning, TEXT("stun off"));
}


void AMyProjectCharacter::Skill_DashStun(float DashPower)
{
	// 1. 돌진 방향
	FVector Forward = GetActorForwardVector();

	//대쉬 이펙트
	FString NiagaraPath = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Wind.NS_Dash_Wind";
	FVector Scale = FVector(1.f);

	// 새로 만든 함수 호출
	SpawnNiagara(NiagaraPath, Forward, Scale);


	LaunchCharacter(Forward * DashPower, true, true); // 살짝 위도 뛸 수 있음

	// 2. 0.3초 후 충돌 체크
	GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			FTimerHandle TempHandle;
			GetWorld()->GetTimerManager().SetTimer(TempHandle, this, &AMyProjectCharacter::DashStun_CheckHit, 0.3f, false);
		});
}

void AMyProjectCharacter::DashStun_CheckHit()
{
	FVector MyLocation = GetActorLocation();
	float Radius = 200.f;

	DrawDebugSphere(
		GetWorld(),
		MyLocation,
		Radius,
		24,
		FColor::Red,
		false,
		1.5f // 지속 시간
	);

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), FoundActors);
	


	for (AActor* Actor : FoundActors)
	{
		if (Actor == this) continue;

		AMyProjectCharacter* OtherPlayer = Cast<AMyProjectCharacter>(Actor);
		if (!OtherPlayer) continue;

		float Distance = FVector::Dist(OtherPlayer->GetActorLocation(), MyLocation);

		if (Distance <= Radius)
		{
			UE_LOG(LogTemp, Warning, TEXT("돌진 스턴 적 감지: %s"), *OtherPlayer->GetName());

			// 이펙트 + 이동정지 + 3초 후 해제
			FString NiagaraPath2 = "/Game/SlashHitVFX/NS/NS_Hit_CurvedSwordBloodDirection.NS_Hit_CurvedSwordBloodDirection";
			FVector Scale2 = FVector(1.5f);
			FVector Direction2 = FVector::UpVector;
			OtherPlayer->SpawnNiagara(NiagaraPath2, Direction2, Scale2);

			OtherPlayer->DisablePlayerMovement();

			TWeakObjectPtr<AMyProjectCharacter> WeakTarget = OtherPlayer;

			FTimerHandle RecoverHandle;
			GetWorld()->GetTimerManager().SetTimer(RecoverHandle, [WeakTarget]()
				{
					if (WeakTarget.IsValid())
					{
						WeakTarget->EnablePlayerMovement();
					}
				}, 3.f, false);

			break; // 한 명만 처리하므로 break
		}
	}
}


void AMyProjectCharacter::StartDashCharge()
{
	DashChargeStartTime = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Log, TEXT("차징 시작!"));

	GetWorld()->GetTimerManager().SetTimer(ChargeEffectTimerHandle, this, &AMyProjectCharacter::SpawnChargeEffect, 0.2f, true);

}

void AMyProjectCharacter::ReleaseDashCharge()
{

	GetWorld()->GetTimerManager().ClearTimer(ChargeEffectTimerHandle); // 타이머 중단

	float HoldDuration = GetWorld()->GetTimeSeconds() - DashChargeStartTime;

	// 최소 0.2초 ~ 최대 2초 제한
	HoldDuration = FMath::Clamp(HoldDuration, 0.2f, 2.0f);

	float DashPower = 1500.f + (HoldDuration * 1000.f); // 누를수록 더 멀리

	UE_LOG(LogTemp, Log, TEXT("차징 완료! 지속시간: %.2f초, 힘: %.1f"), HoldDuration, DashPower);

	Skill_DashStun(DashPower);
}


void AMyProjectCharacter::SpawnChargeEffect()
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

	UE_LOG(LogTemp, Log, TEXT("차징 이펙트 실행"));
}

void AMyProjectCharacter::SkillOn(const FString& NiagaraPath)
{
	if (NiagaraPath.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT(" NiagaraPath가 비어있습니다."));
		return;
	}

	// 경로 문자열 정리
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

	// 이펙트 위치 및 회전
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
