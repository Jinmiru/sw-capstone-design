// Fill out your copyright notice in the Description page of Project Settings.


#include "MSImageQuizGameUI.h"
#include "MyProject/MyProjectCharacter.h"
#include "GameController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"

void UMSImageQuizGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UMSImageQuizGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UMSImageQuizGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UMSImageQuizGameUI::OnCloseClicked()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::MS_ImageQuiz);
    }
}

void UMSImageQuizGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
{
    if (CommitMethod == ETextCommit::OnEnter)
    {
        FString PlayerAnswer = Text.ToString();

        if (PlayerAnswer.Equals(CorrectAnswer, ESearchCase::IgnoreCase))
        {
            FString QuizText = TEXT("이것은 퀴즈입니다");

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

void UMSImageQuizGameUI::SetQuestion(UTexture2D* NewQuestionImage, FString Answer)
{
    if (QuestionImage)
    {
        QuestionImage->SetBrushFromTexture(NewQuestionImage);
    }
    CorrectAnswer = Answer;
}

void UMSImageQuizGameUI::SetRandomQuestion()
{
    // 이미지 파일 경로 및 정답 설정
    ImagePaths = {
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/IsaacNewton.IsaacNewton'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/AlbertEinstein.AlbertEinstein'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/MahatmaGandi.MahatmaGandi'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/TajMahal.TajMahal'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/GreatWallOfChina.GreatWallOfChina'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/Pyramid.Pyramid'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/Colosseum.Colosseum'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/SolarSystem.SolarSystem'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/Cell.Cell'"),
        TEXT("/Script/Engine.Texture2D'/Game/Images/ImageQuizGame/MiddleSchool/Gene.Gene'")
    };

    Answers = {
        TEXT("뉴턴"),
        TEXT("아인슈타인"),
        TEXT("간디"),
        TEXT("타지마할"),
        TEXT("만리장성"),
        TEXT("피라미드"),
        TEXT("콜로세움"),
        TEXT("태양계"),
        TEXT("세포"),
        TEXT("유전자")
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

void UMSImageQuizGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UMSImageQuizGameUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
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

void UMSImageQuizGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;      // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
}
