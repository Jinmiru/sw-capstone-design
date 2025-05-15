// Fill out your copyright notice in the Description page of Project Settings.


#include "ShopUI.h"
#include "ShopItemSlot.h"
#include "Components/Button.h"
#include "Components/WrapBox.h"
#include "Kismet/GameplayStatics.h"
#include "GameController.h"

USTRUCT(BlueprintType)
struct FStruct_ItemMasterInfo;


void UShopUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (!ItemDataTable || !ShopItemSlotClass || !SlotContainer)
	{
		UE_LOG(LogTemp, Warning, TEXT("Shop UI: Missing setup"));
		return;
	}

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UShopUI::OnCloseClicked);
	}

	for (const auto& Row : ItemDataTable->GetRowMap())
	{
		FName RowName = Row.Key;

		UShopItemSlot* ShopSlot = CreateWidget<UShopItemSlot>(this, ShopItemSlotClass);
		if (!ShopSlot) continue;

		ShopSlot->RowName = RowName;
		ShopSlot->InitializeFromRowName(); // BP에서 구조체 해석

		ShopSlot->OnBuyClicked.AddDynamic(this, &UShopUI::OnBuyRequested);


		SlotWrapBox->AddChildToWrapBox(ShopSlot);
	}
}

void UShopUI::OnBuyRequested(FName RowName)
{
	UE_LOG(LogTemp, Log, TEXT("Buy requested: %s"), *RowName.ToString());

	HandleBuyItem_BP(RowName); // BP 구현
}


void UShopUI::OnCloseClicked()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	if (PlayerController)
	{
		PlayerController->HideGameUI(EGameUIType::Shop);
	}
}