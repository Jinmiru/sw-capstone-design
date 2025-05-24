// Fill out your copyright notice in the Description page of Project Settings.


#include "MSMathGameUI.h"
#include "GameController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"
#include "MyProject/MyProjectCharacter.h"

void UMSMathGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UMSMathGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UMSMathGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UMSMathGameUI::OnCloseClicked()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::MS_Math);
    }
}

void UMSMathGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
{
    if (CommitMethod == ETextCommit::OnEnter)
    {
        FString PlayerAnswer = Text.ToString();

        if (PlayerAnswer.Equals(CorrectAnswer, ESearchCase::IgnoreCase))
        {
            ResultText->SetText(FText::FromString(TEXT("정답!")));
            ResultText->SetColorAndOpacity(FSlateColor(FLinearColor::Green));
            CorrectCount++;

            if (CorrectCount >= 5)
            {
                EndGame(true);
                return;
            }

            CurrentQuestionNumber++;
            UpdateQuestionNumber(CurrentQuestionNumber);
            SetRandomQuestion();

            AnswerInput->SetText(FText::FromString(TEXT("")));      // 정답 입력 후 입력 필드 비우기

            SetAnswerInputFocus();
        }
        else
        {
            ResultText->SetText(FText::FromString(TEXT("오답")));
            ResultText->SetColorAndOpacity(FSlateColor(FLinearColor::Red));

            SetAnswerInputFocus();
        }
    }
}

void UMSMathGameUI::SetQuestion(FString NewQuestion, FString Answer)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(NewQuestion));
    }
    CorrectAnswer = Answer;
}

void UMSMathGameUI::SetRandomQuestion()
{
    int32 A = FMath::RandRange(1, 100);
    int32 B = FMath::RandRange(1, 100);
    bool bIsXFirst = (FMath::RandRange(0, 1) == 0);
    bool bIsAddition = (FMath::RandRange(0, 1) == 0);

    FString Question;
    int32 Answer;

    if (bIsXFirst)
    {
        if (bIsAddition)
        {
            // X + A = B 형태
            // B가 A보다 크거나 같아야 X가 양수
            if (B >= A)
            {
                Question = FString::Printf(TEXT("X + %d = %d, X = ?"), A, B);
                Answer = B - A;
            }
            else
            {
                // B가 A보다 작으면 A와 B를 교환하여 X가 양수가 되도록 함
                Question = FString::Printf(TEXT("X + %d = %d, X = ?"), B, A);
                Answer = A - B;
            }
        }
        else
        {
            // X - A = B 형태
            // B와 A 모두 양수이므로 X는 항상 양수
            Question = FString::Printf(TEXT("X - %d = %d, X = ?"), A, B);
            Answer = B + A;
        }
    }
    else
    {
        if (bIsAddition)
        {
            // A + X = B 형태
            // B가 A보다 크거나 같아야 X가 양수
            if (B >= A)
            {
                Question = FString::Printf(TEXT("%d + X = %d, X = ?"), A, B);
                Answer = B - A;
            }
            else
            {
                // B가 A보다 작으면 A와 B를 교환하여 X가 양수가 되도록 함
                Question = FString::Printf(TEXT("%d + X = %d, X = ?"), B, A);
                Answer = A - B;
            }
        }
        else
        {
            // A - X = B 형태
            // A가 B보다 커야 X가 양수
            if (A >= B)
            {
                Question = FString::Printf(TEXT("%d - X = %d, X = ?"), A, B);
                Answer = A - B;
            }
            else
            {
                // A가 B보다 작으면 A와 B를 교환하여 X가 양수가 되도록 함
                Question = FString::Printf(TEXT("%d - X = %d, X = ?"), B, A);
                Answer = B - A;
            }
        }
    }
    SetQuestion(Question, FString::FromInt(Answer));
}

void UMSMathGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UMSMathGameUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
        if (PlayerCharacter)//미션 보상
        {
            PlayerCharacter->PlusStat(EPlayerStatType::LogicStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::LogicStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::MentalStrengthStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::AgeStatus);

        }
        ResultText->SetText(FText::FromString(TEXT("성공!")));
        ResultText->SetColorAndOpacity(FSlateColor(FLinearColor::Blue));
    }
    else
    {
        ResultText->SetText(FText::FromString(TEXT("실패...")));
        ResultText->SetColorAndOpacity(FSlateColor(FLinearColor::Red));
    }

    FTimerHandle EndTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(EndTimerHandle, FTimerDelegate::CreateLambda([this]() {
        OnCloseClicked();
        }), 2.0f, false);
}

void UMSMathGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;      // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
} // ← 이 중괄호가 없었음!
