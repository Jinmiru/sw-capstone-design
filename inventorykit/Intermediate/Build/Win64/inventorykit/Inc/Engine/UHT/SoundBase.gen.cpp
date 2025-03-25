// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundTimecodeOffset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundBase() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesBindings_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVirtualizationMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundTimecodeOffset();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EVirtualizationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVirtualizationMode;
static UEnum* EVirtualizationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVirtualizationMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVirtualizationMode"));
	}
	return Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVirtualizationMode>()
{
	return EVirtualizationMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVirtualizationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Method of virtualization when a sound is stopped due to playback constraints\n * (i.e. by concurrency, priority, and/or MaxChannelCount)\n * for a given sound.\n */" },
		{ "Disabled.Comment", "/** Virtualization is disabled */" },
		{ "Disabled.Name", "EVirtualizationMode::Disabled" },
		{ "Disabled.ToolTip", "Virtualization is disabled" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "PlayWhenSilent.Comment", "/** Sound continues to play when silent and not virtualize, continuing to use a voice. If\n\x09 * sound is looping and stopped due to concurrency or channel limit/priority, sound will\n\x09 * restart on realization. If any SoundWave referenced in a SoundCue's waveplayer is set\n\x09 * to 'PlayWhenSilent', entire SoundCue will be overridden to 'PlayWhenSilent' (to maintain\n\x09 * timing over all wave players).\n\x09 */" },
		{ "PlayWhenSilent.Name", "EVirtualizationMode::PlayWhenSilent" },
		{ "PlayWhenSilent.ToolTip", "Sound continues to play when silent and not virtualize, continuing to use a voice. If\nsound is looping and stopped due to concurrency or channel limit/priority, sound will\nrestart on realization. If any SoundWave referenced in a SoundCue's waveplayer is set\nto 'PlayWhenSilent', entire SoundCue will be overridden to 'PlayWhenSilent' (to maintain\ntiming over all wave players)." },
		{ "Restart.Comment", "/** If sound is looping, sound restarts from beginning upon realization from being virtual */" },
		{ "Restart.Name", "EVirtualizationMode::Restart" },
		{ "Restart.ToolTip", "If sound is looping, sound restarts from beginning upon realization from being virtual" },
		{ "ToolTip", "Method of virtualization when a sound is stopped due to playback constraints\n(i.e. by concurrency, priority, and/or MaxChannelCount)\nfor a given sound." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVirtualizationMode::Disabled", (int64)EVirtualizationMode::Disabled },
		{ "EVirtualizationMode::PlayWhenSilent", (int64)EVirtualizationMode::PlayWhenSilent },
		{ "EVirtualizationMode::Restart", (int64)EVirtualizationMode::Restart },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVirtualizationMode",
	"EVirtualizationMode",
	Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVirtualizationMode()
{
	if (!Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton, Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton;
}
// End Enum EVirtualizationMode

// Begin Class USoundBase Function IsAttenuationSettingsEditable
struct Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics
{
	struct SoundBase_eventIsAttenuationSettingsEditable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Only used as an edit condition for AttenuationSettings member, as base classes may choose to provide an attenuation override implementation */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Only used as an edit condition for AttenuationSettings member, as base classes may choose to provide an attenuation override implementation" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundBase_eventIsAttenuationSettingsEditable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundBase_eventIsAttenuationSettingsEditable_Parms), &Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundBase, nullptr, "IsAttenuationSettingsEditable", nullptr, nullptr, Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::SoundBase_eventIsAttenuationSettingsEditable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::SoundBase_eventIsAttenuationSettingsEditable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundBase::execIsAttenuationSettingsEditable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAttenuationSettingsEditable();
	P_NATIVE_END;
}
// End Class USoundBase Function IsAttenuationSettingsEditable

// Begin Class USoundBase
void USoundBase::StaticRegisterNativesUSoundBase()
{
	UClass* Class = USoundBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsAttenuationSettingsEditable", &USoundBase::execIsAttenuationSettingsEditable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundBase);
UClass* Z_Construct_UClass_USoundBase_NoRegister()
{
	return USoundBase::StaticClass();
}
struct Z_Construct_UClass_USoundBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class for a playable sound object\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundBase.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The base class for a playable sound object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound class this sound belongs to */" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** When \"au.3dVisualize.Attenuation\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purposes only. */" },
		{ "DisplayName", "Enable Attenuation Debug" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "When \"au.3dVisualize.Attenuation\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purposes only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideConcurrency_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** Whether or not to override the sound concurrency object with local concurrency settings. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to override the sound concurrency object with local concurrency settings." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToBusOnly_MetaData[] = {
		{ "Comment", "/** Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBusSends_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** Whether or not to enable sending this audio's output to buses.  */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to enable sending this audio's output to buses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBaseSubmix_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubmixSends_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** Whether or not to enable Submix Sends other than the Base Submix. */" },
		{ "DisplayAfter", "SoundSubmixObject" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to enable Submix Sends other than the Base Submix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDelayNode_MetaData[] = {
		{ "Comment", "/** Whether or not this sound has a delay node */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not this sound has a delay node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasConcatenatorNode_MetaData[] = {
		{ "Comment", "/** Whether or not this sound has a concatenator node. If it does, we have to allow the sound to persist even though it may not have generate audible audio in a given audio thread frame. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not this sound has a concatenator node. If it does, we have to allow the sound to persist even though it may not have generate audible audio in a given audio thread frame." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasVirtualizeWhenSilent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassVolumeScaleForPriority_MetaData[] = {
		{ "Category", "Voice Management|Priority" },
		{ "Comment", "/** Bypass volume weighting priority upon evaluating whether sound should remain active when max channel count is met (See platform Audio Settings). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Bypass volume weighting priority upon evaluating whether sound should remain active when max channel count is met (See platform Audio Settings)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualizationMode_MetaData[] = {
		{ "Category", "Voice Management" },
		{ "Comment", "/** Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted (limited to looping sounds). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted (limited to looping sounds)." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentResolutionRule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundConcurrencySettings_MetaData[] = {
		{ "Comment", "/** If Override Concurrency is false, the sound concurrency settings to use for this sound. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If Override Concurrency is false, the sound concurrency settings to use for this sound." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play. */" },
		{ "EditCondition", "!bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyOverrides_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** If Override Concurrency is true, concurrency settings to use. */" },
		{ "EditCondition", "bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If Override Concurrency is true, concurrency settings to use." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentPlayCount_MetaData[] = {
		{ "Comment", "/** Maximum number of times this sound can be played concurrently. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Maximum number of times this sound can be played concurrently." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** Duration of sound in seconds. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Duration of sound in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** The max distance of the asset, as determined by attenuation settings. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The max distance of the asset, as determined by attenuation settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalSamples_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** Total number of samples (in the thousands). Useful as a metric to analyze the relative size of a given sound asset in content browser. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Total number of samples (in the thousands). Useful as a metric to analyze the relative size of a given sound asset in content browser." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Voice Management|Priority" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority\n\x09  * (see platform's Audio Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the\n\x09  * sound to produce final runtime priority value.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority\n(see platform's Audio Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the\nsound to produce final runtime priority value." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Attenuation settings package for the sound */" },
		{ "EditCondition", "IsAttenuationSettingsEditable" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Attenuation settings package for the sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixObject_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** Submix to route sound output to. If unset, falls back to referenced SoundClass submix.\n\x09  * If SoundClass submix is unset, sends to the 'Master Submix' as set in the 'Audio' category of Project Settings'. */" },
		{ "DisplayName", "Base Submix" },
		{ "EditCondition", "bEnableBaseSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Submix to route sound output to. If unset, falls back to referenced SoundClass submix.\nIf SoundClass submix is unset, sends to the 'Master Submix' as set in the 'Audio' category of Project Settings'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent. */" },
		{ "DisplayName", "Submix Sends" },
		{ "EditCondition", "bEnableSubmixSends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** The source effect chain to use for this sound. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The source effect chain to use for this sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed. */" },
		{ "DisplayName", "Post-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreEffectBusSends_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed. */" },
		{ "DisplayName", "Pre-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioPropertiesSheet_MetaData[] = {
		{ "Category", "AudioProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioPropertiesBindings_MetaData[] = {
		{ "Category", "AudioProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClassObject;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static void NewProp_bOverrideConcurrency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideConcurrency;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOutputToBusOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToBusOnly;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bEnableBusSends_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBusSends;
	static void NewProp_bEnableBaseSubmix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBaseSubmix;
	static void NewProp_bEnableSubmixSends_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubmixSends;
	static void NewProp_bHasDelayNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDelayNode;
	static void NewProp_bHasConcatenatorNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasConcatenatorNode;
#if WITH_EDITORONLY_DATA
	static void NewProp_bHasVirtualizeWhenSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVirtualizeWhenSilent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bBypassVolumeScaleForPriority_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassVolumeScaleForPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualizationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualizationMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxConcurrentResolutionRule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundConcurrencySettings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConcurrencyOverrides;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentPlayCount;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmixObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSends;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreEffectBusSends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreEffectBusSends;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioPropertiesSheet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioPropertiesBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeOffset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable, "IsAttenuationSettingsEditable" }, // 2160708335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject = { "SoundClassObject", nullptr, (EPropertyFlags)0x0114010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, SoundClassObject), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundClassObject_MetaData), NewProp_SoundClassObject_MetaData) };
void Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
void Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bOverrideConcurrency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency = { "bOverrideConcurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideConcurrency_MetaData), NewProp_bOverrideConcurrency_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bOutputToBusOnly_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly = { "bOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputToBusOnly_MetaData), NewProp_bOutputToBusOnly_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bEnableBusSends = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends = { "bEnableBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBusSends_MetaData), NewProp_bEnableBusSends_MetaData) };
void Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bEnableBaseSubmix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix = { "bEnableBaseSubmix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBaseSubmix_MetaData), NewProp_bEnableBaseSubmix_MetaData) };
void Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bEnableSubmixSends = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends = { "bEnableSubmixSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSubmixSends_MetaData), NewProp_bEnableSubmixSends_MetaData) };
void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bHasDelayNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode = { "bHasDelayNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDelayNode_MetaData), NewProp_bHasDelayNode_MetaData) };
void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bHasConcatenatorNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode = { "bHasConcatenatorNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasConcatenatorNode_MetaData), NewProp_bHasConcatenatorNode_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bHasVirtualizeWhenSilent_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent = { "bHasVirtualizeWhenSilent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasVirtualizeWhenSilent_MetaData), NewProp_bHasVirtualizeWhenSilent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_SetBit(void* Obj)
{
	((USoundBase*)Obj)->bBypassVolumeScaleForPriority = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority = { "bBypassVolumeScaleForPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassVolumeScaleForPriority_MetaData), NewProp_bBypassVolumeScaleForPriority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode = { "VirtualizationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, VirtualizationMode), Z_Construct_UEnum_Engine_EVirtualizationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualizationMode_MetaData), NewProp_VirtualizationMode_MetaData) }; // 730001181
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule = { "MaxConcurrentResolutionRule", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, MaxConcurrentResolutionRule_DEPRECATED), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConcurrentResolutionRule_MetaData), NewProp_MaxConcurrentResolutionRule_MetaData) }; // 236880771
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings = { "SoundConcurrencySettings", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, SoundConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundConcurrencySettings_MetaData), NewProp_SoundConcurrencySettings_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, ConcurrencySet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcurrencySet_MetaData), NewProp_ConcurrencySet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides = { "ConcurrencyOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, ConcurrencyOverrides), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcurrencyOverrides_MetaData), NewProp_ConcurrencyOverrides_MetaData) }; // 1059097620
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount = { "MaxConcurrentPlayCount", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, MaxConcurrentPlayCount_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConcurrentPlayCount_MetaData), NewProp_MaxConcurrentPlayCount_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples = { "TotalSamples", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, TotalSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalSamples_MetaData), NewProp_TotalSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject = { "SoundSubmixObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, SoundSubmixObject), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSubmixObject_MetaData), NewProp_SoundSubmixObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_Inner = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(0, nullptr) }; // 3690717833
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, SoundSubmixSends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSubmixSends_MetaData), NewProp_SoundSubmixSends_MetaData) }; // 3690717833
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEffectChain_MetaData), NewProp_SourceEffectChain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_Inner = { "BusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(0, nullptr) }; // 2379671835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends = { "BusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, BusSends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSends_MetaData), NewProp_BusSends_MetaData) }; // 2379671835
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_Inner = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(0, nullptr) }; // 2379671835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, PreEffectBusSends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreEffectBusSends_MetaData), NewProp_PreEffectBusSends_MetaData) }; // 2379671835
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0114048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AudioPropertiesSheet = { "AudioPropertiesSheet", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, AudioPropertiesSheet), Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioPropertiesSheet_MetaData), NewProp_AudioPropertiesSheet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AudioPropertiesBindings = { "AudioPropertiesBindings", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, AudioPropertiesBindings), Z_Construct_UClass_UAudioPropertiesBindings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioPropertiesBindings_MetaData), NewProp_AudioPropertiesBindings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_TimecodeOffset = { "TimecodeOffset", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundBase, TimecodeOffset), Z_Construct_UScriptStruct_FSoundTimecodeOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeOffset_MetaData), NewProp_TimecodeOffset_MetaData) }; // 264275588
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AudioPropertiesSheet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AudioPropertiesBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_TimecodeOffset,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USoundBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USoundBase, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundBase_Statics::ClassParams = {
	&USoundBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoundBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundBase()
{
	if (!Z_Registration_Info_UClass_USoundBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundBase.OuterSingleton, Z_Construct_UClass_USoundBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundBase>()
{
	return USoundBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundBase);
USoundBase::~USoundBase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundBase)
// End Class USoundBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVirtualizationMode_StaticEnum, TEXT("EVirtualizationMode"), &Z_Registration_Info_UEnum_EVirtualizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 730001181U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundBase, USoundBase::StaticClass, TEXT("USoundBase"), &Z_Registration_Info_UClass_USoundBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundBase), 2625556585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_930801713(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
