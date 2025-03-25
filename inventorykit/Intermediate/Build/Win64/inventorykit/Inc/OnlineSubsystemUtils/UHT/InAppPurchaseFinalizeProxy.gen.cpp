// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseFinalizeProxy.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseFinalizeProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UInAppPurchaseFinalizeProxy Function CreateProxyObjectForInAppPurchaseFinalize
struct Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics
{
	struct InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms
	{
		FInAppPurchaseReceiptInfo2 InAppPurchaseReceipt;
		APlayerController* PlayerController;
		UInAppPurchaseFinalizeProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Finalizes a transaction for the provided transaction identifier\n" },
		{ "DisplayName", "Finalize In-App Purchase Transaction" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseFinalizeProxy.h" },
		{ "ToolTip", "Finalizes a transaction for the provided transaction identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseReceipt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseReceipt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_InAppPurchaseReceipt = { "InAppPurchaseReceipt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms, InAppPurchaseReceipt), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAppPurchaseReceipt_MetaData), NewProp_InAppPurchaseReceipt_MetaData) }; // 1391451188
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_InAppPurchaseReceipt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseFinalizeProxy, nullptr, "CreateProxyObjectForInAppPurchaseFinalize", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppPurchaseFinalizeProxy::execCreateProxyObjectForInAppPurchaseFinalize)
{
	P_GET_STRUCT_REF(FInAppPurchaseReceiptInfo2,Z_Param_Out_InAppPurchaseReceipt);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInAppPurchaseFinalizeProxy**)Z_Param__Result=UInAppPurchaseFinalizeProxy::CreateProxyObjectForInAppPurchaseFinalize(Z_Param_Out_InAppPurchaseReceipt,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UInAppPurchaseFinalizeProxy Function CreateProxyObjectForInAppPurchaseFinalize

// Begin Class UInAppPurchaseFinalizeProxy
void UInAppPurchaseFinalizeProxy::StaticRegisterNativesUInAppPurchaseFinalizeProxy()
{
	UClass* Class = UInAppPurchaseFinalizeProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForInAppPurchaseFinalize", &UInAppPurchaseFinalizeProxy::execCreateProxyObjectForInAppPurchaseFinalize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseFinalizeProxy);
UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister()
{
	return UInAppPurchaseFinalizeProxy::StaticClass();
}
struct Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseFinalizeProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseFinalizeProxy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize, "CreateProxyObjectForInAppPurchaseFinalize" }, // 2589160453
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseFinalizeProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::ClassParams = {
	&UInAppPurchaseFinalizeProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy()
{
	if (!Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton, Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseFinalizeProxy>()
{
	return UInAppPurchaseFinalizeProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseFinalizeProxy);
UInAppPurchaseFinalizeProxy::~UInAppPurchaseFinalizeProxy() {}
// End Class UInAppPurchaseFinalizeProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseFinalizeProxy, UInAppPurchaseFinalizeProxy::StaticClass, TEXT("UInAppPurchaseFinalizeProxy"), &Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseFinalizeProxy), 751239492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_1406231395(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
