// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIAsyncTaskBlueprintProxy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy();
AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Delegate FOAISimpleDelegate
struct Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics
{
	struct _Script_AIModule_eventOAISimpleDelegate_Parms
	{
		TEnumAsByte<EPathFollowingResult::Type> MovementResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::NewProp_MovementResult = { "MovementResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIModule_eventOAISimpleDelegate_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::NewProp_MovementResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "OAISimpleDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::_Script_AIModule_eventOAISimpleDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::_Script_AIModule_eventOAISimpleDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOAISimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& OAISimpleDelegate, EPathFollowingResult::Type MovementResult)
{
	struct _Script_AIModule_eventOAISimpleDelegate_Parms
	{
		TEnumAsByte<EPathFollowingResult::Type> MovementResult;
	};
	_Script_AIModule_eventOAISimpleDelegate_Parms Parms;
	Parms.MovementResult=MovementResult;
	OAISimpleDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOAISimpleDelegate

// Begin Class UAIAsyncTaskBlueprintProxy Function OnMoveCompleted
struct Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics
{
	struct AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms
	{
		FAIRequestID RequestID;
		TEnumAsByte<EPathFollowingResult::Type> MovementResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(0, nullptr) }; // 2000238872
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_MovementResult = { "MovementResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_RequestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_MovementResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAsyncTaskBlueprintProxy, nullptr, "OnMoveCompleted", nullptr, nullptr, Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIAsyncTaskBlueprintProxy::execOnMoveCompleted)
{
	P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
	P_GET_PROPERTY(FByteProperty,Z_Param_MovementResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_MovementResult));
	P_NATIVE_END;
}
// End Class UAIAsyncTaskBlueprintProxy Function OnMoveCompleted

// Begin Class UAIAsyncTaskBlueprintProxy
void UAIAsyncTaskBlueprintProxy::StaticRegisterNativesUAIAsyncTaskBlueprintProxy()
{
	UClass* Class = UAIAsyncTaskBlueprintProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMoveCompleted", &UAIAsyncTaskBlueprintProxy::execOnMoveCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIAsyncTaskBlueprintProxy);
UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister()
{
	return UAIAsyncTaskBlueprintProxy::StaticClass();
}
struct Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/AIAsyncTaskBlueprintProxy.h" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted, "OnMoveCompleted" }, // 617518471
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIAsyncTaskBlueprintProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 77966023
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIAsyncTaskBlueprintProxy, OnFail), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 77966023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::ClassParams = {
	&UAIAsyncTaskBlueprintProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy()
{
	if (!Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIAsyncTaskBlueprintProxy>()
{
	return UAIAsyncTaskBlueprintProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIAsyncTaskBlueprintProxy);
UAIAsyncTaskBlueprintProxy::~UAIAsyncTaskBlueprintProxy() {}
// End Class UAIAsyncTaskBlueprintProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIAsyncTaskBlueprintProxy, UAIAsyncTaskBlueprintProxy::StaticClass, TEXT("UAIAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIAsyncTaskBlueprintProxy), 2210112153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_2066886953(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
