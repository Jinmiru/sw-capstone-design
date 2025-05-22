// Fill out your copyright notice in the Description page of Project Settings.


#include "HSMathGameUI.h"
#include "GameController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"
#include "Myproject/MyProjectCharacter.h"

void UHSMathGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UHSMathGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UHSMathGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UHSMathGameUI::OnCloseClicked()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::HS_Math);
    }
}

void UHSMathGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
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

            AnswerInput->SetText(FText::FromString(TEXT("")));      // 정답 비교 후 입력 필드 비우기

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

void UHSMathGameUI::SetQuestion(FString NewQuestion, FString Answer)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(NewQuestion));
    }
    CorrectAnswer = Answer;
}

void UHSMathGameUI::SetRandomQuestion()
{
    int32 questionType = FMath::RandRange(0, 1);
    if (questionType == 0)
    {
        GenerateRandomExponentialQuestion();
    }
    else
    {
        GenerateRandomLogarithmicQuestion();
    }
}

void UHSMathGameUI::GenerateRandomExponentialQuestion()
{
    FString Question;
    int32 Answer;

    int32 baseInt = FMath::RandRange(2, 10);
    int32 exponentInt = 2;
    float base = static_cast<float>(baseInt);
    float exponent = static_cast<float>(exponentInt);

    Question = FString::Printf(TEXT("%d^%d = ?"), baseInt, exponentInt);
    Answer = static_cast<int32>(FMath::Pow(base, exponent));


    SetQuestion(Question, FString::FromInt(Answer));
}


void UHSMathGameUI::GenerateRandomLogarithmicQuestion()
{
    FString Question;

    int32 baseInt = FMath::RandRange(2, 10);
    int32 powerInt = FMath::RandRange(2, 3);
    float base = static_cast<float>(baseInt);
    float power = static_cast<float>(powerInt);
    int32 value = static_cast<int32>(FMath::Pow(base, power));

    Question = FString::Printf(TEXT("log_%d(%d) = ?"), baseInt, value);

    SetQuestion(Question, FString::FromInt(powerInt));
}

void UHSMathGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UHSMathGameUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
        if (PlayerCharacter)//미션 보상
        {
            PlayerCharacter->PlusStat(EPlayerStatType::LogicStatus);
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

void UHSMathGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;      // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
}

