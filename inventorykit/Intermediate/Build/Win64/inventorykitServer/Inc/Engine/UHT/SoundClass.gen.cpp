// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClass() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundClass();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSoundClassEditorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundClassEditorData;
class UScriptStruct* FSoundClassEditorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassEditorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundClassEditorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassEditorData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassEditorData"));
	}
	return Z_Registration_Info_UScriptStruct_SoundClassEditorData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassEditorData>()
{
	return FSoundClassEditorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundClassEditorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassEditorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundClassEditorData",
	nullptr,
	0,
	sizeof(FSoundClassEditorData),
	alignof(FSoundClassEditorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassEditorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundClassEditorData.InnerSingleton, Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundClassEditorData.InnerSingleton;
}
// End ScriptStruct FSoundClassEditorData

// Begin ScriptStruct FSoundClassProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundClassProperties;
class UScriptStruct* FSoundClassProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundClassProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassProperties"));
	}
	return Z_Registration_Info_UScriptStruct_SoundClassProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassProperties>()
{
	return FSoundClassProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundClassProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Volume multiplier. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume multiplier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Pitch multiplier. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Pitch multiplier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Lowpass filter cutoff frequency */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Lowpass filter cutoff frequency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Scales the distance measurement used by the audio engine when determining distance-based attenuation. \n\x09  * E.g., a sound 1000 units away with an AttenuationDistanceScale of .5 will be attenuated\n\x09  * as if it is 500 units away from the listener.\n\x09  * Allows adjusting attenuation settings dynamically. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Scales the distance measurement used by the audio engine when determining distance-based attenuation.\nE.g., a sound 1000 units away with an AttenuationDistanceScale of .5 will be attenuated\nas if it is 500 units away from the listener.\nAllows adjusting attenuation settings dynamically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFEBleed_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** The amount of a sound to bleed to the LFE channel */" },
		{ "DisplayName", "LFE Bleed" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The amount of a sound to bleed to the LFE channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolume_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** The amount to send to center channel (does not propagate to child classes) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The amount to send to center channel (does not propagate to child classes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolume_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Volume of the radio filter effect. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume of the radio filter effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolumeThreshold_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Volume at which the radio filter kicks in */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume at which the radio filter kicks in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyEffects_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether to use 'Master EQ Submix' as set in the 'Audio' category of Project Settings as the default submix for referencing sounds. */" },
		{ "DisplayName", "Output to Master EQ Submix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether to use 'Master EQ Submix' as set in the 'Audio' category of Project Settings as the default submix for referencing sounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPlay_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to inflate referencing sound's priority to always play. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether to inflate referencing sound's priority to always play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMusic_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether or not this is music (propagates to child classes only if parent is true) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this is music (propagates to child classes only if parent is true)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenterChannelOnly_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether or not this sound class forces sounds to the center channel */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound class forces sounds to the center channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAmbientVolumes_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether the Interior/Exterior volume and LPF modifiers should be applied */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether the Interior/Exterior volume and LPF modifiers should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverb_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Whether or not sounds referencing this class send to the reverb submix */" },
		{ "DisplayName", "Send to Master Reverb Submix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not sounds referencing this class send to the reverb submix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default2DReverbSendAmount_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Send amount to master reverb effect for referencing unattenuated (2D) sounds. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Send amount to master reverb effect for referencing unattenuated (2D) sounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Default modulation settings for sounds directly referencing this class */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Default modulation settings for sounds directly referencing this class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Which output target the sound should be played through */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Which output target the sound should be played through" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBehavior_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Specifies how and when compressed audio data is loaded for asset if stream caching is enabled. */" },
		{ "DisplayName", "Loading Behavior Override" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Specifies how and when compressed audio data is loaded for asset if stream caching is enabled." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeOfFirstAudioChunkInSeconds_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** How much audio to add to First Audio Chunk (in seconds) */" },
		{ "DisplayName", "Size of First Audio Chunk (seconds)" },
		{ "EditCondition", "LoadingBehavior == ESoundWaveLoadingBehavior::RetainOnLoad || LoadingBehavior == ESoundWaveLoadingBehavior::PrimeOnLoad" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "How much audio to add to First Audio Chunk (in seconds)" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubmix_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Default output submix of referencing sounds. If unset, falls back to the 'Master Submix' as set in the 'Audio' category of Project Settings. \n\x09  * (Unavailable if legacy 'Output to Master EQ Submix' is set) */" },
		{ "EditCondition", "!bApplyEffects" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Default output submix of referencing sounds. If unset, falls back to the 'Master Submix' as set in the 'Audio' category of Project Settings.\n(Unavailable if legacy 'Output to Master EQ Submix' is set)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationDistanceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LFEBleed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolumeThreshold;
	static void NewProp_bApplyEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyEffects;
	static void NewProp_bAlwaysPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPlay;
	static void NewProp_bIsUISound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
	static void NewProp_bIsMusic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMusic;
	static void NewProp_bCenterChannelOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterChannelOnly;
	static void NewProp_bApplyAmbientVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAmbientVolumes;
	static void NewProp_bReverb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default2DReverbSendAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingBehavior;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeOfFirstAudioChunkInSeconds;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSubmix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, LowPassFilterFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowPassFilterFrequency_MetaData), NewProp_LowPassFilterFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale = { "AttenuationDistanceScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, AttenuationDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationDistanceScale_MetaData), NewProp_AttenuationDistanceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed = { "LFEBleed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, LFEBleed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFEBleed_MetaData), NewProp_LFEBleed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume = { "VoiceCenterChannelVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, VoiceCenterChannelVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceCenterChannelVolume_MetaData), NewProp_VoiceCenterChannelVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume = { "RadioFilterVolume", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioFilterVolume_MetaData), NewProp_RadioFilterVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold = { "RadioFilterVolumeThreshold", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolumeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioFilterVolumeThreshold_MetaData), NewProp_RadioFilterVolumeThreshold_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit(void* Obj)
{
	((FSoundClassProperties*)Obj)->bApplyEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects = { "bApplyEffects", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyEffects_MetaData), NewProp_bApplyEffects_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit(void* Obj)
{
	((FSoundClassProperties*)Obj)->bAlwaysPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay = { "bAlwaysPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysPlay_MetaData), NewProp_bAlwaysPlay_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit(void* Obj)
{
	((FSoundClassProperties*)Obj)->bIsUISound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUISound_MetaData), NewProp_bIsUISound_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit(void* Obj)
{
	((FSoundClassProperties*)Obj)->bIsMusic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic = { "bIsMusic", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMusic_MetaData), NewProp_bIsMusic_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit(void* Obj)
{
	((FSoundClassProperties*)Obj)->bCenterChannelOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly = { "bCenterChannelOnly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenterChannelOnly_MetaData), NewProp_bCenterChannelOnly_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit(void* Obj)
{
	((FSoundClassProperties*)Obj)->bApplyAmbientVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes = { "bApplyAmbientVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyAmbientVolumes_MetaData), NewProp_bApplyAmbientVolumes_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit(void* Obj)
{
	((FSoundClassProperties*)Obj)->bReverb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb = { "bReverb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverb_MetaData), NewProp_bReverb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount = { "Default2DReverbSendAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, Default2DReverbSendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default2DReverbSendAmount_MetaData), NewProp_Default2DReverbSendAmount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, ModulationSettings), Z_Construct_UScriptStruct_FSoundModulationDefaultSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationSettings_MetaData), NewProp_ModulationSettings_MetaData) }; // 176483245
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget = { "OutputTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, OutputTarget), Z_Construct_UEnum_Engine_EAudioOutputTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTarget_MetaData), NewProp_OutputTarget_MetaData) }; // 946213142
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior = { "LoadingBehavior", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, LoadingBehavior), Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingBehavior_MetaData), NewProp_LoadingBehavior_MetaData) }; // 2688492422
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_SizeOfFirstAudioChunkInSeconds = { "SizeOfFirstAudioChunkInSeconds", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, SizeOfFirstAudioChunkInSeconds), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeOfFirstAudioChunkInSeconds_MetaData), NewProp_SizeOfFirstAudioChunkInSeconds_MetaData) }; // 50753708
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix = { "DefaultSubmix", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassProperties, DefaultSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSubmix_MetaData), NewProp_DefaultSubmix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_ModulationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_SizeOfFirstAudioChunkInSeconds,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundClassProperties",
	Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers),
	sizeof(FSoundClassProperties),
	alignof(FSoundClassProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundClassProperties.InnerSingleton, Z_Construct_UScriptStruct_FSoundClassProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundClassProperties.InnerSingleton;
}
// End ScriptStruct FSoundClassProperties

// Begin ScriptStruct FPassiveSoundMixModifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier;
class UScriptStruct* FPassiveSoundMixModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSoundMixModifier, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PassiveSoundMixModifier"));
	}
	return Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPassiveSoundMixModifier>()
{
	return FPassiveSoundMixModifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing information on a SoundMix to activate passively.\n */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Structure containing information on a SoundMix to activate passively." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundMix_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** The SoundMix to activate */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The SoundMix to activate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundMix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolumeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVolumeThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix = { "SoundMix", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, SoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundMix_MetaData), NewProp_SoundMix_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold = { "MinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, MinVolumeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVolumeThreshold_MetaData), NewProp_MinVolumeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold = { "MaxVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, MaxVolumeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVolumeThreshold_MetaData), NewProp_MaxVolumeThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PassiveSoundMixModifier",
	Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers),
	sizeof(FPassiveSoundMixModifier),
	alignof(FPassiveSoundMixModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier()
{
	if (!Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.InnerSingleton, Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.InnerSingleton;
}
// End ScriptStruct FPassiveSoundMixModifier

// Begin Class USoundClass
void USoundClass::StaticRegisterNativesUSoundClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundClass);
UClass* Z_Construct_UClass_USoundClass_NoRegister()
{
	return USoundClass::StaticClass();
}
struct Z_Construct_UClass_USoundClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundClass.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Configurable properties like volume and priority. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Configurable properties like volume and priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildClasses_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveSoundMixModifiers_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** SoundMix Modifiers to activate automatically when a sound of this class is playing. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "SoundMix Modifiers to activate automatically when a sound of this class is playing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildClasses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassiveSoundMixModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveSoundMixModifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundClass, Properties), Z_Construct_UScriptStruct_FSoundClassProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 400627015
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner = { "ChildClasses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses = { "ChildClasses", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundClass, ChildClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildClasses_MetaData), NewProp_ChildClasses_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPassiveSoundMixModifier, METADATA_PARAMS(0, nullptr) }; // 466101259
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundClass, PassiveSoundMixModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveSoundMixModifiers_MetaData), NewProp_PassiveSoundMixModifiers_MetaData) }; // 466101259
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundClass, ParentClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundClass_Statics::ClassParams = {
	&USoundClass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundClass()
{
	if (!Z_Registration_Info_UClass_USoundClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundClass.OuterSingleton, Z_Construct_UClass_USoundClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundClass.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundClass>()
{
	return USoundClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClass);
USoundClass::~USoundClass() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundClass)
// End Class USoundClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundClassEditorData::StaticStruct, Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::NewStructOps, TEXT("SoundClassEditorData"), &Z_Registration_Info_UScriptStruct_SoundClassEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundClassEditorData), 1134557875U) },
		{ FSoundClassProperties::StaticStruct, Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewStructOps, TEXT("SoundClassProperties"), &Z_Registration_Info_UScriptStruct_SoundClassProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundClassProperties), 400627015U) },
		{ FPassiveSoundMixModifier::StaticStruct, Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewStructOps, TEXT("PassiveSoundMixModifier"), &Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPassiveSoundMixModifier), 466101259U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundClass, USoundClass::StaticClass, TEXT("USoundClass"), &Z_Registration_Info_UClass_USoundClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundClass), 3502777259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_102366343(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
