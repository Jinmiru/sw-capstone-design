// Fill out your copyright notice in the Description page of Project Settings.


#include "HSQuizGameUI.h"
#include "LifeGameProjectPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Math/UnrealMathUtility.h"

void UHSQuizGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UHSQuizGameUI::OnCloseClicked);
    }

    if (AnswerInput)
    {
        AnswerInput->OnTextCommitted.AddDynamic(this, &UHSQuizGameUI::OnAnswerSubmitted);
    }

    CorrectCount = 0;
    CurrentQuestionNumber = 1;
    UpdateQuestionNumber(CurrentQuestionNumber);
    SetRandomQuestion();

    SetAnswerInputFocus();
}

void UHSQuizGameUI::OnCloseClicked()
{
    ALifeGameProjectPlayerController* PlayerController =
        Cast<ALifeGameProjectPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->HideHSQuizGameUI();
    }
}

void UHSQuizGameUI::OnAnswerSubmitted(const FText& Text, ETextCommit::Type CommitMethod)
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

void UHSQuizGameUI::SetQuestion(FString NewQuestion, FString NewChoices, FString Answer)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(NewQuestion));
    }

    if (ChoicesText)
    {
        ChoicesText->SetText(FText::FromString(NewChoices));
    }

    CorrectAnswer = Answer;
}

void UHSQuizGameUI::SetRandomQuestion()
{
    static TArray<FString> Questions = {
        TEXT("다음 중 민주주의 국가의 특징이 아닌 것은?"),
        TEXT("다음 경제 지표 중 물가 상승률을 나타내는 것은?"),
        TEXT("다음 역사적 사건 중 3.1 운동과 관련 있는 것은?"),
        TEXT("다음 중 국제 인권법의 주요 내용이 아닌 것은?"),
        TEXT("다음 중 민주주의 정치 체제의 핵심 원리가 아닌 것은?"),
        TEXT("다음 중 헌법의 기본권에 해당하지 않는 것은?"),
        TEXT("다음 중 사회 복지 정책의 유형이 아닌 것은?"),
        TEXT("다음 중 지속 가능한 발전을 위한 조건이 아닌 것은?"),
        TEXT("다음 중 시장 실패의 원인이 아닌 것은?"),
        TEXT("다음 중 헌법의 기본 원리가 아닌 것은?")
    };

    static TArray<FString> Choices = {
        TEXT("A. 국민 주권, B. 권력 분립, C. 언론 통제, D. 법치주의"),
        TEXT("A. GDP, B. 소비자 물가 지수, C. 실업률, D. 환율"),
        TEXT("A. 임오군란, B. 갑신정변, C. 6.25 전쟁, D. 대한민국 임시 정부 수립"),
        TEXT("A. 생명권 존중, B. 고문 금지, C. 언론의 자유 제한, D. 차별 금지"),
        TEXT("A. 국민 주권, B 권력 분립, C 언론의 자유, D 세습 정치"),
        TEXT("A. 평등권, B. 왕권, C. 사회권, D 자유권"),
        TEXT("A. 조세 감면, B. 사회 보험, C. 공공 부조, D. 사회 서비스"),
        TEXT("A. 환경 보호, B. 경제 성장, C. 사회적 형평성, D. 자원 고갈"),
        TEXT("A. 독과점, B. 공공재 부족, C. 외부 효과 발생, D. 완전 경쟁 시장"),
        TEXT("A. 신분제 사회, B. 권력 분립주의, C. 법치주의, D. 국민 주권주의")
    };

    static TArray<FString> Answers = {
        TEXT("C"),
        TEXT("B"),
        TEXT("D"),
        TEXT("C"),
        TEXT("D"),
        TEXT("B"),
        TEXT("A"),
        TEXT("D"),
        TEXT("C"),
        TEXT("A")
    };

    int32 CurrentQuestionIndex = FMath::RandRange(0, Questions.Num() - 1);
    SetQuestion(Questions[CurrentQuestionIndex], Choices[CurrentQuestionIndex], Answers[CurrentQuestionIndex]);

    // 사용한 문제는 배열에서 제거
    Questions.RemoveAt(CurrentQuestionIndex);
    Choices.RemoveAt(CurrentQuestionIndex);
    Answers.RemoveAt(CurrentQuestionIndex);
}

void UHSQuizGameUI::UpdateQuestionNumber(int32 QuestionNumber)
{
    if (QuestionNumberText)
    {
        QuestionNumberText->SetText(FText::FromString(FString::Printf(TEXT("문제: %d/5"), QuestionNumber)));
    }
}

void UHSQuizGameUI::EndGame(bool bIsWin)
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

void UHSQuizGameUI::SetAnswerInputFocus()
{
    FTimerHandle FocusTimerHandle;      // 입력 필드 활성화용 변수

    // 약간의 지연 후 입력 필드 다시 포커스 설정
    GetWorld()->GetTimerManager().SetTimer(FocusTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            AnswerInput->SetKeyboardFocus();
        }), 0.1f, false);
}
