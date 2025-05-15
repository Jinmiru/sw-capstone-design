// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnim.generated.h"

//TPS3 ������Ʈ

/**
 * 
 */

UENUM(BlueprintType)
enum class EPlayerAnimState : uint8
{
	Idle        UMETA(DisplayName = "Idle"),
	Run         UMETA(DisplayName = "Run"),
	Jump        UMETA(DisplayName = "Jump"),
	Attack      UMETA(DisplayName = "Attack"),
	Dash	    UMETA(DisplayName = "Dash"),
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
	class UAnimMontage* BaseAttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* PoliceAttackMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* CookAttackMontage;


	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* ArtistAttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* boxerAttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* HealAttackMontage;
	

	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* DashMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = FSM)
	EPlayerAnimState CurrentState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsPlayingAttackMontage = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float BlendAlpha = 0;

	void PlayAttackBaseAnim();
	void PlayAttackPoliceAnim();
	void PlayAttackCookAnim();
	void PlayAttackArtistAnim();
	void PlayAttackboxerAttackAnim();
	void PlayAttackHealAnim();





	void PlayDashAnim();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
};
