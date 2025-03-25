// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/Meter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeter() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterAnalyzer();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterAnalyzer_NoRegister();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterSettings_NoRegister();
AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature();
AUDIOSYNESTHESIA_API UScriptStruct* Z_Construct_UScriptStruct_FMeterResults();
UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References

// Begin Enum EMeterPeakType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeterPeakType;
static UEnum* EMeterPeakType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("EMeterPeakType"));
	}
	return Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<EMeterPeakType>()
{
	return EMeterPeakType_StaticEnum();
}
struct Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EMeterPeakType::Count" },
		{ "MeanSquared.Name", "EMeterPeakType::MeanSquared" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "Peak.Name", "EMeterPeakType::Peak" },
		{ "RootMeanSquared.Name", "EMeterPeakType::RootMeanSquared" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeterPeakType::MeanSquared", (int64)EMeterPeakType::MeanSquared },
		{ "EMeterPeakType::RootMeanSquared", (int64)EMeterPeakType::RootMeanSquared },
		{ "EMeterPeakType::Peak", (int64)EMeterPeakType::Peak },
		{ "EMeterPeakType::Count", (int64)EMeterPeakType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	nullptr,
	"EMeterPeakType",
	"EMeterPeakType",
	Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType()
{
	if (!Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton, Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton;
}
// End Enum EMeterPeakType

// Begin Class UMeterSettings
void UMeterSettings::StaticRegisterNativesUMeterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeterSettings);
UClass* Z_Construct_UClass_UMeterSettings_NoRegister()
{
	return UMeterSettings::StaticClass();
}
struct Z_Construct_UClass_UMeterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UMeterSettings\n *\n * Settings for a UMeterAnalyzer.\n */" },
		{ "IncludePath", "Meter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "UMeterSettings\n\nSettings for a UMeterAnalyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriod_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between meter measurements */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Number of seconds between meter measurements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Meter envelope type type */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Meter envelope type type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterAttackTime_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Meter attack time, in milliseconds */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Meter attack time, in milliseconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterReleaseTime_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Meter release time, in milliseconds. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Meter release time, in milliseconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakHoldTime_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Peak hold time, in milliseconds */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Peak hold time, in milliseconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClippingThreshold_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** What volume threshold to throw clipping detection notifications. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "What volume threshold to throw clipping detection notifications." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeterAttackTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeterReleaseTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PeakHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClippingThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_AnalysisPeriod = { "AnalysisPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterSettings, AnalysisPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalysisPeriod_MetaData), NewProp_AnalysisPeriod_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterSettings, PeakMode), Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakMode_MetaData), NewProp_PeakMode_MetaData) }; // 3202614505
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterAttackTime = { "MeterAttackTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterSettings, MeterAttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterAttackTime_MetaData), NewProp_MeterAttackTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterReleaseTime = { "MeterReleaseTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterSettings, MeterReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterReleaseTime_MetaData), NewProp_MeterReleaseTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakHoldTime = { "PeakHoldTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterSettings, PeakHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakHoldTime_MetaData), NewProp_PeakHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_ClippingThreshold = { "ClippingThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterSettings, ClippingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClippingThreshold_MetaData), NewProp_ClippingThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_AnalysisPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_ClippingThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeterSettings_Statics::ClassParams = {
	&UMeterSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeterSettings()
{
	if (!Z_Registration_Info_UClass_UMeterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeterSettings.OuterSingleton, Z_Construct_UClass_UMeterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeterSettings.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UMeterSettings>()
{
	return UMeterSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeterSettings);
UMeterSettings::~UMeterSettings() {}
// End Class UMeterSettings

// Begin ScriptStruct FMeterResults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeterResults;
class UScriptStruct* FMeterResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeterResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeterResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeterResults, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("MeterResults"));
	}
	return Z_Registration_Info_UScriptStruct_MeterResults.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<FMeterResults>()
{
	return FMeterResults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeterResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The results of the meter analysis. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The results of the meter analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The time in seconds since analysis began of this meter analysis result\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The time in seconds since analysis began of this meter analysis result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterValue_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The meter value\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The meter value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakValue_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The peak value\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The peak value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesClipping_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The number of samples in the period which were above the clipping threshold. Will be 0 if no clipping was detected.\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The number of samples in the period which were above the clipping threshold. Will be 0 if no clipping was detected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClippingValue_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The value (if non-zero) if clipping was detected above the clipping threshold\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The value (if non-zero) if clipping was detected above the clipping threshold" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeterValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplesClipping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClippingValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeterResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterResults, TimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSeconds_MetaData), NewProp_TimeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_MeterValue = { "MeterValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterResults, MeterValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterValue_MetaData), NewProp_MeterValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_PeakValue = { "PeakValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterResults, PeakValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakValue_MetaData), NewProp_PeakValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_NumSamplesClipping = { "NumSamplesClipping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterResults, NumSamplesClipping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesClipping_MetaData), NewProp_NumSamplesClipping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_ClippingValue = { "ClippingValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterResults, ClippingValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClippingValue_MetaData), NewProp_ClippingValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeterResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_TimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_MeterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_PeakValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_NumSamplesClipping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_ClippingValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeterResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	nullptr,
	&NewStructOps,
	"MeterResults",
	Z_Construct_UScriptStruct_FMeterResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::PropPointers),
	sizeof(FMeterResults),
	alignof(FMeterResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeterResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeterResults()
{
	if (!Z_Registration_Info_UScriptStruct_MeterResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeterResults.InnerSingleton, Z_Construct_UScriptStruct_FMeterResults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeterResults.InnerSingleton;
}
// End ScriptStruct FMeterResults

// Begin Delegate FOnOverallMeterResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnOverallMeterResults_Parms
	{
		TArray<FMeterResults> MeterResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all overall loudness results (time-stamped in an array) since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all overall loudness results (time-stamped in an array) since last delegate call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeterResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner = { "MeterResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(0, nullptr) }; // 3398758493
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults = { "MeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms, MeterResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterResults_MetaData), NewProp_MeterResults_MetaData) }; // 3398758493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnOverallMeterResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallMeterResults, TArray<FMeterResults> const& MeterResults)
{
	struct _Script_AudioSynesthesia_eventOnOverallMeterResults_Parms
	{
		TArray<FMeterResults> MeterResults;
	};
	_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms Parms;
	Parms.MeterResults=MeterResults;
	OnOverallMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnOverallMeterResults

// Begin Delegate FOnLatestOverallMeterResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms
	{
		FMeterResults LatestOverallMeterResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall meter results. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall meter results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestOverallMeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatestOverallMeterResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::NewProp_LatestOverallMeterResults = { "LatestOverallMeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms, LatestOverallMeterResults), Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestOverallMeterResults_MetaData), NewProp_LatestOverallMeterResults_MetaData) }; // 3398758493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::NewProp_LatestOverallMeterResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestOverallMeterResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLatestOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallMeterResults, FMeterResults const& LatestOverallMeterResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms
	{
		FMeterResults LatestOverallMeterResults;
	};
	_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms Parms;
	Parms.LatestOverallMeterResults=LatestOverallMeterResults;
	OnLatestOverallMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLatestOverallMeterResults

// Begin Delegate FOnPerChannelMeterResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms
	{
		int32 ChannelIndex;
		TArray<FMeterResults> MeterResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all meter results per channel (time-stamped in an array) since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all meter results per channel (time-stamped in an array) since last delegate call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeterResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms, ChannelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner = { "MeterResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(0, nullptr) }; // 3398758493
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults = { "MeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms, MeterResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterResults_MetaData), NewProp_MeterResults_MetaData) }; // 3398758493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnPerChannelMeterResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelMeterResults, int32 ChannelIndex, TArray<FMeterResults> const& MeterResults)
{
	struct _Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms
	{
		int32 ChannelIndex;
		TArray<FMeterResults> MeterResults;
	};
	_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.MeterResults=MeterResults;
	OnPerChannelMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPerChannelMeterResults

// Begin Delegate FOnLatestPerChannelMeterResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms
	{
		int32 ChannelIndex;
		FMeterResults LatestMeterResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall meter result per channel. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall meter result per channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestMeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatestMeterResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms, ChannelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_LatestMeterResults = { "LatestMeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms, LatestMeterResults), Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestMeterResults_MetaData), NewProp_LatestMeterResults_MetaData) }; // 3398758493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_LatestMeterResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestPerChannelMeterResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLatestPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelMeterResults, int32 ChannelIndex, FMeterResults const& LatestMeterResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms
	{
		int32 ChannelIndex;
		FMeterResults LatestMeterResults;
	};
	_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.LatestMeterResults=LatestMeterResults;
	OnLatestPerChannelMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLatestPerChannelMeterResults

// Begin Class UMeterAnalyzer
void UMeterAnalyzer::StaticRegisterNativesUMeterAnalyzer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeterAnalyzer);
UClass* Z_Construct_UClass_UMeterAnalyzer_NoRegister()
{
	return UMeterAnalyzer::StaticClass();
}
struct Z_Construct_UClass_UMeterAnalyzer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UMeterAnalyzer\n *\n * UMeterAnalyzer calculates the current amplitude of an\n * audio bus in real-time.\n */" },
		{ "IncludePath", "Meter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "UMeterAnalyzer\n\nUMeterAnalyzer calculates the current amplitude of an\naudio bus in real-time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the meter audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The settings for the meter audio analyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOverallMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all overall meter results since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all overall meter results since last delegate call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerChannelMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all meter results, per-channel, since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all meter results, per-channel, since last delegate call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestOverallMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest overall meter results. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive the latest overall meter results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestPerChannelMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest per-channel meter results. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive the latest per-channel meter results." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOverallMeterResults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerChannelMeterResults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestOverallMeterResults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestPerChannelMeterResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeterAnalyzer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterAnalyzer, Settings), Z_Construct_UClass_UMeterSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnOverallMeterResults = { "OnOverallMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterAnalyzer, OnOverallMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOverallMeterResults_MetaData), NewProp_OnOverallMeterResults_MetaData) }; // 2407284933
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnPerChannelMeterResults = { "OnPerChannelMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterAnalyzer, OnPerChannelMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerChannelMeterResults_MetaData), NewProp_OnPerChannelMeterResults_MetaData) }; // 580490240
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestOverallMeterResults = { "OnLatestOverallMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterAnalyzer, OnLatestOverallMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatestOverallMeterResults_MetaData), NewProp_OnLatestOverallMeterResults_MetaData) }; // 3930105211
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestPerChannelMeterResults = { "OnLatestPerChannelMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeterAnalyzer, OnLatestPerChannelMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatestPerChannelMeterResults_MetaData), NewProp_OnLatestPerChannelMeterResults_MetaData) }; // 2789249832
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeterAnalyzer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnOverallMeterResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnPerChannelMeterResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestOverallMeterResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestPerChannelMeterResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeterAnalyzer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzer,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeterAnalyzer_Statics::ClassParams = {
	&UMeterAnalyzer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeterAnalyzer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeterAnalyzer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeterAnalyzer()
{
	if (!Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton, Z_Construct_UClass_UMeterAnalyzer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UMeterAnalyzer>()
{
	return UMeterAnalyzer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeterAnalyzer);
UMeterAnalyzer::~UMeterAnalyzer() {}
// End Class UMeterAnalyzer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeterPeakType_StaticEnum, TEXT("EMeterPeakType"), &Z_Registration_Info_UEnum_EMeterPeakType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3202614505U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeterResults::StaticStruct, Z_Construct_UScriptStruct_FMeterResults_Statics::NewStructOps, TEXT("MeterResults"), &Z_Registration_Info_UScriptStruct_MeterResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeterResults), 3398758493U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeterSettings, UMeterSettings::StaticClass, TEXT("UMeterSettings"), &Z_Registration_Info_UClass_UMeterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeterSettings), 1418958624U) },
		{ Z_Construct_UClass_UMeterAnalyzer, UMeterAnalyzer::StaticClass, TEXT("UMeterAnalyzer"), &Z_Registration_Info_UClass_UMeterAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeterAnalyzer), 3297420429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_4076400527(TEXT("/Script/AudioSynesthesia"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
