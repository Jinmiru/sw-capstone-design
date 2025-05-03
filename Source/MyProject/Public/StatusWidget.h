// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"  // UImage ����� ���� �ʿ��� ��� ����

#include "StatusWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UStatusWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	//virtual void NativeConstruct() override;

	
public:	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* AgeText;


	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* PhysicalText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* SensoryText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* LogicText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* LinguisticText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* SocialSkillText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* MentalStrengthText;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* proficiency;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* moneyText;


	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UImage* profile;


	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* jobText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UProgressBar* SkillCoolProgressBar;

	UFUNCTION(BlueprintCallable)
	void SetSkillCoolProgress(float Progress);

	/*UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UImage* skiilcoolImage;*/

	/*UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UCircular*/
	

};
