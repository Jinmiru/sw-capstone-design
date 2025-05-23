// Fill out your copyright notice in the Description page of Project Settings.


#include "ESServiceGameUI.h"
#include "ESServiceGameBox.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void UESServiceGameUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UESServiceGameUI::OnCloseClicked);
    }
}

void UESServiceGameUI::OnCloseClicked()
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(TEXT("미션이 취소되었습니다.")));
    }

    // 게임 취소 상태 돌입
    AESServiceGameBox* GameBox = Cast<AESServiceGameBox>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AESServiceGameBox::StaticClass())
    );
    if (GameBox) { GameBox->CancelGame(); }

    // 2초 뒤 자동으로 UI 꺼짐
    FTimerHandle CancelTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(CancelTimerHandle, FTimerDelegate::CreateLambda([this]()
        {
            HideSelf();
        }), 2.0f, false);
}


void UESServiceGameUI::UpdateQuestionText(int32 CollectedTrashCount, int32 TotalTrashCount)
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(FString::Printf(
            TEXT("쓰레기에 가까이 가서 주워라!   (%d/%d)"), CollectedTrashCount, TotalTrashCount)));
    }
}

void UESServiceGameUI::EndGame(bool bIsWin)
{
    if (bIsWin)
    {
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
        if (PlayerCharacter)//미션 보상
        {
            PlayerCharacter->PlusStat(EPlayerStatType::MentalStrengthStatus);
            PlayerCharacter->PlusStat(EPlayerStatType::SocialSkillStatus);
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



void UESServiceGameUI::HideSelf()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);

        PlayerController->HideGameUI(EGameUIType::ES_Service);
    }
}


