// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "JobCenterUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UJobCenterUI : public UUserWidget
{
	GENERATED_BODY()
	
protected :
	virtual void NativeOnInitialized() override;

	UFUNCTION()
	void OnCloseClicked();      // �ݱ� ��ư ���� �� ����

	void PoliceMission();      // ���� �̼�
	void CookMission();        // �丮�� �̼�
	void BoxerMission();       // ���� �̼�
	void DoctorMission();      // �ǻ� �̼�
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

};
