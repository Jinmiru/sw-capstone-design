// Fill out your copyright notice in the Description page of Project Settings.


#include "GameController.h"
#include "Net/UnrealNetwork.h"
#include "ESServiceGameUI.h"
void AGameController::BeginPlay()
{
	Super::BeginPlay();
}

bool AGameController::IsPlayingMiniGame() const
{
	return bIsPlayingMiniGame;
}

void AGameController::SetIsPlayingMiniGame(bool bPlaying) // 미니게임 상태를 설정
{
	UE_LOG(LogTemp, Warning, TEXT("SetIsPlayingMiniGame: %s"), bPlaying ? TEXT("true") : TEXT("false"));
	bIsPlayingMiniGame = bPlaying;
}

void AGameController::Server_SetIsPlayingMiniGame_Implementation(bool bPlaying)
{
	SetIsPlayingMiniGame(bPlaying);
}
bool AGameController::Server_SetIsPlayingMiniGame_Validate(bool bPlaying)
{
	return true;
}
void AGameController::ShowGameUI(EGameUIType UIType)
{
	if (!IsLocalController())
	{
		UE_LOG(LogTemp, Warning, TEXT("ShowGameUI called on non-local controller."));
		return;
	}

	if (GameUIInstances.Contains(UIType) && GameUIInstances[UIType] != nullptr)
	{
		GameUIInstances[UIType]->AddToViewport();
		return;
	}

	if (TSubclassOf<UUserWidget>* FoundClass = GameUIClasses.Find(UIType))
	{
		if (*FoundClass != nullptr)
		{
			UUserWidget* Widget = CreateWidget<UUserWidget>(this, *FoundClass);
			if (Widget)
			{
				GameUIInstances.Add(UIType, Widget);
				Widget->AddToViewport();
			}
		}
		else
		{
			LogMissingBlueprint(UIType);
		}
	}
}


void AGameController::HideGameUI(EGameUIType UIType)
{
	if (UUserWidget** WidgetPtr = GameUIInstances.Find(UIType))
	{
		if (UUserWidget* Widget = *WidgetPtr)
		{
			Widget->RemoveFromParent();
			Widget->Destruct();
			GameUIInstances[UIType] = nullptr;
		}
	}
}

void AGameController::LogMissingBlueprint(EGameUIType UIType)
{
	FString UIName = StaticEnum<EGameUIType>()->GetNameStringByValue(static_cast<int64>(UIType));
	FString Msg = FString::Printf(TEXT("[%s] 블루프린트가 설정되지 않았습니다."), *UIName);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Msg);
}

UUserWidget* AGameController::GetGameUIInstance(EGameUIType UIType)
{
	if (UUserWidget** FoundWidget = GameUIInstances.Find(UIType))
	{
		return *FoundWidget;
	}
	return nullptr;
}

void AGameController::Client_ShowGameUI_Implementation(EGameUIType Type)
{
	ShowGameUI(Type); // 
}

void AGameController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGameController, bIsPlayingMiniGame);
}

void AGameController::Client_UpdateServiceUI_Implementation(int32 Current, int32 Max)
{
	if (UESServiceGameUI* UI = Cast<UESServiceGameUI>(GetGameUIInstance(EGameUIType::ES_Service)))
	{
		UI->UpdateQuestionText(Current, Max);
	}
}

void AGameController::Client_EndServiceGame_Implementation(bool bWin)
{
	if (UESServiceGameUI* UI = Cast<UESServiceGameUI>(GetGameUIInstance(EGameUIType::ES_Service)))
	{
		UI->EndGame(bWin);
	}
}
