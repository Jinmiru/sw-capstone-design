// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StatusWidget.h"
#include "MyProjectGameMode.generated.h"

UCLASS(minimalapi)
class AMyProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

	
protected:
	virtual void BeginPlay() override;

public:
	AMyProjectGameMode();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UStatusWidget> StatusWidget;

private:
	class UStatusWidget* statusUI;

};



