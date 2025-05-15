// Fill out your copyright notice in the Description page of Project Settings.


#include "DieWidget.h"
#include "Components/Button.h"
#include "MyProject/MyProjectCharacter.h"
#include "GameFramework/SpectatorPawn.h"//�⺻ "�����ڿ� Pawn Ŭ����
#include "GameController.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/KismetSystemLibrary.h"
void UDieWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (WatchingButton)
	{
		WatchingButton->OnClicked.AddDynamic(this, &UDieWidget::OnWatchingClicked);
	}
	if (ExitButton)
	{
		ExitButton->OnClicked.AddDynamic(this, &UDieWidget::OnExitClicked);
	}
}

//void UDieWidget::OnWatchingClicked()
//{
//	APlayerController* PC = GetWorld()->GetFirstPlayerController();
//	if (!PC) return;
//
//	APawn* ControlledPawn = PC->GetPawn();
//	if (ControlledPawn)
//	{
//		ACharacter* ControlledCharacter = Cast<ACharacter>(ControlledPawn);
//		if (ControlledCharacter)
//		{
//			// �޽� �����
//			ControlledCharacter->GetMesh()->SetVisibility(false, true);
//			// �浹 ���� (����)
//			//ControlledCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//		}
//
//		ControlledPawn->DetachFromControllerPendingDestroy();
//		PC->UnPossess();
//	}
//
//	// ������ ���·� ��ȯ
//	PC->ChangeState(NAME_Spectating);
//	PC->bAutoManageActiveCameraTarget = true;
//
//	// ���� SpectatorPawn ������ ����
//	ASpectatorPawn* Spectator = PC->GetSpectatorPawn();
//	if (!Spectator)
//	{
//		FActorSpawnParameters SpawnParams;
//		SpawnParams.Owner = PC;
//
//		Spectator = GetWorld()->SpawnActor<ASpectatorPawn>(
//			ASpectatorPawn::StaticClass(),
//			ControlledPawn ? ControlledPawn->GetActorLocation() : FVector::ZeroVector,
//			FRotator::ZeroRotator,
//			SpawnParams
//		);
//
//		// FloatingPawnMovement ������Ʈ�� �ٿ���� ������ �� ����!
//		if (Spectator)
//		{
//			UFloatingPawnMovement* MovementComp = NewObject<UFloatingPawnMovement>(Spectator);
//			if (MovementComp)
//			{
//				MovementComp->RegisterComponent();
//				MovementComp->UpdatedComponent = Spectator->GetRootComponent();
//			}
//
//			PC->Possess(Spectator);
//
//			// �Է� ��� ��ȯ (UI �� ��������)
//		/*	FInputModeGameOnly InputMode;
//			PC->SetInputMode(InputMode);
//			PC->bShowMouseCursor = false;*/
//		}
//	}
//
//	// ���� ����
//	RemoveFromParent();
//}

void UDieWidget::OnWatchingClicked()
{
	AGameController* PC = Cast<AGameController>(GetWorld()->GetFirstPlayerController());
	if (PC)
	{
		PC->Server_RequestSpectator();
		RemoveFromParent();
	}
}


void UDieWidget::OnExitClicked()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		AGameController* MyPC = Cast<AGameController>(PC);
		if (MyPC)
		{
			MyPC->Server_RequestQuitGame();
		}
	}
}

