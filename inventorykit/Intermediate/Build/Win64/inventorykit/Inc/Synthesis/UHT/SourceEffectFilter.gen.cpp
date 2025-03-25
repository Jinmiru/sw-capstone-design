// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectFilter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFilterPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFilterPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterType();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum ESourceEffectFilterCircuit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectFilterCircuit;
static UEnum* ESourceEffectFilterCircuit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectFilterCircuit"));
	}
	return Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterCircuit>()
{
	return ESourceEffectFilterCircuit_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectFilterCircuit::Count" },
		{ "Ladder.Name", "ESourceEffectFilterCircuit::Ladder" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "OnePole.Name", "ESourceEffectFilterCircuit::OnePole" },
		{ "StateVariable.Name", "ESourceEffectFilterCircuit::StateVariable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceEffectFilterCircuit::OnePole", (int64)ESourceEffectFilterCircuit::OnePole },
		{ "ESourceEffectFilterCircuit::StateVariable", (int64)ESourceEffectFilterCircuit::StateVariable },
		{ "ESourceEffectFilterCircuit::Ladder", (int64)ESourceEffectFilterCircuit::Ladder },
		{ "ESourceEffectFilterCircuit::Count", (int64)ESourceEffectFilterCircuit::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESourceEffectFilterCircuit",
	"ESourceEffectFilterCircuit",
	Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceEffectFilterCircuit.InnerSingleton;
}
// End Enum ESourceEffectFilterCircuit

// Begin Enum ESourceEffectFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectFilterType;
static UEnum* ESourceEffectFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectFilterType"));
	}
	return Z_Registration_Info_UEnum_ESourceEffectFilterType.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterType>()
{
	return ESourceEffectFilterType_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BandPass.Name", "ESourceEffectFilterType::BandPass" },
		{ "BandStop.Name", "ESourceEffectFilterType::BandStop" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectFilterType::Count" },
		{ "HighPass.Name", "ESourceEffectFilterType::HighPass" },
		{ "LowPass.Name", "ESourceEffectFilterType::LowPass" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceEffectFilterType::LowPass", (int64)ESourceEffectFilterType::LowPass },
		{ "ESourceEffectFilterType::HighPass", (int64)ESourceEffectFilterType::HighPass },
		{ "ESourceEffectFilterType::BandPass", (int64)ESourceEffectFilterType::BandPass },
		{ "ESourceEffectFilterType::BandStop", (int64)ESourceEffectFilterType::BandStop },
		{ "ESourceEffectFilterType::Count", (int64)ESourceEffectFilterType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESourceEffectFilterType",
	"ESourceEffectFilterType",
	Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterType()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectFilterType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceEffectFilterType.InnerSingleton;
}
// End Enum ESourceEffectFilterType

// Begin Enum ESourceEffectFilterParam
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectFilterParam;
static UEnum* ESourceEffectFilterParam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectFilterParam"));
	}
	return Z_Registration_Info_UEnum_ESourceEffectFilterParam.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterParam>()
{
	return ESourceEffectFilterParam_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectFilterParam::Count" },
		{ "FilterFrequency.Name", "ESourceEffectFilterParam::FilterFrequency" },
		{ "FilterResonance.Name", "ESourceEffectFilterParam::FilterResonance" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceEffectFilterParam::FilterFrequency", (int64)ESourceEffectFilterParam::FilterFrequency },
		{ "ESourceEffectFilterParam::FilterResonance", (int64)ESourceEffectFilterParam::FilterResonance },
		{ "ESourceEffectFilterParam::Count", (int64)ESourceEffectFilterParam::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESourceEffectFilterParam",
	"ESourceEffectFilterParam",
	Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectFilterParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectFilterParam.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceEffectFilterParam.InnerSingleton;
}
// End Enum ESourceEffectFilterParam

// Begin ScriptStruct FSourceEffectFilterAudioBusModulationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings;
class UScriptStruct* FSourceEffectFilterAudioBusModulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectFilterAudioBusModulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectFilterAudioBusModulationSettings>()
{
	return FSourceEffectFilterAudioBusModulationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[] = {
		{ "Category", "SourceEffect|Preset|AudioBus" },
		{ "Comment", "// Audio bus to use to modulate the filter\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "Audio bus to use to modulate the filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Modulation Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amplitude envelope follower attack time (in milliseconds) on the audio bus.\n" },
		{ "DisplayName", "Attack Time (ms)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The amplitude envelope follower attack time (in milliseconds) on the audio bus." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Modulation Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amplitude envelope follower release time (in milliseconds) on the audio bus.\n" },
		{ "DisplayName", "Release Time (ms)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The amplitude envelope follower release time (in milliseconds) on the audio bus." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeGainMultiplier_MetaData[] = {
		{ "Category", "SourceEffect|Modulation Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "// An amount to scale the envelope follower output to map to the modulation values.  \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "An amount to scale the envelope follower output to map to the modulation values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "Comment", "// Which parameter to modulate.\n" },
		{ "InlineCategoryProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "Which parameter to modulate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFrequencyModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "Comment", "// The frequency modulation value (in semitones from the filter frequency) to use when the envelope is quietest\n" },
		{ "DisplayName", "Min Frequency Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterFrequency" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The frequency modulation value (in semitones from the filter frequency) to use when the envelope is quietest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrequencyModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "Comment", "// The frequency modulation value (in semitones from the filter frequency) to use when the envelope is loudest\n" },
		{ "DisplayName", "Max Frequency Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterFrequency" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The frequency modulation value (in semitones from the filter frequency) to use when the envelope is loudest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinResonanceModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The resonance modulation value to use when the envelope is quietest\n" },
		{ "DisplayName", "Min Resonance Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterResonance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The resonance modulation value to use when the envelope is quietest" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxResonanceModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The resonance modulation value to use when the envelope is loudest\n" },
		{ "DisplayName", "Max Resonance Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterResonance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The resonance modulation value to use when the envelope is loudest" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTimeMsec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeGainMultiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterParam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFrequencyModulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFrequencyModulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinResonanceModulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxResonanceModulation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectFilterAudioBusModulationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBus_MetaData), NewProp_AudioBus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerAttackTimeMsec = { "EnvelopeFollowerAttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerAttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerAttackTimeMsec_MetaData), NewProp_EnvelopeFollowerAttackTimeMsec_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerReleaseTimeMsec = { "EnvelopeFollowerReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerReleaseTimeMsec_MetaData), NewProp_EnvelopeFollowerReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeGainMultiplier = { "EnvelopeGainMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, EnvelopeGainMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeGainMultiplier_MetaData), NewProp_EnvelopeGainMultiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, FilterParam), Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) }; // 423797820
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinFrequencyModulation = { "MinFrequencyModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MinFrequencyModulation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFrequencyModulation_MetaData), NewProp_MinFrequencyModulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxFrequencyModulation = { "MaxFrequencyModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MaxFrequencyModulation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFrequencyModulation_MetaData), NewProp_MaxFrequencyModulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinResonanceModulation = { "MinResonanceModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MinResonanceModulation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinResonanceModulation_MetaData), NewProp_MinResonanceModulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxResonanceModulation = { "MaxResonanceModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MaxResonanceModulation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxResonanceModulation_MetaData), NewProp_MaxResonanceModulation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerAttackTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerReleaseTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeGainMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinFrequencyModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxFrequencyModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinResonanceModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxResonanceModulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectFilterAudioBusModulationSettings",
	Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::PropPointers),
	sizeof(FSourceEffectFilterAudioBusModulationSettings),
	alignof(FSourceEffectFilterAudioBusModulationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectFilterAudioBusModulationSettings

// Begin ScriptStruct FSourceEffectFilterSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings;
class UScriptStruct* FSourceEffectFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectFilterSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectFilterSettings>()
{
	return FSourceEffectFilterSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterCircuit_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "// The type of filter circuit to use.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The type of filter circuit to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "// The type of filter to use.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The type of filter to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutoffFrequency_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The filter cutoff frequency\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The filter cutoff frequency" },
		{ "UIMax", "12000.0" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// The filter resonance.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The filter resonance." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBusModulation_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "// Audio bus settings to use to modulate the filter frequency cutoff (auto-wah) with arbitrary audio from an audio bus\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "Audio bus settings to use to modulate the filter frequency cutoff (auto-wah) with arbitrary audio from an audio bus" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterCircuit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterCircuit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioBusModulation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioBusModulation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectFilterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit = { "FilterCircuit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, FilterCircuit), Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterCircuit_MetaData), NewProp_FilterCircuit_MetaData) }; // 4107977176
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, FilterType), Z_Construct_UEnum_Synthesis_ESourceEffectFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 2418851446
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_CutoffFrequency = { "CutoffFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, CutoffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutoffFrequency_MetaData), NewProp_CutoffFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, FilterQ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterQ_MetaData), NewProp_FilterQ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation_Inner = { "AudioBusModulation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings, METADATA_PARAMS(0, nullptr) }; // 2424342050
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation = { "AudioBusModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, AudioBusModulation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBusModulation_MetaData), NewProp_AudioBusModulation_MetaData) }; // 2424342050
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_CutoffFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterQ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectFilterSettings",
	Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::PropPointers),
	sizeof(FSourceEffectFilterSettings),
	alignof(FSourceEffectFilterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectFilterSettings

// Begin Class USourceEffectFilterPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics
{
	struct SourceEffectFilterPreset_eventSetSettings_Parms
	{
		FSourceEffectFilterSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectFilterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 2685848192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectFilterPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::SourceEffectFilterPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::SourceEffectFilterPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectFilterPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectFilterSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectFilterPreset Function SetSettings

// Begin Class USourceEffectFilterPreset
void USourceEffectFilterPreset::StaticRegisterNativesUSourceEffectFilterPreset()
{
	UClass* Class = USourceEffectFilterPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USourceEffectFilterPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectFilterPreset);
UClass* Z_Construct_UClass_USourceEffectFilterPreset_NoRegister()
{
	return USourceEffectFilterPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectFilterPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "SourceEffect" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectFilter.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings, "SetSettings" }, // 415870642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectFilterPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectFilterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectFilterPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2685848192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectFilterPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectFilterPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFilterPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectFilterPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFilterPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectFilterPreset_Statics::ClassParams = {
	&USourceEffectFilterPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectFilterPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFilterPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFilterPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectFilterPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectFilterPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectFilterPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectFilterPreset.OuterSingleton, Z_Construct_UClass_USourceEffectFilterPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectFilterPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectFilterPreset>()
{
	return USourceEffectFilterPreset::StaticClass();
}
USourceEffectFilterPreset::USourceEffectFilterPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectFilterPreset);
USourceEffectFilterPreset::~USourceEffectFilterPreset() {}
// End Class USourceEffectFilterPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESourceEffectFilterCircuit_StaticEnum, TEXT("ESourceEffectFilterCircuit"), &Z_Registration_Info_UEnum_ESourceEffectFilterCircuit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4107977176U) },
		{ ESourceEffectFilterType_StaticEnum, TEXT("ESourceEffectFilterType"), &Z_Registration_Info_UEnum_ESourceEffectFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2418851446U) },
		{ ESourceEffectFilterParam_StaticEnum, TEXT("ESourceEffectFilterParam"), &Z_Registration_Info_UEnum_ESourceEffectFilterParam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 423797820U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectFilterAudioBusModulationSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewStructOps, TEXT("SourceEffectFilterAudioBusModulationSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectFilterAudioBusModulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectFilterAudioBusModulationSettings), 2424342050U) },
		{ FSourceEffectFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewStructOps, TEXT("SourceEffectFilterSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectFilterSettings), 2685848192U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectFilterPreset, USourceEffectFilterPreset::StaticClass, TEXT("USourceEffectFilterPreset"), &Z_Registration_Info_UClass_USourceEffectFilterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectFilterPreset), 2670343282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_4078118597(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
