// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LifeGameProjectPlayerController.generated.h"

UCLASS()
class LIFEGAMEPROJECT_API ALifeGameProjectPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UESMathGameUI> BP_ESMathGameUI;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UESDictationGameUI> BP_ESDictationGameUI;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UESImageQuizGameUI> BP_ESImageQuizGameUI;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UESServiceGameUI> BP_ESServiceGameUI;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UESRunningGameUI> BP_ESRunningGameUI;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UMSMathGameUI> BP_MSMathGameUI;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UMSEnglishGameUI> BP_MSEnglishGameUI;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UMSImageQuizGameUI> BP_MSImageQuizGameUI;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHSMathGameUI> BP_HSMathGameUI;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHSQuizGameUI> BP_HSQuizGameUI;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHSImageQuizGameUI> BP_HSImageQuizGameUI;

	// 초등학교 UI 보이기/숨기기
	void ShowESMathGameUI();
	void HideESMathGameUI();
	void ShowESDictationGameUI();
	void HideESDictationGameUI();
	void ShowESImageQuizGameUI();
	void HideESImageQuizGameUI();
	void ShowESServiceGameUI();
	void HideESServiceGameUI();
	void ShowESRunningGameUI();
	void HideESRunningGameUI();

	// 중학교 UI 보이기/숨기기
	void ShowMSMathGameUI();
	void HideMSMathGameUI();
	void ShowMSEnglishGameUI();
	void HideMSEnglishGameUI();
	void ShowMSImageQuizGameUI();
	void HideMSImageQuizGameUI();
	
	// 고등학교 UI 보이기/숨기기
	void ShowHSMathGameUI();
	void HideHSMathGameUI();
	void ShowHSQuizGameUI();
	void HideHSQuizGameUI();
	void ShowHSImageQuizGameUI();
	void HideHSImageQuizGameUI();

private:

	UPROPERTY()
	class UESMathGameUI* ESMathGameUI;
	
	UPROPERTY()
	class UESDictationGameUI* ESDictationGameUI;

	UPROPERTY()
	class UESImageQuizGameUI* ESImageQuizGameUI;

	UPROPERTY()
	class UESServiceGameUI* ESServiceGameUI;
	
	UPROPERTY()
	class UESRunningGameUI* ESRunningGameUI;
	
	UPROPERTY()
	class UMSMathGameUI* MSMathGameUI;

	UPROPERTY()
	class UMSEnglishGameUI* MSEnglishGameUI;

	UPROPERTY()
	class UMSImageQuizGameUI* MSImageQuizGameUI;

	UPROPERTY()
	class UHSMathGameUI* HSMathGameUI;

	UPROPERTY()
	class UHSQuizGameUI* HSQuizGameUI;

	UPROPERTY()
	class UHSImageQuizGameUI* HSImageQuizGameUI;

};
