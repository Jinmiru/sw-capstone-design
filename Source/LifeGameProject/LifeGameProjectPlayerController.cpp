// Fill out your copyright notice in the Description page of Project Settings.

#include "LifeGameProjectPlayerController.h"

void ALifeGameProjectPlayerController::BeginPlay()
{
	Super::BeginPlay();
	// 초기화는 필요 시 여기에 추가 가능
}

bool ALifeGameProjectPlayerController::IsPlayingMiniGame() const
{
	return bIsPlayingMiniGame;
}

void ALifeGameProjectPlayerController::SetIsPlayingMiniGame(bool bPlaying)
{
	bIsPlayingMiniGame = bPlaying;
}

void ALifeGameProjectPlayerController::ShowGameUI(EGameUIType UIType)
{
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

void ALifeGameProjectPlayerController::HideGameUI(EGameUIType UIType)
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

void ALifeGameProjectPlayerController::LogMissingBlueprint(EGameUIType UIType)
{
	FString UIName = StaticEnum<EGameUIType>()->GetNameStringByValue(static_cast<int64>(UIType));
	FString Msg = FString::Printf(TEXT("[%s] 블루프린트가 설정되지 않았습니다."), *UIName);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Msg);
}

UUserWidget* ALifeGameProjectPlayerController::GetGameUIInstance(EGameUIType UIType)
{
	if (UUserWidget** FoundWidget = GameUIInstances.Find(UIType))
	{
		return *FoundWidget;
	}
	return nullptr;
}
