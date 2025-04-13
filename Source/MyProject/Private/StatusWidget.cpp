// Fill out your copyright notice in the Description page of Project Settings.


#include "StatusWidget.h"
#include "Components/ProgressBar.h"


void UStatusWidget::SetSkillCoolProgress(float Progress)
{
    if (SkillCoolProgressBar)
    {
        SkillCoolProgressBar->SetPercent(Progress);
    }
}