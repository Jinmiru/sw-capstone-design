// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "LifeGameProjectPlayerController.generated.h"

UENUM(BlueprintType)
enum class EGameUIType : uint8
{
	ES_Math,
	ES_Dictation,
	ES_ImageQuiz,
	ES_Service,
	ES_Running,
	MS_Math,
	MS_English,
	MS_ImageQuiz,
	MS_Service,
	HS_Math,
	HS_Quiz,
	HS_ImageQuiz,
	HS_Service
};

USTRUCT(BlueprintType)
struct FGameUIInfo
{
	GENERATED_BODY()

	UPROPERTY()
	UUserWidget* WidgetInstance = nullptr;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> WidgetClass = nullptr;
};

UCLASS()
class LIFEGAMEPROJECT_API ALifeGameProjectPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	// 수업(미니게임) 중복 실행 방지 함수
	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	bool IsPlayingMiniGame() const;

	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	void SetIsPlayingMiniGame(bool bPlaying);

	// UI 표시 및 숨김 함수
	UFUNCTION(BlueprintCallable)
	void ShowGameUI(EGameUIType UIType);

	UFUNCTION(BlueprintCallable)
	void HideGameUI(EGameUIType UIType);

	UFUNCTION(BlueprintCallable, Category = "UI")
	UUserWidget* GetGameUIInstance(EGameUIType UIType);

protected:
	// UI 위젯 클래스 에디터에서 설정
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TMap<EGameUIType, TSubclassOf<UUserWidget>> GameUIClasses;

private:
	// UI 인스턴스 저장용
	TMap<EGameUIType, UUserWidget*> GameUIInstances;

	UPROPERTY(VisibleAnywhere, Category = "MiniGame")
	bool bIsPlayingMiniGame = false;

	void LogMissingBlueprint(EGameUIType UIType);
};