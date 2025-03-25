// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/LeaderboardQueryCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardQueryCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Delegate FLeaderboardQueryResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms
	{
		int32 LeaderboardValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::NewProp_LeaderboardValue = { "LeaderboardValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms, LeaderboardValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::NewProp_LeaderboardValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "LeaderboardQueryResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeaderboardQueryResult_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardQueryResult, int32 LeaderboardValue)
{
	struct _Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms
	{
		int32 LeaderboardValue;
	};
	_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms Parms;
	Parms.LeaderboardValue=LeaderboardValue;
	LeaderboardQueryResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeaderboardQueryResult

// Begin Class ULeaderboardQueryCallbackProxy Function CreateProxyObjectForIntQuery
struct Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics
{
	struct LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms
	{
		APlayerController* PlayerController;
		FName StatName;
		ULeaderboardQueryCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Leaderboard" },
		{ "Comment", "// Queries a leaderboard for an integer value\n" },
		{ "DisplayName", "Read Leaderboard Integer" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Queries a leaderboard for an integer value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, ReturnValue), Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardQueryCallbackProxy, nullptr, "CreateProxyObjectForIntQuery", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardQueryCallbackProxy::execCreateProxyObjectForIntQuery)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULeaderboardQueryCallbackProxy**)Z_Param__Result=ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(Z_Param_PlayerController,Z_Param_StatName);
	P_NATIVE_END;
}
// End Class ULeaderboardQueryCallbackProxy Function CreateProxyObjectForIntQuery

// Begin Class ULeaderboardQueryCallbackProxy
void ULeaderboardQueryCallbackProxy::StaticRegisterNativesULeaderboardQueryCallbackProxy()
{
	UClass* Class = ULeaderboardQueryCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForIntQuery", &ULeaderboardQueryCallbackProxy::execCreateProxyObjectForIntQuery },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboardQueryCallbackProxy);
UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister()
{
	return ULeaderboardQueryCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LeaderboardQueryCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful leaderboard query\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful leaderboard query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful leaderboard query\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful leaderboard query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery, "CreateProxyObjectForIntQuery" }, // 2139232829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardQueryCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeaderboardQueryCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1244760438
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeaderboardQueryCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1244760438
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::ClassParams = {
	&ULeaderboardQueryCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy()
{
	if (!Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton, Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULeaderboardQueryCallbackProxy>()
{
	return ULeaderboardQueryCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardQueryCallbackProxy);
ULeaderboardQueryCallbackProxy::~ULeaderboardQueryCallbackProxy() {}
// End Class ULeaderboardQueryCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboardQueryCallbackProxy, ULeaderboardQueryCallbackProxy::StaticClass, TEXT("ULeaderboardQueryCallbackProxy"), &Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboardQueryCallbackProxy), 1992011862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_353142596(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
