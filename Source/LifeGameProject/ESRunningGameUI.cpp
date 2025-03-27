// Fill out your copyright notice in the Description page of Project Settings.

#include "ESRunningGameUI.h"
#include "LifeGameProjectPlayerController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerInput.h"

void UESRunningGameUI::NativeConstruct()
{
    Super::NativeConstruct();

    ProgressValue = 0.0f;
    CharacterPosition = FVector2D(0.0f, 0.0f);
    RunningSpeed = 0.0f;
    InputCount = 0;
    LastInput = NAME_None;
    IsGameRunning = false;

    // UI 요소 초기 설정
    if (ResultText)
    {
        ResultText->SetVisibility(ESlateVisibility::Hidden);  // 처음에는 숨김
    }

    if (StartButton)
    {
        StartButton->OnClicked.AddDynamic(this, &UESRunningGameUI::OnStartButtonClicked);
    }

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UESRunningGameUI::OnCloseButtonClicked);
    }

    // 키 입력 바인딩
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PlayerController && PlayerController->InputComponent)
    {
        PlayerController->InputComponent->BindAction("A", IE_Pressed, this, &UESRunningGameUI::OnKeyDownA);
        PlayerController->InputComponent->BindAction("D", IE_Pressed, this, &UESRunningGameUI::OnKeyDownD);
    }


}

void UESRunningGameUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    if (IsGameRunning)
    {
        // 속도 감소 (입력 없을 경우 서서히 줄어듦)
        RunningSpeed = FMath::Max(RunningSpeed - (0.02f * InDeltaTime), 0.0f);

        // 진행도 업데이트
        ProgressValue += RunningSpeed * InDeltaTime;
        ProgressValue = FMath::Clamp(ProgressValue, 0.0f, 1.0f);

        // UI 업데이트
        if (ProgressBar)
        {
            ProgressBar->SetPercent(ProgressValue);
        }

        if (CharacterImage)
        {
            CharacterPosition.X = ProgressValue * ProgressBar->GetDesiredSize().X;
            CharacterImage->SetRenderTranslation(CharacterPosition);
        }

        // 게임 성공 조건
        if (ProgressValue >= 1.0f)
        {
            IsGameRunning = false;
            if (ResultText)
            {
                ResultText->SetText(FText::FromString(TEXT("성공!"))); // 성공 메시지 표시
                ResultText->SetColorAndOpacity(FSlateColor(FLinearColor::Blue));
                ResultText->SetVisibility(ESlateVisibility::Visible); // 텍스트 표시
            }
        }
    }
}

void UESRunningGameUI::OnStartButtonClicked()
{
    IsGameRunning = true;
    ProgressValue = 0.0f;
    RunningSpeed = 0.0f;
    InputCount = 0;
    LastInput = NAME_None;

    // UI 초기화
    if (ResultText)
    {
        ResultText->SetVisibility(ESlateVisibility::Hidden);
    }
}

void UESRunningGameUI::OnCloseButtonClicked()
{
    IsGameRunning = false;  // 게임 중지

    ALifeGameProjectPlayerController* PlayerController =
        Cast<ALifeGameProjectPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->SetIsPlayingMiniGame(false);
        PlayerController->HideGameUI(EGameUIType::ES_Running);
    }
}

void UESRunningGameUI::OnKeyDownA()
{
    if (IsGameRunning)
    {
        InputCount++;
        if (LastInput == "D")
        {
            RunningSpeed = FMath::Clamp(RunningSpeed + 0.01f, 0.0f, 1.0f);
        }
        LastInput = "A";
    }
}

void UESRunningGameUI::OnKeyDownD()
{
    if (IsGameRunning)
    {
        InputCount++;
        if (LastInput == "A")
        {
            RunningSpeed = FMath::Clamp(RunningSpeed + 0.01f, 0.0f, 1.0f);
        }
        LastInput = "D";
    }
}
