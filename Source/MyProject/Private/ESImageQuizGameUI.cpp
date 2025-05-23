// Fill out your copyright notice in the Description page of Project Settings.


#include "ESImageQuizGameUI.h"
#include "GameController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"
#include "MyProject/MyProjectCharacter.h"

void UESImageQuizGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UESImageQuizGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UESImageQuizGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UESImageQuizGameUI::OnCloseClicked()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::ES_ImageQuiz);
    }
}

void UESImageQuizGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
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

void UESImageQuizGameUI::SetQuestion(UTexture2D* NewQuestionImage, FString Answer)
{
    if (QuestionImage)
    {
        QuestionImage->SetBrushFromTexture(NewQuestionImage);
    }
    CorrectAnswer = Answer;
}

void UESImageQuizGameUI::SetRandomQuestion()
{
    // 이미지 파일 경로 및 정답 설정
    ImagePaths = {
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Apple.Apple'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Apple.Apple'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Chair.Chair'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Clock.Clock'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Flower.Flower'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Kimchi.Kimchi'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Moon.Moon'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Star.Star'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Sun.Sun'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/ElementarySchool/Tree.Tree'")
    };

    Answers = {
        TEXT("사과"),
        TEXT("바나나"),
        TEXT("의자"),
        TEXT("시계"),
        TEXT("꽃"),
        TEXT("김치"),
        TEXT("달"),
        TEXT("별"),
        TEXT("태양"),
        TEXT("나무")
    };

    if (ImagePaths.Num() > 0)
    {
        int32 RandomIndex = FMath::RandRange(0, ImagePaths.Num() - 1);
        FString RandomImagePath = ImagePaths[RandomIndex];
        FString RandomAnswer = Answers[RandomIndex];

        UTexture2D* LoadedTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *RandomImagePath));

        if (LoadedTexture)
        {
            SetQuestion(LoadedTexture, RandomAnswer);

            ImagePaths.RemoveAt(RandomIndex);
            Answers.RemoveAt(RandomIndex);
        }
    }
}

void UESImageQuizGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UESImageQuizGameUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
        if (PlayerCharacter)//미션 보상
        {
            PlayerCharacter->PlusStat(EPlayerStatType::SensoryStatus);
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

void UESImageQuizGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;      // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
}