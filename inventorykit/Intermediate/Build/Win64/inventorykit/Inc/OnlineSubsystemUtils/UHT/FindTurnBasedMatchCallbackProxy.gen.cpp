// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/FindTurnBasedMatchCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindTurnBasedMatchCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Delegate FOnlineTurnBasedMatchResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms
	{
		FString MatchID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms, MatchID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::NewProp_MatchID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineTurnBasedMatchResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnlineTurnBasedMatchResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineTurnBasedMatchResult, const FString& MatchID)
{
	struct _Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms
	{
		FString MatchID;
	};
	_Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms Parms;
	Parms.MatchID=MatchID;
	OnlineTurnBasedMatchResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnlineTurnBasedMatchResult

// Begin Class UFindTurnBasedMatchCallbackProxy Function FindTurnBasedMatch
struct Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics
{
	struct FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		TScriptInterface<ITurnBasedMatchInterface> MatchActor;
		int32 MinPlayers;
		int32 MaxPlayers;
		int32 PlayerGroup;
		bool ShowExistingMatches;
		UFindTurnBasedMatchCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "Comment", "// Use the platform matchmaking service (like Game Center) to find a match.\n" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
		{ "ToolTip", "Use the platform matchmaking service (like Game Center) to find a match." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_MatchActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroup;
	static void NewProp_ShowExistingMatches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExistingMatches;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MatchActor = { "MatchActor", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, MatchActor), Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MinPlayers = { "MinPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, MinPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerGroup = { "PlayerGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, PlayerGroup), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches_SetBit(void* Obj)
{
	((FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms*)Obj)->ShowExistingMatches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches = { "ShowExistingMatches", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms), &Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, ReturnValue), Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MatchActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MinPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy, nullptr, "FindTurnBasedMatch", nullptr, nullptr, Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindTurnBasedMatchCallbackProxy::execFindTurnBasedMatch)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_MatchActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinPlayers);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerGroup);
	P_GET_UBOOL(Z_Param_ShowExistingMatches);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFindTurnBasedMatchCallbackProxy**)Z_Param__Result=UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchActor,Z_Param_MinPlayers,Z_Param_MaxPlayers,Z_Param_PlayerGroup,Z_Param_ShowExistingMatches);
	P_NATIVE_END;
}
// End Class UFindTurnBasedMatchCallbackProxy Function FindTurnBasedMatch

// Begin Class UFindTurnBasedMatchCallbackProxy
void UFindTurnBasedMatchCallbackProxy::StaticRegisterNativesUFindTurnBasedMatchCallbackProxy()
{
	UClass* Class = UFindTurnBasedMatchCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindTurnBasedMatch", &UFindTurnBasedMatchCallbackProxy::execFindTurnBasedMatch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindTurnBasedMatchCallbackProxy);
UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister()
{
	return UFindTurnBasedMatchCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FindTurnBasedMatchCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when matchmaking succeeded.\n" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
		{ "ToolTip", "Called when matchmaking succeeded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when matchmaking failed\n" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
		{ "ToolTip", "Called when matchmaking failed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch, "FindTurnBasedMatch" }, // 1708226452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindTurnBasedMatchCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindTurnBasedMatchCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2425825841
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindTurnBasedMatchCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2425825841
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::ClassParams = {
	&UFindTurnBasedMatchCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.OuterSingleton, Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UFindTurnBasedMatchCallbackProxy>()
{
	return UFindTurnBasedMatchCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFindTurnBasedMatchCallbackProxy);
// End Class UFindTurnBasedMatchCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy, UFindTurnBasedMatchCallbackProxy::StaticClass, TEXT("UFindTurnBasedMatchCallbackProxy"), &Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindTurnBasedMatchCallbackProxy), 3593762017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_3861385302(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
