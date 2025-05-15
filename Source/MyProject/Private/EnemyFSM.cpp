// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFSM.h"
#include "MyProject/MyProjectCharacter.h"
#include "Enemy.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyAnim.h"
#include "AIController.h"
#include "PoliceMissionUI.h"
#include "BoxerMissionUI.h"
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
	anim = Cast<UEnemyAnim>(me->GetMesh()->GetAnimInstance());

	ai = Cast<AAIController>(me->GetController());
}


// Called every frame
void UEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!me || !anim || !target || !ai)
	{
		// 아직 초기화 안 됨. FSM 실행하지 않음
		return;
	}

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
	anim->animState = mState;

	currentTime += GetWorld()->GetDeltaSeconds();
	if (currentTime >= idleDelayTime)
	{
		currentTime = 0;
		mState = EEnemyState::Move;

		anim->animState = mState;
	}
}
void UEnemyFSM::MoveState()
{
	//UELOG(LogTemp, Warning, TEXT("MoveState State"));

	if (!target || !me || !ai)
	{
		return;
	}
	FVector playerLocation = target->GetActorLocation();
	FVector myLocation = me->GetActorLocation();
	FVector dir = playerLocation - myLocation;

	FVector destination;


	if (front) {
		destination = playerLocation;
	}
	else {
		// 플레이어 반대 방향으로 500 유닛 이동
		destination = myLocation - dir.GetSafeNormal() * 500.0f;
	}
	
	ai->MoveToLocation(destination);

	if (dir.Size() < attackRange) {

		mState = EEnemyState::Attack;

		anim->animState = mState;
		currentTime = attackDelayTime;
	}
}

void UEnemyFSM::AttackState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime)
	{
		currentTime = 0;
		anim->animState = mState;

		AMyProjectCharacter* PC = Cast<AMyProjectCharacter>(target);
		PC->OnHitEvent();

		//UE_LOG(LogTemp, Warning, TEXT("Attack State"));

	}

	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	if (distance > attackRange+200)
	{
		mState = EEnemyState::Move;
		currentTime = 0;
		anim->animState = mState;

	}

}
void UEnemyFSM::DamageState()
{
	UE_LOG(LogTemp, Warning, TEXT("Damage State"));
}
void UEnemyFSM::DieState()
{
	//UE_LOG(LogTemp, Warning, TEXT("Die "));
	if (UPoliceMissionUI::CurrentInstance)
	{
		if (front)
		{
			UBoxerMissionUI::CurrentInstance->EndGame();

		}
		else
		{
			UPoliceMissionUI::CurrentInstance->EndGame();
		}
	}
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
	anim->animState = mState;
}