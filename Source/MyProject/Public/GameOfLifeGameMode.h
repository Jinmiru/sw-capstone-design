// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StatusWidget.h"
#include "GameOfLifeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AGameOfLifeGameMode : public AGameModeBase
{
	GENERATED_BODY()
	



protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG_STATUS")
	TSubclassOf<UStatusWidget> StatusWidget;

	UPROPERTY()
	UUserWidget* CurrentWidget;

public:

	void ChangeMenuWidget(TSubclassOf<UStatusWidget> NewWidgetClass);
};
