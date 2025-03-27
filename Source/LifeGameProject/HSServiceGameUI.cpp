// Fill out your copyright notice in the Description page of Project Settings.


#include "HSServiceGameUI.h"
#include "HSServiceGameBoxBase.h"
#include "HSServiceGameStartBox.h"
#include "LifeGameProjectPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void UHSServiceGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UHSServiceGameUI::OnCloseClicked);
    }
}

void UHSServiceGameUI::OnCloseClicked()
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(TEXT("미션이 취소되었습니다.")));
    }

    AHSServiceGameBoxBase* GameBox = Cast<AHSServiceGameBoxBase>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHSServiceGameStartBox::StaticClass())  // StartBox 기준으로 찾음
    );

    if (GameBox)
    {
        GameBox->CancelGame();
    }

    FTimerHandle Handle;
    GetWorld()->GetTimerManager().SetTimer(Handle, FTimerDelegate::CreateLambda([this]()
        {
            HideSelf();
        }), 2.0f, false);
}

void UHSServiceGameUI::HideSelf()
{
    if (ALifeGameProjectPlayerController* PC = Cast<ALifeGameProjectPlayerController>(UGameplayStatics::GetPlayerController(this, 0)))
    {
        PC->SetIsPlayingMiniGame(false);
        PC->HideGameUI(EGameUIType::HS_Service);  // UI 타입도 MS용으로 분리 필요
    }
}

void UHSServiceGameUI::UpdateQuestionText(int32 Collected, int32 Total)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(FString::Printf(TEXT("쓰레기 주우세요! (%d/%d)"), Collected, Total)));
    }
}

void UHSServiceGameUI::EndGame(bool bIsWin)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(bIsWin ? TEXT("성공!!!") : TEXT("실패...")));
    }

    FTimerHandle EndHandle;
    GetWorld()->GetTimerManager().SetTimer(EndHandle, FTimerDelegate::CreateLambda([this]()
        {
            HideSelf();
        }), 2.0f, false);
}

void UHSServiceGameUI::ShowMessage(const FString& Message)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(Message));
    }
}


