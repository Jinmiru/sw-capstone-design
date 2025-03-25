// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/OnsetNRT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetNRT() {}

// Begin Cross Module References
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT_NoRegister();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRTSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRTSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References

// Begin Class UOnsetNRTSettings
void UOnsetNRTSettings::StaticRegisterNativesUOnsetNRTSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetNRTSettings);
UClass* Z_Construct_UClass_UOnsetNRTSettings_NoRegister()
{
	return UOnsetNRTSettings::StaticClass();
}
struct Z_Construct_UClass_UOnsetNRTSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UOnsetNRTSettings\n *\n * Settings for a UOnsetNRT analyzer.\n */" },
		{ "IncludePath", "OnsetNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "UOnsetNRTSettings\n\nSettings for a UOnsetNRT analyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDownmixToMono_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own onset result. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own onset result." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GranularityInSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.005" },
		{ "Comment", "/** Onset timestamp granularity onsets. Lower granularity takes longer to compute. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Onset timestamp granularity onsets. Lower granularity takes longer to compute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sensitivity of onset detector. Higher sensitivity will find more onsets. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Sensitivity of onset detector. Higher sensitivity will find more onsets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for onset anlaysis. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Starting frequency for onset anlaysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for onset anlaysis. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Starting frequency for onset anlaysis." },
	};
#endif // WITH_METADATA
	static void NewProp_bDownmixToMono_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDownmixToMono;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GranularityInSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetNRTSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_SetBit(void* Obj)
{
	((UOnsetNRTSettings*)Obj)->bDownmixToMono = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono = { "bDownmixToMono", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOnsetNRTSettings), &Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDownmixToMono_MetaData), NewProp_bDownmixToMono_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds = { "GranularityInSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, GranularityInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GranularityInSeconds_MetaData), NewProp_GranularityInSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, Sensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sensitivity_MetaData), NewProp_Sensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency = { "MinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, MinimumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumFrequency_MetaData), NewProp_MinimumFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency = { "MaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRTSettings, MaximumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumFrequency_MetaData), NewProp_MaximumFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetNRTSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRTSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetNRTSettings_Statics::ClassParams = {
	&UOnsetNRTSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetNRTSettings()
{
	if (!Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton, Z_Construct_UClass_UOnsetNRTSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UOnsetNRTSettings>()
{
	return UOnsetNRTSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetNRTSettings);
UOnsetNRTSettings::~UOnsetNRTSettings() {}
// End Class UOnsetNRTSettings

// Begin Class UOnsetNRT Function GetChannelOnsetsBetweenTimes
struct Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics
{
	struct OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms
	{
		float InStartSeconds;
		float InEndSeconds;
		int32 InChannel;
		TArray<float> OutOnsetTimestamps;
		TArray<float> OutOnsetStrengths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Returns onsets which occured between start and end timestamps. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Returns onsets which occured between start and end timestamps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEndSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetTimestamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetTimestamps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetStrengths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetStrengths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds = { "InStartSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InStartSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartSeconds_MetaData), NewProp_InStartSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds = { "InEndSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InEndSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndSeconds_MetaData), NewProp_InEndSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChannel_MetaData), NewProp_InChannel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, OutOnsetTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, OutOnsetStrengths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNRT, nullptr, "GetChannelOnsetsBetweenTimes", nullptr, nullptr, Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetNRT::execGetChannelOnsetsBetweenTimes)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStartSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InEndSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetTimestamps);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetStrengths);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChannelOnsetsBetweenTimes(Z_Param_InStartSeconds,Z_Param_InEndSeconds,Z_Param_InChannel,Z_Param_Out_OutOnsetTimestamps,Z_Param_Out_OutOnsetStrengths);
	P_NATIVE_END;
}
// End Class UOnsetNRT Function GetChannelOnsetsBetweenTimes

// Begin Class UOnsetNRT Function GetNormalizedChannelOnsetsBetweenTimes
struct Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics
{
	struct OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms
	{
		float InStartSeconds;
		float InEndSeconds;
		int32 InChannel;
		TArray<float> OutOnsetTimestamps;
		TArray<float> OutOnsetStrengths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get a specific channel cqt of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Get a specific channel cqt of the analyzed sound at a given time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEndSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetTimestamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetTimestamps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOnsetStrengths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOnsetStrengths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds = { "InStartSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InStartSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartSeconds_MetaData), NewProp_InStartSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds = { "InEndSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InEndSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndSeconds_MetaData), NewProp_InEndSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChannel_MetaData), NewProp_InChannel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, OutOnsetTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, OutOnsetStrengths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNRT, nullptr, "GetNormalizedChannelOnsetsBetweenTimes", nullptr, nullptr, Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetNRT::execGetNormalizedChannelOnsetsBetweenTimes)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStartSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InEndSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetTimestamps);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetStrengths);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNormalizedChannelOnsetsBetweenTimes(Z_Param_InStartSeconds,Z_Param_InEndSeconds,Z_Param_InChannel,Z_Param_Out_OutOnsetTimestamps,Z_Param_Out_OutOnsetStrengths);
	P_NATIVE_END;
}
// End Class UOnsetNRT Function GetNormalizedChannelOnsetsBetweenTimes

// Begin Class UOnsetNRT
void UOnsetNRT::StaticRegisterNativesUOnsetNRT()
{
	UClass* Class = UOnsetNRT::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChannelOnsetsBetweenTimes", &UOnsetNRT::execGetChannelOnsetsBetweenTimes },
		{ "GetNormalizedChannelOnsetsBetweenTimes", &UOnsetNRT::execGetNormalizedChannelOnsetsBetweenTimes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetNRT);
UClass* Z_Construct_UClass_UOnsetNRT_NoRegister()
{
	return UOnsetNRT::StaticClass();
}
struct Z_Construct_UClass_UOnsetNRT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UOnsetNRT\n *\n * UOnsetNRT calculates the temporal evolution of constant q transform for a given \n * sound. Onset is available for individual channels or the overall sound asset.\n */" },
		{ "IncludePath", "OnsetNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "UOnsetNRT\n\nUOnsetNRT calculates the temporal evolution of constant q transform for a given\nsound. Onset is available for individual channels or the overall sound asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes, "GetChannelOnsetsBetweenTimes" }, // 2419553850
		{ &Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, "GetNormalizedChannelOnsetsBetweenTimes" }, // 2272377175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetNRT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNRT, Settings), Z_Construct_UClass_UOnsetNRTSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetNRT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetNRT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRT,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetNRT_Statics::ClassParams = {
	&UOnsetNRT::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOnsetNRT_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetNRT()
{
	if (!Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton, Z_Construct_UClass_UOnsetNRT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UOnsetNRT>()
{
	return UOnsetNRT::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetNRT);
UOnsetNRT::~UOnsetNRT() {}
// End Class UOnsetNRT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetNRTSettings, UOnsetNRTSettings::StaticClass, TEXT("UOnsetNRTSettings"), &Z_Registration_Info_UClass_UOnsetNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetNRTSettings), 2037054477U) },
		{ Z_Construct_UClass_UOnsetNRT, UOnsetNRT::StaticClass, TEXT("UOnsetNRT"), &Z_Registration_Info_UClass_UOnsetNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetNRT), 3850677051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_3969961591(TEXT("/Script/AudioSynesthesia"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
