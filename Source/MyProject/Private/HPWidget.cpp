// Fill out your copyright notice in the Description page of Project Settings.


#include "HPWidget.h"
#include "MyProject/MyProjectCharacter.h"
#include "Components/ProgressBar.h"





void UHPWidget::UpdateHPBar(int32 Hp1)
{
	if (HPBar)
	{
		//UE_LOG(LogTemp, Warning, TEXT("HPPercent: %d _ UPDate"), HP);
		HPBar->SetPercent(Hp1 / 100.0f);  // 100 ~ 0 ������ ���� 0 ~ 1 ���̷� ��ȯ
	}
}

void UHPWidget::GetPlayerHP()
{
    APlayerController* PC = GetOwningPlayer(); // ������ ������ �÷��̾� ��Ʈ�ѷ� ��������

    if (PC)
    {
		//UE_LOG(LogTemp, Warning, TEXT("GetPlayerHP"));
        AMyProjectCharacter* PlayerCharacter = Cast<AMyProjectCharacter>(PC->GetPawn());
        if (PlayerCharacter)
        {

			HP = PlayerCharacter->HP_Player; // AMyProjectCharacter�� HP ���� ��ȯ
            UpdateHPBar(HP);

            //return PlayerCharacter->HP_Player; // AMyProjectCharacter�� HP ���� ��ȯ
        }
    }

    //return 0.0f; // �⺻��
}