// Fill out your copyright notice in the Description page of Project Settings.


#include "ESDictationGameUI.h"
#include "GameController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"
#include "Myproject/MyProjectCharacter.h"


void UESDictationGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UESDictationGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UESDictationGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UESDictationGameUI::OnCloseClicked()
{
    
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::ES_Dictation);
    }
}

void UESDictationGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
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

            AnswerInput->SetText(FText::FromString(TEXT("")));     // 정답 비교 후 입력 필드 비우기

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

void UESDictationGameUI::SetQuestion(FString NewQuestion, FString Answer)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(NewQuestion));
    }
    CorrectAnswer = Answer;
}

// 미리 입력된 문장 10개 중 랜덤으로 받아쓰기용 문장을 선정, 사용한 문장은 재선정 안 함
void UESDictationGameUI::SetRandomQuestion()
{
    Sentences.Add(TEXT("하늘이 맑고 푸르다."));
    Sentences.Add(TEXT("강아지가 꼬리를 흔든다."));
    Sentences.Add(TEXT("학교 가는 길이 즐겁다."));
    Sentences.Add(TEXT("맛있는 빵을 먹었다."));
    Sentences.Add(TEXT("책을 읽으며 마음을 달랬다."));
    Sentences.Add(TEXT("아름다운 노을이 진다."));
    Sentences.Add(TEXT("친구와 함께 웃었다."));
    Sentences.Add(TEXT("따뜻한 햇살이 비친다."));
    Sentences.Add(TEXT("새들이 지저귄다."));
    Sentences.Add(TEXT("바람이 시원하게 분다."));


    int32 RandomIndex = FMath::RandRange(0, Sentences.Num() - 1);
    FString RandomSentence = Sentences[RandomIndex];

    SetQuestion(RandomSentence, RandomSentence);
    Sentences.RemoveAt(RandomIndex); // 사용한 문장은 배열에서 제거
}

void UESDictationGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UESDictationGameUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
		AMyProjectCharacter*    PlayerCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
		if (PlayerCharacter)//미션 보상
		{
		  PlayerCharacter->PlusStat(EPlayerStatType::SensoryStatus);
          PlayerCharacter->PlusStat(EPlayerStatType::LinguisticStatus);
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

void UESDictationGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;       // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
}
