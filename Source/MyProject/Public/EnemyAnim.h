// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyFSM.h"
#include "EnemyAnim.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UEnemyAnim : public UAnimInstance
{
	GENERATED_BODY()
	
public :
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FSM)
	EEnemyState animState;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FSM)
	bool bAttackPlay = false;

	UFUNCTION(BlueprintCallable, Category = FSMEvent)
	void OnEndAttackAnimation();
	

};
