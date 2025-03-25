// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerClockHandle() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle();
AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Class UQuartzClockHandle Function GetBeatProgressPercent
struct Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics
{
	struct QuartzClockHandle_eventGetBeatProgressPercent_Parms
	{
		EQuartzCommandQuantization QuantizationBoundary;
		float PhaseOffset;
		float MsOffset;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PhaseOffset" },
		{ "Category", "Quantization" },
		{ "Comment", "/**\n\x09 * Returns the current progress until the next occurrence of the provided musical duration as a float value from 0 (previous beat) to 1 (next beat).\n\x09 * This is useful for indexing into curves to animate parameters to musical time.\n\x09 * Ms and Phase offsets are combined internally.\n\x09 */" },
		{ "CPP_Default_MsOffset", "0.000000" },
		{ "CPP_Default_PhaseOffset", "0.000000" },
		{ "CPP_Default_QuantizationBoundary", "Beat" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Returns the current progress until the next occurrence of the provided musical duration as a float value from 0 (previous beat) to 1 (next beat).\nThis is useful for indexing into curves to animate parameters to musical time.\nMs and Phase offsets are combined internally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuantizationBoundary_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuantizationBoundary;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MsOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_QuantizationBoundary_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatProgressPercent_Parms, QuantizationBoundary), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(0, nullptr) }; // 3792817337
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_PhaseOffset = { "PhaseOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatProgressPercent_Parms, PhaseOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_MsOffset = { "MsOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatProgressPercent_Parms, MsOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatProgressPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_QuantizationBoundary_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_QuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_PhaseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_MsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetBeatProgressPercent", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::QuartzClockHandle_eventGetBeatProgressPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::QuartzClockHandle_eventGetBeatProgressPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetBeatProgressPercent)
{
	P_GET_ENUM(EQuartzCommandQuantization,Z_Param_QuantizationBoundary);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PhaseOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MsOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBeatProgressPercent(EQuartzCommandQuantization(Z_Param_QuantizationBoundary),Z_Param_PhaseOffset,Z_Param_MsOffset);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetBeatProgressPercent

// Begin Class UQuartzClockHandle Function GetBeatsPerMinute
struct Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics
{
	struct QuartzClockHandle_eventGetBeatsPerMinute_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatsPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatsPerMinute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetBeatsPerMinute", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::QuartzClockHandle_eventGetBeatsPerMinute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::QuartzClockHandle_eventGetBeatsPerMinute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetBeatsPerMinute)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBeatsPerMinute(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetBeatsPerMinute

// Begin Class UQuartzClockHandle Function GetCurrentTimestamp
struct Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics
{
	struct QuartzClockHandle_eventGetCurrentTimestamp_Parms
	{
		const UObject* WorldContextObject;
		FQuartzTransportTimeStamp ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "//Retrieves a timestamp for the clock\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Retrieves a timestamp for the clock" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetCurrentTimestamp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetCurrentTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuartzTransportTimeStamp, METADATA_PARAMS(0, nullptr) }; // 3304665849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetCurrentTimestamp", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::QuartzClockHandle_eventGetCurrentTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::QuartzClockHandle_eventGetCurrentTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetCurrentTimestamp)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuartzTransportTimeStamp*)Z_Param__Result=P_THIS->GetCurrentTimestamp(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetCurrentTimestamp

// Begin Class UQuartzClockHandle Function GetDurationOfQuantizationTypeInSeconds
struct Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics
{
	struct QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms
	{
		const UObject* WorldContextObject;
		EQuartzCommandQuantization QuantizationType;
		float Multiplier;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Comment", "/** Returns the duration in seconds of the given Quantization Type\n\x09 *\n\x09 * @param The Quantization type to measure\n\x09 * @param The quantity of the Quantization Type to calculate the time of\n\x09 * @return The duration, in seconds, of a multiplier amount of the Quantization Type, or -1 in the case the clock is invalid\n\x09 */" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Returns the duration in seconds of the given Quantization Type\n\n@param The Quantization type to measure\n@param The quantity of the Quantization Type to calculate the time of\n@return The duration, in seconds, of a multiplier amount of the Quantization Type, or -1 in the case the clock is invalid" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizationType_MetaData), NewProp_QuantizationType_MetaData) }; // 3792817337
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetDurationOfQuantizationTypeInSeconds", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetDurationOfQuantizationTypeInSeconds)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EQuartzCommandQuantization,Z_Param_Out_QuantizationType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDurationOfQuantizationTypeInSeconds(Z_Param_WorldContextObject,(EQuartzCommandQuantization&)(Z_Param_Out_QuantizationType),Z_Param_Multiplier);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetDurationOfQuantizationTypeInSeconds

// Begin Class UQuartzClockHandle Function GetEstimatedRunTime
struct Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics
{
	struct QuartzClockHandle_eventGetEstimatedRunTime_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetEstimatedRunTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetEstimatedRunTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetEstimatedRunTime", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::QuartzClockHandle_eventGetEstimatedRunTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::QuartzClockHandle_eventGetEstimatedRunTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetEstimatedRunTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEstimatedRunTime(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetEstimatedRunTime

// Begin Class UQuartzClockHandle Function GetMillisecondsPerTick
struct Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics
{
	struct QuartzClockHandle_eventGetMillisecondsPerTick_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Comment", "// Metronome getters\n" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Metronome getters" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetMillisecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetMillisecondsPerTick_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetMillisecondsPerTick", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::QuartzClockHandle_eventGetMillisecondsPerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::QuartzClockHandle_eventGetMillisecondsPerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetMillisecondsPerTick)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMillisecondsPerTick(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetMillisecondsPerTick

// Begin Class UQuartzClockHandle Function GetSecondsPerTick
struct Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics
{
	struct QuartzClockHandle_eventGetSecondsPerTick_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetSecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetSecondsPerTick_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetSecondsPerTick", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::QuartzClockHandle_eventGetSecondsPerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::QuartzClockHandle_eventGetSecondsPerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetSecondsPerTick)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSecondsPerTick(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetSecondsPerTick

// Begin Class UQuartzClockHandle Function GetThirtySecondNotesPerMinute
struct Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics
{
	struct QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetThirtySecondNotesPerMinute", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetThirtySecondNotesPerMinute)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetThirtySecondNotesPerMinute(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetThirtySecondNotesPerMinute

// Begin Class UQuartzClockHandle Function GetTicksPerSecond
struct Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics
{
	struct QuartzClockHandle_eventGetTicksPerSecond_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetTicksPerSecond_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventGetTicksPerSecond_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetTicksPerSecond", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::QuartzClockHandle_eventGetTicksPerSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::QuartzClockHandle_eventGetTicksPerSecond_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execGetTicksPerSecond)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTicksPerSecond(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function GetTicksPerSecond

// Begin Class UQuartzClockHandle Function IsClockRunning
struct Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics
{
	struct QuartzClockHandle_eventIsClockRunning_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventIsClockRunning_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuartzClockHandle_eventIsClockRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzClockHandle_eventIsClockRunning_Parms), &Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "IsClockRunning", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::QuartzClockHandle_eventIsClockRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::QuartzClockHandle_eventIsClockRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execIsClockRunning)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClockRunning(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function IsClockRunning

// Begin Class UQuartzClockHandle Function NotifyOnQuantizationBoundary
struct Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics
{
	struct QuartzClockHandle_eventNotifyOnQuantizationBoundary_Parms
	{
		const UObject* WorldContextObject;
		FQuartzQuantizationBoundary InQuantizationBoundary;
		FScriptDelegate InDelegate;
		float InMsOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quartz Clock" },
		{ "CPP_Default_InMsOffset", "0.000000" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InQuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMsOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventNotifyOnQuantizationBoundary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventNotifyOnQuantizationBoundary_Parms, InQuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(0, nullptr) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventNotifyOnQuantizationBoundary_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDelegate_MetaData), NewProp_InDelegate_MetaData) }; // 2203427155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_InMsOffset = { "InMsOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventNotifyOnQuantizationBoundary_Parms, InMsOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_InQuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_InDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::NewProp_InMsOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "NotifyOnQuantizationBoundary", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::QuartzClockHandle_eventNotifyOnQuantizationBoundary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::QuartzClockHandle_eventNotifyOnQuantizationBoundary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execNotifyOnQuantizationBoundary)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FQuartzQuantizationBoundary,Z_Param_InQuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMsOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyOnQuantizationBoundary(Z_Param_WorldContextObject,Z_Param_InQuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate),Z_Param_InMsOffset);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function NotifyOnQuantizationBoundary

// Begin Class UQuartzClockHandle Function PauseClock
struct Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics
{
	struct QuartzClockHandle_eventPauseClock_Parms
	{
		const UObject* WorldContextObject;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventPauseClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventPauseClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "PauseClock", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::QuartzClockHandle_eventPauseClock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::QuartzClockHandle_eventPauseClock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_PauseClock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execPauseClock)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseClock(Z_Param_WorldContextObject,P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function PauseClock

// Begin Class UQuartzClockHandle Function ResetTransport
struct Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics
{
	struct QuartzClockHandle_eventResetTransport_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate InDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quartz Clock" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResetTransport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResetTransport_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDelegate_MetaData), NewProp_InDelegate_MetaData) }; // 2203427155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_InDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "ResetTransport", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::QuartzClockHandle_eventResetTransport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::QuartzClockHandle_eventResetTransport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_ResetTransport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execResetTransport)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTransport(Z_Param_WorldContextObject,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function ResetTransport

// Begin Class UQuartzClockHandle Function ResetTransportQuantized
struct Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics
{
	struct QuartzClockHandle_eventResetTransportQuantized_Parms
	{
		const UObject* WorldContextObject;
		FQuartzQuantizationBoundary InQuantizationBoundary;
		FScriptDelegate InDelegate;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quartz Clock" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InQuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, InQuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(0, nullptr) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDelegate_MetaData), NewProp_InDelegate_MetaData) }; // 2203427155
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InQuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "ResetTransportQuantized", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::QuartzClockHandle_eventResetTransportQuantized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::QuartzClockHandle_eventResetTransportQuantized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execResetTransportQuantized)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FQuartzQuantizationBoundary,Z_Param_InQuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTransportQuantized(Z_Param_WorldContextObject,Z_Param_InQuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function ResetTransportQuantized

// Begin Class UQuartzClockHandle Function ResumeClock
struct Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics
{
	struct QuartzClockHandle_eventResumeClock_Parms
	{
		const UObject* WorldContextObject;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResumeClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventResumeClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "ResumeClock", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::QuartzClockHandle_eventResumeClock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::QuartzClockHandle_eventResumeClock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_ResumeClock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execResumeClock)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeClock(Z_Param_WorldContextObject,P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function ResumeClock

// Begin Class UQuartzClockHandle Function SetBeatsPerMinute
struct Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics
{
	struct QuartzClockHandle_eventSetBeatsPerMinute_Parms
	{
		const UObject* WorldContextObject;
		FQuartzQuantizationBoundary QuantizationBoundary;
		FScriptDelegate Delegate;
		UQuartzClockHandle* ClockHandle;
		float BeatsPerMinute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_BeatsPerMinute", "60.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatsPerMinute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizationBoundary_MetaData), NewProp_QuantizationBoundary_MetaData) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2203427155
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_BeatsPerMinute = { "BeatsPerMinute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, BeatsPerMinute), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_QuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_ClockHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_BeatsPerMinute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetBeatsPerMinute", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::QuartzClockHandle_eventSetBeatsPerMinute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::QuartzClockHandle_eventSetBeatsPerMinute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execSetBeatsPerMinute)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BeatsPerMinute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeatsPerMinute(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle),Z_Param_BeatsPerMinute);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function SetBeatsPerMinute

// Begin Class UQuartzClockHandle Function SetMillisecondsPerTick
struct Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics
{
	struct QuartzClockHandle_eventSetMillisecondsPerTick_Parms
	{
		const UObject* WorldContextObject;
		FQuartzQuantizationBoundary QuantizationBoundary;
		FScriptDelegate Delegate;
		UQuartzClockHandle* ClockHandle;
		float MillisecondsPerTick;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "Comment", "// Metronome Alteration (setters)\n" },
		{ "CPP_Default_MillisecondsPerTick", "100.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Metronome Alteration (setters)" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MillisecondsPerTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizationBoundary_MetaData), NewProp_QuantizationBoundary_MetaData) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2203427155
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_MillisecondsPerTick = { "MillisecondsPerTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, MillisecondsPerTick), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_QuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_ClockHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_MillisecondsPerTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetMillisecondsPerTick", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::QuartzClockHandle_eventSetMillisecondsPerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::QuartzClockHandle_eventSetMillisecondsPerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execSetMillisecondsPerTick)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MillisecondsPerTick);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMillisecondsPerTick(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle),Z_Param_MillisecondsPerTick);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function SetMillisecondsPerTick

// Begin Class UQuartzClockHandle Function SetSecondsPerTick
struct Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics
{
	struct QuartzClockHandle_eventSetSecondsPerTick_Parms
	{
		const UObject* WorldContextObject;
		FQuartzQuantizationBoundary QuantizationBoundary;
		FScriptDelegate Delegate;
		UQuartzClockHandle* ClockHandle;
		float SecondsPerTick;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_SecondsPerTick", "0.250000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsPerTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizationBoundary_MetaData), NewProp_QuantizationBoundary_MetaData) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2203427155
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_SecondsPerTick = { "SecondsPerTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, SecondsPerTick), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_QuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_ClockHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_SecondsPerTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetSecondsPerTick", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::QuartzClockHandle_eventSetSecondsPerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::QuartzClockHandle_eventSetSecondsPerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execSetSecondsPerTick)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SecondsPerTick);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSecondsPerTick(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle),Z_Param_SecondsPerTick);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function SetSecondsPerTick

// Begin Class UQuartzClockHandle Function SetThirtySecondNotesPerMinute
struct Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics
{
	struct QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms
	{
		const UObject* WorldContextObject;
		FQuartzQuantizationBoundary QuantizationBoundary;
		FScriptDelegate Delegate;
		UQuartzClockHandle* ClockHandle;
		float ThirtySecondsNotesPerMinute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_ThirtySecondsNotesPerMinute", "960.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirtySecondsNotesPerMinute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizationBoundary_MetaData), NewProp_QuantizationBoundary_MetaData) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2203427155
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ThirtySecondsNotesPerMinute = { "ThirtySecondsNotesPerMinute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, ThirtySecondsNotesPerMinute), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_QuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ClockHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ThirtySecondsNotesPerMinute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetThirtySecondNotesPerMinute", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execSetThirtySecondNotesPerMinute)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThirtySecondsNotesPerMinute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThirtySecondNotesPerMinute(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle),Z_Param_ThirtySecondsNotesPerMinute);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function SetThirtySecondNotesPerMinute

// Begin Class UQuartzClockHandle Function SetTicksPerSecond
struct Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics
{
	struct QuartzClockHandle_eventSetTicksPerSecond_Parms
	{
		const UObject* WorldContextObject;
		FQuartzQuantizationBoundary QuantizationBoundary;
		FScriptDelegate Delegate;
		UQuartzClockHandle* ClockHandle;
		float TicksPerSecond;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_TicksPerSecond", "10.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TicksPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizationBoundary_MetaData), NewProp_QuantizationBoundary_MetaData) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2203427155
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_TicksPerSecond = { "TicksPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, TicksPerSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_QuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_ClockHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_TicksPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetTicksPerSecond", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::QuartzClockHandle_eventSetTicksPerSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::QuartzClockHandle_eventSetTicksPerSecond_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execSetTicksPerSecond)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TicksPerSecond);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTicksPerSecond(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle),Z_Param_TicksPerSecond);
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function SetTicksPerSecond

// Begin Class UQuartzClockHandle Function StartClock
struct Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics
{
	struct QuartzClockHandle_eventStartClock_Parms
	{
		const UObject* WorldContextObject;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Comment", "// Clock manipulation\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Clock manipulation" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStartClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStartClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "StartClock", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::QuartzClockHandle_eventStartClock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::QuartzClockHandle_eventStartClock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_StartClock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execStartClock)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartClock(Z_Param_WorldContextObject,P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function StartClock

// Begin Class UQuartzClockHandle Function StartOtherClock
struct Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics
{
	struct QuartzClockHandle_eventStartOtherClock_Parms
	{
		const UObject* WorldContextObject;
		FName OtherClockName;
		FQuartzQuantizationBoundary InQuantizationBoundary;
		FScriptDelegate InDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quartz Clock" },
		{ "Comment", "// \"other\" clock manipulation\n" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "\"other\" clock manipulation" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OtherClockName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InQuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_OtherClockName = { "OtherClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, OtherClockName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, InQuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(0, nullptr) }; // 2464416629
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDelegate_MetaData), NewProp_InDelegate_MetaData) }; // 2203427155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_OtherClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InQuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "StartOtherClock", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::QuartzClockHandle_eventStartOtherClock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::QuartzClockHandle_eventStartOtherClock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execStartOtherClock)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_OtherClockName);
	P_GET_STRUCT(FQuartzQuantizationBoundary,Z_Param_InQuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartOtherClock(Z_Param_WorldContextObject,Z_Param_OtherClockName,Z_Param_InQuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function StartOtherClock

// Begin Class UQuartzClockHandle Function StopClock
struct Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics
{
	struct QuartzClockHandle_eventStopClock_Parms
	{
		const UObject* WorldContextObject;
		bool CancelPendingEvents;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_CancelPendingEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CancelPendingEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStopClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents_SetBit(void* Obj)
{
	((QuartzClockHandle_eventStopClock_Parms*)Obj)->CancelPendingEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents = { "CancelPendingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzClockHandle_eventStopClock_Parms), &Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventStopClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "StopClock", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::QuartzClockHandle_eventStopClock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::QuartzClockHandle_eventStopClock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_StopClock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execStopClock)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_CancelPendingEvents);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopClock(Z_Param_WorldContextObject,Z_Param_CancelPendingEvents,P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function StopClock

// Begin Class UQuartzClockHandle Function SubscribeToAllQuantizationEvents
struct Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics
{
	struct QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate OnQuantizationEvent;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuantizationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnQuantizationEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_OnQuantizationEvent = { "OnQuantizationEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms, OnQuantizationEvent), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuantizationEvent_MetaData), NewProp_OnQuantizationEvent_MetaData) }; // 503835891
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_OnQuantizationEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SubscribeToAllQuantizationEvents", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execSubscribeToAllQuantizationEvents)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQuantizationEvent);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubscribeToAllQuantizationEvents(Z_Param_WorldContextObject,FOnQuartzMetronomeEventBP(Z_Param_Out_OnQuantizationEvent),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function SubscribeToAllQuantizationEvents

// Begin Class UQuartzClockHandle Function SubscribeToQuantizationEvent
struct Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics
{
	struct QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms
	{
		const UObject* WorldContextObject;
		EQuartzCommandQuantization InQuantizationBoundary;
		FScriptDelegate OnQuantizationEvent;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Comment", "// Metronome subscription\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Metronome subscription" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuantizationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQuantizationBoundary_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQuantizationBoundary;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnQuantizationEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, InQuantizationBoundary), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(0, nullptr) }; // 3792817337
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_OnQuantizationEvent = { "OnQuantizationEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, OnQuantizationEvent), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuantizationEvent_MetaData), NewProp_OnQuantizationEvent_MetaData) }; // 503835891
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_OnQuantizationEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SubscribeToQuantizationEvent", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execSubscribeToQuantizationEvent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EQuartzCommandQuantization,Z_Param_InQuantizationBoundary);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQuantizationEvent);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubscribeToQuantizationEvent(Z_Param_WorldContextObject,EQuartzCommandQuantization(Z_Param_InQuantizationBoundary),FOnQuartzMetronomeEventBP(Z_Param_Out_OnQuantizationEvent),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function SubscribeToQuantizationEvent

// Begin Class UQuartzClockHandle Function UnsubscribeFromAllTimeDivisions
struct Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics
{
	struct QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms
	{
		const UObject* WorldContextObject;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "UnsubscribeFromAllTimeDivisions", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execUnsubscribeFromAllTimeDivisions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnsubscribeFromAllTimeDivisions(Z_Param_WorldContextObject,P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function UnsubscribeFromAllTimeDivisions

// Begin Class UQuartzClockHandle Function UnsubscribeFromTimeDivision
struct Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics
{
	struct QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms
	{
		const UObject* WorldContextObject;
		EQuartzCommandQuantization InQuantizationBoundary;
		UQuartzClockHandle* ClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQuantizationBoundary_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQuantizationBoundary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms, InQuantizationBoundary), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(0, nullptr) }; // 3792817337
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_ClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "UnsubscribeFromTimeDivision", nullptr, nullptr, Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzClockHandle::execUnsubscribeFromTimeDivision)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EQuartzCommandQuantization,Z_Param_InQuantizationBoundary);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnsubscribeFromTimeDivision(Z_Param_WorldContextObject,EQuartzCommandQuantization(Z_Param_InQuantizationBoundary),P_ARG_GC_BARRIER(Z_Param_Out_ClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzClockHandle Function UnsubscribeFromTimeDivision

// Begin Class UQuartzClockHandle
void UQuartzClockHandle::StaticRegisterNativesUQuartzClockHandle()
{
	UClass* Class = UQuartzClockHandle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBeatProgressPercent", &UQuartzClockHandle::execGetBeatProgressPercent },
		{ "GetBeatsPerMinute", &UQuartzClockHandle::execGetBeatsPerMinute },
		{ "GetCurrentTimestamp", &UQuartzClockHandle::execGetCurrentTimestamp },
		{ "GetDurationOfQuantizationTypeInSeconds", &UQuartzClockHandle::execGetDurationOfQuantizationTypeInSeconds },
		{ "GetEstimatedRunTime", &UQuartzClockHandle::execGetEstimatedRunTime },
		{ "GetMillisecondsPerTick", &UQuartzClockHandle::execGetMillisecondsPerTick },
		{ "GetSecondsPerTick", &UQuartzClockHandle::execGetSecondsPerTick },
		{ "GetThirtySecondNotesPerMinute", &UQuartzClockHandle::execGetThirtySecondNotesPerMinute },
		{ "GetTicksPerSecond", &UQuartzClockHandle::execGetTicksPerSecond },
		{ "IsClockRunning", &UQuartzClockHandle::execIsClockRunning },
		{ "NotifyOnQuantizationBoundary", &UQuartzClockHandle::execNotifyOnQuantizationBoundary },
		{ "PauseClock", &UQuartzClockHandle::execPauseClock },
		{ "ResetTransport", &UQuartzClockHandle::execResetTransport },
		{ "ResetTransportQuantized", &UQuartzClockHandle::execResetTransportQuantized },
		{ "ResumeClock", &UQuartzClockHandle::execResumeClock },
		{ "SetBeatsPerMinute", &UQuartzClockHandle::execSetBeatsPerMinute },
		{ "SetMillisecondsPerTick", &UQuartzClockHandle::execSetMillisecondsPerTick },
		{ "SetSecondsPerTick", &UQuartzClockHandle::execSetSecondsPerTick },
		{ "SetThirtySecondNotesPerMinute", &UQuartzClockHandle::execSetThirtySecondNotesPerMinute },
		{ "SetTicksPerSecond", &UQuartzClockHandle::execSetTicksPerSecond },
		{ "StartClock", &UQuartzClockHandle::execStartClock },
		{ "StartOtherClock", &UQuartzClockHandle::execStartOtherClock },
		{ "StopClock", &UQuartzClockHandle::execStopClock },
		{ "SubscribeToAllQuantizationEvents", &UQuartzClockHandle::execSubscribeToAllQuantizationEvents },
		{ "SubscribeToQuantizationEvent", &UQuartzClockHandle::execSubscribeToQuantizationEvent },
		{ "UnsubscribeFromAllTimeDivisions", &UQuartzClockHandle::execUnsubscribeFromAllTimeDivisions },
		{ "UnsubscribeFromTimeDivision", &UQuartzClockHandle::execUnsubscribeFromTimeDivision },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuartzClockHandle);
UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister()
{
	return UQuartzClockHandle::StaticClass();
}
struct Z_Construct_UClass_UQuartzClockHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Quartz" },
		{ "Comment", "/**\n *  This class is a BP / Game thread wrapper around FQuartzClockProxy\n *\x09(to talk to the underlying clock)\n \n *  ...and inherits from FQuartzTickableObject\n *\x09(to listen to the underlying clock)\n *  \n *  It can subscribe to Quantized Event & Metronome delegates to synchronize\n *  gameplay & VFX to Quartz events fired from the Audio Engine\n */" },
		{ "IncludePath", "Quartz/AudioMixerClockHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "This class is a BP / Game thread wrapper around FQuartzClockProxy\n   (to talk to the underlying clock)\n\n...and inherits from FQuartzTickableObject\n   (to listen to the underlying clock)\n\nIt can subscribe to Quantized Event & Metronome delegates to synchronize\ngameplay & VFX to Quartz events fired from the Audio Engine" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent, "GetBeatProgressPercent" }, // 2846828620
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute, "GetBeatsPerMinute" }, // 3285311334
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp, "GetCurrentTimestamp" }, // 867786754
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds, "GetDurationOfQuantizationTypeInSeconds" }, // 848058600
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime, "GetEstimatedRunTime" }, // 702182388
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick, "GetMillisecondsPerTick" }, // 1771443590
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick, "GetSecondsPerTick" }, // 418949052
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute, "GetThirtySecondNotesPerMinute" }, // 2641384112
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond, "GetTicksPerSecond" }, // 2442274327
		{ &Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning, "IsClockRunning" }, // 4246038937
		{ &Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary, "NotifyOnQuantizationBoundary" }, // 2081694505
		{ &Z_Construct_UFunction_UQuartzClockHandle_PauseClock, "PauseClock" }, // 1959370679
		{ &Z_Construct_UFunction_UQuartzClockHandle_ResetTransport, "ResetTransport" }, // 4052831373
		{ &Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized, "ResetTransportQuantized" }, // 1685529900
		{ &Z_Construct_UFunction_UQuartzClockHandle_ResumeClock, "ResumeClock" }, // 3823595653
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute, "SetBeatsPerMinute" }, // 68967775
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick, "SetMillisecondsPerTick" }, // 83142412
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick, "SetSecondsPerTick" }, // 3950516625
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute, "SetThirtySecondNotesPerMinute" }, // 4239565963
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond, "SetTicksPerSecond" }, // 2607684775
		{ &Z_Construct_UFunction_UQuartzClockHandle_StartClock, "StartClock" }, // 935817354
		{ &Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock, "StartOtherClock" }, // 358042249
		{ &Z_Construct_UFunction_UQuartzClockHandle_StopClock, "StopClock" }, // 564661144
		{ &Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents, "SubscribeToAllQuantizationEvents" }, // 3334807282
		{ &Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent, "SubscribeToQuantizationEvent" }, // 1349103414
		{ &Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions, "UnsubscribeFromAllTimeDivisions" }, // 337182382
		{ &Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision, "UnsubscribeFromTimeDivision" }, // 2972077298
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuartzClockHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuartzClockHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuartzClockHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuartzClockHandle_Statics::ClassParams = {
	&UQuartzClockHandle::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuartzClockHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuartzClockHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuartzClockHandle()
{
	if (!Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton, Z_Construct_UClass_UQuartzClockHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<UQuartzClockHandle>()
{
	return UQuartzClockHandle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuartzClockHandle);
// End Class UQuartzClockHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuartzClockHandle, UQuartzClockHandle::StaticClass, TEXT("UQuartzClockHandle"), &Z_Registration_Info_UClass_UQuartzClockHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuartzClockHandle), 2044158018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_1311686479(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
