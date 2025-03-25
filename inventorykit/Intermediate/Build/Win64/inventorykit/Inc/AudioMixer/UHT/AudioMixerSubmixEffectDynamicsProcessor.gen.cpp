// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectDynamicsProcessor() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset();
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings();
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Enum ESubmixEffectDynamicsProcessorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType;
static UEnum* ESubmixEffectDynamicsProcessorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsProcessorType"));
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsProcessorType>()
{
	return ESubmixEffectDynamicsProcessorType_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compressor.Name", "ESubmixEffectDynamicsProcessorType::Compressor" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsProcessorType::Count" },
		{ "Expander.Name", "ESubmixEffectDynamicsProcessorType::Expander" },
		{ "Gate.Name", "ESubmixEffectDynamicsProcessorType::Gate" },
		{ "Limiter.Name", "ESubmixEffectDynamicsProcessorType::Limiter" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "UpwardsCompressor.Name", "ESubmixEffectDynamicsProcessorType::UpwardsCompressor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubmixEffectDynamicsProcessorType::Compressor", (int64)ESubmixEffectDynamicsProcessorType::Compressor },
		{ "ESubmixEffectDynamicsProcessorType::Limiter", (int64)ESubmixEffectDynamicsProcessorType::Limiter },
		{ "ESubmixEffectDynamicsProcessorType::Expander", (int64)ESubmixEffectDynamicsProcessorType::Expander },
		{ "ESubmixEffectDynamicsProcessorType::Gate", (int64)ESubmixEffectDynamicsProcessorType::Gate },
		{ "ESubmixEffectDynamicsProcessorType::UpwardsCompressor", (int64)ESubmixEffectDynamicsProcessorType::UpwardsCompressor },
		{ "ESubmixEffectDynamicsProcessorType::Count", (int64)ESubmixEffectDynamicsProcessorType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"ESubmixEffectDynamicsProcessorType",
	"ESubmixEffectDynamicsProcessorType",
	Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton;
}
// End Enum ESubmixEffectDynamicsProcessorType

