// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnim.h"
#include "MyProject/MyProjectCharacter.h"// MyProjectCharacter.h삽입할때 앞에 위치 확인하기 

#include "GameFramework/CharacterMovementComponent.h"

static EPlayerAnimState PrevState = EPlayerAnimState::Idle;

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	//AMyProjectCharacter
	auto ownerPawn = TryGetPawnOwner();
	AMyProjectCharacter* player = Cast<AMyProjectCharacter>(ownerPawn);
	if (player) {
		FVector velocity = player->GetVelocity();
		FVector forwardVector = player->GetActorForwardVector();
		Speed = FVector::DotProduct(forwardVector, velocity);

		FVector rightVector = player->GetActorRightVector();
		direction = FVector::DotProduct(rightVector, velocity);

		auto movement = player->GetCharacterMovement();
		isInAir = movement->IsFalling();

		if (AttackMontage && Montage_IsPlaying(AttackMontage))
		{
			bIsPlayingAttackMontage = true;
			BlendAlpha = 1.0f;
			// 현재 몽타주 재생 중이면 상태 고정
			return;
		}
		else
		{
			bIsPlayingAttackMontage = false;
			BlendAlpha = 0.0f;
		}


		if (isInAir)
		{
			CurrentState = EPlayerAnimState::Jump;
		}
		else
		{
			// Hysteresis 적용
			if (PrevState == EPlayerAnimState::Run)
			{
				CurrentState = (Speed > 10.f) ? EPlayerAnimState::Run : EPlayerAnimState::Idle;
			}
			else // Idle이거나 다른 상태였던 경우
			{
				CurrentState = (Speed > 300.f) ? EPlayerAnimState::Run : EPlayerAnimState::Idle;
			}
		}
		
	}

}


void UPlayerAnim::PlayAttackAnim()
{
	if (AttackMontage)
	{
		Montage_Play(AttackMontage);
		CurrentState = EPlayerAnimState::Attack;
	}
}