// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioExtensions/Public/ISoundWaveCloudStreaming.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveTimecodeInfo.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWave() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase_NoRegister();
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings();
AUDIOPLATFORMCONFIGURATION_API UEnum* Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase();
ENGINE_API UClass* Z_Construct_UClass_USoundWave();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDecompressionType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundAssetCompressionType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveFFTSize();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveCuePoint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDecompressionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecompressionType;
static UEnum* EDecompressionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDecompressionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDecompressionType"));
	}
	return Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDecompressionType>()
{
	return EDecompressionType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDecompressionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DTYPE_Invalid.Name", "DTYPE_Invalid" },
		{ "DTYPE_MAX.Name", "DTYPE_MAX" },
		{ "DTYPE_Native.Name", "DTYPE_Native" },
		{ "DTYPE_Preview.Name", "DTYPE_Preview" },
		{ "DTYPE_Procedural.Name", "DTYPE_Procedural" },
		{ "DTYPE_RealTime.Name", "DTYPE_RealTime" },
		{ "DTYPE_Setup.Name", "DTYPE_Setup" },
		{ "DTYPE_Streaming.Name", "DTYPE_Streaming" },
		{ "DTYPE_Xenon.Name", "DTYPE_Xenon" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DTYPE_Setup", (int64)DTYPE_Setup },
		{ "DTYPE_Invalid", (int64)DTYPE_Invalid },
		{ "DTYPE_Preview", (int64)DTYPE_Preview },
		{ "DTYPE_Native", (int64)DTYPE_Native },
		{ "DTYPE_RealTime", (int64)DTYPE_RealTime },
		{ "DTYPE_Procedural", (int64)DTYPE_Procedural },
		{ "DTYPE_Xenon", (int64)DTYPE_Xenon },
		{ "DTYPE_Streaming", (int64)DTYPE_Streaming },
		{ "DTYPE_MAX", (int64)DTYPE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDecompressionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDecompressionType",
	"EDecompressionType",
	Z_Construct_UEnum_Engine_EDecompressionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDecompressionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDecompressionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDecompressionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDecompressionType()
{
	if (!Z_Registration_Info_UEnum_EDecompressionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecompressionType.InnerSingleton, Z_Construct_UEnum_Engine_EDecompressionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDecompressionType.InnerSingleton;
}
// End Enum EDecompressionType

// Begin ScriptStruct FStreamedAudioPlatformData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData;
class UScriptStruct* FStreamedAudioPlatformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamedAudioPlatformData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamedAudioPlatformData"));
	}
	return Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamedAudioPlatformData>()
{
	return FStreamedAudioPlatformData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Platform-specific data used streaming audio at runtime.\n */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Platform-specific data used streaming audio at runtime." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StreamedAudioPlatformData",
	nullptr,
	0,
	sizeof(FStreamedAudioPlatformData),
	alignof(FStreamedAudioPlatformData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData()
{
	if (!Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData.InnerSingleton, Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData.InnerSingleton;
}
// End ScriptStruct FStreamedAudioPlatformData

// Begin ScriptStruct FSoundWaveSpectralData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveSpectralData;
class UScriptStruct* FSoundWaveSpectralData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveSpectralData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveSpectralData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveSpectralData"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveSpectralData>()
{
	return FSoundWaveSpectralData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyHz_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The frequency (in Hz) of the spectrum value\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The frequency (in Hz) of the spectrum value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The magnitude of the spectrum at this frequency\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The magnitude of the spectrum at this frequency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The normalized magnitude of the spectrum at this frequency\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The normalized magnitude of the spectrum at this frequency" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveSpectralData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralData, FrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyHz_MetaData), NewProp_FrequencyHz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralData, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralData, NormalizedMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedMagnitude_MetaData), NewProp_NormalizedMagnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_FrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_NormalizedMagnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveSpectralData",
	Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::PropPointers),
	sizeof(FSoundWaveSpectralData),
	alignof(FSoundWaveSpectralData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralData()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveSpectralData.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralData.InnerSingleton;
}
// End ScriptStruct FSoundWaveSpectralData

// Begin ScriptStruct FSoundWaveSpectralDataPerSound
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound;
class UScriptStruct* FSoundWaveSpectralDataPerSound::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveSpectralDataPerSound"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveSpectralDataPerSound>()
{
	return FSoundWaveSpectralDataPerSound::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectralData_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The array of current spectral data for this sound wave\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The array of current spectral data for this sound wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackTime_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The current playback time of this sound wave\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The current playback time of this sound wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The sound wave this spectral data is associated with\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The sound wave this spectral data is associated with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpectralData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpectralData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveSpectralDataPerSound>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_SpectralData_Inner = { "SpectralData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralData, METADATA_PARAMS(0, nullptr) }; // 1453003138
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_SpectralData = { "SpectralData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralDataPerSound, SpectralData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectralData_MetaData), NewProp_SpectralData_MetaData) }; // 1453003138
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralDataPerSound, PlaybackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackTime_MetaData), NewProp_PlaybackTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralDataPerSound, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundWave_MetaData), NewProp_SoundWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_SpectralData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_SpectralData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_PlaybackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewProp_SoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveSpectralDataPerSound",
	Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::PropPointers),
	sizeof(FSoundWaveSpectralDataPerSound),
	alignof(FSoundWaveSpectralDataPerSound),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound.InnerSingleton;
}
// End ScriptStruct FSoundWaveSpectralDataPerSound

// Begin ScriptStruct FSoundWaveEnvelopeDataPerSound
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound;
class UScriptStruct* FSoundWaveEnvelopeDataPerSound::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveEnvelopeDataPerSound"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveEnvelopeDataPerSound>()
{
	return FSoundWaveEnvelopeDataPerSound::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[] = {
		{ "Category", "EnvelopeData" },
		{ "Comment", "// The current envelope of the playing sound\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The current envelope of the playing sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackTime_MetaData[] = {
		{ "Category", "EnvelopeData" },
		{ "Comment", "// The current playback time of this sound wave\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The current playback time of this sound wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[] = {
		{ "Category", "EnvelopeData" },
		{ "Comment", "// The sound wave this envelope data is associated with\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The sound wave this envelope data is associated with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Envelope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveEnvelopeDataPerSound>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveEnvelopeDataPerSound, Envelope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Envelope_MetaData), NewProp_Envelope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveEnvelopeDataPerSound, PlaybackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackTime_MetaData), NewProp_PlaybackTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveEnvelopeDataPerSound, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundWave_MetaData), NewProp_SoundWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewProp_Envelope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewProp_PlaybackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewProp_SoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveEnvelopeDataPerSound",
	Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::PropPointers),
	sizeof(FSoundWaveEnvelopeDataPerSound),
	alignof(FSoundWaveEnvelopeDataPerSound),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound.InnerSingleton;
}
// End ScriptStruct FSoundWaveEnvelopeDataPerSound

// Begin ScriptStruct FSoundWaveSpectralDataEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry;
class UScriptStruct* FSoundWaveSpectralDataEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveSpectralDataEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveSpectralDataEntry>()
{
	return FSoundWaveSpectralDataEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Struct used to store spectral data with time-stamps\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct used to store spectral data with time-stamps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Comment", "// The magnitude of the spectrum at this frequency\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The magnitude of the spectrum at this frequency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Comment", "// The normalized magnitude of the spectrum at this frequency\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The normalized magnitude of the spectrum at this frequency" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveSpectralDataEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralDataEntry, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralDataEntry, NormalizedMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedMagnitude_MetaData), NewProp_NormalizedMagnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_NormalizedMagnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveSpectralDataEntry",
	Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::PropPointers),
	sizeof(FSoundWaveSpectralDataEntry),
	alignof(FSoundWaveSpectralDataEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry.InnerSingleton;
}
// End ScriptStruct FSoundWaveSpectralDataEntry

// Begin ScriptStruct FSoundWaveSpectralTimeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData;
class UScriptStruct* FSoundWaveSpectralTimeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveSpectralTimeData"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveSpectralTimeData>()
{
	return FSoundWaveSpectralTimeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Struct used to store spectral data with time-stamps\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct used to store spectral data with time-stamps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Comment", "// The spectral data at the given time. The array indices correspond to the frequencies set to analyze.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The spectral data at the given time. The array indices correspond to the frequencies set to analyze." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSec_MetaData[] = {
		{ "Comment", "// The timestamp associated with this spectral data\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The timestamp associated with this spectral data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveSpectralTimeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry, METADATA_PARAMS(0, nullptr) }; // 260427755
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralTimeData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 260427755
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveSpectralTimeData, TimeSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSec_MetaData), NewProp_TimeSec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_TimeSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveSpectralTimeData",
	Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::PropPointers),
	sizeof(FSoundWaveSpectralTimeData),
	alignof(FSoundWaveSpectralTimeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData.InnerSingleton;
}
// End ScriptStruct FSoundWaveSpectralTimeData

// Begin ScriptStruct FSoundWaveEnvelopeTimeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData;
class UScriptStruct* FSoundWaveEnvelopeTimeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveEnvelopeTimeData"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveEnvelopeTimeData>()
{
	return FSoundWaveEnvelopeTimeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Struct used to store time-stamped envelope data\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct used to store time-stamped envelope data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Comment", "// The normalized linear amplitude of the audio\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The normalized linear amplitude of the audio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSec_MetaData[] = {
		{ "Comment", "// The timestamp of the audio\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The timestamp of the audio" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveEnvelopeTimeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveEnvelopeTimeData, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveEnvelopeTimeData, TimeSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSec_MetaData), NewProp_TimeSec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_TimeSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveEnvelopeTimeData",
	Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::PropPointers),
	sizeof(FSoundWaveEnvelopeTimeData),
	alignof(FSoundWaveEnvelopeTimeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData.InnerSingleton;
}
// End ScriptStruct FSoundWaveEnvelopeTimeData

// Begin Enum ESoundWaveFFTSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundWaveFFTSize;
static UEnum* ESoundWaveFFTSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveFFTSize, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundWaveFFTSize"));
	}
	return Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESoundWaveFFTSize>()
{
	return ESoundWaveFFTSize_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The FFT size (in audio frames) to use for baked FFT analysis\n" },
		{ "Large_1024.Name", "ESoundWaveFFTSize::Large_1024" },
		{ "Medium_512.Name", "ESoundWaveFFTSize::Medium_512" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "Small_256.Name", "ESoundWaveFFTSize::Small_256" },
		{ "ToolTip", "The FFT size (in audio frames) to use for baked FFT analysis" },
		{ "VeryLarge_2048.Name", "ESoundWaveFFTSize::VeryLarge_2048" },
		{ "VerySmall_64.Name", "ESoundWaveFFTSize::VerySmall_64" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoundWaveFFTSize::VerySmall_64", (int64)ESoundWaveFFTSize::VerySmall_64 },
		{ "ESoundWaveFFTSize::Small_256", (int64)ESoundWaveFFTSize::Small_256 },
		{ "ESoundWaveFFTSize::Medium_512", (int64)ESoundWaveFFTSize::Medium_512 },
		{ "ESoundWaveFFTSize::Large_1024", (int64)ESoundWaveFFTSize::Large_1024 },
		{ "ESoundWaveFFTSize::VeryLarge_2048", (int64)ESoundWaveFFTSize::VeryLarge_2048 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESoundWaveFFTSize",
	"ESoundWaveFFTSize",
	Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESoundWaveFFTSize()
{
	if (!Z_Registration_Info_UEnum_ESoundWaveFFTSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundWaveFFTSize.InnerSingleton, Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundWaveFFTSize.InnerSingleton;
}
// End Enum ESoundWaveFFTSize

// Begin Enum ESoundAssetCompressionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundAssetCompressionType;
static UEnum* ESoundAssetCompressionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundAssetCompressionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundAssetCompressionType"));
	}
	return Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESoundAssetCompressionType>()
{
	return ESoundAssetCompressionType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ADPCM.Comment", "// Will encode the asset using ADPCM, a time-domain codec that has fixed-sized quality and about ~4x compression ratio, but is relatively cheap to decode.\n" },
		{ "ADPCM.Name", "ESoundAssetCompressionType::ADPCM" },
		{ "ADPCM.ToolTip", "Will encode the asset using ADPCM, a time-domain codec that has fixed-sized quality and about ~4x compression ratio, but is relatively cheap to decode." },
		{ "BinkAudio.Comment", "// Perceptual-based codec which supports all features across all platforms.\n" },
		{ "BinkAudio.Name", "ESoundAssetCompressionType::BinkAudio" },
		{ "BinkAudio.ToolTip", "Perceptual-based codec which supports all features across all platforms." },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sound Asset Compression Type\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "Opus.Comment", "// Opus is a highly versatile audio codec. It is primarily designed for interactive speech and music transmission over the Internet, but is also applicable to storage and streaming applications.\n" },
		{ "Opus.Name", "ESoundAssetCompressionType::Opus" },
		{ "Opus.ToolTip", "Opus is a highly versatile audio codec. It is primarily designed for interactive speech and music transmission over the Internet, but is also applicable to storage and streaming applications." },
		{ "PCM.Comment", "// Uncompressed audio. Large memory usage (streamed chunks contain less audio per chunk) but extremely cheap to decode and supports all features. \n" },
		{ "PCM.Name", "ESoundAssetCompressionType::PCM" },
		{ "PCM.ToolTip", "Uncompressed audio. Large memory usage (streamed chunks contain less audio per chunk) but extremely cheap to decode and supports all features." },
		{ "PlatformSpecific.Comment", "// Encodes the asset to a platform specific format and will be different depending on the platform. It does not currently support seeking.\n" },
		{ "PlatformSpecific.Name", "ESoundAssetCompressionType::PlatformSpecific" },
		{ "PlatformSpecific.ToolTip", "Encodes the asset to a platform specific format and will be different depending on the platform. It does not currently support seeking." },
		{ "ProjectDefined.Comment", "// The project defines the codec used for this asset.\n" },
		{ "ProjectDefined.Name", "ESoundAssetCompressionType::ProjectDefined" },
		{ "ProjectDefined.ToolTip", "The project defines the codec used for this asset." },
		{ "RADAudio.Comment", "// As BinkAudio, except better quality. Comparable CPU usage. Only valid sample rates are: 48000, 44100, 32000, and 24000.\n" },
		{ "RADAudio.DisplayName", "RAD Audio" },
		{ "RADAudio.Name", "ESoundAssetCompressionType::RADAudio" },
		{ "RADAudio.ToolTip", "As BinkAudio, except better quality. Comparable CPU usage. Only valid sample rates are: 48000, 44100, 32000, and 24000." },
		{ "ToolTip", "Sound Asset Compression Type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoundAssetCompressionType::BinkAudio", (int64)ESoundAssetCompressionType::BinkAudio },
		{ "ESoundAssetCompressionType::ADPCM", (int64)ESoundAssetCompressionType::ADPCM },
		{ "ESoundAssetCompressionType::PCM", (int64)ESoundAssetCompressionType::PCM },
		{ "ESoundAssetCompressionType::Opus", (int64)ESoundAssetCompressionType::Opus },
		{ "ESoundAssetCompressionType::PlatformSpecific", (int64)ESoundAssetCompressionType::PlatformSpecific },
		{ "ESoundAssetCompressionType::ProjectDefined", (int64)ESoundAssetCompressionType::ProjectDefined },
		{ "ESoundAssetCompressionType::RADAudio", (int64)ESoundAssetCompressionType::RADAudio },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESoundAssetCompressionType",
	"ESoundAssetCompressionType",
	Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESoundAssetCompressionType()
{
	if (!Z_Registration_Info_UEnum_ESoundAssetCompressionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundAssetCompressionType.InnerSingleton, Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundAssetCompressionType.InnerSingleton;
}
// End Enum ESoundAssetCompressionType

// Begin ScriptStruct FSoundWaveCuePoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveCuePoint;
class UScriptStruct* FSoundWaveCuePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveCuePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveCuePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveCuePoint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveCuePoint"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveCuePoint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveCuePoint>()
{
	return FSoundWaveCuePoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct defining a cue point in a sound wave asset\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct defining a cue point in a sound wave asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuePointID_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Unique identifier for the wave cue point\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Unique identifier for the wave cue point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// The label for the cue point\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The label for the cue point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramePosition_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// The frame position of the cue point\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The frame position of the cue point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameLength_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// The frame length of the cue point (non-zero if it's a region)\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The frame length of the cue point (non-zero if it's a region)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoopRegion_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// intentionally kept private.\n// only USoundFactory should modify this value on import\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "intentionally kept private.\nonly USoundFactory should modify this value on import" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CuePointID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramePosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameLength;
	static void NewProp_bIsLoopRegion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoopRegion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveCuePoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_CuePointID = { "CuePointID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveCuePoint, CuePointID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuePointID_MetaData), NewProp_CuePointID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveCuePoint, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_FramePosition = { "FramePosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveCuePoint, FramePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramePosition_MetaData), NewProp_FramePosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_FrameLength = { "FrameLength", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveCuePoint, FrameLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameLength_MetaData), NewProp_FrameLength_MetaData) };
void Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_bIsLoopRegion_SetBit(void* Obj)
{
	((FSoundWaveCuePoint*)Obj)->bIsLoopRegion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_bIsLoopRegion = { "bIsLoopRegion", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundWaveCuePoint), &Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_bIsLoopRegion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoopRegion_MetaData), NewProp_bIsLoopRegion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_CuePointID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_FramePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_FrameLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_bIsLoopRegion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveCuePoint",
	Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::PropPointers),
	sizeof(FSoundWaveCuePoint),
	alignof(FSoundWaveCuePoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveCuePoint()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveCuePoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveCuePoint.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveCuePoint.InnerSingleton;
}
// End ScriptStruct FSoundWaveCuePoint

// Begin Class USoundWave Function GetCuePoints
struct Z_Construct_UFunction_USoundWave_GetCuePoints_Statics
{
	struct SoundWave_eventGetCuePoints_Parms
	{
		TArray<FSoundWaveCuePoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Filters for the cue points that are _not_ loop regions and returns those as a new array */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Filters for the cue points that are _not_ loop regions and returns those as a new array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundWaveCuePoint, METADATA_PARAMS(0, nullptr) }; // 2043081654
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundWave_eventGetCuePoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2043081654
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundWave, nullptr, "GetCuePoints", nullptr, nullptr, Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::SoundWave_eventGetCuePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::SoundWave_eventGetCuePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundWave_GetCuePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundWave::execGetCuePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSoundWaveCuePoint>*)Z_Param__Result=P_THIS->GetCuePoints();
	P_NATIVE_END;
}
// End Class USoundWave Function GetCuePoints

// Begin Class USoundWave Function GetLoopRegions
struct Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics
{
	struct SoundWave_eventGetLoopRegions_Parms
	{
		TArray<FSoundWaveCuePoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Filters for the cue points that _are_ loop regions and returns those as a new array */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Filters for the cue points that _are_ loop regions and returns those as a new array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundWaveCuePoint, METADATA_PARAMS(0, nullptr) }; // 2043081654
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundWave_eventGetLoopRegions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2043081654
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundWave, nullptr, "GetLoopRegions", nullptr, nullptr, Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::SoundWave_eventGetLoopRegions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::SoundWave_eventGetLoopRegions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundWave_GetLoopRegions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundWave::execGetLoopRegions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSoundWaveCuePoint>*)Z_Param__Result=P_THIS->GetLoopRegions();
	P_NATIVE_END;
}
// End Class USoundWave Function GetLoopRegions

// Begin Class USoundWave Function GetSoundAssetCompressionType
struct Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics
{
	struct SoundWave_eventGetSoundAssetCompressionType_Parms
	{
		ESoundAssetCompressionType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Returns the sound's asset compression type. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Returns the sound's asset compression type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundWave_eventGetSoundAssetCompressionType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESoundAssetCompressionType, METADATA_PARAMS(0, nullptr) }; // 1074490502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundWave, nullptr, "GetSoundAssetCompressionType", nullptr, nullptr, Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::SoundWave_eventGetSoundAssetCompressionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::SoundWave_eventGetSoundAssetCompressionType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundWave::execGetSoundAssetCompressionType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESoundAssetCompressionType*)Z_Param__Result=P_THIS->GetSoundAssetCompressionType();
	P_NATIVE_END;
}
// End Class USoundWave Function GetSoundAssetCompressionType

// Begin Class USoundWave Function SetSoundAssetCompressionType
struct Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics
{
	struct SoundWave_eventSetSoundAssetCompressionType_Parms
	{
		ESoundAssetCompressionType InSoundAssetCompressionType;
		bool bMarkDirty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Procedurally set the compression type. */" },
		{ "CPP_Default_bMarkDirty", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Procedurally set the compression type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSoundAssetCompressionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSoundAssetCompressionType;
	static void NewProp_bMarkDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_InSoundAssetCompressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_InSoundAssetCompressionType = { "InSoundAssetCompressionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundWave_eventSetSoundAssetCompressionType_Parms, InSoundAssetCompressionType), Z_Construct_UEnum_Engine_ESoundAssetCompressionType, METADATA_PARAMS(0, nullptr) }; // 1074490502
void Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_bMarkDirty_SetBit(void* Obj)
{
	((SoundWave_eventSetSoundAssetCompressionType_Parms*)Obj)->bMarkDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_bMarkDirty = { "bMarkDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundWave_eventSetSoundAssetCompressionType_Parms), &Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_bMarkDirty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_InSoundAssetCompressionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_InSoundAssetCompressionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_bMarkDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundWave, nullptr, "SetSoundAssetCompressionType", nullptr, nullptr, Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::SoundWave_eventSetSoundAssetCompressionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::SoundWave_eventSetSoundAssetCompressionType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundWave::execSetSoundAssetCompressionType)
{
	P_GET_ENUM(ESoundAssetCompressionType,Z_Param_InSoundAssetCompressionType);
	P_GET_UBOOL(Z_Param_bMarkDirty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundAssetCompressionType(ESoundAssetCompressionType(Z_Param_InSoundAssetCompressionType),Z_Param_bMarkDirty);
	P_NATIVE_END;
}
// End Class USoundWave Function SetSoundAssetCompressionType

// Begin Class USoundWave
void USoundWave::StaticRegisterNativesUSoundWave()
{
	UClass* Class = USoundWave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCuePoints", &USoundWave::execGetCuePoints },
		{ "GetLoopRegions", &USoundWave::execGetLoopRegions },
		{ "GetSoundAssetCompressionType", &USoundWave::execGetSoundAssetCompressionType },
		{ "SetSoundAssetCompressionType", &USoundWave::execSetSoundAssetCompressionType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundWave);
UClass* Z_Construct_UClass_USoundWave_NoRegister()
{
	return USoundWave::StaticClass();
}
struct Z_Construct_UClass_USoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundWave.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Format|Quality" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Platform agnostic compression quality. 1..100 with 1 being best compression and 100 being best quality. ADPCM and PCM sound asset compression types ignore this parameter. */" },
		{ "DisplayName", "Compression" },
		{ "EditCondition", "SoundAssetCompressionType != ESoundAssetCompressionType::PCM && SoundAssetCompressionType != ESoundAssetCompressionType::ADPCM" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Platform agnostic compression quality. 1..100 with 1 being best compression and 100 being best quality. ADPCM and PCM sound asset compression types ignore this parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingPriority_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - Property is deprecated. Streaming priority has no effect with stream caching enabled." },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRateQuality_MetaData[] = {
		{ "Category", "Format|Quality" },
		{ "Comment", "/** Determines the max sample rate to use if the platform enables \"Resampling For Device\" in project settings. \n\x09*\x09""For example, if the platform enables Resampling For Device and specifies 32000 for High, then setting High here will\n\x09*\x09""force the sound wave to be _at most_ 32000. Does nothing if Resampling For Device is disabled.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Determines the max sample rate to use if the platform enables \"Resampling For Device\" in project settings.\n     For example, if the platform enables Resampling For Device and specifies 32000 for High, then setting High here will\n     force the sound wave to be _at most_ 32000. Does nothing if Resampling For Device is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[] = {
		{ "Category", "Sound" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If set, when played directly (not through a sound cue) the wave will be played looping. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set, when played directly (not through a sound cue) the wave will be played looping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[] = {
		{ "Comment", "/** Here for legacy code. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Here for legacy code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundAssetCompressionType_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** The compression type to use for the sound wave asset. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The compression type to use for the sound wave asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeekableStreaming_MetaData[] = {
		{ "Comment", "// Deprecated compression type properties\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - Property is deprecated. bSeekableStreaming now means ADPCM codec in SoundAssetCompressionType." },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Deprecated compression type properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBinkAudio_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - Property is deprecated. bUseBinkAudio now means Bink codec in SoundAssetCompressionType." },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideSoundToUseForAnalysis_MetaData[] = {
		{ "Category", "Analysis" },
		{ "Comment", "/** Specify a sound to use for the baked analysis. Will default to this USoundWave if not set. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Specify a sound to use for the baked analysis. Will default to this USoundWave if not set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreatFileAsLoopingForAnalysis_MetaData[] = {
		{ "Category", "Analysis" },
		{ "Comment", "/**\n\x09\x09Whether or not we should treat the sound wave used for analysis (this or the override) as looping while performing analysis.\n\x09\x09""A looping sound may include the end of the file for inclusion in analysis for envelope and FFT analysis.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not we should treat the sound wave used for analysis (this or the override) as looping while performing analysis.\nA looping sound may include the end of the file for inclusion in analysis for envelope and FFT analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBakedFFTAnalysis_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "Comment", "/** Whether or not to enable cook-time baked FFT analysis. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not to enable cook-time baked FFT analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAmplitudeEnvelopeAnalysis_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "Comment", "/** Whether or not to enable cook-time amplitude envelope analysis. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not to enable cook-time amplitude envelope analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFTSize_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "Comment", "/** The FFT window size to use for fft analysis. */" },
		{ "EditCondition", "bEnableBakedFFTAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The FFT window size to use for fft analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFTAnalysisFrameSize_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "ClampMin", "512" },
		{ "Comment", "/** How many audio frames analyze at a time. */" },
		{ "EditCondition", "bEnableBakedFFTAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "How many audio frames analyze at a time." },
		{ "UIMin", "512" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFTAnalysisAttackTime_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Attack time in milliseconds of the spectral envelope follower. */" },
		{ "EditCondition", "bEnableBakedFFTAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Attack time in milliseconds of the spectral envelope follower." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFTAnalysisReleaseTime_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Release time in milliseconds of the spectral envelope follower. */" },
		{ "EditCondition", "bEnableBakedFFTAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Release time in milliseconds of the spectral envelope follower." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerFrameSize_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "ClampMin", "512" },
		{ "Comment", "/** How many audio frames to average a new envelope value. Larger values use less memory for audio envelope data but will result in lower envelope accuracy. */" },
		{ "EditCondition", "bEnableAmplitudeEnvelopeAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "How many audio frames to average a new envelope value. Larger values use less memory for audio envelope data but will result in lower envelope accuracy." },
		{ "UIMin", "512" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds. Describes how quickly the envelope analyzer responds to increasing amplitudes. */" },
		{ "EditCondition", "bEnableAmplitudeEnvelopeAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The attack time in milliseconds. Describes how quickly the envelope analyzer responds to increasing amplitudes." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds. Describes how quickly the envelope analyzer responds to decreasing amplitudes. */" },
		{ "EditCondition", "bEnableAmplitudeEnvelopeAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The release time in milliseconds. Describes how quickly the envelope analyzer responds to decreasing amplitudes." },
		{ "UIMin", "0" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Modulation Settings */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Modulation Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequenciesToAnalyze_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "Comment", "/** The frequencies (in hz) to analyze when doing baked FFT analysis. */" },
		{ "EditCondition", "bEnableBakedFFTAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The frequencies (in hz) to analyze when doing baked FFT analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedSpectralTimeData_MetaData[] = {
		{ "Comment", "/** The cooked spectral time data. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The cooked spectral time data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedEnvelopeTimeData_MetaData[] = {
		{ "Comment", "/** The cooked cooked envelope data. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The cooked cooked envelope data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialChunkSize_MetaData[] = {
		{ "Comment", "/** Please use size of First Chunk in Seconds. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Please use size of First Chunk in Seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMature_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** If set to true if this sound is considered to contain mature/adult content. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true if this sound is considered to contain mature/adult content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManualWordWrap_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** If set to true will disable automatic generation of line breaks - use if the subtitles have been split manually. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true will disable automatic generation of line breaks - use if the subtitles have been split manually." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleLine_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** If set to true the subtitles display as a sequence of single lines as opposed to multiline. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true the subtitles display as a sequence of single lines as opposed to multiline." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualizeWhenSilent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAmbisonics_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** Whether or not this source is ambisonics file format. If set, sound always uses the\n\x09  * 'Master Ambisonics Submix' as set in the 'Audio' category of Project Settings'\n\x09  * and ignores submix if provided locally or in the referenced SoundClass. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not this source is ambisonics file format. If set, sound always uses the\n'Master Ambisonics Submix' as set in the 'Audio' category of Project Settings'\nand ignores submix if provided locally or in the referenced SoundClass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBehavior_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Specifies how and when compressed audio data is loaded for asset if stream caching is enabled. */" },
		{ "DisplayName", "Loading Behavior Override" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Specifies how and when compressed audio data is loaded for asset if stream caching is enabled." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeOfFirstAudioChunkInSeconds_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** How much audio to add to First Audio Chunk (in seconds) */" },
		{ "DisplayName", "Size of First Audio Chunk (seconds)" },
		{ "EditCondition", "LoadingBehavior == ESoundWaveLoadingBehavior::RetainOnLoad || LoadingBehavior == ESoundWaveLoadingBehavior::PrimeOnLoad" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "How much audio to add to First Audio Chunk (in seconds)" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[] = {
		{ "Comment", "/** A localized version of the text that is actually spoken phonetically in the audio. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Subtitles instead." },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "A localized version of the text that is actually spoken phonetically in the audio." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** The priority of the subtitle. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The priority of the subtitle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Playback volume of sound 0 to 1 - Default is 1.0. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Playback volume of sound 0 to 1 - Default is 1.0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.125" },
		{ "Comment", "/** Playback pitch for sound. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Playback pitch for sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Number of channels of multichannel data; 1 or 2 for regular mono and stereo files */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Number of channels of multichannel data; 1 or 2 for regular mono and stereo files" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelOffsets_MetaData[] = {
		{ "Comment", "/** Offsets into the bulk data for the source wav data */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Offsets into the bulk data for the source wav data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelSizes_MetaData[] = {
		{ "Comment", "/** Sizes of the bulk data for the source wav data */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Sizes of the bulk data for the source wav data" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Cooked sample rate of the asset. Can be modified by sample rate override. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Cooked sample rate of the asset. Can be modified by sample rate override." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedSampleRate_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Sample rate of the imported sound wave. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Sample rate of the imported sound wave." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuePoints_MetaData[] = {
		{ "BlueprintGetter", "GetCuePoints" },
		{ "Category", "Info" },
		{ "Comment", "/** Cue point data parsed fro the .wav file. Contains \"Loop Regions\" as cue points as well! */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Cue point data parsed fro the .wav file. Contains \"Loop Regions\" as cue points as well!" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Subtitle cues. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Subtitle cues." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** Provides contextual information for the sound to the translator. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Provides contextual information for the sound to the translator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeInfo_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Information about the time-code from import, if available.  */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Information about the time-code from import, if available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "Category", "SoundWave" },
		{ "Comment", "/** Curves associated with this sound wave */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Curves associated with this sound wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalCurves_MetaData[] = {
		{ "Comment", "/** Hold a reference to our internal curve so we can switch back to it if we want to */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Hold a reference to our internal curve so we can switch back to it if we want to" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCloudStreaming_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** If enabled, this wave may be streamed from the cloud using the Opus format. Loading behavior must NOT be `Force Inline`. Requires a suitable support plugin to be installed. */" },
		{ "DisplayAfter", "SoundAssetCompressionType" },
		{ "DisplayName", "Enable cloud streaming" },
		{ "EditCondition", "LoadingBehavior != ESoundWaveLoadingBehavior::ForceInline" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If enabled, this wave may be streamed from the cloud using the Opus format. Loading behavior must NOT be `Force Inline`. Requires a suitable support plugin to be installed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSettings_MetaData[] = {
		{ "Category", "Platform specific" },
		{ "DisplayName", "Platform specific settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Optionally disables cloud streaming per platform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transformations_Inner_MetaData[] = {
		{ "Category", "Waveform Processing" },
		{ "Comment", "/** Waveform edits to be applied to this SoundWave on cook (editing transformations will trigger a cook) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Waveform edits to be applied to this SoundWave on cook (editing transformations will trigger a cook)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transformations_MetaData[] = {
		{ "Category", "Waveform Processing" },
		{ "Comment", "/** Waveform edits to be applied to this SoundWave on cook (editing transformations will trigger a cook) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Waveform edits to be applied to this SoundWave on cook (editing transformations will trigger a cook)" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StreamingPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleRateQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleRateQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoundGroup;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoundAssetCompressionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundAssetCompressionType;
	static void NewProp_bSeekableStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeekableStreaming;
	static void NewProp_bUseBinkAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBinkAudio;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideSoundToUseForAnalysis;
	static void NewProp_TreatFileAsLoopingForAnalysis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TreatFileAsLoopingForAnalysis;
	static void NewProp_bEnableBakedFFTAnalysis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBakedFFTAnalysis;
	static void NewProp_bEnableAmplitudeEnvelopeAnalysis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAmplitudeEnvelopeAnalysis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FFTAnalysisFrameSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FFTAnalysisAttackTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FFTAnalysisReleaseTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerFrameSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequenciesToAnalyze_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrequenciesToAnalyze;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CookedSpectralTimeData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedSpectralTimeData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CookedEnvelopeTimeData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedEnvelopeTimeData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialChunkSize;
	static void NewProp_bMature_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMature;
	static void NewProp_bManualWordWrap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualWordWrap;
	static void NewProp_bSingleLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleLine;
#if WITH_EDITORONLY_DATA
	static void NewProp_bVirtualizeWhenSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualizeWhenSilent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsAmbisonics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAmbisonics;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingBehavior;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeOfFirstAudioChunkInSeconds;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpokenText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelOffsets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelSizes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelSizes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImportedSampleRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CuePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CuePoints;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalCurves;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableCloudStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCloudStreaming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSettings_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Transformations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transformations;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundWave_GetCuePoints, "GetCuePoints" }, // 1875838900
		{ &Z_Construct_UFunction_USoundWave_GetLoopRegions, "GetLoopRegions" }, // 585463593
		{ &Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType, "GetSoundAssetCompressionType" }, // 3293432628
		{ &Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType, "SetSoundAssetCompressionType" }, // 3973218835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0040010000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, CompressionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionQuality_MetaData), NewProp_CompressionQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority = { "StreamingPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, StreamingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingPriority_MetaData), NewProp_StreamingPriority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality = { "SampleRateQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SampleRateQuality), Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRateQuality_MetaData), NewProp_SampleRateQuality_MetaData) }; // 3499501220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup = { "SoundGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundGroup_MetaData), NewProp_SoundGroup_MetaData) }; // 2669277182
void Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreaming_MetaData), NewProp_bStreaming_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SoundAssetCompressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SoundAssetCompressionType = { "SoundAssetCompressionType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SoundAssetCompressionType), Z_Construct_UEnum_Engine_ESoundAssetCompressionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundAssetCompressionType_MetaData), NewProp_SoundAssetCompressionType_MetaData) }; // 1074490502
void Z_Construct_UClass_USoundWave_Statics::NewProp_bSeekableStreaming_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bSeekableStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bSeekableStreaming = { "bSeekableStreaming", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bSeekableStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeekableStreaming_MetaData), NewProp_bSeekableStreaming_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_bUseBinkAudio_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bUseBinkAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bUseBinkAudio = { "bUseBinkAudio", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bUseBinkAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBinkAudio_MetaData), NewProp_bUseBinkAudio_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_OverrideSoundToUseForAnalysis = { "OverrideSoundToUseForAnalysis", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, OverrideSoundToUseForAnalysis), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideSoundToUseForAnalysis_MetaData), NewProp_OverrideSoundToUseForAnalysis_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_TreatFileAsLoopingForAnalysis_SetBit(void* Obj)
{
	((USoundWave*)Obj)->TreatFileAsLoopingForAnalysis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_TreatFileAsLoopingForAnalysis = { "TreatFileAsLoopingForAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_TreatFileAsLoopingForAnalysis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreatFileAsLoopingForAnalysis_MetaData), NewProp_TreatFileAsLoopingForAnalysis_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bEnableBakedFFTAnalysis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis = { "bEnableBakedFFTAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBakedFFTAnalysis_MetaData), NewProp_bEnableBakedFFTAnalysis_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bEnableAmplitudeEnvelopeAnalysis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis = { "bEnableAmplitudeEnvelopeAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAmplitudeEnvelopeAnalysis_MetaData), NewProp_bEnableAmplitudeEnvelopeAnalysis_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, FFTSize), Z_Construct_UEnum_Engine_ESoundWaveFFTSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFTSize_MetaData), NewProp_FFTSize_MetaData) }; // 2667557005
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisFrameSize = { "FFTAnalysisFrameSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, FFTAnalysisFrameSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFTAnalysisFrameSize_MetaData), NewProp_FFTAnalysisFrameSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisAttackTime = { "FFTAnalysisAttackTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, FFTAnalysisAttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFTAnalysisAttackTime_MetaData), NewProp_FFTAnalysisAttackTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisReleaseTime = { "FFTAnalysisReleaseTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, FFTAnalysisReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFTAnalysisReleaseTime_MetaData), NewProp_FFTAnalysisReleaseTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerFrameSize = { "EnvelopeFollowerFrameSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, EnvelopeFollowerFrameSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerFrameSize_MetaData), NewProp_EnvelopeFollowerFrameSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, EnvelopeFollowerAttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerAttackTime_MetaData), NewProp_EnvelopeFollowerAttackTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, EnvelopeFollowerReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerReleaseTime_MetaData), NewProp_EnvelopeFollowerReleaseTime_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, ModulationSettings), Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationSettings_MetaData), NewProp_ModulationSettings_MetaData) }; // 584551341
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze_Inner = { "FrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze = { "FrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, FrequenciesToAnalyze), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequenciesToAnalyze_MetaData), NewProp_FrequenciesToAnalyze_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData_Inner = { "CookedSpectralTimeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData, METADATA_PARAMS(0, nullptr) }; // 1237970780
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData = { "CookedSpectralTimeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, CookedSpectralTimeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedSpectralTimeData_MetaData), NewProp_CookedSpectralTimeData_MetaData) }; // 1237970780
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData_Inner = { "CookedEnvelopeTimeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData, METADATA_PARAMS(0, nullptr) }; // 1303465163
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData = { "CookedEnvelopeTimeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, CookedEnvelopeTimeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedEnvelopeTimeData_MetaData), NewProp_CookedEnvelopeTimeData_MetaData) }; // 1303465163
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_InitialChunkSize = { "InitialChunkSize", nullptr, (EPropertyFlags)0x0010040020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, InitialChunkSize_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialChunkSize_MetaData), NewProp_InitialChunkSize_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bMature = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bMature = { "bMature", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMature_MetaData), NewProp_bMature_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bManualWordWrap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap = { "bManualWordWrap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManualWordWrap_MetaData), NewProp_bManualWordWrap_MetaData) };
void Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bSingleLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine = { "bSingleLine", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleLine_MetaData), NewProp_bSingleLine_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bVirtualizeWhenSilent_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent = { "bVirtualizeWhenSilent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualizeWhenSilent_MetaData), NewProp_bVirtualizeWhenSilent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bIsAmbisonics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics = { "bIsAmbisonics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAmbisonics_MetaData), NewProp_bIsAmbisonics_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_LoadingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_LoadingBehavior = { "LoadingBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, LoadingBehavior), Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingBehavior_MetaData), NewProp_LoadingBehavior_MetaData) }; // 2688492422
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SizeOfFirstAudioChunkInSeconds = { "SizeOfFirstAudioChunkInSeconds", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SizeOfFirstAudioChunkInSeconds), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeOfFirstAudioChunkInSeconds_MetaData), NewProp_SizeOfFirstAudioChunkInSeconds_MetaData) }; // 50753708
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText = { "SpokenText", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SpokenText_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpokenText_MetaData), NewProp_SpokenText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority = { "SubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SubtitlePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlePriority_MetaData), NewProp_SubtitlePriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, NumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChannels_MetaData), NewProp_NumChannels_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_Inner = { "ChannelOffsets", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets = { "ChannelOffsets", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, ChannelOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelOffsets_MetaData), NewProp_ChannelOffsets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_Inner = { "ChannelSizes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes = { "ChannelSizes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, ChannelSizes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelSizes_MetaData), NewProp_ChannelSizes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0020090000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ImportedSampleRate = { "ImportedSampleRate", nullptr, (EPropertyFlags)0x0020090800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, ImportedSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedSampleRate_MetaData), NewProp_ImportedSampleRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CuePoints_Inner = { "CuePoints", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundWaveCuePoint, METADATA_PARAMS(0, nullptr) }; // 2043081654
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CuePoints = { "CuePoints", nullptr, (EPropertyFlags)0x0020080800020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, CuePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuePoints_MetaData), NewProp_CuePoints_MetaData) }; // 2043081654
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_Inner = { "Subtitles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(0, nullptr) }; // 3418004210
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, Subtitles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subtitles_MetaData), NewProp_Subtitles_MetaData) }; // 3418004210
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_TimecodeInfo = { "TimecodeInfo", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, TimecodeInfo), Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeInfo_MetaData), NewProp_TimecodeInfo_MetaData) }; // 2819690162
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SourceFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData), NewProp_SourceFileTimestamp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x01240c0000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, Curves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves = { "InternalCurves", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, InternalCurves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalCurves_MetaData), NewProp_InternalCurves_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableCloudStreaming_SetBit(void* Obj)
{
	((USoundWave*)Obj)->bEnableCloudStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableCloudStreaming = { "bEnableCloudStreaming", nullptr, (EPropertyFlags)0x0020090800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableCloudStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCloudStreaming_MetaData), NewProp_bEnableCloudStreaming_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_PlatformSettings_ValueProp = { "PlatformSettings", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings, METADATA_PARAMS(0, nullptr) }; // 2149475394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_PlatformSettings_Key_KeyProp = { "PlatformSettings_Key", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_PlatformSettings = { "PlatformSettings", nullptr, (EPropertyFlags)0x0020080800004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, PlatformSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSettings_MetaData), NewProp_PlatformSettings_MetaData) }; // 2149475394
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Transformations_Inner = { "Transformations", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWaveformTransformationBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transformations_Inner_MetaData), NewProp_Transformations_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Transformations = { "Transformations", nullptr, (EPropertyFlags)0x0114008800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundWave, Transformations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transformations_MetaData), NewProp_Transformations_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SoundAssetCompressionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SoundAssetCompressionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bSeekableStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bUseBinkAudio,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_OverrideSoundToUseForAnalysis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_TreatFileAsLoopingForAnalysis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisFrameSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerFrameSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerReleaseTime,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ModulationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_InitialChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bMature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_LoadingBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_LoadingBehavior,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SizeOfFirstAudioChunkInSeconds,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ImportedSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CuePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CuePoints,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Comment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_TimecodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Curves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableCloudStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_PlatformSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_PlatformSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_PlatformSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Transformations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Transformations,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USoundWave_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister, (int32)VTABLE_OFFSET(USoundWave, IInterface_AsyncCompilation), false },  // 1385598614
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundWave_Statics::ClassParams = {
	&USoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoundWave_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundWave()
{
	if (!Z_Registration_Info_UClass_USoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundWave.OuterSingleton, Z_Construct_UClass_USoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundWave.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundWave>()
{
	return USoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWave);
USoundWave::~USoundWave() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWave)
// End Class USoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDecompressionType_StaticEnum, TEXT("EDecompressionType"), &Z_Registration_Info_UEnum_EDecompressionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 222887334U) },
		{ ESoundWaveFFTSize_StaticEnum, TEXT("ESoundWaveFFTSize"), &Z_Registration_Info_UEnum_ESoundWaveFFTSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2667557005U) },
		{ ESoundAssetCompressionType_StaticEnum, TEXT("ESoundAssetCompressionType"), &Z_Registration_Info_UEnum_ESoundAssetCompressionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1074490502U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStreamedAudioPlatformData::StaticStruct, Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::NewStructOps, TEXT("StreamedAudioPlatformData"), &Z_Registration_Info_UScriptStruct_StreamedAudioPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamedAudioPlatformData), 1973483328U) },
		{ FSoundWaveSpectralData::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewStructOps, TEXT("SoundWaveSpectralData"), &Z_Registration_Info_UScriptStruct_SoundWaveSpectralData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveSpectralData), 1453003138U) },
		{ FSoundWaveSpectralDataPerSound::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewStructOps, TEXT("SoundWaveSpectralDataPerSound"), &Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataPerSound, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveSpectralDataPerSound), 4218630711U) },
		{ FSoundWaveEnvelopeDataPerSound::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewStructOps, TEXT("SoundWaveEnvelopeDataPerSound"), &Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeDataPerSound, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveEnvelopeDataPerSound), 4226918196U) },
		{ FSoundWaveSpectralDataEntry::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewStructOps, TEXT("SoundWaveSpectralDataEntry"), &Z_Registration_Info_UScriptStruct_SoundWaveSpectralDataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveSpectralDataEntry), 260427755U) },
		{ FSoundWaveSpectralTimeData::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewStructOps, TEXT("SoundWaveSpectralTimeData"), &Z_Registration_Info_UScriptStruct_SoundWaveSpectralTimeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveSpectralTimeData), 1237970780U) },
		{ FSoundWaveEnvelopeTimeData::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewStructOps, TEXT("SoundWaveEnvelopeTimeData"), &Z_Registration_Info_UScriptStruct_SoundWaveEnvelopeTimeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveEnvelopeTimeData), 1303465163U) },
		{ FSoundWaveCuePoint::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewStructOps, TEXT("SoundWaveCuePoint"), &Z_Registration_Info_UScriptStruct_SoundWaveCuePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveCuePoint), 2043081654U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundWave, USoundWave::StaticClass, TEXT("USoundWave"), &Z_Registration_Info_UClass_USoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundWave), 3412499182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_2610434273(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
