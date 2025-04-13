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
#include "PlayerAnim.h"
#include "Engine/StaticMeshActor.h"
#include "Net/UnrealNetwork.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

// dash attack 함수 수정(RPC) 
//217줄 어택몽타주 실행함수
//
//432줄 대쉬함수 수정(대쉬 몽타주, 대쉬 나이아가라 이펙트) ~490줄까지 함수 추가
//
//1330 ~1407줄 대쉬, 어택 RPC함수

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
	bCanUseSkill = true;
	//-------------------직업 설정-------------------

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

	if (!IsRunningDedicatedServer())
	{
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC && PC->IsLocalController())
		{
			if (BP_StatusWidget)
			{
				if (!HUDWidget)
				{
					HUDWidget = CreateWidget<UStatusWidget>(PC, BP_StatusWidget);
					if (HUDWidget)
					{
						HUDWidget->AddToViewport();

						UpdateStatus(); //스텟 UI 추가
					}
				}
			}
			


		}
		GetWorldTimerManager().SetTimer(MoneyTimerHandle, this, &AMyProjectCharacter::IncreaseMoney, 5.0f, true);
		// 5초마다 돈 증가
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
		//EnhancedInputComponent->BindAction(inventoryAction, ETriggerEvent::Started, this, &AMyProjectCharacter::Inventory);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Started, this, &AMyProjectCharacter::Dash);

		EnhancedInputComponent->BindAction(ChangeJob1, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill1);
		EnhancedInputComponent->BindAction(ChangeJob2, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill2);
		EnhancedInputComponent->BindAction(ChangeJob3, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill3);
		EnhancedInputComponent->BindAction(ChangeJob4, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill4);
		EnhancedInputComponent->BindAction(ChangeJob5, ETriggerEvent::Started, this, &AMyProjectCharacter::ChangeJobSkill5);
		
		EnhancedInputComponent->BindAction(Skill, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack);


		//EnhancedInputComponent->BindAction(Skill1, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack1);
		//EnhancedInputComponent->BindAction(Skill2, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack2);
		//EnhancedInputComponent->BindAction(Skill3, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack3);
		////EnhancedInputComponent->BindAction(Skill4, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack4);
		//EnhancedInputComponent->BindAction(Skill5, ETriggerEvent::Started, this, &AMyProjectCharacter::SkillAttack5);

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

			UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *HitActor->GetName());
			
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
		}
	}
}


void AMyProjectCharacter::PlusAge(const FInputActionValue& Value) {

	if (HasAuthority())
	{
		ServerPlusAge();
	}
	else
	{
		ServerPlusAge(); // 클라이언트도 무조건 서버 호출
	}
	//레벨업 이펙트
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), LevelupEffect, GetActorLocation(), FRotator::ZeroRotator, FVector(1.0f));

}

void AMyProjectCharacter::OnRep_Age()
{
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
}


void AMyProjectCharacter::Print(const FInputActionValue& Value)
{
	OnHitEvent();
}

void AMyProjectCharacter::UpdateStatus()
{
	if (!HasAuthority())
	{
		if (!HUDWidget)
		{
			UE_LOG(LogTemp, Error, TEXT("HUDWidget is NULL in UpdateStatus!"));
			return;
		}

		if (HUDWidget->AgeText)
			HUDWidget->AgeText->SetText(FText::AsNumber(Age));
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
		if (HUDWidget->jobText)
		{
			if (Age < 14) {
				ChangeProfile(TEXT("/Game/Images/elemental.elemental"), TEXT("elemental\n school"));
				//HUDWidget->jobText->SetText(FText::FromString(FString::Printf(TEXT("Elemental"))));
			}
			else if (Age < 17) {
				ChangeProfile(TEXT("/Game/Images/middle.middle"), TEXT("middle\n school"));
				Power = 1.5;

				//UStaticMesh* chain = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/SlashHitVFX/__GenericSource/FBX/SM_Fist.SM_Fist'"));
				//if (chain) {
				//	MeshComponent->SetStaticMesh(chain);
				//	MeshComponent->SetWorldScale3D(FVector(0.5f));//크기 1배
				//}
			}
			else if (Age < 20) {
				ChangeProfile(TEXT("/Game/Images/high.high"), TEXT("high\n school"));
				Power = 2;

				//UStaticMesh* chain2 = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/SlashHitVFX/__GenericSource/FBX/SM_Scythe.SM_Scythe'"));
				//if (chain2) {
				//	MeshComponent->SetStaticMesh(chain2);
				//	MeshComponent->SetWorldScale3D(FVector(0.5f));//크기 1배
				//}
			}
			else {
				//MeshComponent->SetStaticMesh(nullptr);
			}
			RequestWeaponUpdate(); // 클라이언트 → 서버
		}
	}



	else
	{
		UE_LOG(LogTemp, Error, TEXT("proficiency TextBlock is NULL in HUDWidget!"));
	}
}	

