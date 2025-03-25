// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseQueryCallbackProxy2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseQueryCallbackProxy2() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Enum EOnlineProxyStoreOfferDiscountType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType;
static UEnum* EOnlineProxyStoreOfferDiscountType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EOnlineProxyStoreOfferDiscountType"));
	}
	return Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlineProxyStoreOfferDiscountType>()
{
	return EOnlineProxyStoreOfferDiscountType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DiscountAmount.Comment", "/** Offer price should be displayed as an amount off regular price */" },
		{ "DiscountAmount.DisplayName", "DiscountAmount" },
		{ "DiscountAmount.Name", "EOnlineProxyStoreOfferDiscountType::DiscountAmount" },
		{ "DiscountAmount.ToolTip", "Offer price should be displayed as an amount off regular price" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "NotOnSale.Comment", "/** Offer isn't on sale*/" },
		{ "NotOnSale.DisplayName", "NotOnSale" },
		{ "NotOnSale.Name", "EOnlineProxyStoreOfferDiscountType::NotOnSale" },
		{ "NotOnSale.ToolTip", "Offer isn't on sale" },
		{ "PayAmount.Comment", "/** Offer price should be displayed as a new price */" },
		{ "PayAmount.DisplayName", "PayAmount" },
		{ "PayAmount.Name", "EOnlineProxyStoreOfferDiscountType::PayAmount" },
		{ "PayAmount.ToolTip", "Offer price should be displayed as a new price" },
		{ "Percentage.Comment", "/** Offer price should be displayed as a percentage of regular price */" },
		{ "Percentage.DisplayName", "Percentage" },
		{ "Percentage.Name", "EOnlineProxyStoreOfferDiscountType::Percentage" },
		{ "Percentage.ToolTip", "Offer price should be displayed as a percentage of regular price" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOnlineProxyStoreOfferDiscountType::NotOnSale", (int64)EOnlineProxyStoreOfferDiscountType::NotOnSale },
		{ "EOnlineProxyStoreOfferDiscountType::Percentage", (int64)EOnlineProxyStoreOfferDiscountType::Percentage },
		{ "EOnlineProxyStoreOfferDiscountType::DiscountAmount", (int64)EOnlineProxyStoreOfferDiscountType::DiscountAmount },
		{ "EOnlineProxyStoreOfferDiscountType::PayAmount", (int64)EOnlineProxyStoreOfferDiscountType::PayAmount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	"EOnlineProxyStoreOfferDiscountType",
	"EOnlineProxyStoreOfferDiscountType",
	Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType()
{
	if (!Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton;
}
// End Enum EOnlineProxyStoreOfferDiscountType

// Begin ScriptStruct FOnlineProxyStoreOffer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer;
class UScriptStruct* FOnlineProxyStoreOffer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("OnlineProxyStoreOffer"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FOnlineProxyStoreOffer>()
{
	return FOnlineProxyStoreOffer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Offer entry for display from online store\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Offer entry for display from online store" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Unique offer identifier */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Unique offer identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Title for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Title for display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Short description for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Short description for display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Full description for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Full description for display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularPriceText_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Regular non-sale price as text for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Regular non-sale price as text for display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Regular non-sale price in numeric form for comparison/sorting */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Regular non-sale price in numeric form for comparison/sorting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriceText_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Final-Pricing (Post-Sales/Discounts) as text for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Final-Pricing (Post-Sales/Discounts) as text for display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Final-Price (Post-Sales/Discounts) in numeric form for comparison/sorting */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Final-Price (Post-Sales/Discounts) in numeric form for comparison/sorting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Price currency code */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Price currency code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseDate_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Date the offer was released */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Date the offer was released" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationDate_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Date this information is no longer valid (maybe due to sale ending, etc) */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Date this information is no longer valid (maybe due to sale ending, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscountType_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Type of discount currently running on this offer (if any) */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Type of discount currently running on this offer (if any)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicFields_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OfferId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LongDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_RegularPriceText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegularPrice;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PriceText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumericPrice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReleaseDate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpirationDate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DiscountType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DiscountType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DynamicFields_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DynamicFields_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicFields;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, OfferId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OfferId_MetaData), NewProp_OfferId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, LongDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongDescription_MetaData), NewProp_LongDescription_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText = { "RegularPriceText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, RegularPriceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularPriceText_MetaData), NewProp_RegularPriceText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice = { "RegularPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, RegularPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularPrice_MetaData), NewProp_RegularPrice_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, PriceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriceText_MetaData), NewProp_PriceText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice = { "NumericPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, NumericPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericPrice_MetaData), NewProp_NumericPrice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, CurrencyCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyCode_MetaData), NewProp_CurrencyCode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate = { "ReleaseDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, ReleaseDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseDate_MetaData), NewProp_ReleaseDate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate = { "ExpirationDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, ExpirationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationDate_MetaData), NewProp_ExpirationDate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType = { "DiscountType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, DiscountType), Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscountType_MetaData), NewProp_DiscountType_MetaData) }; // 3665252145
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_ValueProp = { "DynamicFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_Key_KeyProp = { "DynamicFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields = { "DynamicFields", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, DynamicFields), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicFields_MetaData), NewProp_DynamicFields_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"OnlineProxyStoreOffer",
	Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers),
	sizeof(FOnlineProxyStoreOffer),
	alignof(FOnlineProxyStoreOffer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.InnerSingleton, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.InnerSingleton;
}
// End ScriptStruct FOnlineProxyStoreOffer

