// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "HPWidget.generated.h"

/**
 * 
 */

class AMyProjectCharacter;

UCLASS()
class MYPROJECT_API UHPWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:



	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HPBar;

	UFUNCTION(BlueprintCallable)
	void GetPlayerHP();


	UFUNCTION(BlueprintCallable)
	void UpdateHPBar(int32 Hp1);

	int32 HP;

};
