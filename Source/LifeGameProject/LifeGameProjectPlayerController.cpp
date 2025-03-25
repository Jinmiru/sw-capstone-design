// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeGameProjectPlayerController.h"
#include "ESMathGameUI.h"
#include "ESDictationGameUI.h"
#include "ESImageQuizGameUI.h"
#include "ESServiceGameUI.h"
#include "ESRunningGameUI.h"
#include "MSMathGameUI.h"
#include "MSEnglishGameUI.h"
#include "MSImageQuizGameUI.h"
#include "HSMathGameUI.h"
#include "HSQuizGameUI.h"
#include "HSImageQuizGameUI.h"

void ALifeGameProjectPlayerController::ShowESMathGameUI()
{
    if (BP_ESMathGameUI != nullptr)
    {
        ESMathGameUI = CreateWidget<UESMathGameUI>(this, BP_ESMathGameUI);
        ESMathGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowESDictationGameUI()
{
    if (BP_ESDictationGameUI != nullptr)
    {
        ESDictationGameUI = CreateWidget<UESDictationGameUI>(this, BP_ESDictationGameUI);
        ESDictationGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowESImageQuizGameUI()
{
    if (BP_ESImageQuizGameUI != nullptr)
    {
        ESImageQuizGameUI = CreateWidget<UESImageQuizGameUI>(this, BP_ESImageQuizGameUI);
        ESImageQuizGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowESServiceGameUI()
{
    if (BP_ESServiceGameUI != nullptr)
    {
        ESServiceGameUI = CreateWidget<UESServiceGameUI>(this, BP_ESServiceGameUI);
        ESServiceGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowESRunningGameUI()
{
    if (BP_ESRunningGameUI != nullptr)
    {
        ESRunningGameUI = CreateWidget<UESRunningGameUI>(this, BP_ESRunningGameUI);
        ESRunningGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowMSMathGameUI()
{
    if (BP_MSMathGameUI != nullptr)
    {
        MSMathGameUI = CreateWidget<UMSMathGameUI>(this, BP_MSMathGameUI);
        MSMathGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowMSEnglishGameUI()
{
    if (BP_MSEnglishGameUI != nullptr)
    {
        MSEnglishGameUI = CreateWidget<UMSEnglishGameUI>(this, BP_MSEnglishGameUI);
        MSEnglishGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowMSImageQuizGameUI()
{
    if (BP_MSImageQuizGameUI != nullptr)
    {
        MSImageQuizGameUI = CreateWidget<UMSImageQuizGameUI>(this, BP_MSImageQuizGameUI);
        MSImageQuizGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowHSMathGameUI()
{
    if (BP_HSMathGameUI != nullptr)
    {
        HSMathGameUI = CreateWidget<UHSMathGameUI>(this, BP_HSMathGameUI);
        HSMathGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowHSQuizGameUI()
{
    if (BP_HSQuizGameUI != nullptr)
    {
        HSQuizGameUI = CreateWidget<UHSQuizGameUI>(this, BP_HSQuizGameUI);
        HSQuizGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::ShowHSImageQuizGameUI()
{
    if (BP_HSImageQuizGameUI != nullptr)
    {
        HSImageQuizGameUI = CreateWidget<UHSImageQuizGameUI>(this, BP_HSImageQuizGameUI);
        HSImageQuizGameUI->AddToViewport();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("블루프린트를 할당해야 합니다."));
    }
}

void ALifeGameProjectPlayerController::HideESMathGameUI()
{
	ESMathGameUI->RemoveFromParent();
	ESMathGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideESDictationGameUI()
{
	ESDictationGameUI->RemoveFromParent();
	ESDictationGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideESImageQuizGameUI()
{
	ESImageQuizGameUI->RemoveFromParent();
	ESImageQuizGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideESServiceGameUI()
{
	ESServiceGameUI->RemoveFromParent();
	ESServiceGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideESRunningGameUI()
{
	ESRunningGameUI->RemoveFromParent();
	ESRunningGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideMSMathGameUI()
{
	MSMathGameUI->RemoveFromParent();
	MSMathGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideMSEnglishGameUI()
{
	MSEnglishGameUI->RemoveFromParent();
	MSEnglishGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideMSImageQuizGameUI()
{
    MSImageQuizGameUI->RemoveFromParent();
    MSImageQuizGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideHSMathGameUI()
{
    HSMathGameUI->RemoveFromParent();
    HSMathGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideHSQuizGameUI()
{
    HSQuizGameUI->RemoveFromParent();
    HSQuizGameUI->Destruct();
}

void ALifeGameProjectPlayerController::HideHSImageQuizGameUI()
{
    HSImageQuizGameUI->RemoveFromParent();
    HSImageQuizGameUI->Destruct();
}
