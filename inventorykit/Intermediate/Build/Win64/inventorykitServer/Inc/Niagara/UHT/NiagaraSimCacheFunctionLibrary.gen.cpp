// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraSimCacheFunctionLibrary.h"
#include "Niagara/Classes/NiagaraSimCache.h"
#include "Niagara/Classes/NiagaraSimCacheCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
NIAGARA_API UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache();
NIAGARA_API UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister();
NIAGARA_API UFunction* Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Delegate FOnCaptureComplete
struct Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics
{
	struct AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms), &Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, nullptr, "OnCaptureComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAsyncNiagaraCaptureSimCache::FOnCaptureComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureComplete, bool bSuccess)
{
	struct AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms
	{
		bool bSuccess;
	};
	AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnCaptureComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCaptureComplete

// Begin Class UAsyncNiagaraCaptureSimCache Function CaptureNiagaraSimCache
struct Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics
{
	struct AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms
	{
		UNiagaraSimCache* SimCache;
		FNiagaraSimCacheCreateParameters CreateParameters;
		UNiagaraComponent* NiagaraComponent;
		FNiagaraSimCacheCaptureParameters CaptureParameters;
		UNiagaraSimCache* OutSimCache;
		UAsyncNiagaraCaptureSimCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Capture a simulation cache with customizable capture parameters.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ToolTip", "Capture a simulation cache with customizable capture parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSimCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(0, nullptr) }; // 4056509866
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_CaptureParameters = { "CaptureParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms, CaptureParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters, METADATA_PARAMS(0, nullptr) }; // 3137908210
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_OutSimCache = { "OutSimCache", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms, OutSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms, ReturnValue), Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_SimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_CreateParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_CaptureParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_OutSimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, nullptr, "CaptureNiagaraSimCache", nullptr, nullptr, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCache)
{
	P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
	P_GET_STRUCT(FNiagaraSimCacheCreateParameters,Z_Param_CreateParameters);
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_STRUCT(FNiagaraSimCacheCaptureParameters,Z_Param_CaptureParameters);
	P_GET_OBJECT_REF(UNiagaraSimCache,Z_Param_Out_OutSimCache);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncNiagaraCaptureSimCache**)Z_Param__Result=UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCache(Z_Param_SimCache,Z_Param_CreateParameters,Z_Param_NiagaraComponent,Z_Param_CaptureParameters,P_ARG_GC_BARRIER(Z_Param_Out_OutSimCache));
	P_NATIVE_END;
}
// End Class UAsyncNiagaraCaptureSimCache Function CaptureNiagaraSimCache

// Begin Class UAsyncNiagaraCaptureSimCache Function CaptureNiagaraSimCacheMultiFrame
struct Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics
{
	struct AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms
	{
		UNiagaraSimCache* SimCache;
		FNiagaraSimCacheCreateParameters CreateParameters;
		UNiagaraComponent* NiagaraComponent;
		UNiagaraSimCache* OutSimCache;
		int32 NumFrames;
		int32 CaptureRate;
		bool bAdvanceSimulation;
		float AdvanceDeltaTime;
		UAsyncNiagaraCaptureSimCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CaptureRate, bAdvanceSimulation, AdvanceDeltaTime" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Capture multiple frames from the provided simulation into a SimCache until the simulation becomes inactive, completes or we hit the NumFrames limit.\n\x09""Capture occurs at the end of each frame with the first frame being this frame.\n\x09""CaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\n\x09When AdvanceSimulation is true we will manually advance the simulation in a loop until we have captured the number of frames request, rather than reading from the component each frame.\n\x09*/" },
		{ "CPP_Default_AdvanceDeltaTime", "0.016660" },
		{ "CPP_Default_bAdvanceSimulation", "false" },
		{ "CPP_Default_CaptureRate", "1" },
		{ "CPP_Default_NumFrames", "16" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ToolTip", "Capture multiple frames from the provided simulation into a SimCache until the simulation becomes inactive, completes or we hit the NumFrames limit.\nCapture occurs at the end of each frame with the first frame being this frame.\nCaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\nWhen AdvanceSimulation is true we will manually advance the simulation in a loop until we have captured the number of frames request, rather than reading from the component each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSimCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureRate;
	static void NewProp_bAdvanceSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanceSimulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(0, nullptr) }; // 4056509866
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_OutSimCache = { "OutSimCache", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, OutSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, NumFrames), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, CaptureRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation_SetBit(void* Obj)
{
	((AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms*)Obj)->bAdvanceSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation = { "bAdvanceSimulation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms), &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_AdvanceDeltaTime = { "AdvanceDeltaTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, AdvanceDeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, ReturnValue), Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_SimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CreateParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_OutSimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NumFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CaptureRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_AdvanceDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, nullptr, "CaptureNiagaraSimCacheMultiFrame", nullptr, nullptr, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheMultiFrame)
{
	P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
	P_GET_STRUCT(FNiagaraSimCacheCreateParameters,Z_Param_CreateParameters);
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_OBJECT_REF(UNiagaraSimCache,Z_Param_Out_OutSimCache);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumFrames);
	P_GET_PROPERTY(FIntProperty,Z_Param_CaptureRate);
	P_GET_UBOOL(Z_Param_bAdvanceSimulation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdvanceDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncNiagaraCaptureSimCache**)Z_Param__Result=UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame(Z_Param_SimCache,Z_Param_CreateParameters,Z_Param_NiagaraComponent,P_ARG_GC_BARRIER(Z_Param_Out_OutSimCache),Z_Param_NumFrames,Z_Param_CaptureRate,Z_Param_bAdvanceSimulation,Z_Param_AdvanceDeltaTime);
	P_NATIVE_END;
}
// End Class UAsyncNiagaraCaptureSimCache Function CaptureNiagaraSimCacheMultiFrame

// Begin Class UAsyncNiagaraCaptureSimCache Function CaptureNiagaraSimCacheUntilComplete
struct Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics
{
	struct AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms
	{
		UNiagaraSimCache* SimCache;
		FNiagaraSimCacheCreateParameters CreateParameters;
		UNiagaraComponent* NiagaraComponent;
		UNiagaraSimCache* OutSimCache;
		int32 CaptureRate;
		bool bAdvanceSimulation;
		float AdvanceDeltaTime;
		UAsyncNiagaraCaptureSimCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CaptureRate, bAdvanceSimulation, AdvanceDeltaTime" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Capture frames from the provided simulation into a SimCache until the simulation becomes inactive or completes.\n\x09""Capture occurs at the end of each frame with the first frame being this frame.\n\x09""CaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\n\x09When AdvanceSimulation is true we will manually advance the simulation until the capture is complete inside a loop, rather than reading from the component each frame.\n\x09*/" },
		{ "CPP_Default_AdvanceDeltaTime", "0.016660" },
		{ "CPP_Default_bAdvanceSimulation", "false" },
		{ "CPP_Default_CaptureRate", "1" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ToolTip", "Capture frames from the provided simulation into a SimCache until the simulation becomes inactive or completes.\nCapture occurs at the end of each frame with the first frame being this frame.\nCaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\nWhen AdvanceSimulation is true we will manually advance the simulation until the capture is complete inside a loop, rather than reading from the component each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSimCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureRate;
	static void NewProp_bAdvanceSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanceSimulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(0, nullptr) }; // 4056509866
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_OutSimCache = { "OutSimCache", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, OutSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, CaptureRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation_SetBit(void* Obj)
{
	((AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms*)Obj)->bAdvanceSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation = { "bAdvanceSimulation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms), &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_AdvanceDeltaTime = { "AdvanceDeltaTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, AdvanceDeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, ReturnValue), Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_SimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CreateParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_OutSimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CaptureRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_AdvanceDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, nullptr, "CaptureNiagaraSimCacheUntilComplete", nullptr, nullptr, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheUntilComplete)
{
	P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
	P_GET_STRUCT(FNiagaraSimCacheCreateParameters,Z_Param_CreateParameters);
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_OBJECT_REF(UNiagaraSimCache,Z_Param_Out_OutSimCache);
	P_GET_PROPERTY(FIntProperty,Z_Param_CaptureRate);
	P_GET_UBOOL(Z_Param_bAdvanceSimulation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdvanceDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncNiagaraCaptureSimCache**)Z_Param__Result=UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete(Z_Param_SimCache,Z_Param_CreateParameters,Z_Param_NiagaraComponent,P_ARG_GC_BARRIER(Z_Param_Out_OutSimCache),Z_Param_CaptureRate,Z_Param_bAdvanceSimulation,Z_Param_AdvanceDeltaTime);
	P_NATIVE_END;
}
// End Class UAsyncNiagaraCaptureSimCache Function CaptureNiagaraSimCacheUntilComplete

// Begin Class UAsyncNiagaraCaptureSimCache
void UAsyncNiagaraCaptureSimCache::StaticRegisterNativesUAsyncNiagaraCaptureSimCache()
{
	UClass* Class = UAsyncNiagaraCaptureSimCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureNiagaraSimCache", &UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCache },
		{ "CaptureNiagaraSimCacheMultiFrame", &UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheMultiFrame },
		{ "CaptureNiagaraSimCacheUntilComplete", &UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheUntilComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncNiagaraCaptureSimCache);
UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister()
{
	return UAsyncNiagaraCaptureSimCache::StaticClass();
}
struct Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraSimCacheFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSimCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComplete_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureSimCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CaptureComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache, "CaptureNiagaraSimCache" }, // 1826116934
		{ &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame, "CaptureNiagaraSimCacheMultiFrame" }, // 680021939
		{ &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete, "CaptureNiagaraSimCacheUntilComplete" }, // 2760617867
		{ &Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature, "OnCaptureComplete__DelegateSignature" }, // 3132377291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncNiagaraCaptureSimCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureSimCache = { "CaptureSimCache", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNiagaraCaptureSimCache, CaptureSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureSimCache_MetaData), NewProp_CaptureSimCache_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNiagaraCaptureSimCache, CaptureComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComplete = { "CaptureComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNiagaraCaptureSimCache, CaptureComplete), Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComplete_MetaData), NewProp_CaptureComplete_MetaData) }; // 3132377291
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureSimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::ClassParams = {
	&UAsyncNiagaraCaptureSimCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache()
{
	if (!Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton, Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UAsyncNiagaraCaptureSimCache>()
{
	return UAsyncNiagaraCaptureSimCache::StaticClass();
}
UAsyncNiagaraCaptureSimCache::UAsyncNiagaraCaptureSimCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncNiagaraCaptureSimCache);
UAsyncNiagaraCaptureSimCache::~UAsyncNiagaraCaptureSimCache() {}
// End Class UAsyncNiagaraCaptureSimCache

// Begin Class UNiagaraSimCacheFunctionLibrary Function CaptureNiagaraSimCacheImmediate
struct Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics
{
	struct NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms
	{
		UNiagaraSimCache* SimCache;
		FNiagaraSimCacheCreateParameters CreateParameters;
		UNiagaraComponent* NiagaraComponent;
		UNiagaraSimCache* OutSimCache;
		bool bAdvanceSimulation;
		float AdvanceDeltaTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Captures the simulations current frame data into the SimCache.\n\x09This happens immediately so you may need to be careful with tick order of the component you are capturing from.\n\x09The return can be invalid if the component can not be captured for some reason (i.e. not active).\n\x09When AdvanceSimulation is true we will manually advance the simulation one frame using the provided AdvanceDeltaTime before capturing.\n\x09*/" },
		{ "CPP_Default_AdvanceDeltaTime", "0.016660" },
		{ "CPP_Default_bAdvanceSimulation", "false" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Captures the simulations current frame data into the SimCache.\nThis happens immediately so you may need to be careful with tick order of the component you are capturing from.\nThe return can be invalid if the component can not be captured for some reason (i.e. not active).\nWhen AdvanceSimulation is true we will manually advance the simulation one frame using the provided AdvanceDeltaTime before capturing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSimCache;
	static void NewProp_bAdvanceSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanceSimulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDeltaTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(0, nullptr) }; // 4056509866
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_OutSimCache = { "OutSimCache", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, OutSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation_SetBit(void* Obj)
{
	((NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms*)Obj)->bAdvanceSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation = { "bAdvanceSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms), &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_AdvanceDeltaTime = { "AdvanceDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, AdvanceDeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms), &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_SimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_CreateParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_OutSimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_AdvanceDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary, nullptr, "CaptureNiagaraSimCacheImmediate", nullptr, nullptr, Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraSimCacheFunctionLibrary::execCaptureNiagaraSimCacheImmediate)
{
	P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
	P_GET_STRUCT(FNiagaraSimCacheCreateParameters,Z_Param_CreateParameters);
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_OBJECT_REF(UNiagaraSimCache,Z_Param_Out_OutSimCache);
	P_GET_UBOOL(Z_Param_bAdvanceSimulation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdvanceDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate(Z_Param_SimCache,Z_Param_CreateParameters,Z_Param_NiagaraComponent,P_ARG_GC_BARRIER(Z_Param_Out_OutSimCache),Z_Param_bAdvanceSimulation,Z_Param_AdvanceDeltaTime);
	P_NATIVE_END;
}
// End Class UNiagaraSimCacheFunctionLibrary Function CaptureNiagaraSimCacheImmediate

// Begin Class UNiagaraSimCacheFunctionLibrary Function CreateNiagaraSimCache
struct Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics
{
	struct NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms
	{
		UObject* WorldContextObject;
		UNiagaraSimCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Captures the simulation cache object that can be captured into using the various API calls.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ReturnDisplayName", "SimCache" },
		{ "ToolTip", "Captures the simulation cache object that can be captured into using the various API calls." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary, nullptr, "CreateNiagaraSimCache", nullptr, nullptr, Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraSimCacheFunctionLibrary::execCreateNiagaraSimCache)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraSimCache**)Z_Param__Result=UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UNiagaraSimCacheFunctionLibrary Function CreateNiagaraSimCache

// Begin Class UNiagaraSimCacheFunctionLibrary
void UNiagaraSimCacheFunctionLibrary::StaticRegisterNativesUNiagaraSimCacheFunctionLibrary()
{
	UClass* Class = UNiagaraSimCacheFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureNiagaraSimCacheImmediate", &UNiagaraSimCacheFunctionLibrary::execCaptureNiagaraSimCacheImmediate },
		{ "CreateNiagaraSimCache", &UNiagaraSimCacheFunctionLibrary::execCreateNiagaraSimCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimCacheFunctionLibrary);
UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister()
{
	return UNiagaraSimCacheFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraSimCacheFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate, "CaptureNiagaraSimCacheImmediate" }, // 693707256
		{ &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache, "CreateNiagaraSimCache" }, // 1591077787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimCacheFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::ClassParams = {
	&UNiagaraSimCacheFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraSimCacheFunctionLibrary>()
{
	return UNiagaraSimCacheFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimCacheFunctionLibrary);
UNiagaraSimCacheFunctionLibrary::~UNiagaraSimCacheFunctionLibrary() {}
// End Class UNiagaraSimCacheFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, UAsyncNiagaraCaptureSimCache::StaticClass, TEXT("UAsyncNiagaraCaptureSimCache"), &Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncNiagaraCaptureSimCache), 3073699378U) },
		{ Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary, UNiagaraSimCacheFunctionLibrary::StaticClass, TEXT("UNiagaraSimCacheFunctionLibrary"), &Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimCacheFunctionLibrary), 1344779433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_3077911915(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
