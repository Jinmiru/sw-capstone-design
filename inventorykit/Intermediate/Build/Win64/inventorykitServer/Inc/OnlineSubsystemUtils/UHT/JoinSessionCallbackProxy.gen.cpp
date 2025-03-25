// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/JoinSessionCallbackProxy.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoinSessionCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UJoinSessionCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UJoinSessionCallbackProxy Function JoinSession
struct Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics
{
	struct JoinSessionCallbackProxy_eventJoinSession_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FBlueprintSessionResult SearchResult;
		UJoinSessionCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Joins a remote session with the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
		{ "ToolTip", "Joins a remote session with the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchResult_MetaData), NewProp_SearchResult_MetaData) }; // 1307808723
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, ReturnValue), Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_SearchResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoinSessionCallbackProxy, nullptr, "JoinSession", nullptr, nullptr, Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::JoinSessionCallbackProxy_eventJoinSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::JoinSessionCallbackProxy_eventJoinSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoinSessionCallbackProxy::execJoinSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SearchResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UJoinSessionCallbackProxy**)Z_Param__Result=UJoinSessionCallbackProxy::JoinSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_SearchResult);
	P_NATIVE_END;
}
// End Class UJoinSessionCallbackProxy Function JoinSession

// Begin Class UJoinSessionCallbackProxy
void UJoinSessionCallbackProxy::StaticRegisterNativesUJoinSessionCallbackProxy()
{
	UClass* Class = UJoinSessionCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JoinSession", &UJoinSessionCallbackProxy::execJoinSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoinSessionCallbackProxy);
UClass* Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister()
{
	return UJoinSessionCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UJoinSessionCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JoinSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful join\n" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful join" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful join\n" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful join" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession, "JoinSession" }, // 3084509245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoinSessionCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJoinSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJoinSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::ClassParams = {
	&UJoinSessionCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJoinSessionCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UJoinSessionCallbackProxy>()
{
	return UJoinSessionCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJoinSessionCallbackProxy);
UJoinSessionCallbackProxy::~UJoinSessionCallbackProxy() {}
// End Class UJoinSessionCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJoinSessionCallbackProxy, UJoinSessionCallbackProxy::StaticClass, TEXT("UJoinSessionCallbackProxy"), &Z_Registration_Info_UClass_UJoinSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoinSessionCallbackProxy), 716872235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_4264859533(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
