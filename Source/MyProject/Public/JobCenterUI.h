// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "JobCenterUI.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EJobType : uint8
{
	Police,
	Doctor,
	Cook,
	Boxer,
	Artist,
};




UCLASS()
class MYPROJECT_API UJobCenterUI : public UUserWidget
{
	GENERATED_BODY()
	
protected :
	virtual void NativeOnInitialized() override;

	UFUNCTION()
	void OnCloseClicked();      // �ݱ� ��ư ���� �� ����

	UFUNCTION()
	void PoliceMission();      // ���� �̼�

	UFUNCTION()
	void CookMission();        // �丮�� �̼�

	UFUNCTION()
	void BoxerMission();       // ���� �̼

	UFUNCTION()
	void DoctorMission();      // �ǻ� �̼�

	UFUNCTION()
	void ArtistMission();     // ȭ�� �̼�



	UPROPERTY(meta = (BindWidget))
	class UButton* CloseButton;                 // �ݱ� ��ư

	UPROPERTY(meta = (BindWidget))
	class UButton* PoliceButton;                 // ����

	UPROPERTY(meta = (BindWidget))
	class UButton* CookButton;                   //�丮��

	UPROPERTY(meta = (BindWidget))
	class UButton* BoxerButton;                  //����

	UPROPERTY(meta = (BindWidget))
	class UButton* DoctorButton;                 //�ǻ�

	UPROPERTY(meta = (BindWidget))
	class UButton* ArtistButton;                //ȭ��

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EJobType job;

	//doctor
	UPROPERTY(EditAnywhere, Category = "Doctor Mission")
	TSubclassOf<AActor> PatientClass;

	UPROPERTY()
	TArray<AActor*> SpawnedPatients;

	UFUNCTION(BlueprintCallable)
	void OnPatientInteracted(AActor* Patient);

	//Cook
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cook", meta = (ExposeOnSpawn))
	UDataTable* ItemDataTable;  // BP에서 만든 DT 연결

	UPROPERTY(BlueprintReadOnly, Category = "Cook")
	TArray<FName> RecipeIngredients;

};
