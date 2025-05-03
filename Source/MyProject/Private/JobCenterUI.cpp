// Fill out your copyright notice in the Description page of Project Settings.


#include "JobCenterUI.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "GameController.h"
void UJobCenterUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UJobCenterUI::OnCloseClicked);
	}

	if (PoliceButton)
	{
		PoliceButton->OnClicked.AddDynamic(this, &UJobCenterUI::PoliceMission);
	}
	if (CookButton)
	{
		CookButton->OnClicked.AddDynamic(this, &UJobCenterUI::CookMission);
	}
	if (BoxerButton)
	{
		BoxerButton->OnClicked.AddDynamic(this, &UJobCenterUI::BoxerMission);
	}
	if (DoctorButton)
	{
		DoctorButton->OnClicked.AddDynamic(this, &UJobCenterUI::DoctorMission);
	}
	if (ArtistButton)
	{
		ArtistButton->OnClicked.AddDynamic(this, &UJobCenterUI::ArtistMission);
	}


}


void UJobCenterUI::PoliceMission()
{
	
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (PlayerController)
	{
		PlayerController->SetIsPlayingMiniGame(false);
		PlayerController->HideGameUI(EGameUIType::JobCenter);
	}
}

void UJobCenterUI::CookMission()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (PlayerController)
	{
		PlayerController->SetIsPlayingMiniGame(false);
	}
}
void UJobCenterUI::BoxerMission()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (PlayerController)
	{
		PlayerController->SetIsPlayingMiniGame(false);
	}
}
void UJobCenterUI::DoctorMission()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (PlayerController)
	{
		PlayerController->SetIsPlayingMiniGame(false);
		//g함수구현~~~~~
	}
}
void UJobCenterUI::ArtistMission()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (PlayerController)
	{
		PlayerController->SetIsPlayingMiniGame(false);
	}
}



void UJobCenterUI::OnCloseClicked()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	if (PlayerController)
	{
		PlayerController->Server_SetIsPlayingMiniGame(false);
		PlayerController->HideGameUI(EGameUIType::JobCenter);
	}
}