// Begin Enum ESubmixEffectDynamicsPeakMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode;
static UEnum* ESubmixEffectDynamicsPeakMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsPeakMode"));
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsPeakMode>()
{
	return ESubmixEffectDynamicsPeakMode_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsPeakMode::Count" },
		{ "MeanSquared.Name", "ESubmixEffectDynamicsPeakMode::MeanSquared" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "Peak.Name", "ESubmixEffectDynamicsPeakMode::Peak" },
		{ "RootMeanSquared.Name", "ESubmixEffectDynamicsPeakMode::RootMeanSquared" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubmixEffectDynamicsPeakMode::MeanSquared", (int64)ESubmixEffectDynamicsPeakMode::MeanSquared },
		{ "ESubmixEffectDynamicsPeakMode::RootMeanSquared", (int64)ESubmixEffectDynamicsPeakMode::RootMeanSquared },
		{ "ESubmixEffectDynamicsPeakMode::Peak", (int64)ESubmixEffectDynamicsPeakMode::Peak },
		{ "ESubmixEffectDynamicsPeakMode::Count", (int64)ESubmixEffectDynamicsPeakMode::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"ESubmixEffectDynamicsPeakMode",
	"ESubmixEffectDynamicsPeakMode",
	Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton;
}
// End Enum ESubmixEffectDynamicsPeakMode

// Begin Enum ESubmixEffectDynamicsChannelLinkMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode;
static UEnum* ESubmixEffectDynamicsChannelLinkMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsChannelLinkMode"));
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsChannelLinkMode>()
{
	return ESubmixEffectDynamicsChannelLinkMode_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.Name", "ESubmixEffectDynamicsChannelLinkMode::Average" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsChannelLinkMode::Count" },
		{ "Disabled.Name", "ESubmixEffectDynamicsChannelLinkMode::Disabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "Peak.Name", "ESubmixEffectDynamicsChannelLinkMode::Peak" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubmixEffectDynamicsChannelLinkMode::Disabled", (int64)ESubmixEffectDynamicsChannelLinkMode::Disabled },
		{ "ESubmixEffectDynamicsChannelLinkMode::Average", (int64)ESubmixEffectDynamicsChannelLinkMode::Average },
		{ "ESubmixEffectDynamicsChannelLinkMode::Peak", (int64)ESubmixEffectDynamicsChannelLinkMode::Peak },
		{ "ESubmixEffectDynamicsChannelLinkMode::Count", (int64)ESubmixEffectDynamicsChannelLinkMode::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"ESubmixEffectDynamicsChannelLinkMode",
	"ESubmixEffectDynamicsChannelLinkMode",
	Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton;
}
// End Enum ESubmixEffectDynamicsChannelLinkMode

// Begin Enum ESubmixEffectDynamicsKeySource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource;
static UEnum* ESubmixEffectDynamicsKeySource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsKeySource"));
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsKeySource>()
{
	return ESubmixEffectDynamicsKeySource_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AudioBus.Comment", "// Uses audio bus as key\n" },
		{ "AudioBus.Name", "ESubmixEffectDynamicsKeySource::AudioBus" },
		{ "AudioBus.ToolTip", "Uses audio bus as key" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsKeySource::Count" },
		{ "Default.Comment", "// Defaults to use local submix (input) as key\n" },
		{ "Default.Name", "ESubmixEffectDynamicsKeySource::Default" },
		{ "Default.ToolTip", "Defaults to use local submix (input) as key" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "Submix.Comment", "// Uses external submix as key\n" },
		{ "Submix.Name", "ESubmixEffectDynamicsKeySource::Submix" },
		{ "Submix.ToolTip", "Uses external submix as key" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubmixEffectDynamicsKeySource::Default", (int64)ESubmixEffectDynamicsKeySource::Default },
		{ "ESubmixEffectDynamicsKeySource::AudioBus", (int64)ESubmixEffectDynamicsKeySource::AudioBus },
		{ "ESubmixEffectDynamicsKeySource::Submix", (int64)ESubmixEffectDynamicsKeySource::Submix },
		{ "ESubmixEffectDynamicsKeySource::Count", (int64)ESubmixEffectDynamicsKeySource::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"ESubmixEffectDynamicsKeySource",
	"ESubmixEffectDynamicsKeySource",
	Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource()
{
	if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton;
}
// End Enum ESubmixEffectDynamicsKeySource

// Begin ScriptStruct FSubmixEffectDynamicProcessorFilterSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings;
class UScriptStruct* FSubmixEffectDynamicProcessorFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicProcessorFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectDynamicProcessorFilterSettings>()
{
	return FSubmixEffectDynamicProcessorFilterSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// Whether or not filter is enabled\n" },
		{ "DisplayName", "Enabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Whether or not filter is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cutoff_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The cutoff frequency of the HPF applied to key signal\n" },
		{ "DisplayName", "Cutoff (Hz)" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The cutoff frequency of the HPF applied to key signal" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "6.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The gain of the filter shelf applied to the key signal\n" },
		{ "DisplayName", "Gain (dB)" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The gain of the filter shelf applied to the key signal" },
		{ "UIMax", "6.0" },
		{ "UIMin", "-60.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cutoff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicProcessorFilterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FSubmixEffectDynamicProcessorFilterSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicProcessorFilterSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff = { "Cutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicProcessorFilterSettings, Cutoff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cutoff_MetaData), NewProp_Cutoff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicProcessorFilterSettings, GainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GainDb_MetaData), NewProp_GainDb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	&NewStructOps,
	"SubmixEffectDynamicProcessorFilterSettings",
	Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers),
	sizeof(FSubmixEffectDynamicProcessorFilterSettings),
	alignof(FSubmixEffectDynamicProcessorFilterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectDynamicProcessorFilterSettings

// Begin ScriptStruct FSubmixEffectDynamicsProcessorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings;
class UScriptStruct* FSubmixEffectDynamicsProcessorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicsProcessorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectDynamicsProcessorSettings>()
{
	return FSubmixEffectDynamicsProcessorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Submix dynamics processor settings\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Submix dynamics processor settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Type of processor to apply\n" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Type of processor to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Mode of peak detection used on input key signal\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Mode of peak detection used on input key signal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Mode of peak detection if key signal is multi-channel\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Mode of peak detection if key signal is multi-channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The input gain of the dynamics processor\n" },
		{ "DisplayName", "Input Gain (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The input gain of the dynamics processor" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The threshold at which to perform a dynamics processing operation\n" },
		{ "DisplayName", "Threshold (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The threshold at which to perform a dynamics processing operation" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The dynamics processor ratio used for compression/expansion\n" },
		{ "EditCondition", "!bBypass && DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::Compressor || DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::Expander ||  DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::UpwardsCompressor" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The dynamics processor ratio used for compression/expansion" },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The knee bandwidth of the processor to use\n" },
		{ "DisplayName", "Knee (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The knee bandwidth of the processor to use" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of time to look ahead of the current audio (Allows for transients to be included in dynamics processing)\n" },
		{ "DisplayName", "Look Ahead (ms)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to look ahead of the current audio (Allows for transients to be included in dynamics processing)" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The amount of time to ramp into any dynamics processing effect\n" },
		{ "DisplayName", "AttackTime (ms)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to ramp into any dynamics processing effect" },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The amount of time to release the dynamics processing effect\n" },
		{ "DisplayName", "Release Time (ms)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to release the dynamics processing effect" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySource_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAudioBus_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// If set, uses output of provided audio bus as modulator of input signal for dynamics processor (Uses input signal as default modulator)\n" },
		{ "EditCondition", "!bBypass && KeySource == ESubmixEffectDynamicsKeySource::AudioBus" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "If set, uses output of provided audio bus as modulator of input signal for dynamics processor (Uses input signal as default modulator)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSubmix_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)\n" },
		{ "EditCondition", "!bBypass && KeySource == ESubmixEffectDynamicsKeySource::Submix" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChannelLinked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "// Toggles treating the attack and release envelopes as analog-style vs digital-style (Analog will respond a bit more naturally/slower)\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Toggles treating the attack and release envelopes as analog-style vs digital-style (Analog will respond a bit more naturally/slower)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Whether or not to bypass effect\n" },
		{ "DisplayAfter", "DynamicsProcessorType" },
		{ "DisplayName", "Bypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Whether or not to bypass effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeyAudition_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Audition the key modulation signal, bypassing enveloping and processing the input signal.\n" },
		{ "DisplayName", "Key Audition" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Audition the key modulation signal, bypassing enveloping and processing the input signal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGainDb_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Gain to apply to key signal if key source not set to default (input).\n" },
		{ "DisplayName", "External Input Gain (dB)" },
		{ "EditCondition", "!bBypass && KeySource != ESubmixEffectDynamicsKeySource::Default" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Gain to apply to key signal if key source not set to default (input)." },
		{ "UIMax", "30.0" },
		{ "UIMin", "-60.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// The output gain of the dynamics processor\n" },
		{ "DisplayName", "Output Gain (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The output gain of the dynamics processor" },
		{ "UIMax", "30.0" },
		{ "UIMin", "-60.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHighshelf_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// High Shelf filter settings for key signal (external signal if supplied or input signal if not)\n" },
		{ "DisplayName", "Key Highshelf" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "High Shelf filter settings for key signal (external signal if supplied or input signal if not)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyLowshelf_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Low Shelf filter settings for key signal (external signal if supplied or input signal if not)\n" },
		{ "DisplayName", "Key Lowshelf" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Low Shelf filter settings for key signal (external signal if supplied or input signal if not)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinkMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeySource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeySource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalAudioBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalSubmix;
	static void NewProp_bChannelLinked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannelLinked;
	static void NewProp_bAnalogMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
	static void NewProp_bBypass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
	static void NewProp_bKeyAudition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyAudition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyGainDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHighshelf;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyLowshelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicsProcessorType_MetaData), NewProp_DynamicsProcessorType_MetaData) }; // 1432078823
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakMode_MetaData), NewProp_PeakMode_MetaData) }; // 3899755337
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode = { "LinkMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LinkMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkMode_MetaData), NewProp_LinkMode_MetaData) }; // 2755245128
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputGainDb_MetaData), NewProp_InputGainDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdDb_MetaData), NewProp_ThresholdDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KneeBandwidthDb_MetaData), NewProp_KneeBandwidthDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAheadMsec_MetaData), NewProp_LookAheadMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTimeMsec_MetaData), NewProp_AttackTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTimeMsec_MetaData), NewProp_ReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource = { "KeySource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeySource), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySource_MetaData), NewProp_KeySource_MetaData) }; // 3980215807
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalAudioBus = { "ExternalAudioBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ExternalAudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAudioBus_MetaData), NewProp_ExternalAudioBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix = { "ExternalSubmix", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ExternalSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSubmix_MetaData), NewProp_ExternalSubmix_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit(void* Obj)
{
	((FSubmixEffectDynamicsProcessorSettings*)Obj)->bChannelLinked_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked = { "bChannelLinked", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChannelLinked_MetaData), NewProp_bChannelLinked_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
{
	((FSubmixEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnalogMode_MetaData), NewProp_bAnalogMode_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
{
	((FSubmixEffectDynamicsProcessorSettings*)Obj)->bBypass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypass_MetaData), NewProp_bBypass_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_SetBit(void* Obj)
{
	((FSubmixEffectDynamicsProcessorSettings*)Obj)->bKeyAudition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition = { "bKeyAudition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeyAudition_MetaData), NewProp_bKeyAudition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb = { "KeyGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGainDb_MetaData), NewProp_KeyGainDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputGainDb_MetaData), NewProp_OutputGainDb_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf = { "KeyHighshelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyHighshelf), Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHighshelf_MetaData), NewProp_KeyHighshelf_MetaData) }; // 3681396865
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf = { "KeyLowshelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyLowshelf), Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyLowshelf_MetaData), NewProp_KeyLowshelf_MetaData) }; // 3681396865
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalAudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	&NewStructOps,
	"SubmixEffectDynamicsProcessorSettings",
	Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers),
	sizeof(FSubmixEffectDynamicsProcessorSettings),
	alignof(FSubmixEffectDynamicsProcessorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectDynamicsProcessorSettings

// Begin Class USubmixEffectDynamicsProcessorPreset Function ResetKey
struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "ResetKey", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execResetKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetKey();
	P_NATIVE_END;
}
// End Class USubmixEffectDynamicsProcessorPreset Function ResetKey

// Begin Class USubmixEffectDynamicsProcessorPreset Function SetAudioBus
struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics
{
	struct SubmixEffectDynamicsProcessorPreset_eventSetAudioBus_Parms
	{
		UAudioBus* AudioBus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set\n// to effect's input.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set\nto effect's input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetAudioBus_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::NewProp_AudioBus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetAudioBus", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::SubmixEffectDynamicsProcessorPreset_eventSetAudioBus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::SubmixEffectDynamicsProcessorPreset_eventSetAudioBus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetAudioBus)
{
	P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioBus(Z_Param_AudioBus);
	P_NATIVE_END;
}
// End Class USubmixEffectDynamicsProcessorPreset Function SetAudioBus

// Begin Class USubmixEffectDynamicsProcessorPreset Function SetExternalSubmix
struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics
{
	struct SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms
	{
		USoundSubmix* Submix;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Sets the source key input as the provided Submix's output.  If no object is provided, key is set\n// to effect's input.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Sets the source key input as the provided Submix's output.  If no object is provided, key is set\nto effect's input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::NewProp_Submix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetExternalSubmix", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetExternalSubmix)
{
	P_GET_OBJECT(USoundSubmix,Z_Param_Submix);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExternalSubmix(Z_Param_Submix);
	P_NATIVE_END;
}
// End Class USubmixEffectDynamicsProcessorPreset Function SetExternalSubmix

// Begin Class USubmixEffectDynamicsProcessorPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics
{
	struct SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms
	{
		FSubmixEffectDynamicsProcessorSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4061452904
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectDynamicsProcessorSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_Settings);
	P_NATIVE_END;
}
// End Class USubmixEffectDynamicsProcessorPreset Function SetSettings

// Begin Class USubmixEffectDynamicsProcessorPreset
void USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset()
{
	UClass* Class = USubmixEffectDynamicsProcessorPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetKey", &USubmixEffectDynamicsProcessorPreset::execResetKey },
		{ "SetAudioBus", &USubmixEffectDynamicsProcessorPreset::execSetAudioBus },
		{ "SetExternalSubmix", &USubmixEffectDynamicsProcessorPreset::execSetExternalSubmix },
		{ "SetSettings", &USubmixEffectDynamicsProcessorPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectDynamicsProcessorPreset);
UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister()
{
	return USubmixEffectDynamicsProcessorPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey, "ResetKey" }, // 1291692946
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus, "SetAudioBus" }, // 2631048783
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix, "SetExternalSubmix" }, // 1967621296
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 1741535167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectDynamicsProcessorPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4061452904
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams = {
	&USubmixEffectDynamicsProcessorPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectDynamicsProcessorPreset>()
{
	return USubmixEffectDynamicsProcessorPreset::StaticClass();
}
USubmixEffectDynamicsProcessorPreset::USubmixEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDynamicsProcessorPreset);
USubmixEffectDynamicsProcessorPreset::~USubmixEffectDynamicsProcessorPreset() {}
IMPLEMENT_FARCHIVE_SERIALIZER(USubmixEffectDynamicsProcessorPreset)
// End Class USubmixEffectDynamicsProcessorPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubmixEffectDynamicsProcessorType_StaticEnum, TEXT("ESubmixEffectDynamicsProcessorType"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1432078823U) },
		{ ESubmixEffectDynamicsPeakMode_StaticEnum, TEXT("ESubmixEffectDynamicsPeakMode"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3899755337U) },
		{ ESubmixEffectDynamicsChannelLinkMode_StaticEnum, TEXT("ESubmixEffectDynamicsChannelLinkMode"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2755245128U) },
		{ ESubmixEffectDynamicsKeySource_StaticEnum, TEXT("ESubmixEffectDynamicsKeySource"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3980215807U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectDynamicProcessorFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewStructOps, TEXT("SubmixEffectDynamicProcessorFilterSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectDynamicProcessorFilterSettings), 3681396865U) },
		{ FSubmixEffectDynamicsProcessorSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewStructOps, TEXT("SubmixEffectDynamicsProcessorSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectDynamicsProcessorSettings), 4061452904U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, USubmixEffectDynamicsProcessorPreset::StaticClass, TEXT("USubmixEffectDynamicsProcessorPreset"), &Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectDynamicsProcessorPreset), 4266533163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_1649229831(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
