// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectBitCrusher.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectBitCrusher() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSourceEffectBitCrusherBaseSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings;
class UScriptStruct* FSourceEffectBitCrusherBaseSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectBitCrusherBaseSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectBitCrusherBaseSettings>()
{
	return FSourceEffectBitCrusherBaseSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "96000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// The reduced frequency to use for the audio stream. \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced frequency to use for the audio stream." },
		{ "UIMax", "16000.0" },
		{ "UIMin", "500.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The reduced bit depth to use for the audio stream\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced bit depth to use for the audio stream" },
		{ "UIMax", "16.0" },
		{ "UIMin", "1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BitDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherBaseSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectBitCrusherBaseSettings, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectBitCrusherBaseSettings, BitDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitDepth_MetaData), NewProp_BitDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_BitDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectBitCrusherBaseSettings",
	Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::PropPointers),
	sizeof(FSourceEffectBitCrusherBaseSettings),
	alignof(FSourceEffectBitCrusherBaseSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectBitCrusherBaseSettings

// Begin ScriptStruct FSourceEffectBitCrusherSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings;
class UScriptStruct* FSourceEffectBitCrusherSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectBitCrusherSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectBitCrusherSettings>()
{
	return FSourceEffectBitCrusherSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrushedSampleRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "PropertyDeprecated", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRateModulation_MetaData[] = {
		{ "AudioParam", "SampleRate" },
		{ "AudioParamClass", "SoundModulationParameterFrequency" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "96000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// The reduced frequency to use for the audio stream. \n" },
		{ "DisplayName", "Sample Rate" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced frequency to use for the audio stream." },
		{ "UIMax", "16000.0" },
		{ "UIMin", "500.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrushedBits_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "PropertyDeprecated", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitModulation_MetaData[] = {
		{ "AudioParam", "BitDepth" },
		{ "AudioParamClass", "SoundModulationParameterScaled" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The reduced bit depth to use for the audio stream\n" },
		{ "DisplayName", "Bit Depth" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced bit depth to use for the audio stream" },
		{ "UIMax", "16.0" },
		{ "UIMin", "1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrushedSampleRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleRateModulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrushedBits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BitModulation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate = { "CrushedSampleRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, CrushedSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrushedSampleRate_MetaData), NewProp_CrushedSampleRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_SampleRateModulation = { "SampleRateModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, SampleRateModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRateModulation_MetaData), NewProp_SampleRateModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits = { "CrushedBits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, CrushedBits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrushedBits_MetaData), NewProp_CrushedBits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_BitModulation = { "BitModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, BitModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitModulation_MetaData), NewProp_BitModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_SampleRateModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_BitModulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectBitCrusherSettings",
	Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers),
	sizeof(FSourceEffectBitCrusherSettings),
	alignof(FSourceEffectBitCrusherSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectBitCrusherSettings

// Begin Class USourceEffectBitCrusherPreset Function SetBitModulator
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetBitModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetBitModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetBitModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::SourceEffectBitCrusherPreset_eventSetBitModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::SourceEffectBitCrusherPreset_eventSetBitModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetBitModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBitModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetBitModulator

// Begin Class USourceEffectBitCrusherPreset Function SetBitModulators
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetBitModulators_Parms
	{
		TSet<USoundModulatorBase*> InModulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InModulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InModulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::NewProp_InModulators_ElementProp = { "InModulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::NewProp_InModulators = { "InModulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetBitModulators_Parms, InModulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulators_MetaData), NewProp_InModulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::NewProp_InModulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::NewProp_InModulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetBitModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::SourceEffectBitCrusherPreset_eventSetBitModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::SourceEffectBitCrusherPreset_eventSetBitModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetBitModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_InModulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBitModulators(Z_Param_Out_InModulators);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetBitModulators

// Begin Class USourceEffectBitCrusherPreset Function SetBits
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetBits_Parms
	{
		float Bits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::NewProp_Bits = { "Bits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetBits_Parms, Bits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::NewProp_Bits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetBits", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::SourceEffectBitCrusherPreset_eventSetBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::SourceEffectBitCrusherPreset_eventSetBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetBits)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Bits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBits(Z_Param_Bits);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetBits

// Begin Class USourceEffectBitCrusherPreset Function SetModulationSettings
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetModulationSettings_Parms
	{
		FSourceEffectBitCrusherSettings ModulationSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetModulationSettings_Parms, ModulationSettings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationSettings_MetaData), NewProp_ModulationSettings_MetaData) }; // 3169778218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::NewProp_ModulationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetModulationSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::SourceEffectBitCrusherPreset_eventSetModulationSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::SourceEffectBitCrusherPreset_eventSetModulationSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetModulationSettings)
{
	P_GET_STRUCT_REF(FSourceEffectBitCrusherSettings,Z_Param_Out_ModulationSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModulationSettings(Z_Param_Out_ModulationSettings);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetModulationSettings

// Begin Class USourceEffectBitCrusherPreset Function SetSampleRate
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetSampleRate_Parms
	{
		float SampleRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSampleRate_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSampleRate", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::SourceEffectBitCrusherPreset_eventSetSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::SourceEffectBitCrusherPreset_eventSetSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSampleRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSampleRate(Z_Param_SampleRate);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetSampleRate

// Begin Class USourceEffectBitCrusherPreset Function SetSampleRateModulator
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetSampleRateModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSampleRateModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSampleRateModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::SourceEffectBitCrusherPreset_eventSetSampleRateModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::SourceEffectBitCrusherPreset_eventSetSampleRateModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSampleRateModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSampleRateModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetSampleRateModulator

// Begin Class USourceEffectBitCrusherPreset Function SetSampleRateModulators
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetSampleRateModulators_Parms
	{
		TSet<USoundModulatorBase*> InModulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InModulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InModulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::NewProp_InModulators_ElementProp = { "InModulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::NewProp_InModulators = { "InModulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSampleRateModulators_Parms, InModulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulators_MetaData), NewProp_InModulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::NewProp_InModulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::NewProp_InModulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSampleRateModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::SourceEffectBitCrusherPreset_eventSetSampleRateModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::SourceEffectBitCrusherPreset_eventSetSampleRateModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSampleRateModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_InModulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSampleRateModulators(Z_Param_Out_InModulators);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetSampleRateModulators

// Begin Class USourceEffectBitCrusherPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics
{
	struct SourceEffectBitCrusherPreset_eventSetSettings_Parms
	{
		FSourceEffectBitCrusherBaseSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "Comment", "// Sets just base (i.e. carrier) setting values without modifying modulation source references\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "Sets just base (i.e. carrier) setting values without modifying modulation source references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1339397319
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::SourceEffectBitCrusherPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::SourceEffectBitCrusherPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectBitCrusherBaseSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_Settings);
	P_NATIVE_END;
}
// End Class USourceEffectBitCrusherPreset Function SetSettings

// Begin Class USourceEffectBitCrusherPreset
void USourceEffectBitCrusherPreset::StaticRegisterNativesUSourceEffectBitCrusherPreset()
{
	UClass* Class = USourceEffectBitCrusherPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBitModulator", &USourceEffectBitCrusherPreset::execSetBitModulator },
		{ "SetBitModulators", &USourceEffectBitCrusherPreset::execSetBitModulators },
		{ "SetBits", &USourceEffectBitCrusherPreset::execSetBits },
		{ "SetModulationSettings", &USourceEffectBitCrusherPreset::execSetModulationSettings },
		{ "SetSampleRate", &USourceEffectBitCrusherPreset::execSetSampleRate },
		{ "SetSampleRateModulator", &USourceEffectBitCrusherPreset::execSetSampleRateModulator },
		{ "SetSampleRateModulators", &USourceEffectBitCrusherPreset::execSetSampleRateModulators },
		{ "SetSettings", &USourceEffectBitCrusherPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectBitCrusherPreset);
UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister()
{
	return USourceEffectBitCrusherPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectBitCrusher.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator, "SetBitModulator" }, // 2700373021
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulators, "SetBitModulators" }, // 1328902467
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits, "SetBits" }, // 2062132424
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings, "SetModulationSettings" }, // 4164675172
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate, "SetSampleRate" }, // 2837811003
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator, "SetSampleRateModulator" }, // 2481228899
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulators, "SetSampleRateModulators" }, // 3179854365
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings, "SetSettings" }, // 4046766848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectBitCrusherPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectBitCrusherPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3169778218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::ClassParams = {
	&USourceEffectBitCrusherPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.OuterSingleton, Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectBitCrusherPreset>()
{
	return USourceEffectBitCrusherPreset::StaticClass();
}
USourceEffectBitCrusherPreset::USourceEffectBitCrusherPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectBitCrusherPreset);
USourceEffectBitCrusherPreset::~USourceEffectBitCrusherPreset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USourceEffectBitCrusherPreset)
// End Class USourceEffectBitCrusherPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectBitCrusherBaseSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewStructOps, TEXT("SourceEffectBitCrusherBaseSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherBaseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectBitCrusherBaseSettings), 1339397319U) },
		{ FSourceEffectBitCrusherSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewStructOps, TEXT("SourceEffectBitCrusherSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectBitCrusherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectBitCrusherSettings), 3169778218U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectBitCrusherPreset, USourceEffectBitCrusherPreset::StaticClass, TEXT("USourceEffectBitCrusherPreset"), &Z_Registration_Info_UClass_USourceEffectBitCrusherPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectBitCrusherPreset), 681669596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_3600429596(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
