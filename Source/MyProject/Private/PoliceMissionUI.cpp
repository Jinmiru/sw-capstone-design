// Fill out your copyright notice in the Description page of Project Settings.


#include "PoliceMissionUI.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Enemy.h"
#include "EnemyFSM.h"

UPoliceMissionUI* UPoliceMissionUI::CurrentInstance = nullptr;

void UPoliceMissionUI::NativeOnInitialized()
{
    Super::NativeOnInitialized();
    UPoliceMissionUI::CurrentInstance = this;

    UpdateQuestionText();
    CreateEnemy();
}

void UPoliceMissionUI::UpdateQuestionText()
{
	if (QuestionText)
	{
		QuestionText->SetText(FText::FromString(FString::Printf(TEXT("도둑을 잡아라!"))));
	}
}

void UPoliceMissionUI::EndGame()
{
    if (QuestionText)
    {
        QuestionText->SetText(FText::FromString(TEXT("도둑 잡기 성공! \n 경찰서로 가면 경찰로 취직할 수 있습니다!")));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT(" QuestionText is nullptr in EndGame()"));
    }

    FTimerHandle EndTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(EndTimerHandle, FTimerDelegate::CreateLambda([this]() {
        HideSelf();
        }), 5.0f, false);
}


void UPoliceMissionUI::HideSelf()
{
    AGameController* PlayerController =
        Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

    if (PlayerController)
    {
        PlayerController->Server_SetIsPlayingMiniGame(false);

        PlayerController->HideGameUI(EGameUIType::Police);
    }
}


/// ===========================경찰생성코드   =========================
void UPoliceMissionUI::CreateEnemy()
{
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
            FSM->front = false;
        }
     }
}
