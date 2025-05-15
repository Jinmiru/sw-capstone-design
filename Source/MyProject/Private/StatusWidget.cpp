// Fill out your copyright notice in the Description page of Project Settings.


#include "StatusWidget.h"
#include "Components/ProgressBar.h"
#include "GameManager.h"
#include "Components/TextBlock.h"

void UStatusWidget::NativeConstruct()
{
	Super::NativeConstruct();



	if (GuideText)
	{
		GuideText->SetText(FText::FromString(TEXT("첫 연동")));
	}
}


void UStatusWidget::SetSkillCoolProgress(float Value)
{
	if (SkillCoolProgressBar)
	{
		SkillCoolProgressBar->SetPercent(Value);
	}
	else
	{
		//UE_LOG(LogTemp, Error, TEXT("SkillCoolProgressBar is NULL in SetSkillCoolProgress!"));
	}
}

void UStatusWidget::changeUI()
{

}