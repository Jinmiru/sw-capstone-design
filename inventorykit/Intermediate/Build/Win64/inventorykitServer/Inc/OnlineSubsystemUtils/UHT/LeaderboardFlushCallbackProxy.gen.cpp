// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/LeaderboardFlushCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardFlushCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Delegate FOnLeaderboardFlushed
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms
	{
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnLeaderboardFlushed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeaderboardFlushed_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFlushed, FName SessionName)
{
	struct _Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms
	{
		FName SessionName;
	};
	_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms Parms;
	Parms.SessionName=SessionName;
	OnLeaderboardFlushed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLeaderboardFlushed

// Begin Class ULeaderboardFlushCallbackProxy Function CreateProxyObjectForFlush
struct Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics
{
	struct LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms
	{
		APlayerController* PlayerController;
		FName SessionName;
		ULeaderboardFlushCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Called to perform the query internally\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
		{ "ToolTip", "Called to perform the query internally" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms, ReturnValue), Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardFlushCallbackProxy, nullptr, "CreateProxyObjectForFlush", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardFlushCallbackProxy::execCreateProxyObjectForFlush)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULeaderboardFlushCallbackProxy**)Z_Param__Result=ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(Z_Param_PlayerController,Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class ULeaderboardFlushCallbackProxy Function CreateProxyObjectForFlush

// Begin Class ULeaderboardFlushCallbackProxy
void ULeaderboardFlushCallbackProxy::StaticRegisterNativesULeaderboardFlushCallbackProxy()
{
	UClass* Class = ULeaderboardFlushCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForFlush", &ULeaderboardFlushCallbackProxy::execCreateProxyObjectForFlush },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboardFlushCallbackProxy);
UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister()
{
	return ULeaderboardFlushCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LeaderboardFlushCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful leaderboard flush\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful leaderboard flush" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful leaderboard flush\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful leaderboard flush" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush, "CreateProxyObjectForFlush" }, // 953992841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardFlushCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeaderboardFlushCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2997267040
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeaderboardFlushCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2997267040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::ClassParams = {
	&ULeaderboardFlushCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy()
{
	if (!Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton, Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULeaderboardFlushCallbackProxy>()
{
	return ULeaderboardFlushCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardFlushCallbackProxy);
ULeaderboardFlushCallbackProxy::~ULeaderboardFlushCallbackProxy() {}
// End Class ULeaderboardFlushCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboardFlushCallbackProxy, ULeaderboardFlushCallbackProxy::StaticClass, TEXT("ULeaderboardFlushCallbackProxy"), &Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboardFlushCallbackProxy), 1187420154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_2062252729(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
