// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectChorus.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectChorus() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectChorusPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectChorusPreset_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSourceEffectChorusBaseSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings;
class UScriptStruct* FSourceEffectChorusBaseSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectChorusBaseSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectChorusBaseSettings>()
{
	return FSourceEffectChorusBaseSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The depth of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The frequency of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The frequency of the chorus effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The feedback of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The wet level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The dry level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The spread of the effect (larger means greater difference between left and right delay lines)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The spread of the effect (larger means greater difference between left and right delay lines)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChorusBaseSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Feedback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedback_MetaData), NewProp_Feedback_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, WetLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevel_MetaData), NewProp_WetLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, DryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevel_MetaData), NewProp_DryLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectChorusBaseSettings",
	Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers),
	sizeof(FSourceEffectChorusBaseSettings),
	alignof(FSourceEffectChorusBaseSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectChorusBaseSettings

// Begin ScriptStruct FSourceEffectChorusSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings;
class UScriptStruct* FSourceEffectChorusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChorusSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectChorusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectChorusSettings>()
{
	return FSourceEffectChorusSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "DisplayName", "Depth" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The depth of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyModulation_MetaData[] = {
		{ "AudioParam", "LowRateFrequency" },
		{ "AudioParamClass", "SoundModulationParameterFrequency" },
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The frequency of the chorus effect\n" },
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The frequency of the chorus effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the chorus effect\n" },
		{ "DisplayName", "Feedback" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The feedback of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the chorus effect\n" },
		{ "DisplayName", "Wet Level" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The wet level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the chorus effect\n" },
		{ "DisplayName", "Dry Level" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The dry level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The spread of the effect (larger means greater difference between left and right delay lines)\n" },
		{ "DisplayName", "Spread" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The spread of the effect (larger means greater difference between left and right delay lines)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DepthModulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrequencyModulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FeedbackModulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WetModulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DryModulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpreadModulation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChorusSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Feedback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedback_MetaData), NewProp_Feedback_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, WetLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevel_MetaData), NewProp_WetLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, DryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevel_MetaData), NewProp_DryLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation = { "DepthModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, DepthModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthModulation_MetaData), NewProp_DepthModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation = { "FrequencyModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, FrequencyModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyModulation_MetaData), NewProp_FrequencyModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation = { "FeedbackModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, FeedbackModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackModulation_MetaData), NewProp_FeedbackModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation = { "WetModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, WetModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetModulation_MetaData), NewProp_WetModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation = { "DryModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, DryModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryModulation_MetaData), NewProp_DryModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation = { "SpreadModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, SpreadModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadModulation_MetaData), NewProp_SpreadModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectChorusSettings",
	Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers),
	sizeof(FSourceEffectChorusSettings),
	alignof(FSourceEffectChorusSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectChorusSettings

// Begin Class USourceEffectChorusPreset Function SetDepth
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics
{
	struct SourceEffectChorusPreset_eventSetDepth_Parms
	{
		float Depth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepth_Parms, Depth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepth", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::SourceEffectChorusPreset_eventSetDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::SourceEffectChorusPreset_eventSetDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDepth(Z_Param_Depth);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetDepth

// Begin Class USourceEffectChorusPreset Function SetDepthModulator
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics
{
	struct SourceEffectChorusPreset_eventSetDepthModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepthModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepthModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::SourceEffectChorusPreset_eventSetDepthModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::SourceEffectChorusPreset_eventSetDepthModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepthModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDepthModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetDepthModulator

// Begin Class USourceEffectChorusPreset Function SetDepthModulators
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics
{
	struct SourceEffectChorusPreset_eventSetDepthModulators_Parms
	{
		TSet<USoundModulatorBase*> Modulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepthModulators_Parms, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepthModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::SourceEffectChorusPreset_eventSetDepthModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::SourceEffectChorusPreset_eventSetDepthModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepthModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDepthModulators(Z_Param_Out_Modulators);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetDepthModulators

// Begin Class USourceEffectChorusPreset Function SetDry
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics
{
	struct SourceEffectChorusPreset_eventSetDry_Parms
	{
		float DryAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::NewProp_DryAmount = { "DryAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDry_Parms, DryAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::NewProp_DryAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDry", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::SourceEffectChorusPreset_eventSetDry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::SourceEffectChorusPreset_eventSetDry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDry)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DryAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDry(Z_Param_DryAmount);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetDry

// Begin Class USourceEffectChorusPreset Function SetDryModulator
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics
{
	struct SourceEffectChorusPreset_eventSetDryModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDryModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDryModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::SourceEffectChorusPreset_eventSetDryModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::SourceEffectChorusPreset_eventSetDryModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDryModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDryModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetDryModulator

// Begin Class USourceEffectChorusPreset Function SetDryModulators
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics
{
	struct SourceEffectChorusPreset_eventSetDryModulators_Parms
	{
		TSet<USoundModulatorBase*> Modulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDryModulators_Parms, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDryModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::SourceEffectChorusPreset_eventSetDryModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::SourceEffectChorusPreset_eventSetDryModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDryModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDryModulators(Z_Param_Out_Modulators);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetDryModulators

// Begin Class USourceEffectChorusPreset Function SetFeedback
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics
{
	struct SourceEffectChorusPreset_eventSetFeedback_Parms
	{
		float Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedback_Parms, Feedback), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedback", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::SourceEffectChorusPreset_eventSetFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::SourceEffectChorusPreset_eventSetFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedback)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFeedback(Z_Param_Feedback);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetFeedback

// Begin Class USourceEffectChorusPreset Function SetFeedbackModulator
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics
{
	struct SourceEffectChorusPreset_eventSetFeedbackModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedbackModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedbackModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::SourceEffectChorusPreset_eventSetFeedbackModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::SourceEffectChorusPreset_eventSetFeedbackModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedbackModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFeedbackModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetFeedbackModulator

// Begin Class USourceEffectChorusPreset Function SetFeedbackModulators
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics
{
	struct SourceEffectChorusPreset_eventSetFeedbackModulators_Parms
	{
		TSet<USoundModulatorBase*> Modulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedbackModulators_Parms, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedbackModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::SourceEffectChorusPreset_eventSetFeedbackModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::SourceEffectChorusPreset_eventSetFeedbackModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedbackModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFeedbackModulators(Z_Param_Out_Modulators);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetFeedbackModulators

// Begin Class USourceEffectChorusPreset Function SetFrequency
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics
{
	struct SourceEffectChorusPreset_eventSetFrequency_Parms
	{
		float Frequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequency_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequency", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::SourceEffectChorusPreset_eventSetFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::SourceEffectChorusPreset_eventSetFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequency(Z_Param_Frequency);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetFrequency

// Begin Class USourceEffectChorusPreset Function SetFrequencyModulator
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics
{
	struct SourceEffectChorusPreset_eventSetFrequencyModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequencyModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequencyModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::SourceEffectChorusPreset_eventSetFrequencyModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::SourceEffectChorusPreset_eventSetFrequencyModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequencyModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequencyModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetFrequencyModulator

// Begin Class USourceEffectChorusPreset Function SetFrequencyModulators
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics
{
	struct SourceEffectChorusPreset_eventSetFrequencyModulators_Parms
	{
		TSet<USoundModulatorBase*> Modulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequencyModulators_Parms, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequencyModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::SourceEffectChorusPreset_eventSetFrequencyModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::SourceEffectChorusPreset_eventSetFrequencyModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequencyModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequencyModulators(Z_Param_Out_Modulators);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetFrequencyModulators

// Begin Class USourceEffectChorusPreset Function SetModulationSettings
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics
{
	struct SourceEffectChorusPreset_eventSetModulationSettings_Parms
	{
		FSourceEffectChorusSettings ModulationSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetModulationSettings_Parms, ModulationSettings), Z_Construct_UScriptStruct_FSourceEffectChorusSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationSettings_MetaData), NewProp_ModulationSettings_MetaData) }; // 9876152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetModulationSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::SourceEffectChorusPreset_eventSetModulationSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::SourceEffectChorusPreset_eventSetModulationSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetModulationSettings)
{
	P_GET_STRUCT_REF(FSourceEffectChorusSettings,Z_Param_Out_ModulationSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModulationSettings(Z_Param_Out_ModulationSettings);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetModulationSettings

// Begin Class USourceEffectChorusPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics
{
	struct SourceEffectChorusPreset_eventSetSettings_Parms
	{
		FSourceEffectChorusBaseSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "Comment", "// Sets just base (i.e. carrier) setting values without modifying modulation source references\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2129949450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::SourceEffectChorusPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::SourceEffectChorusPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectChorusBaseSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_Settings);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetSettings

// Begin Class USourceEffectChorusPreset Function SetSpread
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics
{
	struct SourceEffectChorusPreset_eventSetSpread_Parms
	{
		float Spread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpread_Parms, Spread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpread", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::SourceEffectChorusPreset_eventSetSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::SourceEffectChorusPreset_eventSetSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpread(Z_Param_Spread);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetSpread

// Begin Class USourceEffectChorusPreset Function SetSpreadModulator
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics
{
	struct SourceEffectChorusPreset_eventSetSpreadModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpreadModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpreadModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::SourceEffectChorusPreset_eventSetSpreadModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::SourceEffectChorusPreset_eventSetSpreadModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpreadModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpreadModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetSpreadModulator

// Begin Class USourceEffectChorusPreset Function SetSpreadModulators
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics
{
	struct SourceEffectChorusPreset_eventSetSpreadModulators_Parms
	{
		TSet<USoundModulatorBase*> Modulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpreadModulators_Parms, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpreadModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::SourceEffectChorusPreset_eventSetSpreadModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::SourceEffectChorusPreset_eventSetSpreadModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpreadModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpreadModulators(Z_Param_Out_Modulators);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetSpreadModulators

// Begin Class USourceEffectChorusPreset Function SetWet
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics
{
	struct SourceEffectChorusPreset_eventSetWet_Parms
	{
		float WetAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::NewProp_WetAmount = { "WetAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWet_Parms, WetAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::NewProp_WetAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWet", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::SourceEffectChorusPreset_eventSetWet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::SourceEffectChorusPreset_eventSetWet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWet)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_WetAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWet(Z_Param_WetAmount);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetWet

// Begin Class USourceEffectChorusPreset Function SetWetModulator
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics
{
	struct SourceEffectChorusPreset_eventSetWetModulator_Parms
	{
		const USoundModulatorBase* Modulator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWetModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWetModulator", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::SourceEffectChorusPreset_eventSetWetModulator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::SourceEffectChorusPreset_eventSetWetModulator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWetModulator)
{
	P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWetModulator(Z_Param_Modulator);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetWetModulator

// Begin Class USourceEffectChorusPreset Function SetWetModulators
struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics
{
	struct SourceEffectChorusPreset_eventSetWetModulators_Parms
	{
		TSet<USoundModulatorBase*> Modulators;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWetModulators_Parms, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWetModulators", nullptr, nullptr, Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::SourceEffectChorusPreset_eventSetWetModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::SourceEffectChorusPreset_eventSetWetModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWetModulators)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWetModulators(Z_Param_Out_Modulators);
	P_NATIVE_END;
}
// End Class USourceEffectChorusPreset Function SetWetModulators

// Begin Class USourceEffectChorusPreset
void USourceEffectChorusPreset::StaticRegisterNativesUSourceEffectChorusPreset()
{
	UClass* Class = USourceEffectChorusPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDepth", &USourceEffectChorusPreset::execSetDepth },
		{ "SetDepthModulator", &USourceEffectChorusPreset::execSetDepthModulator },
		{ "SetDepthModulators", &USourceEffectChorusPreset::execSetDepthModulators },
		{ "SetDry", &USourceEffectChorusPreset::execSetDry },
		{ "SetDryModulator", &USourceEffectChorusPreset::execSetDryModulator },
		{ "SetDryModulators", &USourceEffectChorusPreset::execSetDryModulators },
		{ "SetFeedback", &USourceEffectChorusPreset::execSetFeedback },
		{ "SetFeedbackModulator", &USourceEffectChorusPreset::execSetFeedbackModulator },
		{ "SetFeedbackModulators", &USourceEffectChorusPreset::execSetFeedbackModulators },
		{ "SetFrequency", &USourceEffectChorusPreset::execSetFrequency },
		{ "SetFrequencyModulator", &USourceEffectChorusPreset::execSetFrequencyModulator },
		{ "SetFrequencyModulators", &USourceEffectChorusPreset::execSetFrequencyModulators },
		{ "SetModulationSettings", &USourceEffectChorusPreset::execSetModulationSettings },
		{ "SetSettings", &USourceEffectChorusPreset::execSetSettings },
		{ "SetSpread", &USourceEffectChorusPreset::execSetSpread },
		{ "SetSpreadModulator", &USourceEffectChorusPreset::execSetSpreadModulator },
		{ "SetSpreadModulators", &USourceEffectChorusPreset::execSetSpreadModulators },
		{ "SetWet", &USourceEffectChorusPreset::execSetWet },
		{ "SetWetModulator", &USourceEffectChorusPreset::execSetWetModulator },
		{ "SetWetModulators", &USourceEffectChorusPreset::execSetWetModulators },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectChorusPreset);
UClass* Z_Construct_UClass_USourceEffectChorusPreset_NoRegister()
{
	return USourceEffectChorusPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectChorusPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectChorus.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth, "SetDepth" }, // 472194013
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator, "SetDepthModulator" }, // 401875484
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators, "SetDepthModulators" }, // 1546095311
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDry, "SetDry" }, // 2499714667
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator, "SetDryModulator" }, // 1561761059
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators, "SetDryModulators" }, // 691185757
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback, "SetFeedback" }, // 2502847135
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator, "SetFeedbackModulator" }, // 32733794
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators, "SetFeedbackModulators" }, // 3388393260
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency, "SetFrequency" }, // 3682444594
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator, "SetFrequencyModulator" }, // 4197735222
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators, "SetFrequencyModulators" }, // 947516658
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings, "SetModulationSettings" }, // 387186066
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings, "SetSettings" }, // 365549559
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread, "SetSpread" }, // 2050871260
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator, "SetSpreadModulator" }, // 2742074201
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators, "SetSpreadModulators" }, // 195812690
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWet, "SetWet" }, // 2323852866
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator, "SetWetModulator" }, // 4172080206
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators, "SetWetModulators" }, // 4011900126
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectChorusPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectChorusPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectChorusSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 9876152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectChorusPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectChorusPreset_Statics::ClassParams = {
	&USourceEffectChorusPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectChorusPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton, Z_Construct_UClass_USourceEffectChorusPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectChorusPreset>()
{
	return USourceEffectChorusPreset::StaticClass();
}
USourceEffectChorusPreset::USourceEffectChorusPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectChorusPreset);
USourceEffectChorusPreset::~USourceEffectChorusPreset() {}
// End Class USourceEffectChorusPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectChorusBaseSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewStructOps, TEXT("SourceEffectChorusBaseSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectChorusBaseSettings), 2129949450U) },
		{ FSourceEffectChorusSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewStructOps, TEXT("SourceEffectChorusSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectChorusSettings), 9876152U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectChorusPreset, USourceEffectChorusPreset::StaticClass, TEXT("USourceEffectChorusPreset"), &Z_Registration_Info_UClass_USourceEffectChorusPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectChorusPreset), 3697992190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_4195879309(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
