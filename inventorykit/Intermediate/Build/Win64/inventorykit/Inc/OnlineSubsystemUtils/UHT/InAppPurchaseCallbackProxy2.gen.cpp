// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy2.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseCallbackProxy2() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin ScriptStruct FInAppPurchaseProductInfo2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2;
class UScriptStruct* FInAppPurchaseProductInfo2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseProductInfo2"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseProductInfo2>()
{
	return FInAppPurchaseProductInfo2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The unique product identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized display name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDescription_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display description name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized display description name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display price name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized display price name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Raw price without currency code and symbol\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Raw price without currency code and symbol" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency code of the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized currency code of the price" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencySymbol_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency symbol of the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized currency symbol of the price" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecimalSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized decimal separator used in the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized decimal separator used in the price" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupingSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized grouping separator of the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized grouping separator of the price" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiptData_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Opaque receipt data for the transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Opaque receipt data for the transaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicFields_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Dynamic fields from raw Json data.\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Dynamic fields from raw Json data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionIdentifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayPrice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawPrice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencySymbol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DecimalSeparator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupingSeparator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiptData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DynamicFields_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DynamicFields_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicFields;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductInfo2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_TransactionIdentifier = { "TransactionIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, TransactionIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionIdentifier_MetaData), NewProp_TransactionIdentifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayDescription = { "DisplayDescription", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DisplayDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayDescription_MetaData), NewProp_DisplayDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayPrice = { "DisplayPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DisplayPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayPrice_MetaData), NewProp_DisplayPrice_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_RawPrice = { "RawPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, RawPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawPrice_MetaData), NewProp_RawPrice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, CurrencyCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyCode_MetaData), NewProp_CurrencyCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencySymbol = { "CurrencySymbol", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, CurrencySymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencySymbol_MetaData), NewProp_CurrencySymbol_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DecimalSeparator = { "DecimalSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DecimalSeparator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecimalSeparator_MetaData), NewProp_DecimalSeparator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_GroupingSeparator = { "GroupingSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, GroupingSeparator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupingSeparator_MetaData), NewProp_GroupingSeparator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_ReceiptData = { "ReceiptData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, ReceiptData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiptData_MetaData), NewProp_ReceiptData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_ValueProp = { "DynamicFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_Key_KeyProp = { "DynamicFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields = { "DynamicFields", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DynamicFields), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicFields_MetaData), NewProp_DynamicFields_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_TransactionIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_RawPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencyCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencySymbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DecimalSeparator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_GroupingSeparator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_ReceiptData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"InAppPurchaseProductInfo2",
	Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::PropPointers),
	sizeof(FInAppPurchaseProductInfo2),
	alignof(FInAppPurchaseProductInfo2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2.InnerSingleton;
}
// End ScriptStruct FInAppPurchaseProductInfo2

// Begin Delegate FInAppPurchaseResult2
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		TArray<FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseReceipts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PurchaseStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PurchaseStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseReceipts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InAppPurchaseReceipts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms, PurchaseStatus), Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, METADATA_PARAMS(0, nullptr) }; // 611552788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_Inner = { "InAppPurchaseReceipts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, METADATA_PARAMS(0, nullptr) }; // 1391451188
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts = { "InAppPurchaseReceipts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms, InAppPurchaseReceipts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAppPurchaseReceipts_MetaData), NewProp_InAppPurchaseReceipts_MetaData) }; // 1391451188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseResult2__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInAppPurchaseResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseReceiptInfo2> const& InAppPurchaseReceipts)
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		TArray<FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;
	};
	_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms Parms;
	Parms.PurchaseStatus=PurchaseStatus;
	Parms.InAppPurchaseReceipts=InAppPurchaseReceipts;
	InAppPurchaseResult2.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInAppPurchaseResult2

