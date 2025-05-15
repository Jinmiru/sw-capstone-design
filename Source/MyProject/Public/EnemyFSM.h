// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyFSM.generated.h"

UENUM()
enum class EEnemyState : uint8
{
	Idle,
	Move,
	Attack,
	Damage,
	Die,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UEnemyFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyFSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame


	UPROPERTY()
	bool front = true;
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FSM)
	EEnemyState mState = EEnemyState::Idle;

	void IdleState();
	void MoveState();
	void AttackState();
	void DamageState();
	void DieState();

	void OnDamageProcess();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FSM)
	float idleDelayTime = 2;

	float currentTime = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FSM)
	class AMyProjectCharacter* target;

	UPROPERTY()
	class AEnemy* me;


	UPROPERTY(EditAnywhere, Category = FSM)
	float attackRange = 200;

	UPROPERTY(EditAnywhere, Category = FSM)
	float attackDelayTime = 2.0;

	UPROPERTY(EditAnywhere, Category = FSM)
	int32 hp = 3;
		
	UPROPERTY()
	class UEnemyAnim* anim;

	UPROPERTY()
	class AAIController* ai;
};
