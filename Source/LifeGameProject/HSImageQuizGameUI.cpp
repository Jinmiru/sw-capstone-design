// Fill out your copyright notice in the Description page of Project Settings.


#include "HSImageQuizGameUI.h"
#include "LifeGameProjectPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"

void UHSImageQuizGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UHSImageQuizGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UHSImageQuizGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UHSImageQuizGameUI::OnCloseClicked()
{
    ALifeGameProjectPlayerController* PlayerController =
        Cast<ALifeGameProjectPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::HS_ImageQuiz);
    }
}

void UHSImageQuizGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
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

void UHSImageQuizGameUI::SetQuestion(UTexture2D* NewQuestionImage, FString NewQuestion, FString Answer)
{
    
    if (QuestionImage)
    {
        QuestionImage->SetBrushFromTexture(NewQuestionImage);
    }
    
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(NewQuestion));
    }

    CorrectAnswer = Answer;
}

void UHSImageQuizGameUI::SetRandomQuestion()
{
    
    // 이미지 파일 경로 및 정답 설정
    ImagePaths = {
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/TheStarryNight.TheStarryNight"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/WeepingWoman.WeepingWoman"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/Daedongyeojido.Daedongyeojido"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/Sundial.Sundial"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/TurtleShip.TurtleShip"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/StatueOfLiberty.StatueOfLiberty"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/SydneyOperaHouse.SydneyOperaHouse"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/EiffelTower.EiffelTower"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/BigBen.BigBen"),
        TEXT("/Game/MyAssets/Images/ImageQuizGame/HighSchool/SaintBasilsCathedral.SaintBasilsCathedral")
    };

    Questions = {
        TEXT("좌측 그림을 그린 인물의 이름은?"),
        TEXT("좌측 그림을 그린 인물의 이름은?"),
        TEXT("좌측 지도를 제작한 인물의 이름은?"),
        TEXT("좌측 발명품을 만든 인물의 이름은?"),
        TEXT("좌측 군함으로 유명한 인물의 이름은?"),
        TEXT("좌측 건축물이 위치한 국가는?"),
        TEXT("좌측 건축물이 위치한 국가는?"),
        TEXT("좌측 건축물이 위치한 국가는?"),
        TEXT("좌측 건축물이 위치한 국가는?"),
        TEXT("좌측 건축물이 위치한 국가는?")
    };

    Answers = {
        TEXT("고흐"),
        TEXT("피카소"),
        TEXT("김정호"),
        TEXT("장영실"),
        TEXT("이순신"),
        TEXT("미국"),
        TEXT("호주"),
        TEXT("프랑스"),
        TEXT("영국"),
        TEXT("러시아")
    };

    if (ImagePaths.Num() > 0)
    {
        int32 RandomIndex = FMath::RandRange(0, ImagePaths.Num() - 1);
        FString RandomImagePath = ImagePaths[RandomIndex];
        FString RandomQuestion = Questions[RandomIndex];
        FString RandomAnswer = Answers[RandomIndex];

        UTexture2D* LoadedTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *RandomImagePath));

        if (LoadedTexture)
        {
            SetQuestion(LoadedTexture, RandomQuestion, RandomAnswer);

            ImagePaths.RemoveAt(RandomIndex);
            Questions.RemoveAt(RandomIndex);
            Answers.RemoveAt(RandomIndex);
        }
    }
}

void UHSImageQuizGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UHSImageQuizGameUI::EndGame(bool bIsWin)
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

void UHSImageQuizGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;      // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
}