// Begin Delegate FInAppPurchaseQuery2Result
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms
	{
		TArray<FOnlineProxyStoreOffer> InAppOfferInformation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAppOfferInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAppOfferInformation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InAppOfferInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_Inner = { "InAppOfferInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer, METADATA_PARAMS(0, nullptr) }; // 1231270287
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation = { "InAppOfferInformation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms, InAppOfferInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAppOfferInformation_MetaData), NewProp_InAppOfferInformation_MetaData) }; // 1231270287
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseQuery2Result__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInAppPurchaseQuery2Result_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseQuery2Result, TArray<FOnlineProxyStoreOffer> const& InAppOfferInformation)
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms
	{
		TArray<FOnlineProxyStoreOffer> InAppOfferInformation;
	};
	_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms Parms;
	Parms.InAppOfferInformation=InAppOfferInformation;
	InAppPurchaseQuery2Result.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInAppPurchaseQuery2Result

// Begin Class UInAppPurchaseQueryCallbackProxy2 Function CreateProxyObjectForInAppPurchaseQuery
struct Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics
{
	struct InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms
	{
		APlayerController* PlayerController;
		TArray<FString> ProductIdentifiers;
		UInAppPurchaseQueryCallbackProxy2* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Queries a InAppPurchase for an integer value\n" },
		{ "DisplayName", "Read In App Purchase Information2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Queries a InAppPurchase for an integer value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductIdentifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductIdentifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProductIdentifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ProductIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductIdentifiers_MetaData), NewProp_ProductIdentifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseQuery", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseQueryCallbackProxy2::execCreateProxyObjectForInAppPurchaseQuery)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ProductIdentifiers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseQueryCallbackProxy2**)Z_Param__Result=UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(Z_Param_PlayerController,Z_Param_Out_ProductIdentifiers);
	P_NATIVE_END;
}
// End Class UInAppPurchaseQueryCallbackProxy2 Function CreateProxyObjectForInAppPurchaseQuery

// Begin Class UInAppPurchaseQueryCallbackProxy2
void UInAppPurchaseQueryCallbackProxy2::StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2()
{
	UClass* Class = UInAppPurchaseQueryCallbackProxy2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForInAppPurchaseQuery", &UInAppPurchaseQueryCallbackProxy2::execCreateProxyObjectForInAppPurchaseQuery },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseQueryCallbackProxy2);
UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister()
{
	return UInAppPurchaseQueryCallbackProxy2::StaticClass();
}
struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseQueryCallbackProxy2.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Called when there is a successful InAppPurchase query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Called when there is an unsuccessful InAppPurchase query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery, "CreateProxyObjectForInAppPurchaseQuery" }, // 3872904990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseQueryCallbackProxy2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy2, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2261585021
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy2, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2261585021
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::ClassParams = {
	&UInAppPurchaseQueryCallbackProxy2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2()
{
	if (!Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton, Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseQueryCallbackProxy2>()
{
	return UInAppPurchaseQueryCallbackProxy2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseQueryCallbackProxy2);
UInAppPurchaseQueryCallbackProxy2::~UInAppPurchaseQueryCallbackProxy2() {}
// End Class UInAppPurchaseQueryCallbackProxy2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOnlineProxyStoreOfferDiscountType_StaticEnum, TEXT("EOnlineProxyStoreOfferDiscountType"), &Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3665252145U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOnlineProxyStoreOffer::StaticStruct, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewStructOps, TEXT("OnlineProxyStoreOffer"), &Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineProxyStoreOffer), 1231270287U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2, UInAppPurchaseQueryCallbackProxy2::StaticClass, TEXT("UInAppPurchaseQueryCallbackProxy2"), &Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseQueryCallbackProxy2), 190281177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_2676281454(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
