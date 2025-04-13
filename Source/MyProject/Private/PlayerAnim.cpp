// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnim.h"
#include "MyProject/MyProjectCharacter.h"// MyProjectCharacter.h�����Ҷ� �տ� ��ġ Ȯ���ϱ� 

#include "GameFramework/CharacterMovementComponent.h"

//35 ~ 46�� �뽬������߰�
//81 ~87�� �뽬 ��Ÿ�� �����Լ�


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
		
		if (Montage_IsPlaying(AttackMontage))
		{
			bIsPlayingAttackMontage = true;
			BlendAlpha = 1.0f;
		}
		else if (Montage_IsPlaying(DashMontage))
		{
			bIsPlayingDashMontage = true;
			BlendAlpha = 1.0f;
		}
		else
		{
			bIsPlayingDashMontage = true;
			bIsPlayingAttackMontage = false;
			BlendAlpha = 0.0f;
		}


		if (isInAir)
		{
			CurrentState = EPlayerAnimState::Jump;
		}
		else
		{
			// Hysteresis ����
			if (PrevState == EPlayerAnimState::Run)
			{
				CurrentState = (Speed > 10.f) ? EPlayerAnimState::Run : EPlayerAnimState::Idle;
			}
			else // Idle�̰ų� �ٸ� ���¿��� ���
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

void UPlayerAnim::PlayDashAnim()
{
	if (DashMontage)
	{
		Montage_Play(DashMontage);
	}
}