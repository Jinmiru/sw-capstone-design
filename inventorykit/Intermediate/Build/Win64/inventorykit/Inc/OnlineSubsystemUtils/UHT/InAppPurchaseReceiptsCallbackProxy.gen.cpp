// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseReceiptsCallbackProxy.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseReceiptsCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Delegate FOnlineProxyInAppReceiptsResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventOnlineProxyInAppReceiptsResult_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		TArray<FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseReceiptsCallbackProxy.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineProxyInAppReceiptsResult_Parms, PurchaseStatus), Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, METADATA_PARAMS(0, nullptr) }; // 611552788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_Inner = { "InAppPurchaseReceipts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, METADATA_PARAMS(0, nullptr) }; // 1391451188
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts = { "InAppPurchaseReceipts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineProxyInAppReceiptsResult_Parms, InAppPurchaseReceipts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAppPurchaseReceipts_MetaData), NewProp_InAppPurchaseReceipts_MetaData) }; // 1391451188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_PurchaseStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineProxyInAppReceiptsResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineProxyInAppReceiptsResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineProxyInAppReceiptsResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnlineProxyInAppReceiptsResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineProxyInAppReceiptsResult, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseReceiptInfo2> const& InAppPurchaseReceipts)
{
	struct _Script_OnlineSubsystemUtils_eventOnlineProxyInAppReceiptsResult_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		TArray<FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;
	};
	_Script_OnlineSubsystemUtils_eventOnlineProxyInAppReceiptsResult_Parms Parms;
	Parms.PurchaseStatus=PurchaseStatus;
	Parms.InAppPurchaseReceipts=InAppPurchaseReceipts;
	OnlineProxyInAppReceiptsResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnlineProxyInAppReceiptsResult

// Begin Class UInAppPurchaseReceiptsCallbackProxy Function CreateProxyObjectForInAppPurchaseGetKnownReceipts
struct Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics
{
	struct InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseGetKnownReceipts_Parms
	{
		APlayerController* PlayerController;
		UInAppPurchaseReceiptsCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "DisplayName", "Get known In-App Receipts" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseReceiptsCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseGetKnownReceipts_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseGetKnownReceipts_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchaseGetKnownReceipts", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseGetKnownReceipts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseGetKnownReceipts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseGetKnownReceipts)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseReceiptsCallbackProxy**)Z_Param__Result=UInAppPurchaseReceiptsCallbackProxy::CreateProxyObjectForInAppPurchaseGetKnownReceipts(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UInAppPurchaseReceiptsCallbackProxy Function CreateProxyObjectForInAppPurchaseGetKnownReceipts

// Begin Class UInAppPurchaseReceiptsCallbackProxy Function CreateProxyObjectForInAppPurchaseQueryOwnedProducts
struct Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics
{
	struct InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseQueryOwnedProducts_Parms
	{
		APlayerController* PlayerController;
		UInAppPurchaseReceiptsCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "DisplayName", "Query for Owned In-App Products" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseReceiptsCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseQueryOwnedProducts_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseQueryOwnedProducts_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchaseQueryOwnedProducts", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseQueryOwnedProducts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseQueryOwnedProducts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseQueryOwnedProducts)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseReceiptsCallbackProxy**)Z_Param__Result=UInAppPurchaseReceiptsCallbackProxy::CreateProxyObjectForInAppPurchaseQueryOwnedProducts(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UInAppPurchaseReceiptsCallbackProxy Function CreateProxyObjectForInAppPurchaseQueryOwnedProducts

// Begin Class UInAppPurchaseReceiptsCallbackProxy Function CreateProxyObjectForInAppPurchaseRestoreOwnedProducts
struct Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics
{
	struct InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Parms
	{
		APlayerController* PlayerController;
		UInAppPurchaseReceiptsCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "DisplayName", "Restore Owned In-App Products" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseReceiptsCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchaseRestoreOwnedProducts", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::InAppPurchaseReceiptsCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseRestoreOwnedProducts)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseReceiptsCallbackProxy**)Z_Param__Result=UInAppPurchaseReceiptsCallbackProxy::CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UInAppPurchaseReceiptsCallbackProxy Function CreateProxyObjectForInAppPurchaseRestoreOwnedProducts

// Begin Class UInAppPurchaseReceiptsCallbackProxy
void UInAppPurchaseReceiptsCallbackProxy::StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy()
{
	UClass* Class = UInAppPurchaseReceiptsCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForInAppPurchaseGetKnownReceipts", &UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseGetKnownReceipts },
		{ "CreateProxyObjectForInAppPurchaseQueryOwnedProducts", &UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseQueryOwnedProducts },
		{ "CreateProxyObjectForInAppPurchaseRestoreOwnedProducts", &UInAppPurchaseReceiptsCallbackProxy::execCreateProxyObjectForInAppPurchaseRestoreOwnedProducts },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseReceiptsCallbackProxy);
UClass* Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister()
{
	return UInAppPurchaseReceiptsCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseReceiptsCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseReceiptsCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseReceiptsCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseReceiptsCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts, "CreateProxyObjectForInAppPurchaseGetKnownReceipts" }, // 58014258
		{ &Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts, "CreateProxyObjectForInAppPurchaseQueryOwnedProducts" }, // 1407227419
		{ &Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts, "CreateProxyObjectForInAppPurchaseRestoreOwnedProducts" }, // 683171528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseReceiptsCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseReceiptsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3975844038
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseReceiptsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3975844038
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::ClassParams = {
	&UInAppPurchaseReceiptsCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.OuterSingleton, Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseReceiptsCallbackProxy>()
{
	return UInAppPurchaseReceiptsCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseReceiptsCallbackProxy);
UInAppPurchaseReceiptsCallbackProxy::~UInAppPurchaseReceiptsCallbackProxy() {}
// End Class UInAppPurchaseReceiptsCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy, UInAppPurchaseReceiptsCallbackProxy::StaticClass, TEXT("UInAppPurchaseReceiptsCallbackProxy"), &Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseReceiptsCallbackProxy), 1714204533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_1462221097(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
