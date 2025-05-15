// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnim.h"
#include "MyProject/MyProjectCharacter.h"// MyProjectCharacter.h�����Ҷ� �տ� ��ġ Ȯ���ϱ� 

#include "GameFramework/CharacterMovementComponent.h"

static EPlayerAnimState PrevState = EPlayerAnimState::Idle;

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	AMyProjectCharacter* player = Cast<AMyProjectCharacter>(TryGetPawnOwner());
	if (!player) return;

	FVector velocity = player->GetVelocity();
	Speed = velocity.Size(); // �� ����� �κ�: ��ü �ӷ� ���

	auto movement = player->GetCharacterMovement();
	isInAir = movement->IsFalling();

	
	if (Montage_IsPlaying(BaseAttackMontage) || Montage_IsPlaying(CookAttackMontage) || Montage_IsPlaying(PoliceAttackMontage)|| Montage_IsPlaying(ArtistAttackMontage)|| Montage_IsPlaying(HealAttackMontage) || Montage_IsPlaying(boxerAttackMontage))
	{
		bIsPlayingAttackMontage = true;
		BlendAlpha = 1.0f;
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
		if (PrevState == EPlayerAnimState::Run)
		{
			CurrentState = (Speed > 10.f) ? EPlayerAnimState::Run : EPlayerAnimState::Idle;
		}
		else
		{
			CurrentState = (Speed > 150.f) ? EPlayerAnimState::Run : EPlayerAnimState::Idle;
		}
	}

	PrevState = CurrentState; // ���� ���
}



void UPlayerAnim::PlayAttackBaseAnim()
{
	Montage_Play(BaseAttackMontage);
}
void UPlayerAnim::PlayAttackCookAnim()
{
	Montage_Play(CookAttackMontage, 0.8f, EMontagePlayReturnType::MontageLength, 0.f, true);
}
void UPlayerAnim::PlayAttackPoliceAnim()
{
	Montage_Play(PoliceAttackMontage);
}
void UPlayerAnim::PlayAttackArtistAnim()
{
	Montage_Play(ArtistAttackMontage, 1.f, EMontagePlayReturnType::MontageLength, 0.f, true);
}

void UPlayerAnim::PlayAttackboxerAttackAnim()
{
	Montage_Play(boxerAttackMontage, 1.f, EMontagePlayReturnType::MontageLength, 0.f, true);
}
void UPlayerAnim::PlayAttackHealAnim()
{
	Montage_Play(HealAttackMontage, 1.f, EMontagePlayReturnType::MontageLength, 0.f, true);
}


void UPlayerAnim::PlayDashAnim()
{
	Montage_Play(DashMontage);
}

