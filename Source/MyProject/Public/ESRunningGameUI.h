// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESRunningGameUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UESRunningGameUI : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;
    virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;

    UFUNCTION()
    void OnCloseButtonClicked();

    void HandleSuccess();
    void HandleFailure();

public:
    UPROPERTY(meta = (BindWidget))
    class UProgressBar* ProgressBar;

    UPROPERTY(meta = (BindWidget))
    class UImage* CharacterImage;

    UPROPERTY(meta = (BindWidget))
    class UButton* CloseButton;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ResultText;

private:
    void StartMiniGame();
    void EndMiniGame(bool bIsSuccess);

    float ProgressValue;
    int32 InputCount;
    bool bIsGameRunning;

    FTimerHandle AutoCloseHandle;
	
};
