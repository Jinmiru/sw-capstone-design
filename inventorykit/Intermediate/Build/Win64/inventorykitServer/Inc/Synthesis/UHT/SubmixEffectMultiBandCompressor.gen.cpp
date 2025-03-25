// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectMultiBandCompressor() {}

// Begin Cross Module References
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicsBandSettings();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FDynamicsBandSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicsBandSettings;
class UScriptStruct* FDynamicsBandSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicsBandSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicsBandSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicsBandSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("DynamicsBandSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicsBandSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FDynamicsBandSettings>()
{
	return FDynamicsBandSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossoverTopFrequency_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// Frequency of the crossover between this band and the next. The last band will have this property ignored\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Frequency of the crossover between this band and the next. The last band will have this property ignored" },
		{ "UIMax", "20000" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The amount of time to ramp into any dynamics processing effect in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The amount of time to ramp into any dynamics processing effect in milliseconds." },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The amount of time to release the dynamics processing effect in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The amount of time to release the dynamics processing effect in milliseconds" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-72.0" },
		{ "Comment", "// The threshold at which to perform a dynamics processing operation\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The threshold at which to perform a dynamics processing operation" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-72.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The dynamics processor ratio -- has different meaning depending on the processor type.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The dynamics processor ratio -- has different meaning depending on the processor type." },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The knee bandwidth of the compressor to use in dB\n" },
		{ "DisplayName", "Knee (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The knee bandwidth of the compressor to use in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[] = {
		{ "Category", "Gain" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "// The input gain of the dynamics processor in dB\n" },
		{ "DisplayName", "Input Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The input gain of the dynamics processor in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "Gain" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "// The output gain of the dynamics processor in dB\n" },
		{ "DisplayName", "Output Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The output gain of the dynamics processor in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossoverTopFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicsBandSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_CrossoverTopFrequency = { "CrossoverTopFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, CrossoverTopFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossoverTopFrequency_MetaData), NewProp_CrossoverTopFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, AttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTimeMsec_MetaData), NewProp_AttackTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, ReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTimeMsec_MetaData), NewProp_ReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, ThresholdDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdDb_MetaData), NewProp_ThresholdDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, KneeBandwidthDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KneeBandwidthDb_MetaData), NewProp_KneeBandwidthDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, InputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputGainDb_MetaData), NewProp_InputGainDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicsBandSettings, OutputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputGainDb_MetaData), NewProp_OutputGainDb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_CrossoverTopFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_AttackTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ReleaseTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ThresholdDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_Ratio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_KneeBandwidthDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_InputGainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_OutputGainDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"DynamicsBandSettings",
	Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::PropPointers),
	sizeof(FDynamicsBandSettings),
	alignof(FDynamicsBandSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDynamicsBandSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicsBandSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicsBandSettings.InnerSingleton, Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DynamicsBandSettings.InnerSingleton;
}
// End ScriptStruct FDynamicsBandSettings

