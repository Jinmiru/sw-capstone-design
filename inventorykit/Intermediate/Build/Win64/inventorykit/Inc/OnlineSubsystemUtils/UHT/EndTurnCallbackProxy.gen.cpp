// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/EndTurnCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndTurnCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UEndTurnCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UEndTurnCallbackProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UEndTurnCallbackProxy Function EndTurn
struct Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics
{
	struct EndTurnCallbackProxy_eventEndTurn_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FString MatchID;
		TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface;
		UEndTurnCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "Comment", "// Ends the turn for the current player\n" },
		{ "ModuleRelativePath", "Classes/EndTurnCallbackProxy.h" },
		{ "ToolTip", "Ends the turn for the current player" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchID;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TurnBasedMatchInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndTurnCallbackProxy_eventEndTurn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndTurnCallbackProxy_eventEndTurn_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndTurnCallbackProxy_eventEndTurn_Parms, MatchID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_TurnBasedMatchInterface = { "TurnBasedMatchInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndTurnCallbackProxy_eventEndTurn_Parms, TurnBasedMatchInterface), Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndTurnCallbackProxy_eventEndTurn_Parms, ReturnValue), Z_Construct_UClass_UEndTurnCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_MatchID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_TurnBasedMatchInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndTurnCallbackProxy, nullptr, "EndTurn", nullptr, nullptr, Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::EndTurnCallbackProxy_eventEndTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::EndTurnCallbackProxy_eventEndTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndTurnCallbackProxy::execEndTurn)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
	P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_TurnBasedMatchInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEndTurnCallbackProxy**)Z_Param__Result=UEndTurnCallbackProxy::EndTurn(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_TurnBasedMatchInterface);
	P_NATIVE_END;
}
// End Class UEndTurnCallbackProxy Function EndTurn

// Begin Class UEndTurnCallbackProxy
void UEndTurnCallbackProxy::StaticRegisterNativesUEndTurnCallbackProxy()
{
	UClass* Class = UEndTurnCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndTurn", &UEndTurnCallbackProxy::execEndTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndTurnCallbackProxy);
UClass* Z_Construct_UClass_UEndTurnCallbackProxy_NoRegister()
{
	return UEndTurnCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UEndTurnCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EndTurnCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/EndTurnCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/EndTurnCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/EndTurnCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn, "EndTurn" }, // 2089057834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndTurnCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndTurnCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndTurnCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndTurnCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndTurnCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndTurnCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndTurnCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndTurnCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndTurnCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndTurnCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndTurnCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndTurnCallbackProxy_Statics::ClassParams = {
	&UEndTurnCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEndTurnCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndTurnCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndTurnCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndTurnCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndTurnCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UEndTurnCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndTurnCallbackProxy.OuterSingleton, Z_Construct_UClass_UEndTurnCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndTurnCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UEndTurnCallbackProxy>()
{
	return UEndTurnCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndTurnCallbackProxy);
// End Class UEndTurnCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndTurnCallbackProxy, UEndTurnCallbackProxy::StaticClass, TEXT("UEndTurnCallbackProxy"), &Z_Registration_Info_UClass_UEndTurnCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndTurnCallbackProxy), 251418745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_426731181(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
