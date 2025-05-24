// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DoctorUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UDoctorUI : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;

    UFUNCTION()
    void OnCloseClicked();      // 닫기 버튼 누를 시 수행

public:
    UPROPERTY(meta = (BindWidget))
    class UButton* CloseButton;                 // 닫기 버튼

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* QuestionText;             // 문제 내용 텍스트

    void UpdateQuestionText(int32 CollectedTrashCount);     // 문제 내용 생성 및 갱신

    void EndGame(bool bIsWin);      // bool값(성공 또는 실패)에 따른 게임 결과 처리



    void HideSelf();
	
};
