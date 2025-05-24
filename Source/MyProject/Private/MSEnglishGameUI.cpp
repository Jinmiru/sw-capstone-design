// Fill out your copyright notice in the Description page of Project Settings.


#include "MSEnglishGameUI.h"
#include "GameController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"
#include "MyProject/MyProjectCharacter.h"

void UMSEnglishGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UMSEnglishGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UMSEnglishGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UMSEnglishGameUI::OnCloseClicked()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::MS_English);
    }
}

void UMSEnglishGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
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

void UMSEnglishGameUI::SetQuestion(FString NewQuestion, FString Answer)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(NewQuestion));
    }
    CorrectAnswer = Answer;
}

void UMSEnglishGameUI::SetRandomQuestion()
{
    Sentences.Add(TEXT("The sun rises in the east."));
    Sentences.Add(TEXT("Birds sing in the morning."));
    Sentences.Add(TEXT("Flowers bloom in spring."));
    Sentences.Add(TEXT("Children play in the park."));
    Sentences.Add(TEXT("Books tell interesting stories."));
    Sentences.Add(TEXT("Music makes people happy."));
    Sentences.Add(TEXT("Stars shine at night."));
    Sentences.Add(TEXT("Rain falls from the sky."));
    Sentences.Add(TEXT("Mountains stand tall and proud."));
    Sentences.Add(TEXT("Rivers flow to the sea."));

    int32 RandomIndex = FMath::RandRange(0, Sentences.Num() - 1);
    FString RandomSentence = Sentences[RandomIndex];

    SetQuestion(RandomSentence, RandomSentence);
    Sentences.RemoveAt(RandomIndex); // 사용한 문장은 배열에서 제거
}

void UMSEnglishGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UMSEnglishGameUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
        if (PlayerCharacter)//미션 보상
        {
            PlayerCharacter->PlusStat(EPlayerStatType::LinguisticStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::LinguisticStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::SocialSkillStatus);
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

void UMSEnglishGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;      // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
}

