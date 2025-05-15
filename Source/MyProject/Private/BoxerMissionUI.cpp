// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxerMissionUI.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Enemy.h"
#include "EnemyFSM.h"

UBoxerMissionUI* UBoxerMissionUI::CurrentInstance = nullptr;


void UBoxerMissionUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();
    UBoxerMissionUI::CurrentInstance = this;

    UpdateQuestionText();
    CreateEnemy();
}

void UBoxerMissionUI::UpdateQuestionText()
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(FString::Printf(TEXT("챔피언을 이겨라!"))));
    }
}

void UBoxerMissionUI::EndGame()
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(TEXT("경기 우승!! \n 복싱장으로 가면 복서로 취직됩니다!!!")));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("QuestionText is nullptr in EndGame()"));
    }

    FTimerHandle EndTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(EndTimerHandle, FTimerDelegate::CreateLambda([this]() {
        HideSelf();
        }), 5.0f, false);
}


void UBoxerMissionUI::HideSelf()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);

        PlayerController->HideGameUI(EGameUIType::Police);
    }
}


/// ===========================복서 생성코드   =========================
void UBoxerMissionUI::CreateEnemy()
{
	UE_LOG(LogTemp, Warning, TEXT("복서 생성"));
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (!PC) return;

    APawn* PlayerPawn = PC->GetPawn();
    if (!PlayerPawn) return;

    FVector PlayerLocation = PlayerPawn->GetActorLocation();
    FRotator PlayerRotation = PlayerPawn->GetActorRotation();

    // 플레이어 앞 방향으로 500 유닛 떨어진 위치
    FVector SpawnLocation = PlayerLocation + PlayerRotation.Vector() * 500.0f;

    // 적이 플레이어를 바라보게 회전
    FRotator SpawnRotation = (PlayerLocation - SpawnLocation).Rotation();

    //front
    AEnemy* SpawnedEnemy = GetWorld()->SpawnActor<AEnemy>(EnemyFactory, SpawnLocation, SpawnRotation);

    if (SpawnedEnemy)
    {
        UEnemyFSM* FSM = SpawnedEnemy->FindComponentByClass<UEnemyFSM>();
        if (FSM)
        {
            FSM->front = true;
        }
    }
}
