// Fill out your copyright notice in the Description page of Project Settings.


#include "StatusWidget.h"
#include "Components/ProgressBar.h"


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