void AMyProjectCharacter::RequestWeaponUpdate()
{
	if (!HasAuthority())  // 클라이언트 → 서버 요청
	{
		Server_RequestWeaponUpdate();
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

//void AMyProjectCharacter::Inventory(const FInputActionValue& Value)
//{
//	UE_LOG(LogTemp, Warning, TEXT("Inventory!"));
//}

void AMyProjectCharacter::IncreaseMoney()
{
	money += 10;  // 돈 증가 
	//UE_LOG(LogTemp, Error, TEXT("plus monety"));
	if (HUDWidget && HUDWidget->moneyText)
	{
		HUDWidget->moneyText->SetText(FText::AsNumber(money));
	}

}

void AMyProjectCharacter::OnHitEvent()
{
	UE_LOG(LogTemp, Warning, TEXT("OnHitEvent, HP : %d"), HP_Player);
	if (HitEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, GetActorLocation());
	}

}

void AMyProjectCharacter::Multicast_OnHitEvent_Implementation()
{
	OnHitEvent();
}


void AMyProjectCharacter::OnHitEvent2()
{
	UE_LOG(LogTemp, Warning, TEXT("OnHitEvent2"));
}

//Edit
void AMyProjectCharacter::Dash() {
	if (!bCanDash) return;

	RequestDash(); // dash animation

	if (!HasAuthority())
	{
		Server_RequestDash();
	}
}

//add
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
	jobskill = 1;


	EquipWeaponWithEffect(
		TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Mana.NS_Dash_Mana"),
		TEXT("/Game/Weapon/MeleePack/BlueprintClasses/BC_Baton.BC_Baton_C")
	);

}


void AMyProjectCharacter::ChangeJobSkill2()
{
	ChangeProfile(TEXT("/Game/Images/cooking.cooking"), TEXT("cooking"));
	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill2"));
	jobskill = 2;

	EquipWeaponWithEffect(
		TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Fire.NS_Dash_Fire"),
		TEXT("/Game/Weapon/Pan/FlyingPan.FlyingPan_C")
	);
}


void AMyProjectCharacter::ChangeJobSkill3()
{
	ChangeProfile(TEXT("/Game/Images/boxer.boxer"), TEXT("boxer"));
	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill3"));
	jobskill = 3;

	EquipWeaponWithEffect(
		TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Wind.NS_Dash_Wind"),
		TEXT("/Game/Weapon/source/Gloves.Gloves_C")
	);

}


// need RPC
void AMyProjectCharacter::ChangeJobSkill4()
{
	ChangeProfile(TEXT("/Game/Images/doctor.doctor"), TEXT("doctor"));
	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill4"));
	jobskill = 4;

	EquipWeaponWithEffect(
		TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Paladin.NS_Dash_Paladin"),
		TEXT("/Game/Weapon/scalpel/scalpel.scalpel_C")
	);

}


// need RPC
void AMyProjectCharacter::ChangeJobSkill5()
{
	ChangeProfile(TEXT("/Game/Images/artist.artist"), TEXT("artist"));
	UE_LOG(LogTemp, Warning, TEXT("ChangeJobSkill5"));
	jobskill = 5;

	EquipWeaponWithEffect(
		TEXT("/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Vampire.NS_Dash_Vampire"),
		TEXT("/Game/Weapon/Brush/Brush.Brush_C")
	);

}


