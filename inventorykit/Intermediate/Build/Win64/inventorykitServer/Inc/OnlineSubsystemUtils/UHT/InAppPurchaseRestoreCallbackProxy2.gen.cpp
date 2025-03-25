// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseRestoreCallbackProxy2.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseRestoreCallbackProxy2() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin ScriptStruct FInAppPurchaseRestoreInfo2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2;
class UScriptStruct* FInAppPurchaseRestoreInfo2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseRestoreInfo2"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseRestoreInfo2>()
{
	return FInAppPurchaseRestoreInfo2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The item name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "The item name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "The unique product identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationInfo_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidationInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseRestoreInfo2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo2, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo2, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ValidationInfo = { "ValidationInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo2, ValidationInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationInfo_MetaData), NewProp_ValidationInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ValidationInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"InAppPurchaseRestoreInfo2",
	Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::PropPointers),
	sizeof(FInAppPurchaseRestoreInfo2),
	alignof(FInAppPurchaseRestoreInfo2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.InnerSingleton;
}
// End ScriptStruct FInAppPurchaseRestoreInfo2

// Begin Delegate FInAppPurchaseRestoreResult2
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		TArray<FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseRestoreInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PurchaseStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PurchaseStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseRestoreInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InAppPurchaseRestoreInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms, PurchaseStatus), Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, METADATA_PARAMS(0, nullptr) }; // 611552788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo_Inner = { "InAppPurchaseRestoreInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2, METADATA_PARAMS(0, nullptr) }; // 149869892
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo = { "InAppPurchaseRestoreInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms, InAppPurchaseRestoreInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAppPurchaseRestoreInfo_MetaData), NewProp_InAppPurchaseRestoreInfo_MetaData) }; // 149869892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseRestoreResult2__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInAppPurchaseRestoreResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseRestoreResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseRestoreInfo2> const& InAppPurchaseRestoreInfo)
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		TArray<FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo;
	};
	_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms Parms;
	Parms.PurchaseStatus=PurchaseStatus;
	Parms.InAppPurchaseRestoreInfo=InAppPurchaseRestoreInfo;
	InAppPurchaseRestoreResult2.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInAppPurchaseRestoreResult2

// Begin Class UInAppPurchaseRestoreCallbackProxy2 Function CreateProxyObjectForInAppPurchaseRestore
struct Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics
{
	struct InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms
	{
		TArray<FInAppPurchaseProductRequest2> ConsumableProductFlags;
		APlayerController* PlayerController;
		UInAppPurchaseRestoreCallbackProxy2* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use 'Restore Owned In-App Products' and remember to pass the output receipts to 'Finalize In-App Purchase Transaction' after being validated and processed" },
		{ "DisplayName", "Restore In-App Purchases2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumableProductFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumableProductFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsumableProductFlags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2, METADATA_PARAMS(0, nullptr) }; // 2805346274
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ConsumableProductFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumableProductFlags_MetaData), NewProp_ConsumableProductFlags_MetaData) }; // 2805346274
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseRestore", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseRestoreCallbackProxy2::execCreateProxyObjectForInAppPurchaseRestore)
{
	P_GET_TARRAY_REF(FInAppPurchaseProductRequest2,Z_Param_Out_ConsumableProductFlags);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseRestoreCallbackProxy2**)Z_Param__Result=UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(Z_Param_Out_ConsumableProductFlags,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UInAppPurchaseRestoreCallbackProxy2 Function CreateProxyObjectForInAppPurchaseRestore

// Begin Class UInAppPurchaseRestoreCallbackProxy2
void UInAppPurchaseRestoreCallbackProxy2::StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2()
{
	UClass* Class = UInAppPurchaseRestoreCallbackProxy2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForInAppPurchaseRestore", &UInAppPurchaseRestoreCallbackProxy2::execCreateProxyObjectForInAppPurchaseRestore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseRestoreCallbackProxy2);
UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister()
{
	return UInAppPurchaseRestoreCallbackProxy2::StaticClass();
}
struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore, "CreateProxyObjectForInAppPurchaseRestore" }, // 1869026905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseRestoreCallbackProxy2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy2, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2366689681
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy2, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2366689681
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::ClassParams = {
	&UInAppPurchaseRestoreCallbackProxy2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2()
{
	if (!Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton, Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseRestoreCallbackProxy2>()
{
	return UInAppPurchaseRestoreCallbackProxy2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseRestoreCallbackProxy2);
UInAppPurchaseRestoreCallbackProxy2::~UInAppPurchaseRestoreCallbackProxy2() {}
// End Class UInAppPurchaseRestoreCallbackProxy2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInAppPurchaseRestoreInfo2::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewStructOps, TEXT("InAppPurchaseRestoreInfo2"), &Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseRestoreInfo2), 149869892U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2, UInAppPurchaseRestoreCallbackProxy2::StaticClass, TEXT("UInAppPurchaseRestoreCallbackProxy2"), &Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseRestoreCallbackProxy2), 2396485846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_3632220329(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
