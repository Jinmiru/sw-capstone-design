// Fill out your copyright notice in the Description page of Project Settings.


#include "DieWidget.h"
#include "Components/Button.h"
#include "MyProject/MyProjectCharacter.h"
#include "GameFramework/SpectatorPawn.h"//기본 "관전자용 Pawn 클래스
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
//			// 메쉬 숨기기
//			ControlledCharacter->GetMesh()->SetVisibility(false, true);
//			// 충돌 제거 (선택)
//			//ControlledCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//		}
//
//		ControlledPawn->DetachFromControllerPendingDestroy();
//		PC->UnPossess();
//	}
//
//	// 관전자 상태로 전환
//	PC->ChangeState(NAME_Spectating);
//	PC->bAutoManageActiveCameraTarget = true;
//
//	// 기존 SpectatorPawn 없으면 생성
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
//		// FloatingPawnMovement 컴포넌트를 붙여줘야 움직일 수 있음!
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
//			// 입력 모드 전환 (UI → 게임으로)
//		/*	FInputModeGameOnly InputMode;
//			PC->SetInputMode(InputMode);
//			PC->bShowMouseCursor = false;*/
//		}
//	}
//
//	// 위젯 제거
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