// need RPC
void AMyProjectCharacter::EquipWeaponWithEffect(const FString& NiagaraPath, const FString& WeaponBlueprintPath)
{

	if (HasAuthority())
	{
		EquipWeapon_Internal(NiagaraPath, WeaponBlueprintPath);
	}
	else
	{
		Server_EquipWeaponWithEffect(NiagaraPath, WeaponBlueprintPath);
	}


	// ===================== 1. 나이아가라 이펙트 로드 =====================
	//if (!NiagaraPath.IsEmpty())
	//{
	//	FString FullNiagaraPath = NiagaraPath;

	//	// 경로 정리 (필요 시)
	//	if (!NiagaraPath.Contains(TEXT("NiagaraSystem'")))
	//	{
	//		FullNiagaraPath = FString::Printf(TEXT("NiagaraSystem'%s'"), *NiagaraPath);
	//	}

	//	UNiagaraSystem* LoadedEffect = LoadObject<UNiagaraSystem>(nullptr, *FullNiagaraPath);
	//	if (IsValid(LoadedEffect))
	//	{
	//		NiagaraSystem = LoadedEffect;
	//		UE_LOG(LogTemp, Log, TEXT("✅ NiagaraSystem 로드 성공: %s"), *FullNiagaraPath);
	//	}
	//	else
	//	{
	//		UE_LOG(LogTemp, Error, TEXT("❌ NiagaraSystem 로드 실패: %s"), *FullNiagaraPath);
	//	}
	//}

	//// ===================== 2. 기존 무기 제거 =====================
	//if (EquippedWeaponActor)
	//{
	//	EquippedWeaponActor->Destroy();
	//	EquippedWeaponActor = nullptr;
	//}

	//// ===================== 3. 무기 블루프린트 로드 =====================
	//if (!WeaponBlueprintPath.IsEmpty())
	//{
	//	TSubclassOf<AActor> WeaponClass = StaticLoadClass(AActor::StaticClass(), nullptr, *WeaponBlueprintPath);

	//	if (!WeaponClass)
	//	{
	//		UE_LOG(LogTemp, Error, TEXT("무기 블루프린트 로드 실패: %s"), *WeaponBlueprintPath);
	//		return;
	//	}

	//	FVector SpawnLocation = GetMesh()->GetSocketLocation(TEXT("Weapon_R"));
	//	FRotator SpawnRotation = GetActorRotation();

	//	FActorSpawnParameters SpawnParams;
	//	SpawnParams.Owner = this;
	//	SpawnParams.Instigator = GetInstigator();

	//	AActor* SpawnedWeapon = GetWorld()->SpawnActor<AActor>(WeaponClass, SpawnLocation, SpawnRotation, SpawnParams);
	//	if (!IsValid(SpawnedWeapon))
	//	{
	//		return;
	//	}

	//	// ===================== 4. 무기 부착 =====================
	//	FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
	//	SpawnedWeapon->AttachToComponent(GetMesh(), AttachRules, TEXT("Weapon_R"));

	//	// ===================== 5. 충돌 제거 =====================
	//	if (UStaticMeshComponent* MeshComp = SpawnedWeapon->FindComponentByClass<UStaticMeshComponent>())
	//	{
	//		MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//		MeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	//	}

	//	EquippedWeaponActor = SpawnedWeapon;

	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("no weapon path"));
	//}
}


//=================================================================================================스킬 구현


void AMyProjectCharacter::SkillAttack() {

	if (!bCanUseSkill)
	{
		UE_LOG(LogTemp, Warning, TEXT(" SkillAttack1 is on cooldown!"));
		return;
	}
	bCanUseSkill = false; // 스킬 사용 잠금

	switch (jobskill)
	{
	case 1:
		SkillAttack3();// 경찰 스킬

		break;
	case 2:
		SkillAttack1();// 요리사 스킬

		break;
	case 3:
		//SkillAttack4(); // 복서 스킬
		break;
	case 4:
		SkillAttack2(); //의사 스킬

		break;
	case 5:
		SkillAttack5();// 화가 스킬
		break;
	default:
		break;
	}
}


// need RPC
void AMyProjectCharacter::SkillAttack1()
{



	FString Path2 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/FlameShield/Systems/N_FlameShield.N_FlameShield";
	SpawnNiagara(Path2, GetActorForwardVector(), FVector(1.f), 7);

	FString NiagaraPath = "/Game/SkillEffect_asset/Magic_Mist_VFX/VFX/NS_Dark_Mist.NS_Dark_Mist";
	FVector Direction = GetActorForwardVector();
	FVector Scale = FVector(1.f);

	SpawnNiagara(NiagaraPath, Direction, Scale, 8);


	GetCharacterMovement()->DisableMovement(); // 이동 비활성화
	FTimerHandle UnfreezeTimerHandle;
	GetWorldTimerManager().SetTimer(
		UnfreezeTimerHandle,
		this,
		&AMyProjectCharacter::UnfreezeMovement,
		7.0f, // 복구 시간
		false
	);

	if (!HasAuthority()) return;

	// 데미지 적용용 5초 타이머
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

	StartCooldown(30.f);

}

