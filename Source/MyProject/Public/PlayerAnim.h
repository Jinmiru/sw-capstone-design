// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnim.generated.h"

//TPS3 프로젝트

/**
 * 
 */


//59 ~ 60, 70줄 대쉬관련 변수, 함수 정의

UENUM(BlueprintType)
enum class EPlayerAnimState : uint8
{
	Idle        UMETA(DisplayName = "Idle"),
	Run         UMETA(DisplayName = "Run"),
	Jump        UMETA(DisplayName = "Jump"),
	Attack      UMETA(DisplayName = "Attack")
};



UCLASS()
class MYPROJECT_API UPlayerAnim : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = PlayerAnim)
	float Speed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = PlayerAnim)
	float direction = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = PlayerAnim)
	bool isInAir = false;


	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* AttackMontage;

	//add

	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* DashMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = FSM)
	EPlayerAnimState CurrentState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsPlayingAttackMontage = false;

	// add

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsPlayingDashMontage = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float BlendAlpha = 0;


	void PlayAttackAnim();

	//add

	void PlayDashAnim();


	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
};