// Begin ScriptStruct FSubmixEffectMultibandCompressorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings;
class UScriptStruct* FSubmixEffectMultibandCompressorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectMultibandCompressorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectMultibandCompressorSettings>()
{
	return FSubmixEffectMultibandCompressorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A submix dynamics processor\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "A submix dynamics processor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Controls how each band will react to audio above its threshold\n" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Controls how each band will react to audio above its threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Controls how quickly the bands will react to a signal above its threshold\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Controls how quickly the bands will react to a signal above its threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Whether to compress all channels equally, and how to evaluate the overall level\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Whether to compress all channels equally, and how to evaluate the overall level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of time to look ahead of the current audio. Allows for transients to be included in dynamics processing.\n" },
		{ "DisplayName", "Look Ahead (ms)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The amount of time to look ahead of the current audio. Allows for transients to be included in dynamics processing." },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "// Toggles treating the attack and release envelopes as analog-style vs digital-style. Analog will respond a bit more naturally/slower.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Toggles treating the attack and release envelopes as analog-style vs digital-style. Analog will respond a bit more naturally/slower." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFourPole_MetaData[] = {
		{ "Category", "Crossover" },
		{ "Comment", "// Turning off FourPole mode will use cheaper, shallower 2-pole crossovers\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Turning off FourPole mode will use cheaper, shallower 2-pole crossovers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Whether or not to bypass effect\n" },
		{ "DisplayAfter", "DynamicsProcessorType" },
		{ "DisplayName", "Bypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Whether or not to bypass effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySource_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAudioBus_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)\n" },
		{ "EditCondition", "!bBypass && KeySource == ESubmixEffectDynamicsKeySource::AudioBus" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSubmix_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)\n" },
		{ "EditCondition", "!bBypass && KeySource == ESubmixEffectDynamicsKeySource::Submix" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGainDb_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Gain to apply to key signal if external input is supplied\n" },
		{ "DisplayName", "External Input Gain (dB)" },
		{ "EditCondition", "ExternalSubmix != nullptr || ExternalAudioBus != nullptr" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Gain to apply to key signal if external input is supplied" },
		{ "UIMax", "30.0" },
		{ "UIMin", "-60.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeyAudition_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Audition the key modulation signal, bypassing enveloping and processing the input signal.\n" },
		{ "DisplayName", "Key Audition" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Audition the key modulation signal, bypassing enveloping and processing the input signal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bands_MetaData[] = {
		{ "Category", "Bands" },
		{ "Comment", "// Each band is a full dynamics processor, affecting at a unique frequency range\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Each band is a full dynamics processor, affecting at a unique frequency range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinkMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec;
	static void NewProp_bAnalogMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
	static void NewProp_bFourPole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFourPole;
	static void NewProp_bBypass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeySource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeySource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalAudioBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalSubmix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyGainDb;
	static void NewProp_bKeyAudition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyAudition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectMultibandCompressorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, DynamicsProcessorType), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicsProcessorType_MetaData), NewProp_DynamicsProcessorType_MetaData) }; // 1432078823
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, PeakMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakMode_MetaData), NewProp_PeakMode_MetaData) }; // 3899755337
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LinkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LinkMode = { "LinkMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, LinkMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkMode_MetaData), NewProp_LinkMode_MetaData) }; // 2755245128
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, LookAheadMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAheadMsec_MetaData), NewProp_LookAheadMsec_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
{
	((FSubmixEffectMultibandCompressorSettings*)Obj)->bAnalogMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectMultibandCompressorSettings), &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnalogMode_MetaData), NewProp_bAnalogMode_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_SetBit(void* Obj)
{
	((FSubmixEffectMultibandCompressorSettings*)Obj)->bFourPole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole = { "bFourPole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectMultibandCompressorSettings), &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFourPole_MetaData), NewProp_bFourPole_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
{
	((FSubmixEffectMultibandCompressorSettings*)Obj)->bBypass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectMultibandCompressorSettings), &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypass_MetaData), NewProp_bBypass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_KeySource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_KeySource = { "KeySource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, KeySource), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySource_MetaData), NewProp_KeySource_MetaData) }; // 3980215807
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_ExternalAudioBus = { "ExternalAudioBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, ExternalAudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAudioBus_MetaData), NewProp_ExternalAudioBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_ExternalSubmix = { "ExternalSubmix", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, ExternalSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSubmix_MetaData), NewProp_ExternalSubmix_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_KeyGainDb = { "KeyGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, KeyGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGainDb_MetaData), NewProp_KeyGainDb_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bKeyAudition_SetBit(void* Obj)
{
	((FSubmixEffectMultibandCompressorSettings*)Obj)->bKeyAudition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bKeyAudition = { "bKeyAudition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectMultibandCompressorSettings), &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bKeyAudition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeyAudition_MetaData), NewProp_bKeyAudition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands_Inner = { "Bands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDynamicsBandSettings, METADATA_PARAMS(0, nullptr) }; // 2355432221
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands = { "Bands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, Bands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bands_MetaData), NewProp_Bands_MetaData) }; // 2355432221
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LinkMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LinkMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LookAheadMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bBypass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_KeySource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_KeySource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_ExternalAudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_ExternalSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_KeyGainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bKeyAudition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SubmixEffectMultibandCompressorSettings",
	Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::PropPointers),
	sizeof(FSubmixEffectMultibandCompressorSettings),
	alignof(FSubmixEffectMultibandCompressorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectMultibandCompressorSettings

// Begin Class USubmixEffectMultibandCompressorPreset Function ResetKey
struct Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectMultibandCompressorPreset, nullptr, "ResetKey", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectMultibandCompressorPreset::execResetKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetKey();
	P_NATIVE_END;
}
// End Class USubmixEffectMultibandCompressorPreset Function ResetKey

// Begin Class USubmixEffectMultibandCompressorPreset Function SetAudioBus
struct Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics
{
	struct SubmixEffectMultibandCompressorPreset_eventSetAudioBus_Parms
	{
		UAudioBus* AudioBus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set\n// to effect's input.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set\nto effect's input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectMultibandCompressorPreset_eventSetAudioBus_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::NewProp_AudioBus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectMultibandCompressorPreset, nullptr, "SetAudioBus", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::SubmixEffectMultibandCompressorPreset_eventSetAudioBus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::SubmixEffectMultibandCompressorPreset_eventSetAudioBus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectMultibandCompressorPreset::execSetAudioBus)
{
	P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioBus(Z_Param_AudioBus);
	P_NATIVE_END;
}
// End Class USubmixEffectMultibandCompressorPreset Function SetAudioBus

// Begin Class USubmixEffectMultibandCompressorPreset Function SetExternalSubmix
struct Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics
{
	struct SubmixEffectMultibandCompressorPreset_eventSetExternalSubmix_Parms
	{
		USoundSubmix* Submix;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Sets the source key input as the provided Submix's output.  If no object is provided, key is set\n// to effect's input.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Sets the source key input as the provided Submix's output.  If no object is provided, key is set\nto effect's input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectMultibandCompressorPreset_eventSetExternalSubmix_Parms, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::NewProp_Submix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectMultibandCompressorPreset, nullptr, "SetExternalSubmix", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::SubmixEffectMultibandCompressorPreset_eventSetExternalSubmix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::SubmixEffectMultibandCompressorPreset_eventSetExternalSubmix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectMultibandCompressorPreset::execSetExternalSubmix)
{
	P_GET_OBJECT(USoundSubmix,Z_Param_Submix);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExternalSubmix(Z_Param_Submix);
	P_NATIVE_END;
}
// End Class USubmixEffectMultibandCompressorPreset Function SetExternalSubmix

// Begin Class USubmixEffectMultibandCompressorPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics
{
	struct SubmixEffectMultibandCompressorPreset_eventSetSettings_Parms
	{
		FSubmixEffectMultibandCompressorSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectMultibandCompressorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 4187029490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectMultibandCompressorPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::SubmixEffectMultibandCompressorPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::SubmixEffectMultibandCompressorPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectMultibandCompressorPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectMultibandCompressorSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectMultibandCompressorPreset Function SetSettings

// Begin Class USubmixEffectMultibandCompressorPreset
void USubmixEffectMultibandCompressorPreset::StaticRegisterNativesUSubmixEffectMultibandCompressorPreset()
{
	UClass* Class = USubmixEffectMultibandCompressorPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetKey", &USubmixEffectMultibandCompressorPreset::execResetKey },
		{ "SetAudioBus", &USubmixEffectMultibandCompressorPreset::execSetAudioBus },
		{ "SetExternalSubmix", &USubmixEffectMultibandCompressorPreset::execSetExternalSubmix },
		{ "SetSettings", &USubmixEffectMultibandCompressorPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectMultibandCompressorPreset);
UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister()
{
	return USubmixEffectMultibandCompressorPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_ResetKey, "ResetKey" }, // 3993190474
		{ &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetAudioBus, "SetAudioBus" }, // 2765681470
		{ &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetExternalSubmix, "SetExternalSubmix" }, // 234360424
		{ &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings, "SetSettings" }, // 2613252839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectMultibandCompressorPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectMultibandCompressorPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4187029490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::ClassParams = {
	&USubmixEffectMultibandCompressorPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectMultibandCompressorPreset>()
{
	return USubmixEffectMultibandCompressorPreset::StaticClass();
}
USubmixEffectMultibandCompressorPreset::USubmixEffectMultibandCompressorPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectMultibandCompressorPreset);
USubmixEffectMultibandCompressorPreset::~USubmixEffectMultibandCompressorPreset() {}
// End Class USubmixEffectMultibandCompressorPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDynamicsBandSettings::StaticStruct, Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewStructOps, TEXT("DynamicsBandSettings"), &Z_Registration_Info_UScriptStruct_DynamicsBandSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicsBandSettings), 2355432221U) },
		{ FSubmixEffectMultibandCompressorSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewStructOps, TEXT("SubmixEffectMultibandCompressorSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectMultibandCompressorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectMultibandCompressorSettings), 4187029490U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectMultibandCompressorPreset, USubmixEffectMultibandCompressorPreset::StaticClass, TEXT("USubmixEffectMultibandCompressorPreset"), &Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectMultibandCompressorPreset), 430731152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_3098541040(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
