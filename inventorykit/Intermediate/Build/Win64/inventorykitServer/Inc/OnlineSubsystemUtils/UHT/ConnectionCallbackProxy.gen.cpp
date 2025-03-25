// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/ConnectionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectionCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UConnectionCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UConnectionCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Delegate FOnlineConnectionResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms
	{
		int32 ErrorCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ConnectionCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms, ErrorCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::NewProp_ErrorCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineConnectionResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnlineConnectionResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineConnectionResult, int32 ErrorCode)
{
	struct _Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms
	{
		int32 ErrorCode;
	};
	_Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms Parms;
	Parms.ErrorCode=ErrorCode;
	OnlineConnectionResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnlineConnectionResult

// Begin Class UConnectionCallbackProxy Function ConnectToService
struct Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics
{
	struct ConnectionCallbackProxy_eventConnectToService_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UConnectionCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Connects to an online service such as Google Play\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Show External Login UI instead" },
		{ "ModuleRelativePath", "Classes/ConnectionCallbackProxy.h" },
		{ "ToolTip", "Connects to an online service such as Google Play" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConnectionCallbackProxy_eventConnectToService_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConnectionCallbackProxy_eventConnectToService_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConnectionCallbackProxy_eventConnectToService_Parms, ReturnValue), Z_Construct_UClass_UConnectionCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectionCallbackProxy, nullptr, "ConnectToService", nullptr, nullptr, Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::ConnectionCallbackProxy_eventConnectToService_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::ConnectionCallbackProxy_eventConnectToService_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConnectionCallbackProxy::execConnectToService)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConnectionCallbackProxy**)Z_Param__Result=UConnectionCallbackProxy::ConnectToService(Z_Param_WorldContextObject,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UConnectionCallbackProxy Function ConnectToService

// Begin Class UConnectionCallbackProxy
void UConnectionCallbackProxy::StaticRegisterNativesUConnectionCallbackProxy()
{
	UClass* Class = UConnectionCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectToService", &UConnectionCallbackProxy::execConnectToService },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConnectionCallbackProxy);
UClass* Z_Construct_UClass_UConnectionCallbackProxy_NoRegister()
{
	return UConnectionCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UConnectionCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConnectionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/ConnectionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/ConnectionCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/ConnectionCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService, "ConnectToService" }, // 2703199306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConnectionCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConnectionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 352685573
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConnectionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConnectionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 352685573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConnectionCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectionCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectionCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConnectionCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConnectionCallbackProxy_Statics::ClassParams = {
	&UConnectionCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConnectionCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UConnectionCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConnectionCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UConnectionCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConnectionCallbackProxy.OuterSingleton, Z_Construct_UClass_UConnectionCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConnectionCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UConnectionCallbackProxy>()
{
	return UConnectionCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConnectionCallbackProxy);
UConnectionCallbackProxy::~UConnectionCallbackProxy() {}
// End Class UConnectionCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConnectionCallbackProxy, UConnectionCallbackProxy::StaticClass, TEXT("UConnectionCallbackProxy"), &Z_Registration_Info_UClass_UConnectionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConnectionCallbackProxy), 4070351955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_364252155(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
