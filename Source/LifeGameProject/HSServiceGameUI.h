// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HSServiceGameUI.generated.h"

UCLASS()
class LIFEGAMEPROJECT_API UHSServiceGameUI : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;

    UFUNCTION()
    void OnCloseClicked();

public:
    UPROPERTY(meta = (BindWidget))
    class UButton* CloseButton;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* QuestionText;

    void UpdateQuestionText(int32 Collected, int32 Total);
    void EndGame(bool bIsWin);
    void ShowMessage(const FString& Message);
    void HideSelf(); // 게임 종료 시 UI 닫기
};