// need RPC
void AMyProjectCharacter::SkillAttack2()
{


	
	FString Path1 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/ArcaneShield/Systems/N_ArcaneShield.N_ArcaneShield";
	SpawnNiagara(Path1, GetActorForwardVector(), FVector(1.f), 3);

	GetCharacterMovement()->DisableMovement(); // 이동 비활성화
	FTimerHandle UnfreezeTimerHandle;
	GetWorldTimerManager().SetTimer(
		UnfreezeTimerHandle,
		this,
		&AMyProjectCharacter::UnfreezeMovement,
		2.5f, // 2초 후 이동 복구
		false
	);

	HealEffect();

	UE_LOG(LogTemp, Error, TEXT("HP Plus : %i "), HP_Player++);
	StartCooldown(10.f);

}


// need RPC
void AMyProjectCharacter::SkillAttack3() {
	FString Path1 = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Blink_DarkMagic.NS_Blink_DarkMagic";
	SpawnNiagara(Path1, GetActorForwardVector(), FVector(1.f), 3);

	GetCharacterMovement()->DisableMovement(); // 이동 비활성화
	FTimerHandle UnfreezeTimerHandle;
	GetWorldTimerManager().SetTimer(
		UnfreezeTimerHandle,
		this,
		&AMyProjectCharacter::UnfreezeMovement,
		1.0f, // 복구 시간
		false
	);

	Stun();
	StartCooldown(30.f);

	//UE_LOG(LogTemp, Error, TEXT("skill3 end"));
}

//
//void AMyProjectCharacter::SkillAttack4() {
//
//	//UE_LOG(LogTemp, Error, TEXT("skill4 end"));
//}


// need RPC
void AMyProjectCharacter::SkillAttack5()
{
	FString Path1 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/MagmaShield/Systems/N_MagmaShield.N_MagmaShield";
	SpawnNiagara(Path1, GetActorForwardVector(), FVector(1.f), 0.5f);

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

		float DistSq = FVector::DistSquared(OtherChar->GetActorLocation(), MyLocation);
		if (DistSq < ClosestDistSq)
		{
			ClosestDistSq = DistSq;
			ClosestEnemy = OtherChar;
		}
	}

	// 적이 있으면 이펙트 + 데미지
	if (IsValid(ClosestEnemy))
	{
		FString Path = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Blink_Fire.NS_Blink_Fire";
		SkillOn(Path);

		// 적 위치에 나이아가라 이펙트
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
				true,
				true,
				ENCPoolMethod::None,
				true
			);
		}

		ClosestEnemy->OnHitEvent();
		UE_LOG(LogTemp, Warning, TEXT("Closest enemy : %s"), *ClosestEnemy->GetName());
	}
	StartCooldown(10.f);

}

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
		FVector SpawnLocation = GetActorLocation() + Direction  + FVector(0.f, 0.f, 50.f);
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

// need RPC
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
				FString NiagaraPath = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicalExplosionsVFX/VFX/FlameBlast/Systems/N_FlameBlast.N_FlameBlast";
				FString FullPath = FString::Printf(TEXT("NiagaraSystem'%s'"), *NiagaraPath);
				UNiagaraSystem* NiagaraEffect = LoadObject<UNiagaraSystem>(nullptr, *FullPath);

				if (NiagaraEffect)
				{
					FVector SpawnLocation = Enemy->GetActorLocation() + FVector(0, 0, 50); // 머리 위
					FRotator SpawnRotation = FRotator::ZeroRotator;
					FVector Scale = FVector(1.f);

					// AutoDestroy = true → 자동으로 사라짐
					UNiagaraFunctionLibrary::SpawnSystemAtLocation(
						GetWorld(),
						NiagaraEffect,
						SpawnLocation,
						SpawnRotation,
						Scale,
						true,  // bAutoDestroy ← 한 번만 재생하고 사라짐
						true,  // bAutoActivate
						ENCPoolMethod::None,
						true
					);
				}
			}
		}
	}
}


// need RPC
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


// need RPC
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
			FString NiagaraPath2 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/LightningWall/Systems/N_LightningWall.N_LightningWall";
			FVector Direction = FVector::UpVector;
			OtherPlayer->SpawnNiagara(NiagaraPath, Direction, FVector(1.5f), 3);
			OtherPlayer->SpawnNiagara(NiagaraPath2, Direction, FVector(0.3f), 3);


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
							UE_LOG(LogTemp, Warning, TEXT("스턴 해제: %s"), *WeakPlayer->GetName());
						}
					}, 3.0f, false);
			}

		}
	}
}


