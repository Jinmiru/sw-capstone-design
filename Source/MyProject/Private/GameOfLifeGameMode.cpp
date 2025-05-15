// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOfLifeGameMode.h"
#include "StatusWidget.h"



void AGameOfLifeGameMode::BeginPlay() {
	
	Super::BeginPlay();

	ChangeMenuWidget(StatusWidget);
	
	UE_LOG(LogTemp, Warning, TEXT("ccc"));
}

void AGameOfLifeGameMode::ChangeMenuWidget(TSubclassOf<UStatusWidget> NewWidgetClass) {
	if (CurrentWidget != nullptr) {
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}
	if (NewWidgetClass != nullptr) {
		CurrentWidget = CreateWidget<UStatusWidget>(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr) {
			CurrentWidget->AddToViewport();
		}
	}
}