// Begin Class UInAppPurchaseCallbackProxy2 Function CreateProxyObjectForInAppPurchase
struct Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics
{
	struct InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms
	{
		APlayerController* PlayerController;
		FInAppPurchaseProductRequest2 ProductRequest;
		UInAppPurchaseCallbackProxy2* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use 'Start an In-App Purchase' and remember to pass the output receipts to 'Finalize In-App Purchase Transaction' after being validated and processed" },
		{ "DisplayName", "Make an In-App Purchase v2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductRequest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest = { "ProductRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms, ProductRequest), Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductRequest_MetaData), NewProp_ProductRequest_MetaData) }; // 2805346274
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchase", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchase)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT_REF(FInAppPurchaseProductRequest2,Z_Param_Out_ProductRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseCallbackProxy2**)Z_Param__Result=UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(Z_Param_PlayerController,Z_Param_Out_ProductRequest);
	P_NATIVE_END;
}
// End Class UInAppPurchaseCallbackProxy2 Function CreateProxyObjectForInAppPurchase

// Begin Class UInAppPurchaseCallbackProxy2 Function CreateProxyObjectForInAppPurchaseQueryOwned
struct Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics
{
	struct InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms
	{
		APlayerController* PlayerController;
		UInAppPurchaseCallbackProxy2* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use 'Query for Owned In-App Products' and remember to pass the output receipts to 'Finalize In-App Purchase Transaction' after being validated and processed" },
		{ "DisplayName", "Query for Owned Purchases" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseQueryOwned", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseQueryOwned)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseCallbackProxy2**)Z_Param__Result=UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UInAppPurchaseCallbackProxy2 Function CreateProxyObjectForInAppPurchaseQueryOwned

// Begin Class UInAppPurchaseCallbackProxy2 Function CreateProxyObjectForInAppPurchaseUnprocessedPurchases
struct Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics
{
	struct InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms
	{
		APlayerController* PlayerController;
		UInAppPurchaseCallbackProxy2* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use 'Get known In-App Receipts' and remember to pass the output receipts to 'Finalize In-App Purchase Transaction' after being validated and processed" },
		{ "DisplayName", "Process any New Unprocessed Purchases v2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseUnprocessedPurchases", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseUnprocessedPurchases)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseCallbackProxy2**)Z_Param__Result=UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UInAppPurchaseCallbackProxy2 Function CreateProxyObjectForInAppPurchaseUnprocessedPurchases

// Begin Class UInAppPurchaseCallbackProxy2
void UInAppPurchaseCallbackProxy2::StaticRegisterNativesUInAppPurchaseCallbackProxy2()
{
	UClass* Class = UInAppPurchaseCallbackProxy2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForInAppPurchase", &UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchase },
		{ "CreateProxyObjectForInAppPurchaseQueryOwned", &UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseQueryOwned },
		{ "CreateProxyObjectForInAppPurchaseUnprocessedPurchases", &UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseUnprocessedPurchases },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseCallbackProxy2);
UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister()
{
	return UInAppPurchaseCallbackProxy2::StaticClass();
}
struct Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseCallbackProxy2.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase, "CreateProxyObjectForInAppPurchase" }, // 1865455549
		{ &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned, "CreateProxyObjectForInAppPurchaseQueryOwned" }, // 2262355328
		{ &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases, "CreateProxyObjectForInAppPurchaseUnprocessedPurchases" }, // 229134797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseCallbackProxy2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseCallbackProxy2, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 681479932
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseCallbackProxy2, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 681479932
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::ClassParams = {
	&UInAppPurchaseCallbackProxy2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2()
{
	if (!Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.OuterSingleton, Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseCallbackProxy2>()
{
	return UInAppPurchaseCallbackProxy2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseCallbackProxy2);
UInAppPurchaseCallbackProxy2::~UInAppPurchaseCallbackProxy2() {}
// End Class UInAppPurchaseCallbackProxy2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInAppPurchaseProductInfo2::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewStructOps, TEXT("InAppPurchaseProductInfo2"), &Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseProductInfo2), 910228645U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseCallbackProxy2, UInAppPurchaseCallbackProxy2::StaticClass, TEXT("UInAppPurchaseCallbackProxy2"), &Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseCallbackProxy2), 2835405613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_958394990(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
