// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceAudioPlayer.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudioPlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceAudioPlayerSettings
void UNiagaraDataInterfaceAudioPlayerSettings::StaticRegisterNativesUNiagaraDataInterfaceAudioPlayerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAudioPlayerSettings);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_NoRegister()
{
	return UNiagaraDataInterfaceAudioPlayerSettings::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Audio" },
		{ "DisplayName", "Niagara Audio Player Settings" },
		{ "IncludePath", "NiagaraDataInterfaceAudioPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideConcurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuationSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "bOverrideAttenuationSettings" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideConcurrency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideConcurrency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Concurrency;
	static void NewProp_bOverrideAttenuationSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioPlayerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAudioPlayerSettings*)Obj)->bOverrideConcurrency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency = { "bOverrideConcurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayerSettings), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideConcurrency_MetaData), NewProp_bOverrideConcurrency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayerSettings, Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Concurrency_MetaData), NewProp_Concurrency_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAudioPlayerSettings*)Obj)->bOverrideAttenuationSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings = { "bOverrideAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayerSettings), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAttenuationSettings_MetaData), NewProp_bOverrideAttenuationSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayerSettings, AttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) }; // 4035653401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_Concurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_AttenuationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::ClassParams = {
	&UNiagaraDataInterfaceAudioPlayerSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioPlayerSettings>()
{
	return UNiagaraDataInterfaceAudioPlayerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioPlayerSettings);
UNiagaraDataInterfaceAudioPlayerSettings::~UNiagaraDataInterfaceAudioPlayerSettings() {}
// End Class UNiagaraDataInterfaceAudioPlayerSettings

// Begin Class UNiagaraDataInterfaceAudioPlayer
void UNiagaraDataInterfaceAudioPlayer::StaticRegisterNativesUNiagaraDataInterfaceAudioPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAudioPlayer);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_NoRegister()
{
	return UNiagaraDataInterfaceAudioPlayer::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** This Data Interface can be used to play one-shot audio effects driven by particle data. */" },
		{ "DisplayName", "Audio Player" },
		{ "IncludePath", "NiagaraDataInterfaceAudioPlayer.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "This Data Interface can be used to play one-shot audio effects driven by particle data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Reference to the audio asset to play */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Reference to the audio asset to play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Optional sound attenuation setting to use */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Optional sound attenuation setting to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Optional sound concurrency setting to use */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Optional sound concurrency setting to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationUserParameter_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** If bound to a valid user parameter object of type UNiagaraDataInterfaceAudioPlayerSettings, then configured settings like sound attenuation are set via the user parameter. This allows the sound settings to be dynamically changed via blueprint or C++.\n\x09 *  Only used by persistent audio, one-shot audio ignores this option. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "If bound to a valid user parameter object of type UNiagaraDataInterfaceAudioPlayerSettings, then configured settings like sound attenuation are set via the user parameter. This allows the sound settings to be dynamically changed via blueprint or C++.\nOnly used by persistent audio, one-shot audio ignores this option." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** This sets the max number of sounds played each tick.\n\x09 *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\n\x09 *  The particles to discard when over the limit are *not* chosen in a deterministic way. */" },
		{ "EditCondition", "bLimitPlaysPerTick" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "This sets the max number of sounds played each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\nThe particles to discard when over the limit are *not* chosen in a deterministic way." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLoopingOneShotSounds_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Playing looping sounds as persistent audio is not a problem, as the sound is stopped when a particle dies, but one-shot audio outlives the niagara system and can never be stopped. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Playing looping sounds as persistent audio is not a problem, as the sound is stopped when a particle dies, but one-shot audio outlives the niagara system and can never be stopped." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActiveDuringGameplay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Concurrency;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigurationUserParameter;
	static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
	static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
	static void NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLoopingOneShotSounds;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActiveDuringGameplay;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundToPlay_MetaData), NewProp_SoundToPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attenuation_MetaData), NewProp_Attenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Concurrency_MetaData), NewProp_Concurrency_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterNames_MetaData), NewProp_ParameterNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ConfigurationUserParameter = { "ConfigurationUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, ConfigurationUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigurationUserParameter_MetaData), NewProp_ConfigurationUserParameter_MetaData) }; // 174428838
void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAudioPlayer*)Obj)->bLimitPlaysPerTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitPlaysPerTick_MetaData), NewProp_bLimitPlaysPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, MaxPlaysPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlaysPerTick_MetaData), NewProp_MaxPlaysPerTick_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAudioPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenComponentIsDestroyed_MetaData), NewProp_bStopWhenComponentIsDestroyed_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAudioPlayer*)Obj)->bAllowLoopingOneShotSounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds = { "bAllowLoopingOneShotSounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowLoopingOneShotSounds_MetaData), NewProp_bAllowLoopingOneShotSounds_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceAudioPlayer*)Obj)->bOnlyActiveDuringGameplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay = { "bOnlyActiveDuringGameplay", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyActiveDuringGameplay_MetaData), NewProp_bOnlyActiveDuringGameplay_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ConfigurationUserParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::ClassParams = {
	&UNiagaraDataInterfaceAudioPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioPlayer>()
{
	return UNiagaraDataInterfaceAudioPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioPlayer);
UNiagaraDataInterfaceAudioPlayer::~UNiagaraDataInterfaceAudioPlayer() {}
// End Class UNiagaraDataInterfaceAudioPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings, UNiagaraDataInterfaceAudioPlayerSettings::StaticClass, TEXT("UNiagaraDataInterfaceAudioPlayerSettings"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAudioPlayerSettings), 2080008741U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer, UNiagaraDataInterfaceAudioPlayer::StaticClass, TEXT("UNiagaraDataInterfaceAudioPlayer"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAudioPlayer), 4267216941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_2140558359(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
