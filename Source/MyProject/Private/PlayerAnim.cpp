// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnim.h"
#include "MyProject/MyProjectCharacter.h"// MyProjectCharacter.h삽입할때 앞에 위치 확인하기 

#include "GameFramework/CharacterMovementComponent.h"


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
		
	}

}


void UPlayerAnim::PlayAttackAnim()
{
	Montage_Play(AttackMontage);
}