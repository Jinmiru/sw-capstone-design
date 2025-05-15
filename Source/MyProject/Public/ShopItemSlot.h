
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShopItemSlot.generated.h"

class UButton;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuyRequested, FName, RowName);


UCLASS()
class MYPROJECT_API UShopItemSlot : public UUserWidget
{
	GENERATED_BODY()


public:
	/** 외부에서 전달받는 RowName (데이터 키) */
	UPROPERTY(BlueprintReadWrite, Category = "Shop")
	FName RowName;

	/** 버튼 클릭 시 구매 요청 이벤트 발생 */
	UPROPERTY(BlueprintAssignable, Category = "Shop")
	FOnBuyRequested OnBuyClicked;

protected:
	virtual void NativeOnInitialized() override;

	/** 버튼 클릭 처리 */
	UFUNCTION()
	void HandleBuyClicked();

public:
	/** 슬롯에 RowName이 설정된 후 호출됨, 데이터 채우기 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Shop")
	void InitializeFromRowName();

	/** 버튼 참조용, BP에서 BindWidget */
	UPROPERTY(meta = (BindWidget))
	UButton* BuyButton;
};
