// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESRunningGameUI.generated.h"

/**
 * 
 */
UCLASS()
class LIFEGAMEPROJECT_API UESRunningGameUI : public UUserWidget
{
	GENERATED_BODY()

public:
    UPROPERTY(meta = (BindWidget))
    class UProgressBar* ProgressBar;

    UPROPERTY(meta = (BindWidget))
    class UImage* CharacterImage;

    UPROPERTY(meta = (BindWidget))
    class UButton* StartButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* CloseButton;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ResultText;

protected:
    virtual void NativeConstruct() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    UFUNCTION()
    void OnStartButtonClicked();

    UFUNCTION()
    void OnCloseButtonClicked();

    UFUNCTION()
    void OnKeyDownA();

    UFUNCTION()
    void OnKeyDownD();

private:
    float ProgressValue;
    FVector2D CharacterPosition;
    float RunningSpeed;
    int32 InputCount;
    FName LastInput;
    bool IsGameRunning;
	
};
