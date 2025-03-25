// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectReverb() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbPreset();
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings();
ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin ScriptStruct FSubmixEffectReverbSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings;
class UScriptStruct* FSubmixEffectReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectReverbSettings>()
{
	return FSubmixEffectReverbSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassEarlyReflections_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "Comment", "/** Bypasses early reflections */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Bypasses early reflections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "0.3" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection */" },
		{ "EditCondition", "!bBypass && !bBypassEarlyReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GainHF_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound */" },
		{ "EditCondition", "!bBypass && !bBypassEarlyReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsGain_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "3.16" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections */" },
		{ "EditCondition", "!bBypass && !bBypassEarlyReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassLateReflections_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "Comment", "/** Bypasses late reflections. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Bypasses late reflections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateDelay_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density - 0.0 < 0.85 < 1.0 - Coloration of the late reverb - lower value is more grainy */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Density - 0.0 < 0.85 < 1.0 - Coloration of the late reverb - lower value is more grainy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Diffusion - 0.0 < 0.85 < 1.0 - Echo density in the reverberation decay - lower is more grainy */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Diffusion - 0.0 < 0.85 < 1.0 - Echo density in the reverberation decay - lower is more grainy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirAbsorptionGainHF_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much quicker or slower the high frequencies decay relative to the lower frequencies. */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much quicker or slower the high frequencies decay relative to the lower frequencies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateGain_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control */" },
		{ "EditCondition", "!bBypass && !bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
		{ "Category", "Routing" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Overall wet level of the reverb effect\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Overall wet level of the reverb effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[] = {
		{ "Category", "Routing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Overall dry level of the reverb effect\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Overall dry level of the reverb effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Bypasses reverb */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Bypasses reverb" },
	};
#endif // WITH_METADATA
	static void NewProp_bBypassEarlyReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassEarlyReflections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GainHF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsGain;
	static void NewProp_bBypassLateReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassLateReflections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirAbsorptionGainHF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateGain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
	static void NewProp_bBypass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectReverbSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassEarlyReflections_SetBit(void* Obj)
{
	((FSubmixEffectReverbSettings*)Obj)->bBypassEarlyReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassEarlyReflections = { "bBypassEarlyReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassEarlyReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassEarlyReflections_MetaData), NewProp_bBypassEarlyReflections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsDelay = { "ReflectionsDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, ReflectionsDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionsDelay_MetaData), NewProp_ReflectionsDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_GainHF = { "GainHF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, GainHF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GainHF_MetaData), NewProp_GainHF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsGain = { "ReflectionsGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, ReflectionsGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionsGain_MetaData), NewProp_ReflectionsGain_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassLateReflections_SetBit(void* Obj)
{
	((FSubmixEffectReverbSettings*)Obj)->bBypassLateReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassLateReflections = { "bBypassLateReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassLateReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassLateReflections_MetaData), NewProp_bBypassLateReflections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateDelay = { "LateDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, LateDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateDelay_MetaData), NewProp_LateDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, DecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayTime_MetaData), NewProp_DecayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, Diffusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diffusion_MetaData), NewProp_Diffusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_AirAbsorptionGainHF = { "AirAbsorptionGainHF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, AirAbsorptionGainHF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirAbsorptionGainHF_MetaData), NewProp_AirAbsorptionGainHF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayHFRatio = { "DecayHFRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, DecayHFRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayHFRatio_MetaData), NewProp_DecayHFRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateGain = { "LateGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, LateGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateGain_MetaData), NewProp_LateGain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, WetLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevel_MetaData), NewProp_WetLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, DryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevel_MetaData), NewProp_DryLevel_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
{
	((FSubmixEffectReverbSettings*)Obj)->bBypass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypass_MetaData), NewProp_bBypass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassEarlyReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_GainHF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassLateReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Diffusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_AirAbsorptionGainHF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayHFRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_WetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DryLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	&NewStructOps,
	"SubmixEffectReverbSettings",
	Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::PropPointers),
	sizeof(FSubmixEffectReverbSettings),
	alignof(FSubmixEffectReverbSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectReverbSettings

// Begin Class USubmixEffectReverbPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics
{
	struct SubmixEffectReverbPreset_eventSetSettings_Parms
	{
		FSubmixEffectReverbSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 1839839478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::SubmixEffectReverbPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::SubmixEffectReverbPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectReverbPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectReverbSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectReverbPreset Function SetSettings

// Begin Class USubmixEffectReverbPreset Function SetSettingsWithReverbEffect
struct Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics
{
	struct SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms
	{
		const UReverbEffect* InReverbEffect;
		float WetLevel;
		float DryLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "CPP_Default_DryLevel", "0.000000" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReverbEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InReverbEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect = { "InReverbEffect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, InReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReverbEffect_MetaData), NewProp_InReverbEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, WetLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevel_MetaData), NewProp_WetLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, DryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevel_MetaData), NewProp_DryLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbPreset, nullptr, "SetSettingsWithReverbEffect", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectReverbPreset::execSetSettingsWithReverbEffect)
{
	P_GET_OBJECT(UReverbEffect,Z_Param_InReverbEffect);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WetLevel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DryLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettingsWithReverbEffect(Z_Param_InReverbEffect,Z_Param_WetLevel,Z_Param_DryLevel);
	P_NATIVE_END;
}
// End Class USubmixEffectReverbPreset Function SetSettingsWithReverbEffect

// Begin Class USubmixEffectReverbPreset
void USubmixEffectReverbPreset::StaticRegisterNativesUSubmixEffectReverbPreset()
{
	UClass* Class = USubmixEffectReverbPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USubmixEffectReverbPreset::execSetSettings },
		{ "SetSettingsWithReverbEffect", &USubmixEffectReverbPreset::execSetSettingsWithReverbEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectReverbPreset);
UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister()
{
	return USubmixEffectReverbPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectReverbPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings, "SetSettings" }, // 3494519364
		{ &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect, "SetSettingsWithReverbEffect" }, // 3150651309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectReverbPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectReverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1839839478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectReverbPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectReverbPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectReverbPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectReverbPreset_Statics::ClassParams = {
	&USubmixEffectReverbPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectReverbPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectReverbPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectReverbPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectReverbPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectReverbPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectReverbPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectReverbPreset.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectReverbPreset>()
{
	return USubmixEffectReverbPreset::StaticClass();
}
USubmixEffectReverbPreset::USubmixEffectReverbPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectReverbPreset);
USubmixEffectReverbPreset::~USubmixEffectReverbPreset() {}
// End Class USubmixEffectReverbPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewStructOps, TEXT("SubmixEffectReverbSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectReverbSettings), 1839839478U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectReverbPreset, USubmixEffectReverbPreset::StaticClass, TEXT("USubmixEffectReverbPreset"), &Z_Registration_Info_UClass_USubmixEffectReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectReverbPreset), 2557147010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_2820616556(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
