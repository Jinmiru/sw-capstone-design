// Fill out your copyright notice in the Description page of Project Settings.


#include "HPWidget.h"
#include "MyProject/MyProjectCharacter.h"
#include "Components/ProgressBar.h"

void UHPWidget::UpdateHPBar(int32 HP1)
{
	if (HPBar)
	{
		UE_LOG(LogTemp, Warning, TEXT("HPPercent: %d _ UPDate"), HP1);
		HPBar->SetPercent(HP1 / 100.0f);  // 100 ~ 0 사이의 값이 0 ~ 1 사이로 변환
	}
}

float UHPWidget::GetPlayerHP()
{
    APlayerController* PC = GetOwningPlayer(); // 위젯을 소유한 플레이어 컨트롤러 가져오기
    //UE_LOG(LogTemp, Warning, TEXT("readyPlayerHP"));

    if (PC)
    {
		//UE_LOG(LogTemp, Warning, TEXT("GetPlayerHP"));
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(PC->GetPawn());
        if (PlayerCharacter)
        {
			HP = PlayerCharacter->HP_Player; // AMyProjectCharacter의 HP 값을 반환
            return PlayerCharacter->HP_Player; // AMyProjectCharacter의 HP 값을 반환
            
        }
    }

    return 0.0f; // 기본값
}