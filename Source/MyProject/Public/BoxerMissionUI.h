// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Enemy.h"
#include "BoxerMissionUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UBoxerMissionUI : public UUserWidget
{
	GENERATED_BODY()
public:
	static UBoxerMissionUI* CurrentInstance; // 어디서든 접근 가능하게

	virtual void NativeOnInitialized() override;


	UPROPERTY(meta = (BindWidget))
	class UTextBlock* QuestionText;             // 미션 내용 텍스트

	void UpdateQuestionText();     // 미션 내용 

	void EndGame();

	void HideSelf();// 미션 내용 없애기

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	TSubclassOf<AEnemy> EnemyFactory;

	void CreateEnemy();
};
