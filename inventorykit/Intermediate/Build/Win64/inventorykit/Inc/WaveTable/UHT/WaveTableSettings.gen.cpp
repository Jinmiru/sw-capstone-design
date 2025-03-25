// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTable/Public/WaveTableSettings.h"
#include "WaveTable/Public/WaveTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
UPackage* Z_Construct_UPackage__Script_WaveTable();
WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableCurve();
WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableResolution();
WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode();
WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableData();
WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableSettings();
// End Cross Module References

// Begin Enum EWaveTableResolution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveTableResolution;
static UEnum* EWaveTableResolution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableResolution, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("EWaveTableResolution"));
	}
	return Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton;
}
template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableResolution>()
{
	return EWaveTableResolution_StaticEnum();
}
struct Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace WaveTable\n" },
		{ "Maximum.Comment", "// Takes largest source file length (if WaveTable was produced\n// by a file, PCM stream, SoundWave, etc.) of superset of waves,\n// or Res_Max if all superset of waves were produced by curves. This\n// can be very memory intensive if source file is large!\n" },
		{ "Maximum.Name", "EWaveTableResolution::Maximum" },
		{ "Maximum.ToolTip", "Takes largest source file length (if WaveTable was produced\nby a file, PCM stream, SoundWave, etc.) of superset of waves,\nor Res_Max if all superset of waves were produced by curves. This\ncan be very memory intensive if source file is large!" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EWaveTableResolution::None" },
		{ "Res_1024.DisplayName", "1024" },
		{ "Res_1024.Name", "EWaveTableResolution::Res_1024" },
		{ "Res_128.DisplayName", "128" },
		{ "Res_128.Name", "EWaveTableResolution::Res_128" },
		{ "Res_16.DisplayName", "16" },
		{ "Res_16.Name", "EWaveTableResolution::Res_16" },
		{ "Res_2048.DisplayName", "2048" },
		{ "Res_2048.Name", "EWaveTableResolution::Res_2048" },
		{ "Res_256.DisplayName", "256" },
		{ "Res_256.Name", "EWaveTableResolution::Res_256" },
		{ "Res_32.DisplayName", "32" },
		{ "Res_32.Name", "EWaveTableResolution::Res_32" },
		{ "Res_4096.DisplayName", "4096" },
		{ "Res_4096.Name", "EWaveTableResolution::Res_4096" },
		{ "Res_512.DisplayName", "512" },
		{ "Res_512.Name", "EWaveTableResolution::Res_512" },
		{ "Res_64.DisplayName", "64" },
		{ "Res_64.Name", "EWaveTableResolution::Res_64" },
		{ "Res_8.DisplayName", "8" },
		{ "Res_8.Name", "EWaveTableResolution::Res_8" },
		{ "Res_Max.Comment", "// Maximum \"static\" power-of-two WaveTable resolution\n" },
		{ "Res_Max.Hidden", "" },
		{ "Res_Max.Name", "EWaveTableResolution::Res_Max" },
		{ "Res_Max.ToolTip", "Maximum \"static\" power-of-two WaveTable resolution" },
		{ "ToolTip", "namespace WaveTable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWaveTableResolution::None", (int64)EWaveTableResolution::None },
		{ "EWaveTableResolution::Res_8", (int64)EWaveTableResolution::Res_8 },
		{ "EWaveTableResolution::Res_16", (int64)EWaveTableResolution::Res_16 },
		{ "EWaveTableResolution::Res_32", (int64)EWaveTableResolution::Res_32 },
		{ "EWaveTableResolution::Res_64", (int64)EWaveTableResolution::Res_64 },
		{ "EWaveTableResolution::Res_128", (int64)EWaveTableResolution::Res_128 },
		{ "EWaveTableResolution::Res_256", (int64)EWaveTableResolution::Res_256 },
		{ "EWaveTableResolution::Res_512", (int64)EWaveTableResolution::Res_512 },
		{ "EWaveTableResolution::Res_1024", (int64)EWaveTableResolution::Res_1024 },
		{ "EWaveTableResolution::Res_2048", (int64)EWaveTableResolution::Res_2048 },
		{ "EWaveTableResolution::Res_4096", (int64)EWaveTableResolution::Res_4096 },
		{ "EWaveTableResolution::Res_Max", (int64)EWaveTableResolution::Res_Max },
		{ "EWaveTableResolution::Maximum", (int64)EWaveTableResolution::Maximum },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WaveTable,
	nullptr,
	"EWaveTableResolution",
	"EWaveTableResolution",
	Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WaveTable_EWaveTableResolution()
{
	if (!Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton, Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton;
}
// End Enum EWaveTableResolution

// Begin Enum EWaveTableSamplingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveTableSamplingMode;
static UEnum* EWaveTableSamplingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("EWaveTableSamplingMode"));
	}
	return Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton;
}
template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableSamplingMode>()
{
	return EWaveTableSamplingMode_StaticEnum();
}
struct Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// SamplingMode of a given bank or collection of WaveTables\n" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EWaveTableSamplingMode::COUNT" },
		{ "FixedResolution.Comment", "// Enforces resolution (i.e. size of all tables), uniformly resampling\n// all tables in the collection to be the same length/number of samples\n// (if not already).  Supports use cases where systems are mixing/\n// interpolating or spatializing entries in lockstep (ex. oscillating\n// or enveloping).\n" },
		{ "FixedResolution.Name", "EWaveTableSamplingMode::FixedResolution" },
		{ "FixedResolution.ToolTip", "Enforces resolution (i.e. size of all tables), uniformly resampling\nall tables in the collection to be the same length/number of samples\n(if not already).  Supports use cases where systems are mixing/\ninterpolating or spatializing entries in lockstep (ex. oscillating\nor enveloping)." },
		{ "FixedSampleRate.Comment", "// Enforces fixed sample rate for all members in the bank/collection,\n// enabling them to be of unique duration/number of samples. Good for\n// use cases when entries are being treated as separate, discrete but\n// related audio to be played back at a shared speed (ex. traditional\n// \"samplers\" or granulation).\n" },
		{ "FixedSampleRate.Name", "EWaveTableSamplingMode::FixedSampleRate" },
		{ "FixedSampleRate.ToolTip", "Enforces fixed sample rate for all members in the bank/collection,\nenabling them to be of unique duration/number of samples. Good for\nuse cases when entries are being treated as separate, discrete but\nrelated audio to be played back at a shared speed (ex. traditional\n\"samplers\" or granulation)." },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "SamplingMode of a given bank or collection of WaveTables" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWaveTableSamplingMode::FixedSampleRate", (int64)EWaveTableSamplingMode::FixedSampleRate },
		{ "EWaveTableSamplingMode::FixedResolution", (int64)EWaveTableSamplingMode::FixedResolution },
		{ "EWaveTableSamplingMode::COUNT", (int64)EWaveTableSamplingMode::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WaveTable,
	nullptr,
	"EWaveTableSamplingMode",
	"EWaveTableSamplingMode",
	Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode()
{
	if (!Z_Registration_Info_UEnum_EWaveTableSamplingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveTableSamplingMode.InnerSingleton, Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWaveTableSamplingMode.InnerSingleton;
}
// End Enum EWaveTableSamplingMode

// Begin ScriptStruct FWaveTableSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveTableSettings;
class UScriptStruct* FWaveTableSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveTableSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableSettings, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("WaveTableSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WaveTableSettings.OuterSingleton;
}
template<> WAVETABLE_API UScriptStruct* StaticStruct<FWaveTableSettings>()
{
	return FWaveTableSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWaveTableSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// File to import\n" },
		{ "FilePathFilter", "Audio Files (*.aif, *.aiff, *.flac, *.ogg, *.wav)|*.aif;*.aiff;*.flac;*.ogg;*.wav" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "File to import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Index of channel in file to build WaveTable from (wraps if channel is greater than number in file)\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Index of channel in file to build WaveTable from (wraps if channel is greater than number in file)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Source data last imported from the source file\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Source data last imported from the source file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSampleRate_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Source sample rate from last imported source file\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Source sample rate from last imported source file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to phase shift of table\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to phase shift of table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to remove from beginning of sampled WaveTable.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to remove from beginning of sampled WaveTable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tail_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to remove from end of sampled WaveTable.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to remove from end of sampled WaveTable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeIn_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to fade in over.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to fade in over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOut_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to fade out over.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to fade out over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether or not to normalize the WaveTable.\n" },
		{ "DisplayAfter", "SourceData" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Whether or not to normalize the WaveTable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether or not to remove offset from original file\n// (analogous to \"DC offset\" in circuit theory).\n" },
		{ "DisplayAfter", "bNormalize" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Whether or not to remove offset from original file\n(analogous to \"DC offset\" in circuit theory)." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePCMData_MetaData[] = {
		{ "Deprecated", "5.3" },
		{ "DeprecationMessage", "Migrated to FWaveTableData member 'SourceData' to support multiple bitdepths" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceSampleRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Phase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOut;
	static void NewProp_bNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
	static void NewProp_bRemoveOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOffset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourcePCMData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourcePCMData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveTableSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, FilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, ChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelIndex_MetaData), NewProp_ChannelIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, SourceData), Z_Construct_UScriptStruct_FWaveTableData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) }; // 2890722187
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourceSampleRate = { "SourceSampleRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, SourceSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSampleRate_MetaData), NewProp_SourceSampleRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, Phase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phase_MetaData), NewProp_Phase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, Top), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_MetaData), NewProp_Top_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Tail = { "Tail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, Tail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tail_MetaData), NewProp_Tail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, FadeIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeIn_MetaData), NewProp_FadeIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeOut = { "FadeOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, FadeOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOut_MetaData), NewProp_FadeOut_MetaData) };
void Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_SetBit(void* Obj)
{
	((FWaveTableSettings*)Obj)->bNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWaveTableSettings), &Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalize_MetaData), NewProp_bNormalize_MetaData) };
void Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_SetBit(void* Obj)
{
	((FWaveTableSettings*)Obj)->bRemoveOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset = { "bRemoveOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWaveTableSettings), &Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveOffset_MetaData), NewProp_bRemoveOffset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData_Inner = { "SourcePCMData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData = { "SourcePCMData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableSettings, SourcePCMData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePCMData_MetaData), NewProp_SourcePCMData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveTableSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourceSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Phase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Tail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
	nullptr,
	&NewStructOps,
	"WaveTableSettings",
	Z_Construct_UScriptStruct_FWaveTableSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::PropPointers),
	sizeof(FWaveTableSettings),
	alignof(FWaveTableSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveTableSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveTableSettings()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveTableSettings.InnerSingleton, Z_Construct_UScriptStruct_FWaveTableSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WaveTableSettings.InnerSingleton;
}
// End ScriptStruct FWaveTableSettings

// Begin Enum EWaveTableCurve
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveTableCurve;
static UEnum* EWaveTableCurve_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableCurve, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("EWaveTableCurve"));
	}
	return Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton;
}
template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableCurve>()
{
	return EWaveTableCurve_StaticEnum();
}
struct Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EWaveTableCurve::Count" },
		{ "Custom.Comment", "// Design a custom curve unique to the owning transform\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EWaveTableCurve::Custom" },
		{ "Custom.ToolTip", "Design a custom curve unique to the owning transform" },
		{ "Exp.DisplayName", "Exponential" },
		{ "Exp.Name", "EWaveTableCurve::Exp" },
		{ "Exp_Inverse.DisplayName", "Exponential (Inverse)" },
		{ "Exp_Inverse.Name", "EWaveTableCurve::Exp_Inverse" },
		{ "File.Comment", "// Generate WaveTable from audio file\n" },
		{ "File.DisplayName", "File" },
		{ "File.Name", "EWaveTableCurve::File" },
		{ "File.ToolTip", "Generate WaveTable from audio file" },
		{ "Linear.DisplayName", "Linear (Ramp In)" },
		{ "Linear.Name", "EWaveTableCurve::Linear" },
		{ "Linear_Inv.DisplayName", "Linear (Ramp Out)" },
		{ "Linear_Inv.Name", "EWaveTableCurve::Linear_Inv" },
		{ "Log.DisplayName", "Log" },
		{ "Log.Name", "EWaveTableCurve::Log" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "SCurve.DisplayName", "Sin (+/- 90 deg)" },
		{ "SCurve.Name", "EWaveTableCurve::SCurve" },
		{ "Shared.Comment", "// Reference a shared curve asset\n" },
		{ "Shared.DisplayName", "Curve Asset" },
		{ "Shared.Name", "EWaveTableCurve::Shared" },
		{ "Shared.ToolTip", "Reference a shared curve asset" },
		{ "Sin.DisplayName", "Sin (90 deg)" },
		{ "Sin.Name", "EWaveTableCurve::Sin" },
		{ "Sin_Full.DisplayName", "Sin (360 deg)" },
		{ "Sin_Full.Name", "EWaveTableCurve::Sin_Full" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWaveTableCurve::Linear", (int64)EWaveTableCurve::Linear },
		{ "EWaveTableCurve::Linear_Inv", (int64)EWaveTableCurve::Linear_Inv },
		{ "EWaveTableCurve::Exp", (int64)EWaveTableCurve::Exp },
		{ "EWaveTableCurve::Exp_Inverse", (int64)EWaveTableCurve::Exp_Inverse },
		{ "EWaveTableCurve::Log", (int64)EWaveTableCurve::Log },
		{ "EWaveTableCurve::Sin", (int64)EWaveTableCurve::Sin },
		{ "EWaveTableCurve::Sin_Full", (int64)EWaveTableCurve::Sin_Full },
		{ "EWaveTableCurve::SCurve", (int64)EWaveTableCurve::SCurve },
		{ "EWaveTableCurve::Shared", (int64)EWaveTableCurve::Shared },
		{ "EWaveTableCurve::Custom", (int64)EWaveTableCurve::Custom },
		{ "EWaveTableCurve::File", (int64)EWaveTableCurve::File },
		{ "EWaveTableCurve::Count", (int64)EWaveTableCurve::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WaveTable,
	nullptr,
	"EWaveTableCurve",
	"EWaveTableCurve",
	Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WaveTable_EWaveTableCurve()
{
	if (!Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton, Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton;
}
// End Enum EWaveTableCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWaveTableResolution_StaticEnum, TEXT("EWaveTableResolution"), &Z_Registration_Info_UEnum_EWaveTableResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 398511730U) },
		{ EWaveTableSamplingMode_StaticEnum, TEXT("EWaveTableSamplingMode"), &Z_Registration_Info_UEnum_EWaveTableSamplingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4256205651U) },
		{ EWaveTableCurve_StaticEnum, TEXT("EWaveTableCurve"), &Z_Registration_Info_UEnum_EWaveTableCurve, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3813316123U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaveTableSettings::StaticStruct, Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewStructOps, TEXT("WaveTableSettings"), &Z_Registration_Info_UScriptStruct_WaveTableSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveTableSettings), 1363606618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_211121862(TEXT("/Script/WaveTable"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
