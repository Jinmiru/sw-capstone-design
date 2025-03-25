// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/DestroySessionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroySessionCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UDestroySessionCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UDestroySessionCallbackProxy Function DestroySession
struct Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics
{
	struct DestroySessionCallbackProxy_eventDestroySession_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UDestroySessionCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Destroys a session previously created by the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
		{ "ToolTip", "Destroys a session previously created by the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestroySessionCallbackProxy_eventDestroySession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestroySessionCallbackProxy_eventDestroySession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestroySessionCallbackProxy_eventDestroySession_Parms, ReturnValue), Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestroySessionCallbackProxy, nullptr, "DestroySession", nullptr, nullptr, Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::DestroySessionCallbackProxy_eventDestroySession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::DestroySessionCallbackProxy_eventDestroySession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDestroySessionCallbackProxy::execDestroySession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDestroySessionCallbackProxy**)Z_Param__Result=UDestroySessionCallbackProxy::DestroySession(Z_Param_WorldContextObject,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UDestroySessionCallbackProxy Function DestroySession

// Begin Class UDestroySessionCallbackProxy
void UDestroySessionCallbackProxy::StaticRegisterNativesUDestroySessionCallbackProxy()
{
	UClass* Class = UDestroySessionCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroySession", &UDestroySessionCallbackProxy::execDestroySession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestroySessionCallbackProxy);
UClass* Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister()
{
	return UDestroySessionCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UDestroySessionCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DestroySessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful destroy\n" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful destroy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession, "DestroySession" }, // 1745814236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestroySessionCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDestroySessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDestroySessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::ClassParams = {
	&UDestroySessionCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDestroySessionCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UDestroySessionCallbackProxy>()
{
	return UDestroySessionCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDestroySessionCallbackProxy);
UDestroySessionCallbackProxy::~UDestroySessionCallbackProxy() {}
// End Class UDestroySessionCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDestroySessionCallbackProxy, UDestroySessionCallbackProxy::StaticClass, TEXT("UDestroySessionCallbackProxy"), &Z_Registration_Info_UClass_UDestroySessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestroySessionCallbackProxy), 2603602906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_3658808055(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
