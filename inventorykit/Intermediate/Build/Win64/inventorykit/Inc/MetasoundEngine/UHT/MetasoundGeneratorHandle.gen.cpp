// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundGeneratorHandle.h"
#include "MetasoundEngine/Public/MetasoundOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundGeneratorHandle() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister();
METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature();
METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundOutput();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetasoundParameterPack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Delegate FOnMetasoundOutputValueChanged
struct Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics
{
	struct _Script_MetasoundEngine_eventOnMetasoundOutputValueChanged_Parms
	{
		FName OutputName;
		FMetaSoundOutput Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MetasoundEngine_eventOnMetasoundOutputValueChanged_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MetasoundEngine_eventOnMetasoundOutputValueChanged_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine, nullptr, "OnMetasoundOutputValueChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnMetasoundOutputValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnMetasoundOutputValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMetasoundOutputValueChanged_DelegateWrapper(const FScriptDelegate& OnMetasoundOutputValueChanged, FName OutputName, FMetaSoundOutput const& Output)
{
	struct _Script_MetasoundEngine_eventOnMetasoundOutputValueChanged_Parms
	{
		FName OutputName;
		FMetaSoundOutput Output;
	};
	_Script_MetasoundEngine_eventOnMetasoundOutputValueChanged_Parms Parms;
	Parms.OutputName=OutputName;
	Parms.Output=Output;
	OnMetasoundOutputValueChanged.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnMetasoundOutputValueChanged

// Begin Delegate FOnMetasoundOutputValueChangedMulticast
struct Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics
{
	struct _Script_MetasoundEngine_eventOnMetasoundOutputValueChangedMulticast_Parms
	{
		FName Name;
		FMetaSoundOutput Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MetasoundEngine_eventOnMetasoundOutputValueChangedMulticast_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MetasoundEngine_eventOnMetasoundOutputValueChangedMulticast_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine, nullptr, "OnMetasoundOutputValueChangedMulticast__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnMetasoundOutputValueChangedMulticast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnMetasoundOutputValueChangedMulticast_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMetasoundOutputValueChangedMulticast_DelegateWrapper(const FMulticastScriptDelegate& OnMetasoundOutputValueChangedMulticast, FName Name, FMetaSoundOutput const& Output)
{
	struct _Script_MetasoundEngine_eventOnMetasoundOutputValueChangedMulticast_Parms
	{
		FName Name;
		FMetaSoundOutput Output;
	};
	_Script_MetasoundEngine_eventOnMetasoundOutputValueChangedMulticast_Parms Parms;
	Parms.Name=Name;
	Parms.Output=Output;
	OnMetasoundOutputValueChangedMulticast.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMetasoundOutputValueChangedMulticast

// Begin Class UMetasoundGeneratorHandle Function ApplyParameterPack
struct Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics
{
	struct MetasoundGeneratorHandle_eventApplyParameterPack_Parms
	{
		UMetasoundParameterPack* Pack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "Comment", "/**\n\x09 * Makes a copy of the supplied parameter pack and passes it to the MetaSoundGenerator\n\x09 * for asynchronous processing. IT ALSO caches this copy so that if the AudioComponent\n\x09 * is virtualized the parameter pack will be sent again when/if the AudioComponent is \n\x09 * \"unvirtualized\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
		{ "ToolTip", "Makes a copy of the supplied parameter pack and passes it to the MetaSoundGenerator\nfor asynchronous processing. IT ALSO caches this copy so that if the AudioComponent\nis virtualized the parameter pack will be sent again when/if the AudioComponent is\n\"unvirtualized\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_Pack = { "Pack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventApplyParameterPack_Parms, Pack), Z_Construct_UClass_UMetasoundParameterPack_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundGeneratorHandle_eventApplyParameterPack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundGeneratorHandle_eventApplyParameterPack_Parms), &Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_Pack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "ApplyParameterPack", nullptr, nullptr, Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::MetasoundGeneratorHandle_eventApplyParameterPack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::MetasoundGeneratorHandle_eventApplyParameterPack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundGeneratorHandle::execApplyParameterPack)
{
	P_GET_OBJECT(UMetasoundParameterPack,Z_Param_Pack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyParameterPack(Z_Param_Pack);
	P_NATIVE_END;
}
// End Class UMetasoundGeneratorHandle Function ApplyParameterPack

// Begin Class UMetasoundGeneratorHandle Function CreateMetaSoundGeneratorHandle
struct Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics
{
	struct MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms
	{
		UAudioComponent* OnComponent;
		UMetasoundGeneratorHandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_OnComponent = { "OnComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms, OnComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComponent_MetaData), NewProp_OnComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms, ReturnValue), Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_OnComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "CreateMetaSoundGeneratorHandle", nullptr, nullptr, Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundGeneratorHandle::execCreateMetaSoundGeneratorHandle)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_OnComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetasoundGeneratorHandle**)Z_Param__Result=UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(Z_Param_OnComponent);
	P_NATIVE_END;
}
// End Class UMetasoundGeneratorHandle Function CreateMetaSoundGeneratorHandle

// Begin Class UMetasoundGeneratorHandle Function EnableRuntimeRenderTiming
struct Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics
{
	struct MetasoundGeneratorHandle_eventEnableRuntimeRenderTiming_Parms
	{
		bool Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundPerf" },
		{ "Comment", "/**\n\x09* Enable the profiling of the MetaSound render for this playing instance. You\n\x09* must call this before calling \"GetRuntimeCPUCoreUtilization\" (below) or you will just \n\x09* get 0.0 back for core utilization.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
		{ "ToolTip", "Enable the profiling of the MetaSound render for this playing instance. You\nmust call this before calling \"GetRuntimeCPUCoreUtilization\" (below) or you will just\nget 0.0 back for core utilization." },
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((MetasoundGeneratorHandle_eventEnableRuntimeRenderTiming_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundGeneratorHandle_eventEnableRuntimeRenderTiming_Parms), &Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "EnableRuntimeRenderTiming", nullptr, nullptr, Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::MetasoundGeneratorHandle_eventEnableRuntimeRenderTiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::MetasoundGeneratorHandle_eventEnableRuntimeRenderTiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundGeneratorHandle::execEnableRuntimeRenderTiming)
{
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableRuntimeRenderTiming(Z_Param_Enable);
	P_NATIVE_END;
}
// End Class UMetasoundGeneratorHandle Function EnableRuntimeRenderTiming

// Begin Class UMetasoundGeneratorHandle Function GetCPUCoreUtilization
struct Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics
{
	struct MetasoundGeneratorHandle_eventGetCPUCoreUtilization_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundPerf" },
		{ "Comment", "/**\n\x09* Get the CPU usage as \"fraction of real time\" used to render this metasound. \n\x09* NOTE: The MetasoundSource asset MUST have had its EnableRenderTiming function called\n\x09* before the metasound is started!\n\x09*/" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
		{ "ToolTip", "Get the CPU usage as \"fraction of real time\" used to render this metasound.\nNOTE: The MetasoundSource asset MUST have had its EnableRenderTiming function called\nbefore the metasound is started!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventGetCPUCoreUtilization_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "GetCPUCoreUtilization", nullptr, nullptr, Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::MetasoundGeneratorHandle_eventGetCPUCoreUtilization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::MetasoundGeneratorHandle_eventGetCPUCoreUtilization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundGeneratorHandle::execGetCPUCoreUtilization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetCPUCoreUtilization();
	P_NATIVE_END;
}
// End Class UMetasoundGeneratorHandle Function GetCPUCoreUtilization

// Begin Class UMetasoundGeneratorHandle Function UpdateWatchers
struct Z_Construct_UFunction_UMetasoundGeneratorHandle_UpdateWatchers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "Comment", "/**\n\x09 * Update any watched outputs\n\x09 */" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
		{ "ToolTip", "Update any watched outputs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_UpdateWatchers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "UpdateWatchers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_UpdateWatchers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundGeneratorHandle_UpdateWatchers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_UpdateWatchers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_UpdateWatchers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundGeneratorHandle::execUpdateWatchers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWatchers();
	P_NATIVE_END;
}
// End Class UMetasoundGeneratorHandle Function UpdateWatchers

// Begin Class UMetasoundGeneratorHandle Function WatchOutput
struct Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics
{
	struct MetasoundGeneratorHandle_eventWatchOutput_Parms
	{
		FName OutputName;
		FScriptDelegate OnOutputValueChanged;
		FName AnalyzerName;
		FName AnalyzerOutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "MetaSoundOutput" },
		{ "Comment", "/**\n\x09 * Watch an output value.\n\x09 *\n\x09 * @param OutputName - The user-specified name of the output in the Metasound\n\x09 * @param OnOutputValueChanged - The event to fire when the output's value changes\n\x09 * @param AnalyzerName - (optional) The name of the analyzer to use on the output, defaults to a passthrough\n\x09 * @param AnalyzerOutputName - (optional) The name of the output on the analyzer to watch, defaults to the passthrough output\n\x09 * @returns true if the watch setup succeeded, false otherwise\n\x09 */" },
		{ "CPP_Default_AnalyzerName", "None" },
		{ "CPP_Default_AnalyzerOutputName", "None" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
		{ "ToolTip", "Watch an output value.\n\n@param OutputName - The user-specified name of the output in the Metasound\n@param OnOutputValueChanged - The event to fire when the output's value changes\n@param AnalyzerName - (optional) The name of the analyzer to use on the output, defaults to a passthrough\n@param AnalyzerOutputName - (optional) The name of the output on the analyzer to watch, defaults to the passthrough output\n@returns true if the watch setup succeeded, false otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOutputValueChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnOutputValueChanged;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnalyzerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnalyzerOutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventWatchOutput_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_OnOutputValueChanged = { "OnOutputValueChanged", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventWatchOutput_Parms, OnOutputValueChanged), Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOutputValueChanged_MetaData), NewProp_OnOutputValueChanged_MetaData) }; // 2435507930
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_AnalyzerName = { "AnalyzerName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventWatchOutput_Parms, AnalyzerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_AnalyzerOutputName = { "AnalyzerOutputName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundGeneratorHandle_eventWatchOutput_Parms, AnalyzerOutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundGeneratorHandle_eventWatchOutput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundGeneratorHandle_eventWatchOutput_Parms), &Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_OnOutputValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_AnalyzerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_AnalyzerOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "WatchOutput", nullptr, nullptr, Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::MetasoundGeneratorHandle_eventWatchOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::MetasoundGeneratorHandle_eventWatchOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundGeneratorHandle::execWatchOutput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnOutputValueChanged);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnalyzerName);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnalyzerOutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WatchOutput(Z_Param_OutputName,FOnMetasoundOutputValueChanged(Z_Param_Out_OnOutputValueChanged),Z_Param_AnalyzerName,Z_Param_AnalyzerOutputName);
	P_NATIVE_END;
}
// End Class UMetasoundGeneratorHandle Function WatchOutput

// Begin Class UMetasoundGeneratorHandle
void UMetasoundGeneratorHandle::StaticRegisterNativesUMetasoundGeneratorHandle()
{
	UClass* Class = UMetasoundGeneratorHandle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyParameterPack", &UMetasoundGeneratorHandle::execApplyParameterPack },
		{ "CreateMetaSoundGeneratorHandle", &UMetasoundGeneratorHandle::execCreateMetaSoundGeneratorHandle },
		{ "EnableRuntimeRenderTiming", &UMetasoundGeneratorHandle::execEnableRuntimeRenderTiming },
		{ "GetCPUCoreUtilization", &UMetasoundGeneratorHandle::execGetCPUCoreUtilization },
		{ "UpdateWatchers", &UMetasoundGeneratorHandle::execUpdateWatchers },
		{ "WatchOutput", &UMetasoundGeneratorHandle::execWatchOutput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundGeneratorHandle);
UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister()
{
	return UMetasoundGeneratorHandle::StaticClass();
}
struct Z_Construct_UClass_UMetasoundGeneratorHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MetaSound" },
		{ "Comment", "/**\n * Blueprint-facing interface to a FMetasoundGenerator on a UAudioComponent.\n */" },
		{ "IncludePath", "MetasoundGeneratorHandle.h" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
		{ "ToolTip", "Blueprint-facing interface to a FMetasoundGenerator on a UAudioComponent." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack, "ApplyParameterPack" }, // 3558853369
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle, "CreateMetaSoundGeneratorHandle" }, // 2575517265
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_EnableRuntimeRenderTiming, "EnableRuntimeRenderTiming" }, // 4181492048
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_GetCPUCoreUtilization, "GetCPUCoreUtilization" }, // 570973261
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_UpdateWatchers, "UpdateWatchers" }, // 2734829594
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_WatchOutput, "WatchOutput" }, // 3644185483
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundGeneratorHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::ClassParams = {
	&UMetasoundGeneratorHandle::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetasoundGeneratorHandle()
{
	if (!Z_Registration_Info_UClass_UMetasoundGeneratorHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundGeneratorHandle.OuterSingleton, Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetasoundGeneratorHandle.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetasoundGeneratorHandle>()
{
	return UMetasoundGeneratorHandle::StaticClass();
}
UMetasoundGeneratorHandle::UMetasoundGeneratorHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundGeneratorHandle);
UMetasoundGeneratorHandle::~UMetasoundGeneratorHandle() {}
// End Class UMetasoundGeneratorHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundGeneratorHandle, UMetasoundGeneratorHandle::StaticClass, TEXT("UMetasoundGeneratorHandle"), &Z_Registration_Info_UClass_UMetasoundGeneratorHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundGeneratorHandle), 2527117418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_1277086276(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
