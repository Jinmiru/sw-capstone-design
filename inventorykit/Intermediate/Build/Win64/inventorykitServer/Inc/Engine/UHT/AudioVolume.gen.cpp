// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AAudioVolume();
ENGINE_API UClass* Z_Construct_UClass_AAudioVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioVolumeLocationState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAudioVolumeLocationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioVolumeLocationState;
static UEnum* EAudioVolumeLocationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioVolumeLocationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioVolumeLocationState"));
	}
	return Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAudioVolumeLocationState>()
{
	return EAudioVolumeLocationState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enum describing the state of checking audio volume location\n" },
		{ "InsideTheVolume.Comment", "// Used for when the listener is located inside the Audio Volume\n" },
		{ "InsideTheVolume.Name", "EAudioVolumeLocationState::InsideTheVolume" },
		{ "InsideTheVolume.ToolTip", "Used for when the listener is located inside the Audio Volume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "OutsideTheVolume.Comment", "// Used for when the listener is located outside the Audio Volume\n" },
		{ "OutsideTheVolume.Name", "EAudioVolumeLocationState::OutsideTheVolume" },
		{ "OutsideTheVolume.ToolTip", "Used for when the listener is located outside the Audio Volume" },
		{ "ToolTip", "Enum describing the state of checking audio volume location" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioVolumeLocationState::InsideTheVolume", (int64)EAudioVolumeLocationState::InsideTheVolume },
		{ "EAudioVolumeLocationState::OutsideTheVolume", (int64)EAudioVolumeLocationState::OutsideTheVolume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAudioVolumeLocationState",
	"EAudioVolumeLocationState",
	Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAudioVolumeLocationState()
{
	if (!Z_Registration_Info_UEnum_EAudioVolumeLocationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioVolumeLocationState.InnerSingleton, Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioVolumeLocationState.InnerSingleton;
}
// End Enum EAudioVolumeLocationState

// Begin ScriptStruct FAudioVolumeSubmixSendSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings;
class UScriptStruct* FAudioVolumeSubmixSendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioVolumeSubmixSendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioVolumeSubmixSendSettings>()
{
	return FAudioVolumeSubmixSendSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct to determine dynamic submix send data for use with audio volumes. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Struct to determine dynamic submix send data for use with audio volumes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenerLocationState_MetaData[] = {
		{ "Category", "AudioVolumeSubmixSends" },
		{ "Comment", "// The state the listener needs to be in, relative to the audio volume, for this submix send list to be used for a given sound\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The state the listener needs to be in, relative to the audio volume, for this submix send list to be used for a given sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocationState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSends_MetaData[] = {
		{ "Category", "AudioVolumeSubmixSends" },
		{ "Comment", "// Submix send array for sounds that are in the ListenerLocationState at the same time as the listener\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Submix send array for sounds that are in the ListenerLocationState at the same time as the listener" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ListenerLocationState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ListenerLocationState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceLocationState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceLocationState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixSends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixSends;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioVolumeSubmixSendSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState = { "ListenerLocationState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVolumeSubmixSendSettings, ListenerLocationState), Z_Construct_UEnum_Engine_EAudioVolumeLocationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenerLocationState_MetaData), NewProp_ListenerLocationState_MetaData) }; // 2940186819
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState = { "SourceLocationState", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVolumeSubmixSendSettings, SourceLocationState_DEPRECATED), Z_Construct_UEnum_Engine_EAudioVolumeLocationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLocationState_MetaData), NewProp_SourceLocationState_MetaData) }; // 2940186819
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends_Inner = { "SubmixSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(0, nullptr) }; // 3690717833
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends = { "SubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVolumeSubmixSendSettings, SubmixSends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixSends_MetaData), NewProp_SubmixSends_MetaData) }; // 3690717833
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AudioVolumeSubmixSendSettings",
	Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::PropPointers),
	sizeof(FAudioVolumeSubmixSendSettings),
	alignof(FAudioVolumeSubmixSendSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings.InnerSingleton, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings.InnerSingleton;
}
// End ScriptStruct FAudioVolumeSubmixSendSettings

// Begin ScriptStruct FAudioVolumeSubmixOverrideSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings;
class UScriptStruct* FAudioVolumeSubmixOverrideSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioVolumeSubmixOverrideSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioVolumeSubmixOverrideSettings>()
{
	return FAudioVolumeSubmixOverrideSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "Category", "AudioVolumeSubmixSends" },
		{ "Comment", "// The submix to override the effect chain of\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The submix to override the effect chain of" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "// The submix effect chain to override\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The submix effect chain to override" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossfadeTime_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "// The amount of time to crossfade to the override for the submix chain\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The amount of time to crossfade to the override for the submix chain" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossfadeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioVolumeSubmixOverrideSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVolumeSubmixOverrideSettings, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVolumeSubmixOverrideSettings, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData), NewProp_SubmixEffectChain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_CrossfadeTime = { "CrossfadeTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVolumeSubmixOverrideSettings, CrossfadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossfadeTime_MetaData), NewProp_CrossfadeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_CrossfadeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AudioVolumeSubmixOverrideSettings",
	Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::PropPointers),
	sizeof(FAudioVolumeSubmixOverrideSettings),
	alignof(FAudioVolumeSubmixOverrideSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings.InnerSingleton, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings.InnerSingleton;
}
// End ScriptStruct FAudioVolumeSubmixOverrideSettings

// Begin ScriptStruct FInteriorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteriorSettings;
class UScriptStruct* FInteriorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteriorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteriorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteriorSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InteriorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_InteriorSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInteriorSettings>()
{
	return FInteriorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteriorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct encapsulating settings for interior areas. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Struct encapsulating settings for interior areas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldSettings_MetaData[] = {
		{ "Comment", "// Whether these interior settings are the default values for the world\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Whether these interior settings are the default values for the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired volume of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired volume of sounds outside the volume when the player is inside the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired LPF frequency cutoff in hertz of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds outside the volume when the player is inside the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired volume of sounds inside the volume when the player is outside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired volume of sounds inside the volume when the player is outside the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player exits the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player exits the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired LPF frequency cutoff in hertz of sounds inside the volume when the player is outside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds inside the volume when the player is outside the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player exits the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player exits the volume" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsWorldSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPFTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPFTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteriorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit(void* Obj)
{
	((FInteriorSettings*)Obj)->bIsWorldSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings = { "bIsWorldSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteriorSettings), &Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldSettings_MetaData), NewProp_bIsWorldSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume = { "ExteriorVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExteriorVolume_MetaData), NewProp_ExteriorVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime = { "ExteriorTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExteriorTime_MetaData), NewProp_ExteriorTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF = { "ExteriorLPF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorLPF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExteriorLPF_MetaData), NewProp_ExteriorLPF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime = { "ExteriorLPFTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorLPFTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExteriorLPFTime_MetaData), NewProp_ExteriorLPFTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume = { "InteriorVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, InteriorVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorVolume_MetaData), NewProp_InteriorVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime = { "InteriorTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, InteriorTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorTime_MetaData), NewProp_InteriorTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF = { "InteriorLPF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, InteriorLPF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorLPF_MetaData), NewProp_InteriorLPF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime = { "InteriorLPFTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteriorSettings, InteriorLPFTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorLPFTime_MetaData), NewProp_InteriorLPFTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InteriorSettings",
	Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers),
	sizeof(FInteriorSettings),
	alignof(FInteriorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_InteriorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteriorSettings.InnerSingleton, Z_Construct_UScriptStruct_FInteriorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteriorSettings.InnerSingleton;
}
// End ScriptStruct FInteriorSettings

// Begin Class AAudioVolume Function OnRep_bEnabled
struct Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioVolume::execOnRep_bEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bEnabled();
	P_NATIVE_END;
}
// End Class AAudioVolume Function OnRep_bEnabled

// Begin Class AAudioVolume Function SetEnabled
struct Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics
{
	struct AudioVolume_eventSetEnabled_Parms
	{
		bool bNewEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
{
	((AudioVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::AudioVolume_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::AudioVolume_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioVolume_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioVolume::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bNewEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_bNewEnabled);
	P_NATIVE_END;
}
// End Class AAudioVolume Function SetEnabled

// Begin Class AAudioVolume Function SetInteriorSettings
struct Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics
{
	struct AudioVolume_eventSetInteriorSettings_Parms
	{
		FInteriorSettings NewInteriorSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewInteriorSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInteriorSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings = { "NewInteriorSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioVolume_eventSetInteriorSettings_Parms, NewInteriorSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewInteriorSettings_MetaData), NewProp_NewInteriorSettings_MetaData) }; // 1792166622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetInteriorSettings", nullptr, nullptr, Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::AudioVolume_eventSetInteriorSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::AudioVolume_eventSetInteriorSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioVolume_SetInteriorSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioVolume::execSetInteriorSettings)
{
	P_GET_STRUCT_REF(FInteriorSettings,Z_Param_Out_NewInteriorSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteriorSettings(Z_Param_Out_NewInteriorSettings);
	P_NATIVE_END;
}
// End Class AAudioVolume Function SetInteriorSettings

// Begin Class AAudioVolume Function SetPriority
struct Z_Construct_UFunction_AAudioVolume_SetPriority_Statics
{
	struct AudioVolume_eventSetPriority_Parms
	{
		float NewPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::NewProp_NewPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetPriority", nullptr, nullptr, Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::AudioVolume_eventSetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::AudioVolume_eventSetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioVolume_SetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioVolume::execSetPriority)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPriority(Z_Param_NewPriority);
	P_NATIVE_END;
}
// End Class AAudioVolume Function SetPriority

// Begin Class AAudioVolume Function SetReverbSettings
struct Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics
{
	struct AudioVolume_eventSetReverbSettings_Parms
	{
		FReverbSettings NewReverbSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewReverbSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewReverbSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings = { "NewReverbSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioVolume_eventSetReverbSettings_Parms, NewReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewReverbSettings_MetaData), NewProp_NewReverbSettings_MetaData) }; // 4206471606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetReverbSettings", nullptr, nullptr, Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::AudioVolume_eventSetReverbSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::AudioVolume_eventSetReverbSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioVolume_SetReverbSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioVolume::execSetReverbSettings)
{
	P_GET_STRUCT_REF(FReverbSettings,Z_Param_Out_NewReverbSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings);
	P_NATIVE_END;
}
// End Class AAudioVolume Function SetReverbSettings

// Begin Class AAudioVolume Function SetSubmixOverrideSettings
struct Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics
{
	struct AudioVolume_eventSetSubmixOverrideSettings_Parms
	{
		TArray<FAudioVolumeSubmixOverrideSettings> NewSubmixOverrideSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSubmixOverrideSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSubmixOverrideSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSubmixOverrideSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_Inner = { "NewSubmixOverrideSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, METADATA_PARAMS(0, nullptr) }; // 1052829350
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings = { "NewSubmixOverrideSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioVolume_eventSetSubmixOverrideSettings_Parms, NewSubmixOverrideSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSubmixOverrideSettings_MetaData), NewProp_NewSubmixOverrideSettings_MetaData) }; // 1052829350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetSubmixOverrideSettings", nullptr, nullptr, Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::AudioVolume_eventSetSubmixOverrideSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::AudioVolume_eventSetSubmixOverrideSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioVolume::execSetSubmixOverrideSettings)
{
	P_GET_TARRAY_REF(FAudioVolumeSubmixOverrideSettings,Z_Param_Out_NewSubmixOverrideSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubmixOverrideSettings(Z_Param_Out_NewSubmixOverrideSettings);
	P_NATIVE_END;
}
// End Class AAudioVolume Function SetSubmixOverrideSettings

// Begin Class AAudioVolume Function SetSubmixSendSettings
struct Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics
{
	struct AudioVolume_eventSetSubmixSendSettings_Parms
	{
		TArray<FAudioVolumeSubmixSendSettings> NewSubmixSendSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSubmixSendSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSubmixSendSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSubmixSendSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_Inner = { "NewSubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, METADATA_PARAMS(0, nullptr) }; // 1290390552
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings = { "NewSubmixSendSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioVolume_eventSetSubmixSendSettings_Parms, NewSubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSubmixSendSettings_MetaData), NewProp_NewSubmixSendSettings_MetaData) }; // 1290390552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetSubmixSendSettings", nullptr, nullptr, Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::AudioVolume_eventSetSubmixSendSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::AudioVolume_eventSetSubmixSendSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioVolume::execSetSubmixSendSettings)
{
	P_GET_TARRAY_REF(FAudioVolumeSubmixSendSettings,Z_Param_Out_NewSubmixSendSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubmixSendSettings(Z_Param_Out_NewSubmixSendSettings);
	P_NATIVE_END;
}
// End Class AAudioVolume Function SetSubmixSendSettings

// Begin Class AAudioVolume
void AAudioVolume::StaticRegisterNativesAAudioVolume()
{
	UClass* Class = AAudioVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_bEnabled", &AAudioVolume::execOnRep_bEnabled },
		{ "SetEnabled", &AAudioVolume::execSetEnabled },
		{ "SetInteriorSettings", &AAudioVolume::execSetInteriorSettings },
		{ "SetPriority", &AAudioVolume::execSetPriority },
		{ "SetReverbSettings", &AAudioVolume::execSetReverbSettings },
		{ "SetSubmixOverrideSettings", &AAudioVolume::execSetSubmixOverrideSettings },
		{ "SetSubmixSendSettings", &AAudioVolume::execSetSubmixSendSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAudioVolume);
UClass* Z_Construct_UClass_AAudioVolume_NoRegister()
{
	return AAudioVolume::StaticClass();
}
struct Z_Construct_UClass_AAudioVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Sound/AudioVolume.h" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioVolume" },
		{ "Comment", "/**\n\x09 * Priority of this volume. In the case of overlapping volumes, the one with the highest priority\n\x09 * is chosen. The order is undefined if two or more overlapping volumes have the same priority.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes, the one with the highest priority\nis chosen. The order is undefined if two or more overlapping volumes have the same priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioVolume" },
		{ "Comment", "/** Whether this volume is currently enabled and able to affect sounds */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Whether this volume is currently enabled and able to affect sounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reverb" },
		{ "Comment", "/** Reverb settings to use for this volume. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Reverb settings to use for this volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientZoneSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AmbientZone" },
		{ "Comment", "/** Impacts sounds that have \"Apply Ambient Volumes\" set to true in their Sound Class, based on whether the sound sources and the player are inside or outside the audio volume */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Impacts sounds that have \"Apply Ambient Volumes\" set to true in their Sound Class, based on whether the sound sources and the player are inside or outside the audio volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** Submix send settings to use for this volume. Allows audio to dynamically send to submixes based on source and listener locations relative to this volume. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Submix send settings to use for this volume. Allows audio to dynamically send to submixes based on source and listener locations relative to this volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixOverrideSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** Submix effect chain override settings. Will override the effect chains on the given submixes when the conditions are met. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Submix effect chain override settings. Will override the effect chains on the given submixes when the conditions are met." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientZoneSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixSendSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixSendSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixOverrideSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixOverrideSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 3368782124
		{ &Z_Construct_UFunction_AAudioVolume_SetEnabled, "SetEnabled" }, // 775650506
		{ &Z_Construct_UFunction_AAudioVolume_SetInteriorSettings, "SetInteriorSettings" }, // 3985729533
		{ &Z_Construct_UFunction_AAudioVolume_SetPriority, "SetPriority" }, // 1346857563
		{ &Z_Construct_UFunction_AAudioVolume_SetReverbSettings, "SetReverbSettings" }, // 933858873
		{ &Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings, "SetSubmixOverrideSettings" }, // 3797814966
		{ &Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings, "SetSubmixSendSettings" }, // 1160857209
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioVolume, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AAudioVolume*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000035, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAudioVolume), &Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioVolume, Settings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4206471606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings = { "AmbientZoneSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioVolume, AmbientZoneSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientZoneSettings_MetaData), NewProp_AmbientZoneSettings_MetaData) }; // 1792166622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings_Inner = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, METADATA_PARAMS(0, nullptr) }; // 1290390552
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioVolume, SubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixSendSettings_MetaData), NewProp_SubmixSendSettings_MetaData) }; // 1290390552
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings_Inner = { "SubmixOverrideSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, METADATA_PARAMS(0, nullptr) }; // 1052829350
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings = { "SubmixOverrideSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioVolume, SubmixOverrideSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixOverrideSettings_MetaData), NewProp_SubmixOverrideSettings_MetaData) }; // 1052829350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAudioVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAudioVolume_Statics::ClassParams = {
	&AAudioVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAudioVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAudioVolume()
{
	if (!Z_Registration_Info_UClass_AAudioVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAudioVolume.OuterSingleton, Z_Construct_UClass_AAudioVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAudioVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AAudioVolume>()
{
	return AAudioVolume::StaticClass();
}
void AAudioVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bEnabled(TEXT("bEnabled"));
	const bool bIsValid = true
		&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAudioVolume"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioVolume);
AAudioVolume::~AAudioVolume() {}
// End Class AAudioVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioVolumeLocationState_StaticEnum, TEXT("EAudioVolumeLocationState"), &Z_Registration_Info_UEnum_EAudioVolumeLocationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2940186819U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioVolumeSubmixSendSettings::StaticStruct, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewStructOps, TEXT("AudioVolumeSubmixSendSettings"), &Z_Registration_Info_UScriptStruct_AudioVolumeSubmixSendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioVolumeSubmixSendSettings), 1290390552U) },
		{ FAudioVolumeSubmixOverrideSettings::StaticStruct, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewStructOps, TEXT("AudioVolumeSubmixOverrideSettings"), &Z_Registration_Info_UScriptStruct_AudioVolumeSubmixOverrideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioVolumeSubmixOverrideSettings), 1052829350U) },
		{ FInteriorSettings::StaticStruct, Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewStructOps, TEXT("InteriorSettings"), &Z_Registration_Info_UScriptStruct_InteriorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteriorSettings), 1792166622U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAudioVolume, AAudioVolume::StaticClass, TEXT("AAudioVolume"), &Z_Registration_Info_UClass_AAudioVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAudioVolume), 226317035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_145713217(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
