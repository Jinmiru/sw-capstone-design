// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResonanceAudio/Public/ResonanceAudioSpatializationSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioSpatializationSourceSettings() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister();
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel();
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod();
UPackage* Z_Construct_UPackage__Script_ResonanceAudio();
// End Cross Module References

// Begin Class UResonanceAudioSpatializationSourceSettings Function SetSoundSourceDirectivity
struct Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics
{
	struct ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms
	{
		float InPattern;
		float InSharpness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ResonanceAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets the sound source directivity, applies, and updates\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets the sound source directivity, applies, and updates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPattern;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSharpness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_InPattern = { "InPattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms, InPattern), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_InSharpness = { "InSharpness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms, InSharpness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_InPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::NewProp_InSharpness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings, nullptr, "SetSoundSourceDirectivity", nullptr, nullptr, Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceDirectivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResonanceAudioSpatializationSourceSettings::execSetSoundSourceDirectivity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPattern);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSharpness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundSourceDirectivity(Z_Param_InPattern,Z_Param_InSharpness);
	P_NATIVE_END;
}
// End Class UResonanceAudioSpatializationSourceSettings Function SetSoundSourceDirectivity

// Begin Class UResonanceAudioSpatializationSourceSettings Function SetSoundSourceSpread
struct Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics
{
	struct ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceSpread_Parms
	{
		float InSpread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ResonanceAudio|SoundSourceSpatializationSettings" },
		{ "Comment", "// Sets the sound source spread (width), applies, and updates\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Sets the sound source spread (width), applies, and updates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::NewProp_InSpread = { "InSpread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceSpread_Parms, InSpread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::NewProp_InSpread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings, nullptr, "SetSoundSourceSpread", nullptr, nullptr, Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::ResonanceAudioSpatializationSourceSettings_eventSetSoundSourceSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResonanceAudioSpatializationSourceSettings::execSetSoundSourceSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSpread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundSourceSpread(Z_Param_InSpread);
	P_NATIVE_END;
}
// End Class UResonanceAudioSpatializationSourceSettings Function SetSoundSourceSpread

// Begin Class UResonanceAudioSpatializationSourceSettings
void UResonanceAudioSpatializationSourceSettings::StaticRegisterNativesUResonanceAudioSpatializationSourceSettings()
{
	UClass* Class = UResonanceAudioSpatializationSourceSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSoundSourceDirectivity", &UResonanceAudioSpatializationSourceSettings::execSetSoundSourceDirectivity },
		{ "SetSoundSourceSpread", &UResonanceAudioSpatializationSourceSettings::execSetSoundSourceSpread },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResonanceAudioSpatializationSourceSettings);
UClass* Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister()
{
	return UResonanceAudioSpatializationSourceSettings::StaticClass();
}
struct Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ResonanceAudioSpatializationSourceSettings.h" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationMethod_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "Comment", "// Spatialization method to use for sound object(s). NOTE: Has no effect if 'Stereo Panning' global quality mode is selected for the project\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Spatialization method to use for sound object(s). NOTE: Has no effect if 'Stereo Panning' global quality mode is selected for the project" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Directivity pattern: 0.0 (omnidirectional), 0.5 (cardioid), 1.0 (figure-of-8)\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Directivity pattern: 0.0 (omnidirectional), 0.5 (cardioid), 1.0 (figure-of-8)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sharpness_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Sharpness of the directivity pattern. Higher values result in a narrower sound emission beam\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Sharpness of the directivity pattern. Higher values result in a narrower sound emission beam" },
		{ "UIMax", "100.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToggleVisualization_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "Comment", "// Whether to visualize directivity pattern in the viewport.\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Whether to visualize directivity pattern in the viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "SpatializationSettings|Directivity" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale (for directivity pattern visualization only).\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Scale (for directivity pattern visualization only)." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "Category", "SpatializationSettings|Source spread (width)" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Spread (width) of the sound source (in degrees). Note: spread control is not available if 'Stereo Panning' global quality mode is enabled for the project and / or 'Stereo Panning' spatialization mode is enabled for the sound source\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Spread (width) of the sound source (in degrees). Note: spread control is not available if 'Stereo Panning' global quality mode is enabled for the project and / or 'Stereo Panning' spatialization mode is enabled for the sound source" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rolloff_MetaData[] = {
		{ "Category", "SpatializationSettings|Distance attenuation" },
		{ "Comment", "// Roll-off model to use for sound source distance attenuation. Select 'None' (default) to use Unreal attenuation settings\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Roll-off model to use for sound source distance attenuation. Select 'None' (default) to use Unreal attenuation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "SpatializationSettings|Distance attenuation" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Minimum distance to apply the chosen attenuation method (default = 100.0 cm)\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Minimum distance to apply the chosen attenuation method (default = 100.0 cm)" },
		{ "UIMax", "1000000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "SpatializationSettings|Distance attenuation" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Maximum distance to apply the chosen attenuation method ((default = 50000.0 cm)\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioSpatializationSourceSettings.h" },
		{ "ToolTip", "Maximum distance to apply the chosen attenuation method ((default = 50000.0 cm)" },
		{ "UIMax", "1000000.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpatializationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatializationMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pattern;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
	static void NewProp_bToggleVisualization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleVisualization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rolloff_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rolloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity, "SetSoundSourceDirectivity" }, // 1117085783
		{ &Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread, "SetSoundSourceSpread" }, // 4087489404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResonanceAudioSpatializationSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_SpatializationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_SpatializationMethod = { "SpatializationMethod", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, SpatializationMethod), Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatializationMethod_MetaData), NewProp_SpatializationMethod_MetaData) }; // 1629823794
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, Sharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sharpness_MetaData), NewProp_Sharpness_MetaData) };
void Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_bToggleVisualization_SetBit(void* Obj)
{
	((UResonanceAudioSpatializationSourceSettings*)Obj)->bToggleVisualization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_bToggleVisualization = { "bToggleVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UResonanceAudioSpatializationSourceSettings), &Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_bToggleVisualization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToggleVisualization_MetaData), NewProp_bToggleVisualization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, Spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Rolloff_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Rolloff = { "Rolloff", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, Rolloff), Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rolloff_MetaData), NewProp_Rolloff_MetaData) }; // 1417429119
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSpatializationSourceSettings, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_SpatializationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_SpatializationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Pattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Sharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_bToggleVisualization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Rolloff_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_Rolloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_MinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::NewProp_MaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpatializationPluginSourceSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::ClassParams = {
	&UResonanceAudioSpatializationSourceSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::PropPointers),
	0,
	0x001010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings()
{
	if (!Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.OuterSingleton, Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.OuterSingleton;
}
template<> RESONANCEAUDIO_API UClass* StaticClass<UResonanceAudioSpatializationSourceSettings>()
{
	return UResonanceAudioSpatializationSourceSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResonanceAudioSpatializationSourceSettings);
UResonanceAudioSpatializationSourceSettings::~UResonanceAudioSpatializationSourceSettings() {}
// End Class UResonanceAudioSpatializationSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings, UResonanceAudioSpatializationSourceSettings::StaticClass, TEXT("UResonanceAudioSpatializationSourceSettings"), &Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResonanceAudioSpatializationSourceSettings), 895106206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_3557069695(TEXT("/Script/ResonanceAudio"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
