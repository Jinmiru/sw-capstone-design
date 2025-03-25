// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/ShowLoginUICallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowLoginUICallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UShowLoginUICallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Delegate FOnlineShowLoginUIResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineShowLoginUIResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnlineShowLoginUIResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineShowLoginUIResult, APlayerController* PlayerController)
{
	struct _Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms
	{
		APlayerController* PlayerController;
	};
	_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms Parms;
	Parms.PlayerController=PlayerController;
	OnlineShowLoginUIResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnlineShowLoginUIResult

// Begin Class UShowLoginUICallbackProxy Function ShowExternalLoginUI
struct Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics
{
	struct ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms
	{
		UObject* WorldContextObject;
		APlayerController* InPlayerController;
		UShowLoginUICallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online" },
		{ "Comment", "// Shows the login UI for the currently active online subsystem, if the subsystem supports a login UI.\n" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ToolTip", "Shows the login UI for the currently active online subsystem, if the subsystem supports a login UI." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms, ReturnValue), Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_InPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShowLoginUICallbackProxy, nullptr, "ShowExternalLoginUI", nullptr, nullptr, Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShowLoginUICallbackProxy::execShowExternalLoginUI)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UShowLoginUICallbackProxy**)Z_Param__Result=UShowLoginUICallbackProxy::ShowExternalLoginUI(Z_Param_WorldContextObject,Z_Param_InPlayerController);
	P_NATIVE_END;
}
// End Class UShowLoginUICallbackProxy Function ShowExternalLoginUI

// Begin Class UShowLoginUICallbackProxy
void UShowLoginUICallbackProxy::StaticRegisterNativesUShowLoginUICallbackProxy()
{
	UClass* Class = UShowLoginUICallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowExternalLoginUI", &UShowLoginUICallbackProxy::execShowExternalLoginUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShowLoginUICallbackProxy);
UClass* Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister()
{
	return UShowLoginUICallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UShowLoginUICallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ShowLoginUICallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI, "ShowExternalLoginUI" }, // 2763280116
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowLoginUICallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShowLoginUICallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 171540535
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShowLoginUICallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 171540535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::ClassParams = {
	&UShowLoginUICallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShowLoginUICallbackProxy()
{
	if (!Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton, Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UShowLoginUICallbackProxy>()
{
	return UShowLoginUICallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShowLoginUICallbackProxy);
UShowLoginUICallbackProxy::~UShowLoginUICallbackProxy() {}
// End Class UShowLoginUICallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShowLoginUICallbackProxy, UShowLoginUICallbackProxy::StaticClass, TEXT("UShowLoginUICallbackProxy"), &Z_Registration_Info_UClass_UShowLoginUICallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShowLoginUICallbackProxy), 655948452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_157973339(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
