// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "ShopUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UShopUI : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeOnInitialized() override;

	UFUNCTION()
	void OnCloseClicked();


	UPROPERTY(meta = (BindWidget))
	class UButton* CloseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shop", meta = (ExposeOnSpawn))
	UDataTable* ItemDataTable;  // BP에서 만든 DT 연결

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shop", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UShopItemSlot> ShopItemSlotClass;

	UPROPERTY(meta = (BindWidget))
	class UPanelWidget* SlotContainer;

	UPROPERTY(meta = (BindWidget))
	class UWrapBox* SlotWrapBox;

public:
	// 슬롯에서 RowName이 클릭되었을 때 호출됨
	UFUNCTION()
	void OnBuyRequested(FName RowName);

	// 구매 로직은 블루프린트에서 처리 (인벤토리 연동)
	UFUNCTION(BlueprintImplementableEvent, Category = "Shop")
	void HandleBuyItem_BP(FName RowName);


};
