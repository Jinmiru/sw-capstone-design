// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LibraryUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ULibraryUI : public UUserWidget
{
	GENERATED_BODY()
protected:
    virtual void NativeOnInitialized() override;

    UFUNCTION()
    void OnCloseClicked();      // �ݱ� ��ư ���� �� ����

public:
    UPROPERTY(meta = (BindWidget))
    class UButton* CloseButton;                 // �ݱ� ��ư

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* QuestionText;             // ���� ���� �ؽ�Ʈ

    void UpdateQuestionText(int32 CollectedBookCount, int32 TotalBookCount);     // ���� ���� ���� �� ����

    void EndGame(bool bIsWin);      // bool��(���� �Ǵ� ����)�� ���� ���� ��� ó��



    void HideSelf();

};
