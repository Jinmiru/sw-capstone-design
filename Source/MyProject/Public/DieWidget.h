// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/SpectatorPawn.h" // 여기도 필요!

#include "DieWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UDieWidget : public UUserWidget
{
	GENERATED_BODY()
	

public :
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* WatchingButton;                 // 닫기 버튼

	UPROPERTY(meta = (BindWidget))
	class UButton* ExitButton;                 // 닫기 버튼

	UFUNCTION()
	void OnWatchingClicked();      // 닫기 버튼 누를 시 수행
	UFUNCTION()
	void OnExitClicked();      // 닫기 버튼 누를 시 수행



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spectator")
	TSubclassOf<ASpectatorPawn> SpectatorPawnClass;

};
