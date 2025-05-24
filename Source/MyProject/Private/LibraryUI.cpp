// Fill out your copyright notice in the Description page of Project Settings.


#include "LibraryUI.h"
#include "LibraryBox.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void ULibraryUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &ULibraryUI::OnCloseClicked);
    }
    UpdateQuestionText(0,10);
}

void ULibraryUI::OnCloseClicked()
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(TEXT("미션이 취소되었습니다.")));
    }

    // 게임 취소 상태 돌입
    ALibraryBox* GameBox = Cast<ALibraryBox>(
        UGameplayStatics::GetActorOfClass(GetWorld(), ALibraryBox::StaticClass())
    );
    if (GameBox) { GameBox->CancelGame(); }

    // 2초 뒤 자동으로 UI 꺼짐
    FTimerHandle CancelTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(CancelTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            HideSelf();
        }), 2.0f, false);
}


void ULibraryUI::UpdateQuestionText(int32 CollectedBookCount, int32 TotalBookCount)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(FString::Printf(
            TEXT("책에 가까이 다가가서 주워라!   (%d/%d)"), CollectedBookCount, TotalBookCount)));
    }
}

void ULibraryUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
        if (PlayerCharacter)//미션 보상
        {
            PlayerCharacter->PlusStat(EPlayerStatType::SensoryStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::LinguisticStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::LinguisticStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::PhysicalStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::PhysicalStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::AgeStatus);

        }
        QuestionText->SetText(FText::FromString(TEXT("성공!!!")));
    }
    else
    {
        QuestionText->SetText(FText::FromString(TEXT("실패...")));
    }

    FTimerHandle EndTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(EndTimerHandle, FTimerDelegate::CreateLambda([this]() {
        HideSelf();
        }), 2.0f, false);
}



void ULibraryUI::HideSelf()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);

        PlayerController->HideGameUI(EGameUIType::Library);
    }
}


