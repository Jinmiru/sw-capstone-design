// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFSM.h"
#include "MyProject/MyProjectCharacter.h"
#include "Enemy.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UEnemyFSM::UEnemyFSM()
{

	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyFSM::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC)
	{
		target = Cast<AMyProjectCharacter>(PC->GetPawn());
	}

	me = Cast<AEnemy>(GetOwner());
	
}


// Called every frame
void UEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	switch (mState)
	{
	case EEnemyState::Idle:
		IdleState();
		break;
	case EEnemyState::Move:
		MoveState();
		break;
	case EEnemyState::Attack:
		AttackState();
		break;
	case EEnemyState::Damage:
		DamageState();
		break;
	case EEnemyState::Die:
		DieState();
		break;
	default:
		break;
	}
}

void UEnemyFSM::IdleState()
{
	//UE_LOG(LogTemp, Warning, TEXT("IdleState State"));

	currentTime += GetWorld()->GetDeltaSeconds();
	if (currentTime >= idleDelayTime)
	{
		currentTime = 0;
		mState = EEnemyState::Move;
	}
}
void UEnemyFSM::MoveState()
{
	//UE_LOG(LogTemp, Warning, TEXT("MoveState State"));

	if (!target || !me)
	{
		//UE_LOG(LogTemp, Error, TEXT("target or me is nullptr in MoveState"));
		return;
	}

	FVector direction = target->GetActorLocation() - me->GetActorLocation();
	me->AddMovementInput(direction.GetSafeNormal());

	if (direction.Size() < attackRange) {
		mState = EEnemyState::Attack;
	}
}
void UEnemyFSM::AttackState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime)
	{
		currentTime = 0;

		AMyProjectCharacter* PC = Cast<AMyProjectCharacter>(target);
		PC->OnHitEvent();

		//UE_LOG(LogTemp, Warning, TEXT("Attack State"));

	}

	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	if (distance > attackRange+200)
	{
		mState = EEnemyState::Move;
	}

}
void UEnemyFSM::DamageState()
{
	UE_LOG(LogTemp, Warning, TEXT("Damage State"));
}
void UEnemyFSM::DieState()
{
	//UE_LOG(LogTemp, Warning, TEXT("Die State"));
}

void UEnemyFSM::OnDamageProcess()
{
	
	if (hp > 0) {
		//mState = EEnemyState::Damage;
		hp--;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Die State"));
		mState = EEnemyState::Die;
		
	}
}