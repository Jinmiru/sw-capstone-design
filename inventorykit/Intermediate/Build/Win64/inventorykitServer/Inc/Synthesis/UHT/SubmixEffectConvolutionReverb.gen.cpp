// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectConvolutionReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectConvolutionReverb() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSubmixEffectConvolutionReverbSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings;
class UScriptStruct* FSubmixEffectConvolutionReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectConvolutionReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectConvolutionReverbSettings>()
{
	return FSubmixEffectConvolutionReverbSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationVolumeDb_MetaData[] = {
		{ "Comment", "/* Used to account for energy added by convolution with \"loud\" Impulse Responses. \n\x09 * This value is not directly editable in the editor because it is copied from the \n\x09 * associated UAudioImpulseResponse. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Used to account for energy added by convolution with \"loud\" Impulse Responses.\n       * This value is not directly editable in the editor because it is copied from the\n       * associated UAudioImpulseResponse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the wet signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the wet signal is mixed into the output, in Decibels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the dry signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the dry signal is mixed into the output, in Decibels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMixInputChannelFormatToImpulseResponseFormat_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, the submix input audio is downmixed to match the IR asset audio channel\n\x09 * format. If false, the input audio's channels are matched to the IR assets\n\x09 * audio channels.\n\x09 */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, the submix input audio is downmixed to match the IR asset audio channel\n       * format. If false, the input audio's channels are matched to the IR assets\n       * audio channels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMixReverbOutputToOutputChannelFormat_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, the reverberated audio is upmixed or downmixed to match the submix \n\x09 * output audio format. If false, the reverberated audio's channels are matched\n\x09 * to the submixs output audio channels. \n\x09 */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, the reverberated audio is upmixed or downmixed to match the submix\n       * output audio format. If false, the reverberated audio's channels are matched\n       * to the submixs output audio channels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurroundRearChannelBleedDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset|Surround" },
		{ "ClampMax", "15.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "/* Amount of audio to be sent to rear channels in quad/surround configurations */" },
		{ "DisplayName", "Surround Rear Channel Bleed (dB)" },
		{ "EditCondition", "bMixReverbOutputToOutputChannelFormat && !bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Amount of audio to be sent to rear channels in quad/surround configurations" },
		{ "UIMax", "15.0" },
		{ "UIMin", "-60.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertRearChannelBleedPhase_MetaData[] = {
		{ "Category", "SumixEffectPreset|Surround" },
		{ "Comment", "/* If true, rear channel bleed sends will have their phase inverted. */" },
		{ "EditCondition", "bMixReverbOutputToOutputChannelFormat && !bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, rear channel bleed sends will have their phase inverted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSurroundRearChannelFlip_MetaData[] = {
		{ "Category", "SubmixEffectPreset|Surround" },
		{ "Comment", "/* If true, send Surround Rear Channel Bleed Amount sends front left to back right and vice versa */" },
		{ "EditCondition", "bMixReverbOutputToOutputChannelFormat && !bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, send Surround Rear Channel Bleed Amount sends front left to back right and vice versa" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurroundRearChannelBleedAmount_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowHardwareAcceleration_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationVolumeDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetVolumeDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryVolumeDb;
	static void NewProp_bBypass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
	static void NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMixInputChannelFormatToImpulseResponseFormat;
	static void NewProp_bMixReverbOutputToOutputChannelFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMixReverbOutputToOutputChannelFormat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundRearChannelBleedDb;
	static void NewProp_bInvertRearChannelBleedPhase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertRearChannelBleedPhase;
	static void NewProp_bSurroundRearChannelFlip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSurroundRearChannelFlip;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundRearChannelBleedAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpulseResponse;
	static void NewProp_AllowHardwareAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowHardwareAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectConvolutionReverbSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb = { "NormalizationVolumeDb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, NormalizationVolumeDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationVolumeDb_MetaData), NewProp_NormalizationVolumeDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb = { "WetVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, WetVolumeDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetVolumeDb_MetaData), NewProp_WetVolumeDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb = { "DryVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, DryVolumeDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryVolumeDb_MetaData), NewProp_DryVolumeDb_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
{
	((FSubmixEffectConvolutionReverbSettings*)Obj)->bBypass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypass_MetaData), NewProp_bBypass_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit(void* Obj)
{
	((FSubmixEffectConvolutionReverbSettings*)Obj)->bMixInputChannelFormatToImpulseResponseFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat = { "bMixInputChannelFormatToImpulseResponseFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMixInputChannelFormatToImpulseResponseFormat_MetaData), NewProp_bMixInputChannelFormatToImpulseResponseFormat_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat_SetBit(void* Obj)
{
	((FSubmixEffectConvolutionReverbSettings*)Obj)->bMixReverbOutputToOutputChannelFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat = { "bMixReverbOutputToOutputChannelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMixReverbOutputToOutputChannelFormat_MetaData), NewProp_bMixReverbOutputToOutputChannelFormat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb = { "SurroundRearChannelBleedDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurroundRearChannelBleedDb_MetaData), NewProp_SurroundRearChannelBleedDb_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_SetBit(void* Obj)
{
	((FSubmixEffectConvolutionReverbSettings*)Obj)->bInvertRearChannelBleedPhase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase = { "bInvertRearChannelBleedPhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertRearChannelBleedPhase_MetaData), NewProp_bInvertRearChannelBleedPhase_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_SetBit(void* Obj)
{
	((FSubmixEffectConvolutionReverbSettings*)Obj)->bSurroundRearChannelFlip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip = { "bSurroundRearChannelFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSurroundRearChannelFlip_MetaData), NewProp_bSurroundRearChannelFlip_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount = { "SurroundRearChannelBleedAmount", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedAmount_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurroundRearChannelBleedAmount_MetaData), NewProp_SurroundRearChannelBleedAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, ImpulseResponse_DEPRECATED), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseResponse_MetaData), NewProp_ImpulseResponse_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_SetBit(void* Obj)
{
	((FSubmixEffectConvolutionReverbSettings*)Obj)->AllowHardwareAcceleration_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration = { "AllowHardwareAcceleration", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowHardwareAcceleration_MetaData), NewProp_AllowHardwareAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SubmixEffectConvolutionReverbSettings",
	Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers),
	sizeof(FSubmixEffectConvolutionReverbSettings),
	alignof(FSubmixEffectConvolutionReverbSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectConvolutionReverbSettings

// Begin Class USubmixEffectConvolutionReverbPreset Function SetImpulseResponse
struct Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics
{
	struct SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms
	{
		UAudioImpulseResponse* InImpulseResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb impulse response */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb impulse response" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InImpulseResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse = { "InImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms, InImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, nullptr, "SetImpulseResponse", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectConvolutionReverbPreset::execSetImpulseResponse)
{
	P_GET_OBJECT(UAudioImpulseResponse,Z_Param_InImpulseResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImpulseResponse(Z_Param_InImpulseResponse);
	P_NATIVE_END;
}
// End Class USubmixEffectConvolutionReverbPreset Function SetImpulseResponse

// Begin Class USubmixEffectConvolutionReverbPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics
{
	struct SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms
	{
		FSubmixEffectConvolutionReverbSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb settings */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 2796760476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectConvolutionReverbPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectConvolutionReverbSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectConvolutionReverbPreset Function SetSettings

// Begin Class USubmixEffectConvolutionReverbPreset
void USubmixEffectConvolutionReverbPreset::StaticRegisterNativesUSubmixEffectConvolutionReverbPreset()
{
	UClass* Class = USubmixEffectConvolutionReverbPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetImpulseResponse", &USubmixEffectConvolutionReverbPreset::execSetImpulseResponse },
		{ "SetSettings", &USubmixEffectConvolutionReverbPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectConvolutionReverbPreset);
UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister()
{
	return USubmixEffectConvolutionReverbPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[] = {
		{ "BlueprintSetter", "SetImpulseResponse" },
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** The impulse response used for convolution. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "The impulse response used for convolution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetSettings" },
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** ConvolutionReverbPreset Preset Settings. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "ConvolutionReverbPreset Preset Settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** Set the internal block size. This can effect latency and performance. Higher values will result in\n\x09 * lower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\n\x09 * on the interplay between audio engines buffer sizes and this effects block size. Generally, higher\n\x09 * values result in higher latency, and lower values result in lower latency. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the internal block size. This can effect latency and performance. Higher values will result in\nlower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\non the interplay between audio engines buffer sizes and this effects block size. Generally, higher\nvalues result in higher latency, and lower values result in lower latency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardwareAcceleration_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** Opt into hardware acceleration of the convolution reverb (if available) */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Opt into hardware acceleration of the convolution reverb (if available)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpulseResponse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlockSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockSize;
	static void NewProp_bEnableHardwareAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardwareAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse, "SetImpulseResponse" }, // 1992987406
		{ &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings, "SetSettings" }, // 230058850
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectConvolutionReverbPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, ImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseResponse_MetaData), NewProp_ImpulseResponse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2796760476
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, BlockSize), Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockSize_MetaData), NewProp_BlockSize_MetaData) }; // 189648267
void Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit(void* Obj)
{
	((USubmixEffectConvolutionReverbPreset*)Obj)->bEnableHardwareAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration = { "bEnableHardwareAcceleration", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USubmixEffectConvolutionReverbPreset), &Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHardwareAcceleration_MetaData), NewProp_bEnableHardwareAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::ClassParams = {
	&USubmixEffectConvolutionReverbPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectConvolutionReverbPreset>()
{
	return USubmixEffectConvolutionReverbPreset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectConvolutionReverbPreset);
USubmixEffectConvolutionReverbPreset::~USubmixEffectConvolutionReverbPreset() {}
// End Class USubmixEffectConvolutionReverbPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectConvolutionReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewStructOps, TEXT("SubmixEffectConvolutionReverbSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectConvolutionReverbSettings), 2796760476U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, USubmixEffectConvolutionReverbPreset::StaticClass, TEXT("USubmixEffectConvolutionReverbPreset"), &Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectConvolutionReverbPreset), 2867350616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_394871896(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