// need RPC
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
// need RPC
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

// need RPC
void AMyProjectCharacter::Skill_DashStun(float DashPower)
{
	// 1. 돌진 방향
	FVector Forward = GetActorForwardVector();

	//대쉬 이펙트
	FString NiagaraPath = "/Game/SkillEffect_asset/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Wind.NS_Dash_Wind";
	FVector Scale = FVector(1.f);

	// 새로 만든 함수 호출
	SpawnNiagara(NiagaraPath, Forward, Scale,5);


	LaunchCharacter(Forward * DashPower, true, true); // 살짝 위도 뛸 수 있음

	// 2. 0.3초 후 충돌 체크
	GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			FTimerHandle TempHandle;
			GetWorld()->GetTimerManager().SetTimer(TempHandle, this, &AMyProjectCharacter::DashStun_CheckHit, 0.3f, false);
		});
	StartCooldown(30.f);

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
			FString NiagaraPath = "/Game/SlashHitVFX/NS/NS_Hit_CurvedSwordBloodDirection.NS_Hit_CurvedSwordBloodDirection";
			FString NiagaraPath2 = "/Game/SkillEffect_asset/MegaMagicVFXBundle/VFX/MagicShieldsVFX/VFX/DefaultVersions/LightningWall/Systems/N_LightningWall.N_LightningWall";
			FVector Direction2 = FVector::UpVector;
			OtherPlayer->SpawnNiagara(NiagaraPath, Direction2, FVector(1.0f), 2);
			OtherPlayer->SpawnNiagara(NiagaraPath2, Direction2, FVector(0.3f),5);

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
	//UE_LOG(LogTemp, Log, TEXT("차징 시작!"));

	GetWorld()->GetTimerManager().SetTimer(ChargeEffectTimerHandle, this, &AMyProjectCharacter::SpawnChargeEffect, 0.2f, true);

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

// need RPC

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

	//UE_LOG(LogTemp, Log, TEXT("차징 이펙트 실행"));
}


// need RPC

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

	//UE_LOG(LogTemp, Log, TEXT("SkillOn 이펙트 실행됨: %s"), *NiagaraPath);
}


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

	if (BP_StatusWidget) // ← StatusWidgetInstance는 BeginPlay에서 생성된 UStatusWidget*
	{
		HUDWidget->SetSkillCoolProgress(1.0f - Progress); // 점점 줄어드는 형태

		
	}

	if (Progress >= 1.0f)
	{
		GetWorldTimerManager().ClearTimer(CooldownTimerHandle);
	}
}

//RPC TEST


// Attack RPC
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
				PlayerAnim->PlayAttackAnim();
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
	if (this->NiagaraSystem)
	{
		FVector ForwardVector = GetActorForwardVector();
		float SpawnDistance = 200.f;
		FVector SpawnLocation = GetActorLocation() + ForwardVector * SpawnDistance;
		FRotator SpawnRotation = ForwardVector.Rotation();
		FVector SpawnScale = FVector(0.5f, 0.7f, 0.7f);

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			NiagaraSystem,
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

// Weapon update RPC
void AMyProjectCharacter::Server_EquipWeaponWithEffect_Implementation(const FString& NiagaraPath, const FString& WeaponBlueprintPath)
{
	EquipWeapon_Internal(NiagaraPath, WeaponBlueprintPath);
}

void AMyProjectCharacter::EquipWeapon_Internal(const FString& NiagaraPath, const FString& WeaponBlueprintPath)
{
	// 1. 이펙트 로드
	if (!NiagaraPath.IsEmpty())
	{
		FString FullNiagaraPath = NiagaraPath;

		if (!NiagaraPath.Contains(TEXT("NiagaraSystem'")))
		{
			FullNiagaraPath = FString::Printf(TEXT("NiagaraSystem'%s'"), *NiagaraPath);
		}

		UNiagaraSystem* LoadedEffect = LoadObject<UNiagaraSystem>(nullptr, *FullNiagaraPath);
		if (IsValid(LoadedEffect))
		{
			NiagaraSystem = LoadedEffect;
			UE_LOG(LogTemp, Log, TEXT("✅ NiagaraSystem 로드 성공: %s"), *FullNiagaraPath);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("❌ NiagaraSystem 로드 실패: %s"), *FullNiagaraPath);
		}
	}

	// 2. 기존 무기 제거
	if (EquippedWeaponActor)
	{
		EquippedWeaponActor->Destroy();
		EquippedWeaponActor = nullptr;
	}

	// 3. 무기 로드 및 부착
	if (!WeaponBlueprintPath.IsEmpty())
	{
		TSubclassOf<AActor> WeaponClass = StaticLoadClass(AActor::StaticClass(), nullptr, *WeaponBlueprintPath);
		if (!WeaponClass)
		{
			UE_LOG(LogTemp, Error, TEXT("무기 블루프린트 로드 실패: %s"), *WeaponBlueprintPath);
			return;
		}


		FVector SpawnLocation = GetMesh()->GetSocketLocation(TEXT("Weapon_R"));
		FRotator SpawnRotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		AActor* SpawnedWeapon = GetWorld()->SpawnActor<AActor>(WeaponClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (!IsValid(SpawnedWeapon)) return;

		// 부착
		FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);
		SpawnedWeapon->AttachToComponent(GetMesh(), AttachRules, TEXT("Weapon_R"));

		// 충돌 제거
		if (UStaticMeshComponent* MeshComp = SpawnedWeapon->FindComponentByClass<UStaticMeshComponent>())
		{
			MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			MeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
		}

		EquippedWeaponActor = SpawnedWeapon;

		// 모든 클라이언트에 이펙트 재생
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("무기 경로 없음"));
	}
}



