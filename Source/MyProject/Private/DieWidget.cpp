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
	APlayerController* PC = GetOwningPlayer();
	if (PC)
	{
		AGameController* MyPC = Cast<AGameController>(PC);
		if (MyPC)
		{
			MyPC->Server_RequestQuitGame();
		}
	}
}

