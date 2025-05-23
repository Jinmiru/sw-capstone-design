// Fill out your copyright notice in the Description page of Project Settings.


#include "ESRunningGameUI.h"
#include "GameController.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

void UESRunningGameUI::NativeConstruct()
{
    Super::NativeConstruct();

    ProgressValue = 0.0f;
    InputCount = 0;
    bIsGameRunning = false;

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UESRunningGameUI::OnCloseButtonClicked);
    }

    if (ResultText)
    {
        ResultText->SetVisibility(ESlateVisibility::Hidden); // 시작 시 숨김
    }

    this->SetKeyboardFocus();

    if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
    {
        FInputModeUIOnly InputMode;
        InputMode.SetWidgetToFocus(this->TakeWidget());
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = true;
    }

    StartMiniGame(); // 자동 시작
}

void UESRunningGameUI::StartMiniGame()
{
    ProgressValue = 0.0f;
    InputCount = 0;
    bIsGameRunning = true;

    if (ProgressBar)
    {
        ProgressBar->SetPercent(0.0f);
    }

    if (ResultText)
    {
        ResultText->SetVisibility(ESlateVisibility::Hidden);
    }

    this->SetKeyboardFocus();
}

FReply UESRunningGameUI::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
    if (!bIsGameRunning) return FReply::Unhandled();

    if (InKeyEvent.GetKey() == EKeys::X)
    {
        InputCount++;
        ProgressValue = InputCount / 10.0f;

        if (ProgressBar)
        {
            ProgressBar->SetPercent(ProgressValue);
        }

        if (ProgressValue >= 1.0f)
        {
            HandleSuccess();
        }

        return FReply::Handled();
    }

    return FReply::Unhandled();
}

void UESRunningGameUI::HandleSuccess()
{
    bIsGameRunning = false;

    if (ResultText)
    {
        ResultText->SetText(FText::FromString(TEXT("성공!")));
        ResultText->SetColorAndOpacity(FSlateColor(FLinearColor::Blue));
        ResultText->SetVisibility(ESlateVisibility::Visible);
    }

    // 2초 후 종료
    GetWorld()->GetTimerManager().SetTimer(AutoCloseHandle, FTimerDelegate::CreateLambda([this]()
        {
            EndMiniGame(true);
        }), 2.0f, false);
}

void UESRunningGameUI::HandleFailure()
{
    bIsGameRunning = false;

    if (ResultText)
    {
        ResultText->SetText(FText::FromString(TEXT("실패...")));
        ResultText->SetColorAndOpacity(FSlateColor(FLinearColor::Red));
        ResultText->SetVisibility(ESlateVisibility::Visible);
    }

    GetWorld()->GetTimerManager().SetTimer(AutoCloseHandle, FTimerDelegate::CreateLambda([this]()
        {
            EndMiniGame(false);
        }), 2.0f, false);
}

void UESRunningGameUI::EndMiniGame(bool bIsSuccess)
{
    if (AGameController* PC = Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0)))
    {
        //PC->SetIsPlayingMiniGame(false);
        PC->Server_SetIsPlayingMiniGame(false);
        PC->HideGameUI(EGameUIType::ES_Running);
        PC->SetInputMode(FInputModeGameOnly());
        //PC->bShowMouseCursor = false;
    }

    RemoveFromParent();
}
void UESRunningGameUI::OnCloseButtonClicked()
{
    if (bIsGameRunning)
    {
        HandleFailure(); // 진행 중 닫으면 실패 처리
    }
    else
    {
        EndMiniGame(false); // 이미 끝났으면 바로 닫기
    }
}
