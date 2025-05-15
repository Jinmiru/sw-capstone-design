// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MSMathGameUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMSMathGameUI : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;

    UFUNCTION()
    void OnCloseClicked();      // 닫기 버튼 누를 시 수행

    UFUNCTION()
    void OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod);      // 입력 텍스트 박스를 통한 정답 비교

public:
    UPROPERTY(meta = (BindWidget))
    class UButton* CloseButton;                 // 닫기 버튼

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* QuestionText;             // 문제 내용 텍스트

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* QuestionNumberText;       // 문제 번호 텍스트

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ResultText;               // 게임 결과 텍스트

    UPROPERTY(meta = (BindWidget))
    class UEditableTextBox* AnswerInput;        // 입력 텍스트 박스

    FString CorrectAnswer;
    void UpdateQuestionNumber(int32 QuestionNumber);            // 문제 번호 갱신
    void SetQuestion(FString NewQuestion, FString Answer);      // 생성된 문제를 위젯에 할당
    void SetRandomQuestion();                                   // 문제 랜덤 생성
    void SetAnswerInputFocus();                                 // 답 입력 필드 활성화(포커스)

private:
    int32 CorrectCount;                 // 정답 횟수
    int32 CurrentQuestionNumber;        // 현재 문제 번호
    void EndGame(bool bIsWin);          // bool값(성공 또는 실패)에 따른 게임 결과 처리

};
