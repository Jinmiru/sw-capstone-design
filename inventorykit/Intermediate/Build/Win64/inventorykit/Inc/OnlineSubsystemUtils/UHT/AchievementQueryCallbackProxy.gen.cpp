// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/AchievementQueryCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementQueryCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UAchievementQueryCallbackProxy Function CacheAchievementDescriptions
struct Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics
{
	struct AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UAchievementQueryCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Fetches and caches achievement descriptions from the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Fetches and caches achievement descriptions from the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, ReturnValue), Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementQueryCallbackProxy, nullptr, "CacheAchievementDescriptions", nullptr, nullptr, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementQueryCallbackProxy::execCacheAchievementDescriptions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAchievementQueryCallbackProxy**)Z_Param__Result=UAchievementQueryCallbackProxy::CacheAchievementDescriptions(Z_Param_WorldContextObject,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UAchievementQueryCallbackProxy Function CacheAchievementDescriptions

// Begin Class UAchievementQueryCallbackProxy Function CacheAchievements
struct Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics
{
	struct AchievementQueryCallbackProxy_eventCacheAchievements_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UAchievementQueryCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Fetches and caches achievement progress from the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Fetches and caches achievement progress from the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, ReturnValue), Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementQueryCallbackProxy, nullptr, "CacheAchievements", nullptr, nullptr, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::AchievementQueryCallbackProxy_eventCacheAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::AchievementQueryCallbackProxy_eventCacheAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementQueryCallbackProxy::execCacheAchievements)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAchievementQueryCallbackProxy**)Z_Param__Result=UAchievementQueryCallbackProxy::CacheAchievements(Z_Param_WorldContextObject,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UAchievementQueryCallbackProxy Function CacheAchievements

// Begin Class UAchievementQueryCallbackProxy
void UAchievementQueryCallbackProxy::StaticRegisterNativesUAchievementQueryCallbackProxy()
{
	UClass* Class = UAchievementQueryCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CacheAchievementDescriptions", &UAchievementQueryCallbackProxy::execCacheAchievementDescriptions },
		{ "CacheAchievements", &UAchievementQueryCallbackProxy::execCacheAchievements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAchievementQueryCallbackProxy);
UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister()
{
	return UAchievementQueryCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AchievementQueryCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions, "CacheAchievementDescriptions" }, // 1038697344
		{ &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements, "CacheAchievements" }, // 226747691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementQueryCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAchievementQueryCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAchievementQueryCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::ClassParams = {
	&UAchievementQueryCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton, Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UAchievementQueryCallbackProxy>()
{
	return UAchievementQueryCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementQueryCallbackProxy);
UAchievementQueryCallbackProxy::~UAchievementQueryCallbackProxy() {}
// End Class UAchievementQueryCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAchievementQueryCallbackProxy, UAchievementQueryCallbackProxy::StaticClass, TEXT("UAchievementQueryCallbackProxy"), &Z_Registration_Info_UClass_UAchievementQueryCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAchievementQueryCallbackProxy), 2636673873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_4069702840(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
