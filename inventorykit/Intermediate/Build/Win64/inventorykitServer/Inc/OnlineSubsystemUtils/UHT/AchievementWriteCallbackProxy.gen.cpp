// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementWriteCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Delegate FAchievementWriteDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms
	{
		FName WrittenAchievementName;
		float WrittenProgress;
		int32 WrittenUserTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WrittenAchievementName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WrittenProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WrittenUserTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenAchievementName = { "WrittenAchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms, WrittenAchievementName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenProgress = { "WrittenProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms, WrittenProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenUserTag = { "WrittenUserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms, WrittenUserTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenAchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::NewProp_WrittenUserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "AchievementWriteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAchievementWriteDelegate_DelegateWrapper(const FMulticastScriptDelegate& AchievementWriteDelegate, FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	struct _Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms
	{
		FName WrittenAchievementName;
		float WrittenProgress;
		int32 WrittenUserTag;
	};
	_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms Parms;
	Parms.WrittenAchievementName=WrittenAchievementName;
	Parms.WrittenProgress=WrittenProgress;
	Parms.WrittenUserTag=WrittenUserTag;
	AchievementWriteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAchievementWriteDelegate

// Begin Class UAchievementWriteCallbackProxy Function WriteAchievementProgress
struct Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics
{
	struct AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FName AchievementName;
		float Progress;
		int32 UserTag;
		UAchievementWriteCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Writes progress about an achievement to the default online subsystem\n//   AchievementName is the ID of the achievement to update progress on\n//   Progress is the reported progress toward accomplishing the achievement\n//   UserTag is not used internally, but it is returned on success or failure\n" },
		{ "CPP_Default_Progress", "100.000000" },
		{ "CPP_Default_UserTag", "0" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
		{ "ToolTip", "Writes progress about an achievement to the default online subsystem\n  AchievementName is the ID of the achievement to update progress on\n  Progress is the reported progress toward accomplishing the achievement\n  UserTag is not used internally, but it is returned on success or failure" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, UserTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms, ReturnValue), Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_UserTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementWriteCallbackProxy, nullptr, "WriteAchievementProgress", nullptr, nullptr, Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::AchievementWriteCallbackProxy_eventWriteAchievementProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementWriteCallbackProxy::execWriteAchievementProgress)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_AchievementName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAchievementWriteCallbackProxy**)Z_Param__Result=UAchievementWriteCallbackProxy::WriteAchievementProgress(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementName,Z_Param_Progress,Z_Param_UserTag);
	P_NATIVE_END;
}
// End Class UAchievementWriteCallbackProxy Function WriteAchievementProgress

// Begin Class UAchievementWriteCallbackProxy
void UAchievementWriteCallbackProxy::StaticRegisterNativesUAchievementWriteCallbackProxy()
{
	UClass* Class = UAchievementWriteCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WriteAchievementProgress", &UAchievementWriteCallbackProxy::execWriteAchievementProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAchievementWriteCallbackProxy);
UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister()
{
	return UAchievementWriteCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AchievementWriteCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful achievement write\n" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful achievement write" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful achievement write\n" },
		{ "ModuleRelativePath", "Classes/AchievementWriteCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful achievement write" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteAchievementProgress, "WriteAchievementProgress" }, // 1548402638
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementWriteCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAchievementWriteCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1672491080
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAchievementWriteCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1672491080
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::ClassParams = {
	&UAchievementWriteCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.OuterSingleton, Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UAchievementWriteCallbackProxy>()
{
	return UAchievementWriteCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementWriteCallbackProxy);
UAchievementWriteCallbackProxy::~UAchievementWriteCallbackProxy() {}
// End Class UAchievementWriteCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAchievementWriteCallbackProxy, UAchievementWriteCallbackProxy::StaticClass, TEXT("UAchievementWriteCallbackProxy"), &Z_Registration_Info_UClass_UAchievementWriteCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAchievementWriteCallbackProxy), 4277452077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_2558490442(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
