// Fill out your copyright notice in the Description page of Project Settings.


#include "ShopItemSlot.h"
#include "Components/Button.h"

void UShopItemSlot::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (BuyButton)
	{
		BuyButton->OnClicked.AddDynamic(this, &UShopItemSlot::HandleBuyClicked);
	}
}

void UShopItemSlot::HandleBuyClicked()
{
	OnBuyClicked.Broadcast(RowName);
}