// HP값 갱신을 위한 Replication함수 - 실제로 사용하지는 않음
void AMyProjectCharacter::OnRep_HPChanged(){}

void AMyProjectCharacter::OnRep_WeaponChanged()
{
	ApplyWeaponMesh(EquippedWeaponType);
}

void AMyProjectCharacter::ApplyWeaponMesh(EWeaponType WeaponType)
{
	switch (WeaponType)
	{
	case EWeaponType::Chain:
	{
		UStaticMesh* ChainMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/SlashHitVFX/__GenericSource/FBX/SM_Fist.SM_Fist'"));
		if (ChainMesh)
		{
			MeshComponent->SetStaticMesh(ChainMesh);
			MeshComponent->SetWorldScale3D(FVector(0.5f));
		}
		break;
	}
	case EWeaponType::Scythe:
	{
		UStaticMesh* ScytheMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/SlashHitVFX/__GenericSource/FBX/SM_Scythe.SM_Scythe'"));
		if (ScytheMesh)
		{
			MeshComponent->SetStaticMesh(ScytheMesh);
			MeshComponent->SetWorldScale3D(FVector(0.5f));
		}
		break;
	}
	case EWeaponType::None:
	default:
		MeshComponent->SetStaticMesh(nullptr);
		break;
	}
}

void AMyProjectCharacter::Server_RequestWeaponUpdate_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("EquippedWeaponType: %d"), (int32)EquippedWeaponType);

	if (Age < 14)
	{
		return;
	}
	else if (Age < 17)
		EquippedWeaponType = EWeaponType::Chain;
	else if (Age < 20)
		EquippedWeaponType = EWeaponType::Scythe;
	else
		EquippedWeaponType = EWeaponType::None;


	ApplyWeaponMesh(EquippedWeaponType); // 서버에서 직접 반영
}


void AMyProjectCharacter::ServerPlusAge_Implementation()
{
	Age++;
	Linguistic++;
	UE_LOG(LogTemp, Warning, TEXT("AGE : %d"), Age);
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





void AMyProjectCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyProjectCharacter, HP_Player);
	DOREPLIFETIME(AMyProjectCharacter, EquippedWeaponType);
	DOREPLIFETIME(AMyProjectCharacter, Age);
	DOREPLIFETIME(AMyProjectCharacter, Physical);
	DOREPLIFETIME(AMyProjectCharacter, Sensory);
	DOREPLIFETIME(AMyProjectCharacter, Logic);
	DOREPLIFETIME(AMyProjectCharacter, Linguistic);
	DOREPLIFETIME(AMyProjectCharacter, SocialSkill);
	DOREPLIFETIME(AMyProjectCharacter, MentalStrength);
	DOREPLIFETIME(AMyProjectCharacter, bCanDash);
	DOREPLIFETIME(AMyProjectCharacter, NiagaraSystem);

}

