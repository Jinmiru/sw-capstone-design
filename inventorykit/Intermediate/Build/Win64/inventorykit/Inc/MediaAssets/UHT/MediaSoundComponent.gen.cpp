// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaSoundComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSoundComponent() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize();
MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Enum EMediaSoundChannels
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaSoundChannels;
static UEnum* EMediaSoundChannels_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaSoundChannels"));
	}
	return Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundChannels>()
{
	return EMediaSoundChannels_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Available media sound channel types.\n */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "Mono.Comment", "/** Mono (1 channel). */" },
		{ "Mono.Name", "EMediaSoundChannels::Mono" },
		{ "Mono.ToolTip", "Mono (1 channel)." },
		{ "Stereo.Comment", "/** Stereo (2 channels). */" },
		{ "Stereo.Name", "EMediaSoundChannels::Stereo" },
		{ "Stereo.ToolTip", "Stereo (2 channels)." },
		{ "Surround.Comment", "/** Surround sound (7.1 channels; for UI). */" },
		{ "Surround.Name", "EMediaSoundChannels::Surround" },
		{ "Surround.ToolTip", "Surround sound (7.1 channels; for UI)." },
		{ "ToolTip", "Available media sound channel types." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaSoundChannels::Mono", (int64)EMediaSoundChannels::Mono },
		{ "EMediaSoundChannels::Stereo", (int64)EMediaSoundChannels::Stereo },
		{ "EMediaSoundChannels::Surround", (int64)EMediaSoundChannels::Surround },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaSoundChannels",
	"EMediaSoundChannels",
	Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels()
{
	if (!Z_Registration_Info_UEnum_EMediaSoundChannels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaSoundChannels.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaSoundChannels.InnerSingleton;
}
// End Enum EMediaSoundChannels

// Begin Enum EMediaSoundComponentFFTSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize;
static UEnum* EMediaSoundComponentFFTSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaSoundComponentFFTSize"));
	}
	return Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundComponentFFTSize>()
{
	return EMediaSoundComponentFFTSize_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Large_1024.Name", "EMediaSoundComponentFFTSize::Large_1024" },
		{ "Medium_512.Name", "EMediaSoundComponentFFTSize::Medium_512" },
		{ "Min_64.Name", "EMediaSoundComponentFFTSize::Min_64" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "Small_256.Name", "EMediaSoundComponentFFTSize::Small_256" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaSoundComponentFFTSize::Min_64", (int64)EMediaSoundComponentFFTSize::Min_64 },
		{ "EMediaSoundComponentFFTSize::Small_256", (int64)EMediaSoundComponentFFTSize::Small_256 },
		{ "EMediaSoundComponentFFTSize::Medium_512", (int64)EMediaSoundComponentFFTSize::Medium_512 },
		{ "EMediaSoundComponentFFTSize::Large_1024", (int64)EMediaSoundComponentFFTSize::Large_1024 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaSoundComponentFFTSize",
	"EMediaSoundComponentFFTSize",
	Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize()
{
	if (!Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.InnerSingleton;
}
// End Enum EMediaSoundComponentFFTSize

// Begin ScriptStruct FMediaSoundComponentSpectralData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData;
class UScriptStruct* FMediaSoundComponentSpectralData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaSoundComponentSpectralData"));
	}
	return Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData.OuterSingleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaSoundComponentSpectralData>()
{
	return FMediaSoundComponentSpectralData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyHz_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The frequency hz of the spectrum value\n" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The frequency hz of the spectrum value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The magnitude of the spectrum at this frequency\n" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The magnitude of the spectrum at this frequency" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaSoundComponentSpectralData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaSoundComponentSpectralData, FrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyHz_MetaData), NewProp_FrequencyHz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaSoundComponentSpectralData, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_FrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	&NewStructOps,
	"MediaSoundComponentSpectralData",
	Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::PropPointers),
	sizeof(FMediaSoundComponentSpectralData),
	alignof(FMediaSoundComponentSpectralData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData()
{
	if (!Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData.InnerSingleton, Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData.InnerSingleton;
}
// End ScriptStruct FMediaSoundComponentSpectralData

// Begin Class UMediaSoundComponent Function BP_GetAttenuationSettingsToApply
struct Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics
{
	struct MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms
	{
		FSoundAttenuationSettings OutAttenuationSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/**\n\x09 * Get the attenuation settings based on the current component settings.\n\x09 *\n\x09 * @param OutAttenuationSettings Will contain the attenuation settings, if available.\n\x09 * @return true if attenuation settings were returned, false if attenuation is disabled.\n\x09 */" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
		{ "ToolTip", "Get the attenuation settings based on the current component settings.\n\n@param OutAttenuationSettings Will contain the attenuation settings, if available.\n@return true if attenuation settings were returned, false if attenuation is disabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(0, nullptr) }; // 4035653401
void Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execBP_GetAttenuationSettingsToApply)
{
	P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function BP_GetAttenuationSettingsToApply

// Begin Class UMediaSoundComponent Function GetEnvelopeValue
struct Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics
{
	struct MediaSoundComponent_eventGetEnvelopeValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeSynth" },
		{ "Comment", "/** Retrieves the current amplitude envelope. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Retrieves the current amplitude envelope." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetEnvelopeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetEnvelopeValue", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::MediaSoundComponent_eventGetEnvelopeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::MediaSoundComponent_eventGetEnvelopeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execGetEnvelopeValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEnvelopeValue();
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function GetEnvelopeValue

// Begin Class UMediaSoundComponent Function GetMediaPlayer
struct Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics
{
	struct MediaSoundComponent_eventGetMediaPlayer_Parms
	{
		UMediaPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/**\n\x09 * Get the media player that provides the audio samples.\n\x09 *\n\x09 * @return The component's media player, or nullptr if not set.\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Get the media player that provides the audio samples.\n\n@return The component's media player, or nullptr if not set.\n@see SetMediaPlayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::MediaSoundComponent_eventGetMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::MediaSoundComponent_eventGetMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execGetMediaPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function GetMediaPlayer

// Begin Class UMediaSoundComponent Function GetNormalizedSpectralData
struct Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics
{
	struct MediaSoundComponent_eventGetNormalizedSpectralData_Parms
	{
		TArray<FMediaSoundComponentSpectralData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeSynth" },
		{ "Comment", "/** Retrieves and normalizes the spectral data if spectral analysis is enabled. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Retrieves and normalizes the spectral data if spectral analysis is enabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData, METADATA_PARAMS(0, nullptr) }; // 3639646166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetNormalizedSpectralData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3639646166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetNormalizedSpectralData", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::MediaSoundComponent_eventGetNormalizedSpectralData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::MediaSoundComponent_eventGetNormalizedSpectralData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execGetNormalizedSpectralData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMediaSoundComponentSpectralData>*)Z_Param__Result=P_THIS->GetNormalizedSpectralData();
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function GetNormalizedSpectralData

// Begin Class UMediaSoundComponent Function GetSpectralData
struct Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics
{
	struct MediaSoundComponent_eventGetSpectralData_Parms
	{
		TArray<FMediaSoundComponentSpectralData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeSynth" },
		{ "Comment", "/** Retrieves the spectral data if spectral analysis is enabled. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Retrieves the spectral data if spectral analysis is enabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData, METADATA_PARAMS(0, nullptr) }; // 3639646166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetSpectralData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3639646166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetSpectralData", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::MediaSoundComponent_eventGetSpectralData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::MediaSoundComponent_eventGetSpectralData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execGetSpectralData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMediaSoundComponentSpectralData>*)Z_Param__Result=P_THIS->GetSpectralData();
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function GetSpectralData

// Begin Class UMediaSoundComponent Function SetEnableEnvelopeFollowing
struct Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics
{
	struct MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms
	{
		bool bInEnvelopeFollowing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Turns on amplitude envelope following the audio in the media sound component. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Turns on amplitude envelope following the audio in the media sound component." },
	};
#endif // WITH_METADATA
	static void NewProp_bInEnvelopeFollowing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnvelopeFollowing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing_SetBit(void* Obj)
{
	((MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms*)Obj)->bInEnvelopeFollowing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing = { "bInEnvelopeFollowing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms), &Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetEnableEnvelopeFollowing", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execSetEnableEnvelopeFollowing)
{
	P_GET_UBOOL(Z_Param_bInEnvelopeFollowing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableEnvelopeFollowing(Z_Param_bInEnvelopeFollowing);
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function SetEnableEnvelopeFollowing

// Begin Class UMediaSoundComponent Function SetEnableSpectralAnalysis
struct Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics
{
	struct MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms
	{
		bool bInSpectralAnalysisEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Turns on spectral analysis of the audio generated in the media sound component. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Turns on spectral analysis of the audio generated in the media sound component." },
	};
#endif // WITH_METADATA
	static void NewProp_bInSpectralAnalysisEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSpectralAnalysisEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled_SetBit(void* Obj)
{
	((MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms*)Obj)->bInSpectralAnalysisEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled = { "bInSpectralAnalysisEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms), &Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetEnableSpectralAnalysis", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execSetEnableSpectralAnalysis)
{
	P_GET_UBOOL(Z_Param_bInSpectralAnalysisEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableSpectralAnalysis(Z_Param_bInSpectralAnalysisEnabled);
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function SetEnableSpectralAnalysis

// Begin Class UMediaSoundComponent Function SetEnvelopeFollowingsettings
struct Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics
{
	struct MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms
	{
		int32 AttackTimeMsec;
		int32 ReleaseTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Sets the envelope attack and release times (in ms). */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Sets the envelope attack and release times (in ms)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReleaseTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms, AttackTimeMsec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms, ReleaseTimeMsec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_AttackTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_ReleaseTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetEnvelopeFollowingsettings", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execSetEnvelopeFollowingsettings)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AttackTimeMsec);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReleaseTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnvelopeFollowingsettings(Z_Param_AttackTimeMsec,Z_Param_ReleaseTimeMsec);
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function SetEnvelopeFollowingsettings

// Begin Class UMediaSoundComponent Function SetMediaPlayer
struct Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics
{
	struct MediaSoundComponent_eventSetMediaPlayer_Parms
	{
		UMediaPlayer* NewMediaPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/**\n\x09 * Set the media player that provides the audio samples.\n\x09 *\n\x09 * @param NewMediaPlayer The player to set.\n\x09 * @see GetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Set the media player that provides the audio samples.\n\n@param NewMediaPlayer The player to set.\n@see GetMediaPlayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::NewProp_NewMediaPlayer = { "NewMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetMediaPlayer_Parms, NewMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::NewProp_NewMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::MediaSoundComponent_eventSetMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::MediaSoundComponent_eventSetMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execSetMediaPlayer)
{
	P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer);
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function SetMediaPlayer

// Begin Class UMediaSoundComponent Function SetSpectralAnalysisSettings
struct Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics
{
	struct MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms
	{
		TArray<float> InFrequenciesToAnalyze;
		EMediaSoundComponentFFTSize InFFTSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Sets the settings to use for spectral analysis. */" },
		{ "CPP_Default_InFFTSize", "Medium_512" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Sets the settings to use for spectral analysis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequenciesToAnalyze_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequenciesToAnalyze;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InFFTSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InFFTSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze_Inner = { "InFrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze = { "InFrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms, InFrequenciesToAnalyze), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize = { "InFFTSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms, InFFTSize), Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize, METADATA_PARAMS(0, nullptr) }; // 2691657437
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetSpectralAnalysisSettings", nullptr, nullptr, Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSoundComponent::execSetSpectralAnalysisSettings)
{
	P_GET_TARRAY(float,Z_Param_InFrequenciesToAnalyze);
	P_GET_ENUM(EMediaSoundComponentFFTSize,Z_Param_InFFTSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpectralAnalysisSettings(Z_Param_InFrequenciesToAnalyze,EMediaSoundComponentFFTSize(Z_Param_InFFTSize));
	P_NATIVE_END;
}
// End Class UMediaSoundComponent Function SetSpectralAnalysisSettings

// Begin Class UMediaSoundComponent
void UMediaSoundComponent::StaticRegisterNativesUMediaSoundComponent()
{
	UClass* Class = UMediaSoundComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_GetAttenuationSettingsToApply", &UMediaSoundComponent::execBP_GetAttenuationSettingsToApply },
		{ "GetEnvelopeValue", &UMediaSoundComponent::execGetEnvelopeValue },
		{ "GetMediaPlayer", &UMediaSoundComponent::execGetMediaPlayer },
		{ "GetNormalizedSpectralData", &UMediaSoundComponent::execGetNormalizedSpectralData },
		{ "GetSpectralData", &UMediaSoundComponent::execGetSpectralData },
		{ "SetEnableEnvelopeFollowing", &UMediaSoundComponent::execSetEnableEnvelopeFollowing },
		{ "SetEnableSpectralAnalysis", &UMediaSoundComponent::execSetEnableSpectralAnalysis },
		{ "SetEnvelopeFollowingsettings", &UMediaSoundComponent::execSetEnvelopeFollowingsettings },
		{ "SetMediaPlayer", &UMediaSoundComponent::execSetMediaPlayer },
		{ "SetSpectralAnalysisSettings", &UMediaSoundComponent::execSetSpectralAnalysisSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaSoundComponent);
UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister()
{
	return UMediaSoundComponent::StaticClass();
}
struct Z_Construct_UClass_UMediaSoundComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Media" },
		{ "Comment", "/**\n * Implements a sound component for playing a media player's audio output.\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "MediaSoundComponent.h" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a sound component for playing a media player's audio output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media sound channel type. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Media sound channel type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicRateAdjustment_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Dynamically adjust the sample rate if audio and media clock desynchronize. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Dynamically adjust the sample rate if audio and media clock desynchronize." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateAdjustmentFactor_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * Factor for calculating the sample rate adjustment.\n\x09 *\n\x09 * If dynamic rate adjustment is enabled, this number is multiplied with the drift\n\x09 * between the audio and media clock (in 100ns ticks) to determine the adjustment.\n\x09 * that is to be multiplied into the current playrate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Factor for calculating the sample rate adjustment.\n\nIf dynamic rate adjustment is enabled, this number is multiplied with the drift\nbetween the audio and media clock (in 100ns ticks) to determine the adjustment.\nthat is to be multiplied into the current playrate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateAdjustmentRange_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * The allowed range of dynamic rate adjustment.\n\x09 *\n\x09 * If dynamic rate adjustment is enabled, and the necessary adjustment\n\x09 * falls outside of this range, audio samples will be dropped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The allowed range of dynamic rate adjustment.\n\nIf dynamic rate adjustment is enabled, and the necessary adjustment\nfalls outside of this range, audio samples will be dropped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * The media player asset associated with this component.\n\x09 *\n\x09 * This property is meant for design-time convenience. To change the\n\x09 * associated media player at run-time, use the SetMediaPlayer method.\n\x09 *\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The media player asset associated with this component.\n\nThis property is meant for design-time convenience. To change the\nassociated media player at run-time, use the SetMediaPlayer method.\n\n@see SetMediaPlayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channels_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channels;
	static void NewProp_DynamicRateAdjustment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DynamicRateAdjustment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateAdjustmentFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RateAdjustmentRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 2353220403
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue, "GetEnvelopeValue" }, // 1636030125
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer, "GetMediaPlayer" }, // 935533139
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData, "GetNormalizedSpectralData" }, // 3200346798
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData, "GetSpectralData" }, // 1283117011
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing, "SetEnableEnvelopeFollowing" }, // 1998958471
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis, "SetEnableSpectralAnalysis" }, // 2134877882
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings, "SetEnvelopeFollowingsettings" }, // 280613696
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer, "SetMediaPlayer" }, // 1571455990
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings, "SetSpectralAnalysisSettings" }, // 677428029
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSoundComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaSoundComponent, Channels), Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) }; // 3003051219
void Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_SetBit(void* Obj)
{
	((UMediaSoundComponent*)Obj)->DynamicRateAdjustment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment = { "DynamicRateAdjustment", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaSoundComponent), &Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicRateAdjustment_MetaData), NewProp_DynamicRateAdjustment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor = { "RateAdjustmentFactor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaSoundComponent, RateAdjustmentFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateAdjustmentFactor_MetaData), NewProp_RateAdjustmentFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange = { "RateAdjustmentRange", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaSoundComponent, RateAdjustmentRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateAdjustmentRange_MetaData), NewProp_RateAdjustmentRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaSoundComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMediaSoundComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaSoundComponent_Statics::ClassParams = {
	&UMediaSoundComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaSoundComponent()
{
	if (!Z_Registration_Info_UClass_UMediaSoundComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaSoundComponent.OuterSingleton, Z_Construct_UClass_UMediaSoundComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaSoundComponent.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaSoundComponent>()
{
	return UMediaSoundComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSoundComponent);
// End Class UMediaSoundComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMediaSoundChannels_StaticEnum, TEXT("EMediaSoundChannels"), &Z_Registration_Info_UEnum_EMediaSoundChannels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3003051219U) },
		{ EMediaSoundComponentFFTSize_StaticEnum, TEXT("EMediaSoundComponentFFTSize"), &Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2691657437U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMediaSoundComponentSpectralData::StaticStruct, Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewStructOps, TEXT("MediaSoundComponentSpectralData"), &Z_Registration_Info_UScriptStruct_MediaSoundComponentSpectralData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaSoundComponentSpectralData), 3639646166U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaSoundComponent, UMediaSoundComponent::StaticClass, TEXT("UMediaSoundComponent"), &Z_Registration_Info_UClass_UMediaSoundComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaSoundComponent), 965656748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_2255857692(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
