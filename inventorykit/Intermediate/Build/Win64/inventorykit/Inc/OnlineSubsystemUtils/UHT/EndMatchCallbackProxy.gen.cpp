// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/EndMatchCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndMatchCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister();
ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UEndMatchCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UEndMatchCallbackProxy Function EndMatch
struct Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics
{
	struct EndMatchCallbackProxy_eventEndMatch_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		TScriptInterface<ITurnBasedMatchInterface> MatchActor;
		FString MatchID;
		TEnumAsByte<EMPMatchOutcome::Outcome> LocalPlayerOutcome;
		TEnumAsByte<EMPMatchOutcome::Outcome> OtherPlayersOutcome;
		UEndMatchCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "Comment", "// End a match that is in progress while it is the current player's turn\n" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
		{ "ToolTip", "End a match that is in progress while it is the current player's turn" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_MatchActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocalPlayerOutcome;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OtherPlayersOutcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchActor = { "MatchActor", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, MatchActor), Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, MatchID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_LocalPlayerOutcome = { "LocalPlayerOutcome", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, LocalPlayerOutcome), Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome, METADATA_PARAMS(0, nullptr) }; // 2296874311
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_OtherPlayersOutcome = { "OtherPlayersOutcome", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, OtherPlayersOutcome), Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome, METADATA_PARAMS(0, nullptr) }; // 2296874311
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, ReturnValue), Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_LocalPlayerOutcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_OtherPlayersOutcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndMatchCallbackProxy, nullptr, "EndMatch", nullptr, nullptr, Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::EndMatchCallbackProxy_eventEndMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::EndMatchCallbackProxy_eventEndMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndMatchCallbackProxy::execEndMatch)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_MatchActor);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
	P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerOutcome);
	P_GET_PROPERTY(FByteProperty,Z_Param_OtherPlayersOutcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEndMatchCallbackProxy**)Z_Param__Result=UEndMatchCallbackProxy::EndMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchActor,Z_Param_MatchID,EMPMatchOutcome::Outcome(Z_Param_LocalPlayerOutcome),EMPMatchOutcome::Outcome(Z_Param_OtherPlayersOutcome));
	P_NATIVE_END;
}
// End Class UEndMatchCallbackProxy Function EndMatch

// Begin Class UEndMatchCallbackProxy
void UEndMatchCallbackProxy::StaticRegisterNativesUEndMatchCallbackProxy()
{
	UClass* Class = UEndMatchCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndMatch", &UEndMatchCallbackProxy::execEndMatch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndMatchCallbackProxy);
UClass* Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister()
{
	return UEndMatchCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UEndMatchCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EndMatchCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the match ends successfully\n" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
		{ "ToolTip", "Called when the match ends successfully" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when ending the match fails\n" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
		{ "ToolTip", "Called when ending the match fails" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch, "EndMatch" }, // 3526379810
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndMatchCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndMatchCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndMatchCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndMatchCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndMatchCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndMatchCallbackProxy_Statics::ClassParams = {
	&UEndMatchCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEndMatchCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndMatchCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndMatchCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UEndMatchCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndMatchCallbackProxy.OuterSingleton, Z_Construct_UClass_UEndMatchCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndMatchCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UEndMatchCallbackProxy>()
{
	return UEndMatchCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndMatchCallbackProxy);
// End Class UEndMatchCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndMatchCallbackProxy, UEndMatchCallbackProxy::StaticClass, TEXT("UEndMatchCallbackProxy"), &Z_Registration_Info_UClass_UEndMatchCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndMatchCallbackProxy), 162963240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_1953168018(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
