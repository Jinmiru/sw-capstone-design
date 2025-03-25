// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/EpicSynth1Component.h"
#include "Synthesis/Public/EpicSynth1Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicSynth1Component() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthComponent();
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthComponent_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthLibrary();
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthLibrary_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthPresetBank();
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthPresetBank_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1OscType();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchSource();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterType();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOMode();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOPatchType();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOType();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvPatch();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FEpicSynth1Patch();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPreset();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPresetBankEntry();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FPatchId();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth1PatchCable();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FEpicSynth1Patch
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EpicSynth1Patch;
class UScriptStruct* FEpicSynth1Patch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EpicSynth1Patch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EpicSynth1Patch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicSynth1Patch, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EpicSynth1Patch"));
	}
	return Z_Registration_Info_UScriptStruct_EpicSynth1Patch.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FEpicSynth1Patch>()
{
	return FEpicSynth1Patch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatchSource_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// A modular synth patch source (e.g. LFO1/LFO2/Modulation Envelope)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "A modular synth patch source (e.g. LFO1/LFO2/Modulation Envelope)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatchCables_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Patch cables to patch destinations from the patch source.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Patch cables to patch destinations from the patch source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatchSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PatchSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatchCables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatchCables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicSynth1Patch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource = { "PatchSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicSynth1Patch, PatchSource), Z_Construct_UEnum_Synthesis_ESynth1PatchSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatchSource_MetaData), NewProp_PatchSource_MetaData) }; // 1379978539
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables_Inner = { "PatchCables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSynth1PatchCable, METADATA_PARAMS(0, nullptr) }; // 861438757
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables = { "PatchCables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicSynth1Patch, PatchCables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatchCables_MetaData), NewProp_PatchCables_MetaData) }; // 861438757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"EpicSynth1Patch",
	Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::PropPointers),
	sizeof(FEpicSynth1Patch),
	alignof(FEpicSynth1Patch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEpicSynth1Patch()
{
	if (!Z_Registration_Info_UScriptStruct_EpicSynth1Patch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EpicSynth1Patch.InnerSingleton, Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EpicSynth1Patch.InnerSingleton;
}
// End ScriptStruct FEpicSynth1Patch

// Begin ScriptStruct FModularSynthPreset
static_assert(std::is_polymorphic<FModularSynthPreset>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FModularSynthPreset cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularSynthPreset;
class UScriptStruct* FModularSynthPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularSynthPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularSynthPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularSynthPreset, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ModularSynthPreset"));
	}
	return Z_Registration_Info_UScriptStruct_ModularSynthPreset.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FModularSynthPreset>()
{
	return FModularSynthPreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularSynthPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePolyphony_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to allow multiple synth voices.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to allow multiple synth voices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc1Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// What type of oscillator to use for oscillator 1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "What type of oscillator to use for oscillator 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc1Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain of oscillator 1 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain of oscillator 1 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc1Octave_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "-8.0" },
		{ "Comment", "// The octave of oscillator 1. [-8.0, 8.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The octave of oscillator 1. [-8.0, 8.0]" },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc1Semitones_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "12.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "// The semi-tones of oscillator 1. [-12.0, 12.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The semi-tones of oscillator 1. [-12.0, 12.0]" },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc1Cents_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "// The cents (hundreds of a semitone) of oscillator 1. [-100.0, 100.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The cents (hundreds of a semitone) of oscillator 1. [-100.0, 100.0]" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc1PulseWidth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The pulsewidth of oscillator 1 (when using a square wave type oscillator). [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The pulsewidth of oscillator 1 (when using a square wave type oscillator). [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc2Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// What type of oscillator to use for oscillator 2\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "What type of oscillator to use for oscillator 2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc2Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain of oscillator 2 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain of oscillator 2 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc2Octave_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "-8.0" },
		{ "Comment", "// The octave of oscillator 2. [-8.0, 8.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The octave of oscillator 2. [-8.0, 8.0]" },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc2Semitones_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "12.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "// The semi-tones of oscillator 2. [-12.0, 12.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The semi-tones of oscillator 2. [-12.0, 12.0]" },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc2Cents_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "// The cents (hundreds of a semitone) of oscillator 2. [-100.0, 100.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The cents (hundreds of a semitone) of oscillator 2. [-100.0, 100.0]" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Osc2PulseWidth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The pulsewidth of oscillator 2 (when using a square wave type oscillator). [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The pulsewidth of oscillator 2 (when using a square wave type oscillator). [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Portamento_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of portamento to use, which is the amount of pitch sliding from current note to next [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of portamento to use, which is the amount of pitch sliding from current note to next [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUnison_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Enables forcing the oscillators to have no stereo spread.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Enables forcing the oscillators to have no stereo spread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOscillatorSync_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not oscillator sync is enabled. Oscillator sync forces oscillator 2's phase to align with oscillator 1's phase.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not oscillator sync is enabled. Oscillator sync forces oscillator 2's phase to align with oscillator 1's phase." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of stereo spread to use between oscillator 1 and oscillator 2 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of stereo spread to use between oscillator 1 and oscillator 2 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pan_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// The stereo pan to use. 0.0 is center. -1.0 is left, 1.0 is right.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The stereo pan to use. 0.0 is center. -1.0 is left, 1.0 is right." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO1Frequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The frequency to use for LFO 1 (in hz) [0.0, 50.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The frequency to use for LFO 1 (in hz) [0.0, 50.0]" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO1Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain to use for LFO 1 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain to use for LFO 1 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO1Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The type of LFO to use for LFO 1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The type of LFO to use for LFO 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO1Mode_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The mode to use for LFO 1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The mode to use for LFO 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO1PatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type to use for LFO 1 (you can route this to any patchable parameter using the Patches parameter)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type to use for LFO 1 (you can route this to any patchable parameter using the Patches parameter)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO2Frequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The frequency to use for LFO 2 (in hz) [0.0, 50.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The frequency to use for LFO 2 (in hz) [0.0, 50.0]" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO2Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain to use for LFO 2 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain to use for LFO 2 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO2Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The type of LFO to use for LFO 2\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The type of LFO to use for LFO 2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO2Mode_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The mode to use for LFO 2\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The mode to use for LFO 2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LFO2PatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type to use for LFO 2 (you can route this to any patchable parameter using the Patches parameter)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type to use for LFO 2 (you can route this to any patchable parameter using the Patches parameter)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// The overall gain to use for the synthesizer in dB [-90.0, 20.0]\n" },
		{ "DisplayName", "Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The overall gain to use for the synthesizer in dB [-90.0, 20.0]" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope attack time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope attack time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope decay time (in ms)[0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope decay time (in ms)[0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SustainGain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope sustain amount (linear gain) [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope sustain amount (linear gain) [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope release time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope release time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModEnvPatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type for the envelope modulator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type for the envelope modulator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModEnvBiasPatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type for the envelope modulator bias output. Bias is when the envelope output is offset by the sustain gain.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type for the envelope modulator bias output. Bias is when the envelope output is offset by the sustain gain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertModulationEnvelope_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to invert the modulation envelope\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to invert the modulation envelope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertModulationEnvelopeBias_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to invert the modulation envelope bias output\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to invert the modulation envelope bias output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeDepth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The \"depth\" (i.e. how much) modulation envelope to use. This scales the modulation envelope output. [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The \"depth\" (i.e. how much) modulation envelope to use. This scales the modulation envelope output. [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeAttackTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope attack time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope attack time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeDecayTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope decay time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope decay time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeSustainGain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope sustain gain (linear gain) [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope sustain gain (linear gain) [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeReleaseTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope release time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope release time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLegato_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to use legato mode.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to use legato mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetrigger_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to use retrigger mode.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to use retrigger mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The output filter cutoff frequency (hz) [0.0, 20000.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter cutoff frequency (hz) [0.0, 20000.0]" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// The output filter resonance (Q) [0.5, 10]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter resonance (Q) [0.5, 10]" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The output filter type (lowpass, highpass, bandpass, bandstop)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter type (lowpass, highpass, bandpass, bandstop)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterAlgorithm_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The output filter circuit/algorithm type (one-pole ladder, ladder, state-variable)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter circuit/algorithm type (one-pole ladder, ladder, state-variable)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStereoDelayEnabled_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not stereo delay is enabled on the synth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not stereo delay is enabled on the synth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StereoDelayMode_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The stereo delay mode of the synth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The stereo delay mode of the synth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StereoDelayTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The stereo delay time (in ms) [0.0, 2000.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The stereo delay time (in ms) [0.0, 2000.0]" },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StereoDelayFeedback_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of feedback in the stereo delay line [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of feedback in the stereo delay line [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StereoDelayWetlevel_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The output wet level to use for the stereo delay time [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output wet level to use for the stereo delay time [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StereoDelayRatio_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The ratio between left and right stereo delay lines (wider value is more separation) [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The ratio between left and right stereo delay lines (wider value is more separation) [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChorusEnabled_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not the chorus effect is enabled\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not the chorus effect is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChorusDepth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The depth of the chorus effect [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChorusFeedback_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of feedback in the chorus effect [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of feedback in the chorus effect [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChorusFrequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The chorus LFO frequency [0.0, 20.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The chorus LFO frequency [0.0, 20.0]" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Patches_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The modular synth patch cords to use for the synth. Allows routing the LFO1/LFO2 and Modulation Envelope to any patchable destination. \n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modular synth patch cords to use for the synth. Allows routing the LFO1/LFO2 and Modulation Envelope to any patchable destination." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePolyphony_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePolyphony;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Osc1Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Osc1Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc1Gain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc1Octave;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc1Semitones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc1Cents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc1PulseWidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Osc2Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Osc2Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc2Gain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc2Octave;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc2Semitones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc2Cents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Osc2PulseWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Portamento;
	static void NewProp_bEnableUnison_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUnison;
	static void NewProp_bEnableOscillatorSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOscillatorSync;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LFO1Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LFO1Gain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFO1Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFO1Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFO1Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFO1Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFO1PatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFO1PatchType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LFO2Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LFO2Gain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFO2Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFO2Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFO2Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFO2Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFO2PatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFO2PatchType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModEnvPatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModEnvPatchType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModEnvBiasPatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModEnvBiasPatchType;
	static void NewProp_bInvertModulationEnvelope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertModulationEnvelope;
	static void NewProp_bInvertModulationEnvelopeBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertModulationEnvelopeBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeAttackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeDecayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeSustainGain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeReleaseTime;
	static void NewProp_bLegato_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLegato;
	static void NewProp_bRetrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterAlgorithm_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterAlgorithm;
	static void NewProp_bStereoDelayEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStereoDelayEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StereoDelayMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StereoDelayMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoDelayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoDelayFeedback;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoDelayWetlevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoDelayRatio;
	static void NewProp_bChorusEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChorusEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChorusDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChorusFeedback;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChorusFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Patches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Patches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularSynthPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bEnablePolyphony = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony = { "bEnablePolyphony", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePolyphony_MetaData), NewProp_bEnablePolyphony_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type = { "Osc1Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Type), Z_Construct_UEnum_Synthesis_ESynth1OscType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc1Type_MetaData), NewProp_Osc1Type_MetaData) }; // 1786457325
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Gain = { "Osc1Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc1Gain_MetaData), NewProp_Osc1Gain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Octave = { "Osc1Octave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Octave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc1Octave_MetaData), NewProp_Osc1Octave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Semitones = { "Osc1Semitones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Semitones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc1Semitones_MetaData), NewProp_Osc1Semitones_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Cents = { "Osc1Cents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Cents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc1Cents_MetaData), NewProp_Osc1Cents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1PulseWidth = { "Osc1PulseWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1PulseWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc1PulseWidth_MetaData), NewProp_Osc1PulseWidth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type = { "Osc2Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Type), Z_Construct_UEnum_Synthesis_ESynth1OscType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc2Type_MetaData), NewProp_Osc2Type_MetaData) }; // 1786457325
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Gain = { "Osc2Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc2Gain_MetaData), NewProp_Osc2Gain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Octave = { "Osc2Octave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Octave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc2Octave_MetaData), NewProp_Osc2Octave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Semitones = { "Osc2Semitones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Semitones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc2Semitones_MetaData), NewProp_Osc2Semitones_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Cents = { "Osc2Cents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Cents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc2Cents_MetaData), NewProp_Osc2Cents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2PulseWidth = { "Osc2PulseWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2PulseWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Osc2PulseWidth_MetaData), NewProp_Osc2PulseWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Portamento = { "Portamento", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Portamento), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Portamento_MetaData), NewProp_Portamento_MetaData) };
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bEnableUnison = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison = { "bEnableUnison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUnison_MetaData), NewProp_bEnableUnison_MetaData) };
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bEnableOscillatorSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync = { "bEnableOscillatorSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOscillatorSync_MetaData), NewProp_bEnableOscillatorSync_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Pan = { "Pan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Pan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pan_MetaData), NewProp_Pan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Frequency = { "LFO1Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO1Frequency_MetaData), NewProp_LFO1Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Gain = { "LFO1Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO1Gain_MetaData), NewProp_LFO1Gain_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type = { "LFO1Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Type), Z_Construct_UEnum_Synthesis_ESynthLFOType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO1Type_MetaData), NewProp_LFO1Type_MetaData) }; // 456560989
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode = { "LFO1Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Mode), Z_Construct_UEnum_Synthesis_ESynthLFOMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO1Mode_MetaData), NewProp_LFO1Mode_MetaData) }; // 3248464609
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType = { "LFO1PatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1PatchType), Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO1PatchType_MetaData), NewProp_LFO1PatchType_MetaData) }; // 49440938
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Frequency = { "LFO2Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO2Frequency_MetaData), NewProp_LFO2Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Gain = { "LFO2Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO2Gain_MetaData), NewProp_LFO2Gain_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type = { "LFO2Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Type), Z_Construct_UEnum_Synthesis_ESynthLFOType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO2Type_MetaData), NewProp_LFO2Type_MetaData) }; // 456560989
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode = { "LFO2Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Mode), Z_Construct_UEnum_Synthesis_ESynthLFOMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO2Mode_MetaData), NewProp_LFO2Mode_MetaData) }; // 3248464609
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType = { "LFO2PatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2PatchType), Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LFO2PatchType_MetaData), NewProp_LFO2PatchType_MetaData) }; // 49440938
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, GainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GainDb_MetaData), NewProp_GainDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, AttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTime_MetaData), NewProp_AttackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, DecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayTime_MetaData), NewProp_DecayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, SustainGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SustainGain_MetaData), NewProp_SustainGain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTime_MetaData), NewProp_ReleaseTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType = { "ModEnvPatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ModEnvPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvPatch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModEnvPatchType_MetaData), NewProp_ModEnvPatchType_MetaData) }; // 2687074453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType = { "ModEnvBiasPatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ModEnvBiasPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModEnvBiasPatchType_MetaData), NewProp_ModEnvBiasPatchType_MetaData) }; // 4159725048
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bInvertModulationEnvelope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope = { "bInvertModulationEnvelope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertModulationEnvelope_MetaData), NewProp_bInvertModulationEnvelope_MetaData) };
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bInvertModulationEnvelopeBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias = { "bInvertModulationEnvelopeBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertModulationEnvelopeBias_MetaData), NewProp_bInvertModulationEnvelopeBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDepth = { "ModulationEnvelopeDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationEnvelopeDepth_MetaData), NewProp_ModulationEnvelopeDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeAttackTime = { "ModulationEnvelopeAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeAttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationEnvelopeAttackTime_MetaData), NewProp_ModulationEnvelopeAttackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDecayTime = { "ModulationEnvelopeDecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeDecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationEnvelopeDecayTime_MetaData), NewProp_ModulationEnvelopeDecayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeSustainGain = { "ModulationEnvelopeSustainGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeSustainGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationEnvelopeSustainGain_MetaData), NewProp_ModulationEnvelopeSustainGain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeReleaseTime = { "ModulationEnvelopeReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationEnvelopeReleaseTime_MetaData), NewProp_ModulationEnvelopeReleaseTime_MetaData) };
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bLegato = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato = { "bLegato", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLegato_MetaData), NewProp_bLegato_MetaData) };
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bRetrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger = { "bRetrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetrigger_MetaData), NewProp_bRetrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, FilterFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterFrequency_MetaData), NewProp_FilterFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, FilterQ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterQ_MetaData), NewProp_FilterQ_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, FilterType), Z_Construct_UEnum_Synthesis_ESynthFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 3736983726
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm = { "FilterAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, FilterAlgorithm), Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterAlgorithm_MetaData), NewProp_FilterAlgorithm_MetaData) }; // 3272476595
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bStereoDelayEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled = { "bStereoDelayEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStereoDelayEnabled_MetaData), NewProp_bStereoDelayEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode = { "StereoDelayMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayMode), Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StereoDelayMode_MetaData), NewProp_StereoDelayMode_MetaData) }; // 1873300514
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayTime = { "StereoDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StereoDelayTime_MetaData), NewProp_StereoDelayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayFeedback = { "StereoDelayFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayFeedback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StereoDelayFeedback_MetaData), NewProp_StereoDelayFeedback_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayWetlevel = { "StereoDelayWetlevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayWetlevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StereoDelayWetlevel_MetaData), NewProp_StereoDelayWetlevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayRatio = { "StereoDelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StereoDelayRatio_MetaData), NewProp_StereoDelayRatio_MetaData) };
void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_SetBit(void* Obj)
{
	((FModularSynthPreset*)Obj)->bChorusEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled = { "bChorusEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChorusEnabled_MetaData), NewProp_bChorusEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusDepth = { "ChorusDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ChorusDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChorusDepth_MetaData), NewProp_ChorusDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFeedback = { "ChorusFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ChorusFeedback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChorusFeedback_MetaData), NewProp_ChorusFeedback_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFrequency = { "ChorusFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, ChorusFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChorusFrequency_MetaData), NewProp_ChorusFrequency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches_Inner = { "Patches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEpicSynth1Patch, METADATA_PARAMS(0, nullptr) }; // 1599383369
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches = { "Patches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPreset, Patches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Patches_MetaData), NewProp_Patches_MetaData) }; // 1599383369
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularSynthPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Octave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Semitones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Cents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1PulseWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Octave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Semitones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Cents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2PulseWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Portamento,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Pan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_GainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_AttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_DecayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_SustainGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDecayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeSustainGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterQ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayFeedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayWetlevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFeedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ModularSynthPreset",
	Z_Construct_UScriptStruct_FModularSynthPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::PropPointers),
	sizeof(FModularSynthPreset),
	alignof(FModularSynthPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularSynthPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPreset()
{
	if (!Z_Registration_Info_UScriptStruct_ModularSynthPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularSynthPreset.InnerSingleton, Z_Construct_UScriptStruct_FModularSynthPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularSynthPreset.InnerSingleton;
}
// End ScriptStruct FModularSynthPreset

// Begin ScriptStruct FModularSynthPresetBankEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry;
class UScriptStruct* FModularSynthPresetBankEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ModularSynthPresetBankEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FModularSynthPresetBankEntry>()
{
	return FModularSynthPresetBankEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularSynthPresetBankEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPresetBankEntry, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularSynthPresetBankEntry, Preset), Z_Construct_UScriptStruct_FModularSynthPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) }; // 2852414982
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"ModularSynthPresetBankEntry",
	Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::PropPointers),
	sizeof(FModularSynthPresetBankEntry),
	alignof(FModularSynthPresetBankEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPresetBankEntry()
{
	if (!Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry.InnerSingleton, Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry.InnerSingleton;
}
// End ScriptStruct FModularSynthPresetBankEntry

// Begin Class UModularSynthPresetBank
void UModularSynthPresetBank::StaticRegisterNativesUModularSynthPresetBank()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularSynthPresetBank);
UClass* Z_Construct_UClass_UModularSynthPresetBank_NoRegister()
{
	return UModularSynthPresetBank::StaticClass();
}
struct Z_Construct_UClass_UModularSynthPresetBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "IncludePath", "SynthComponents/EpicSynth1Component.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSynthPresetBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularSynthPresetBankEntry, METADATA_PARAMS(0, nullptr) }; // 2889031706
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSynthPresetBank, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presets_MetaData), NewProp_Presets_MetaData) }; // 2889031706
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularSynthPresetBank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthPresetBank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularSynthPresetBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthPresetBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularSynthPresetBank_Statics::ClassParams = {
	&UModularSynthPresetBank::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularSynthPresetBank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthPresetBank_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthPresetBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularSynthPresetBank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularSynthPresetBank()
{
	if (!Z_Registration_Info_UClass_UModularSynthPresetBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularSynthPresetBank.OuterSingleton, Z_Construct_UClass_UModularSynthPresetBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularSynthPresetBank.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<UModularSynthPresetBank>()
{
	return UModularSynthPresetBank::StaticClass();
}
UModularSynthPresetBank::UModularSynthPresetBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSynthPresetBank);
UModularSynthPresetBank::~UModularSynthPresetBank() {}
// End Class UModularSynthPresetBank

// Begin Class UModularSynthLibrary Function AddModularSynthPresetToBankAsset
struct Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics
{
	struct ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms
	{
		UModularSynthPresetBank* InBank;
		FModularSynthPreset Preset;
		FString PresetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synthesis" },
		{ "Comment", "// Adds the modular synth preset to the bank asset in the content browser. Only call during editor.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Adds the modular synth preset to the bank asset in the content browser. Only call during editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBank;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_InBank = { "InBank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms, InBank), Z_Construct_UClass_UModularSynthPresetBank_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms, Preset), Z_Construct_UScriptStruct_FModularSynthPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) }; // 2852414982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_InBank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_PresetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthLibrary, nullptr, "AddModularSynthPresetToBankAsset", nullptr, nullptr, Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthLibrary::execAddModularSynthPresetToBankAsset)
{
	P_GET_OBJECT(UModularSynthPresetBank,Z_Param_InBank);
	P_GET_STRUCT_REF(FModularSynthPreset,Z_Param_Out_Preset);
	P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModularSynthLibrary::AddModularSynthPresetToBankAsset(Z_Param_InBank,Z_Param_Out_Preset,Z_Param_PresetName);
	P_NATIVE_END;
}
// End Class UModularSynthLibrary Function AddModularSynthPresetToBankAsset

// Begin Class UModularSynthLibrary
void UModularSynthLibrary::StaticRegisterNativesUModularSynthLibrary()
{
	UClass* Class = UModularSynthLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddModularSynthPresetToBankAsset", &UModularSynthLibrary::execAddModularSynthPresetToBankAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularSynthLibrary);
UClass* Z_Construct_UClass_UModularSynthLibrary_NoRegister()
{
	return UModularSynthLibrary::StaticClass();
}
struct Z_Construct_UClass_UModularSynthLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SynthComponents/EpicSynth1Component.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset, "AddModularSynthPresetToBankAsset" }, // 1445893642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSynthLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularSynthLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularSynthLibrary_Statics::ClassParams = {
	&UModularSynthLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularSynthLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularSynthLibrary()
{
	if (!Z_Registration_Info_UClass_UModularSynthLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularSynthLibrary.OuterSingleton, Z_Construct_UClass_UModularSynthLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularSynthLibrary.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<UModularSynthLibrary>()
{
	return UModularSynthLibrary::StaticClass();
}
UModularSynthLibrary::UModularSynthLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSynthLibrary);
UModularSynthLibrary::~UModularSynthLibrary() {}
// End Class UModularSynthLibrary

// Begin Class UModularSynthComponent Function CreatePatch
struct Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics
{
	struct ModularSynthComponent_eventCreatePatch_Parms
	{
		ESynth1PatchSource PatchSource;
		TArray<FSynth1PatchCable> PatchCables;
		bool bEnableByDefault;
		FPatchId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Creates a new modular synth patch between a modulation source and a set of modulation destinations\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Creates a new modular synth patch between a modulation source and a set of modulation destinations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatchSource_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatchCables_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableByDefault_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatchSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PatchSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatchCables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatchCables;
	static void NewProp_bEnableByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableByDefault;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource = { "PatchSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventCreatePatch_Parms, PatchSource), Z_Construct_UEnum_Synthesis_ESynth1PatchSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatchSource_MetaData), NewProp_PatchSource_MetaData) }; // 1379978539
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables_Inner = { "PatchCables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSynth1PatchCable, METADATA_PARAMS(0, nullptr) }; // 861438757
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables = { "PatchCables", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventCreatePatch_Parms, PatchCables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatchCables_MetaData), NewProp_PatchCables_MetaData) }; // 861438757
void Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_SetBit(void* Obj)
{
	((ModularSynthComponent_eventCreatePatch_Parms*)Obj)->bEnableByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault = { "bEnableByDefault", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventCreatePatch_Parms), &Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableByDefault_MetaData), NewProp_bEnableByDefault_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventCreatePatch_Parms, ReturnValue), Z_Construct_UScriptStruct_FPatchId, METADATA_PARAMS(0, nullptr) }; // 3031214972
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "CreatePatch", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::ModularSynthComponent_eventCreatePatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::ModularSynthComponent_eventCreatePatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_CreatePatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execCreatePatch)
{
	P_GET_ENUM(ESynth1PatchSource,Z_Param_PatchSource);
	P_GET_TARRAY_REF(FSynth1PatchCable,Z_Param_Out_PatchCables);
	P_GET_UBOOL(Z_Param_bEnableByDefault);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPatchId*)Z_Param__Result=P_THIS->CreatePatch(ESynth1PatchSource(Z_Param_PatchSource),Z_Param_Out_PatchCables,Z_Param_bEnableByDefault);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function CreatePatch

// Begin Class UModularSynthComponent Function NoteOff
struct Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics
{
	struct ModularSynthComponent_eventNoteOff_Parms
	{
		float Note;
		bool bAllNotesOff;
		bool bKillAllNotes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Stop the note (will only do anything if a voice is playing with that note)\n" },
		{ "CPP_Default_bAllNotesOff", "false" },
		{ "CPP_Default_bKillAllNotes", "false" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Stop the note (will only do anything if a voice is playing with that note)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllNotesOff_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKillAllNotes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Note;
	static void NewProp_bAllNotesOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllNotesOff;
	static void NewProp_bKillAllNotes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillAllNotes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOff_Parms, Note), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Note_MetaData), NewProp_Note_MetaData) };
void Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_SetBit(void* Obj)
{
	((ModularSynthComponent_eventNoteOff_Parms*)Obj)->bAllNotesOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff = { "bAllNotesOff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventNoteOff_Parms), &Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllNotesOff_MetaData), NewProp_bAllNotesOff_MetaData) };
void Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_SetBit(void* Obj)
{
	((ModularSynthComponent_eventNoteOff_Parms*)Obj)->bKillAllNotes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes = { "bKillAllNotes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventNoteOff_Parms), &Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKillAllNotes_MetaData), NewProp_bKillAllNotes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_Note,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "NoteOff", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::ModularSynthComponent_eventNoteOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::ModularSynthComponent_eventNoteOff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_NoteOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execNoteOff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
	P_GET_UBOOL(Z_Param_bAllNotesOff);
	P_GET_UBOOL(Z_Param_bKillAllNotes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NoteOff(Z_Param_Note,Z_Param_bAllNotesOff,Z_Param_bKillAllNotes);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function NoteOff

// Begin Class UModularSynthComponent Function NoteOn
struct Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics
{
	struct ModularSynthComponent_eventNoteOn_Parms
	{
		float Note;
		int32 Velocity;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Play a new note. Optionally pass in a duration to automatically turn off the note.\n" },
		{ "CPP_Default_Duration", "-1.000000" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Play a new note. Optionally pass in a duration to automatically turn off the note." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Note;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOn_Parms, Note), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Note_MetaData), NewProp_Note_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOn_Parms, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOn_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Note,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "NoteOn", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::ModularSynthComponent_eventNoteOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::ModularSynthComponent_eventNoteOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_NoteOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execNoteOn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
	P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NoteOn(Z_Param_Note,Z_Param_Velocity,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function NoteOn

// Begin Class UModularSynthComponent Function SetAttackTime
struct Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics
{
	struct ModularSynthComponent_eventSetAttackTime_Parms
	{
		float AttackTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope attack time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope attack time in msec." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetAttackTime_Parms, AttackTimeMsec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::NewProp_AttackTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetAttackTime", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::ModularSynthComponent_eventSetAttackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::ModularSynthComponent_eventSetAttackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetAttackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetAttackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttackTime(Z_Param_AttackTimeMsec);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetAttackTime

// Begin Class UModularSynthComponent Function SetChorusDepth
struct Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics
{
	struct ModularSynthComponent_eventSetChorusDepth_Parms
	{
		float Depth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the chorus depth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the chorus depth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetChorusDepth_Parms, Depth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusDepth", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::ModularSynthComponent_eventSetChorusDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::ModularSynthComponent_eventSetChorusDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetChorusDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChorusDepth(Z_Param_Depth);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetChorusDepth

// Begin Class UModularSynthComponent Function SetChorusEnabled
struct Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics
{
	struct ModularSynthComponent_eventSetChorusEnabled_Parms
	{
		bool EnableChorus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not chorus is enabled.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not chorus is enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_EnableChorus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableChorus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetChorusEnabled_Parms*)Obj)->EnableChorus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus = { "EnableChorus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetChorusEnabled_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusEnabled", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::ModularSynthComponent_eventSetChorusEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::ModularSynthComponent_eventSetChorusEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetChorusEnabled)
{
	P_GET_UBOOL(Z_Param_EnableChorus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChorusEnabled(Z_Param_EnableChorus);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetChorusEnabled

// Begin Class UModularSynthComponent Function SetChorusFeedback
struct Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics
{
	struct ModularSynthComponent_eventSetChorusFeedback_Parms
	{
		float Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the chorus feedback\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the chorus feedback" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetChorusFeedback_Parms, Feedback), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusFeedback", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::ModularSynthComponent_eventSetChorusFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::ModularSynthComponent_eventSetChorusFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetChorusFeedback)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChorusFeedback(Z_Param_Feedback);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetChorusFeedback

// Begin Class UModularSynthComponent Function SetChorusFrequency
struct Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics
{
	struct ModularSynthComponent_eventSetChorusFrequency_Parms
	{
		float Frequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the chorus frequency\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the chorus frequency" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetChorusFrequency_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusFrequency", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::ModularSynthComponent_eventSetChorusFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::ModularSynthComponent_eventSetChorusFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetChorusFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChorusFrequency(Z_Param_Frequency);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetChorusFrequency

// Begin Class UModularSynthComponent Function SetDecayTime
struct Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics
{
	struct ModularSynthComponent_eventSetDecayTime_Parms
	{
		float DecayTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope decay time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope decay time in msec." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::NewProp_DecayTimeMsec = { "DecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetDecayTime_Parms, DecayTimeMsec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::NewProp_DecayTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetDecayTime", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::ModularSynthComponent_eventSetDecayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::ModularSynthComponent_eventSetDecayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetDecayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetDecayTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DecayTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDecayTime(Z_Param_DecayTimeMsec);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetDecayTime

// Begin Class UModularSynthComponent Function SetEnableLegato
struct Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics
{
	struct ModularSynthComponent_eventSetEnableLegato_Parms
	{
		bool LegatoEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to use legato for the synthesizer.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to use legato for the synthesizer." },
	};
#endif // WITH_METADATA
	static void NewProp_LegatoEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LegatoEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetEnableLegato_Parms*)Obj)->LegatoEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled = { "LegatoEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnableLegato_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnableLegato", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::ModularSynthComponent_eventSetEnableLegato_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::ModularSynthComponent_eventSetEnableLegato_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetEnableLegato)
{
	P_GET_UBOOL(Z_Param_LegatoEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableLegato(Z_Param_LegatoEnabled);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetEnableLegato

// Begin Class UModularSynthComponent Function SetEnablePatch
struct Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics
{
	struct ModularSynthComponent_eventSetEnablePatch_Parms
	{
		FPatchId PatchId;
		bool bIsEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatchId;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_PatchId = { "PatchId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetEnablePatch_Parms, PatchId), Z_Construct_UScriptStruct_FPatchId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatchId_MetaData), NewProp_PatchId_MetaData) }; // 3031214972
void Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetEnablePatch_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnablePatch_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
void Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetEnablePatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnablePatch_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_PatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnablePatch", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::ModularSynthComponent_eventSetEnablePatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::ModularSynthComponent_eventSetEnablePatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetEnablePatch)
{
	P_GET_STRUCT(FPatchId,Z_Param_PatchId);
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetEnablePatch(Z_Param_PatchId,Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetEnablePatch

// Begin Class UModularSynthComponent Function SetEnablePolyphony
struct Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics
{
	struct ModularSynthComponent_eventSetEnablePolyphony_Parms
	{
		bool bEnablePolyphony;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to use polyphony for the synthesizer.\n// @param bEnablePolyphony Whether or not to enable polyphony for the synth.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to use polyphony for the synthesizer.\n@param bEnablePolyphony Whether or not to enable polyphony for the synth." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePolyphony_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePolyphony;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetEnablePolyphony_Parms*)Obj)->bEnablePolyphony = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony = { "bEnablePolyphony", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnablePolyphony_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnablePolyphony", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::ModularSynthComponent_eventSetEnablePolyphony_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::ModularSynthComponent_eventSetEnablePolyphony_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetEnablePolyphony)
{
	P_GET_UBOOL(Z_Param_bEnablePolyphony);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnablePolyphony(Z_Param_bEnablePolyphony);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetEnablePolyphony

// Begin Class UModularSynthComponent Function SetEnableRetrigger
struct Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics
{
	struct ModularSynthComponent_eventSetEnableRetrigger_Parms
	{
		bool RetriggerEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to retrigger envelope per note on.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to retrigger envelope per note on." },
	};
#endif // WITH_METADATA
	static void NewProp_RetriggerEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RetriggerEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetEnableRetrigger_Parms*)Obj)->RetriggerEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled = { "RetriggerEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnableRetrigger_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnableRetrigger", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::ModularSynthComponent_eventSetEnableRetrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::ModularSynthComponent_eventSetEnableRetrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetEnableRetrigger)
{
	P_GET_UBOOL(Z_Param_RetriggerEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableRetrigger(Z_Param_RetriggerEnabled);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetEnableRetrigger

// Begin Class UModularSynthComponent Function SetEnableUnison
struct Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics
{
	struct ModularSynthComponent_eventSetEnableUnison_Parms
	{
		bool EnableUnison;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not the synth is in unison mode (i.e. no spread)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not the synth is in unison mode (i.e. no spread)" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableUnison_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableUnison;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetEnableUnison_Parms*)Obj)->EnableUnison = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison = { "EnableUnison", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnableUnison_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnableUnison", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::ModularSynthComponent_eventSetEnableUnison_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::ModularSynthComponent_eventSetEnableUnison_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetEnableUnison)
{
	P_GET_UBOOL(Z_Param_EnableUnison);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableUnison(Z_Param_EnableUnison);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetEnableUnison

// Begin Class UModularSynthComponent Function SetFilterAlgorithm
struct Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics
{
	struct ModularSynthComponent_eventSetFilterAlgorithm_Parms
	{
		ESynthFilterAlgorithm FilterAlgorithm;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter algorithm.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter algorithm." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterAlgorithm_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterAlgorithm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm = { "FilterAlgorithm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterAlgorithm_Parms, FilterAlgorithm), Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm, METADATA_PARAMS(0, nullptr) }; // 3272476595
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterAlgorithm", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::ModularSynthComponent_eventSetFilterAlgorithm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::ModularSynthComponent_eventSetFilterAlgorithm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetFilterAlgorithm)
{
	P_GET_ENUM(ESynthFilterAlgorithm,Z_Param_FilterAlgorithm);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterAlgorithm(ESynthFilterAlgorithm(Z_Param_FilterAlgorithm));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetFilterAlgorithm

// Begin Class UModularSynthComponent Function SetFilterFrequency
struct Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics
{
	struct ModularSynthComponent_eventSetFilterFrequency_Parms
	{
		float FilterFrequencyHz;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter cutoff frequency in hz.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter cutoff frequency in hz." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterFrequencyHz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::NewProp_FilterFrequencyHz = { "FilterFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterFrequency_Parms, FilterFrequencyHz), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::NewProp_FilterFrequencyHz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterFrequency", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::ModularSynthComponent_eventSetFilterFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::ModularSynthComponent_eventSetFilterFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetFilterFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FilterFrequencyHz);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterFrequency(Z_Param_FilterFrequencyHz);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetFilterFrequency

// Begin Class UModularSynthComponent Function SetFilterFrequencyMod
struct Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics
{
	struct ModularSynthComponent_eventSetFilterFrequencyMod_Parms
	{
		float FilterFrequencyHz;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter cutoff frequency in hz.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter cutoff frequency in hz." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterFrequencyHz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::NewProp_FilterFrequencyHz = { "FilterFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterFrequencyMod_Parms, FilterFrequencyHz), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::NewProp_FilterFrequencyHz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterFrequencyMod", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::ModularSynthComponent_eventSetFilterFrequencyMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::ModularSynthComponent_eventSetFilterFrequencyMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetFilterFrequencyMod)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FilterFrequencyHz);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterFrequencyMod(Z_Param_FilterFrequencyHz);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetFilterFrequencyMod

// Begin Class UModularSynthComponent Function SetFilterQ
struct Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics
{
	struct ModularSynthComponent_eventSetFilterQ_Parms
	{
		float FilterQ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter Q (resonance)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter Q (resonance)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterQ_Parms, FilterQ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::NewProp_FilterQ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterQ", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::ModularSynthComponent_eventSetFilterQ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::ModularSynthComponent_eventSetFilterQ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterQ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetFilterQ)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FilterQ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterQ(Z_Param_FilterQ);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetFilterQ

// Begin Class UModularSynthComponent Function SetFilterQMod
struct Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics
{
	struct ModularSynthComponent_eventSetFilterQMod_Parms
	{
		float FilterQ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets a modulated filter Q (resonance)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets a modulated filter Q (resonance)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterQMod_Parms, FilterQ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::NewProp_FilterQ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterQMod", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::ModularSynthComponent_eventSetFilterQMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::ModularSynthComponent_eventSetFilterQMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetFilterQMod)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FilterQ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterQMod(Z_Param_FilterQ);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetFilterQMod

// Begin Class UModularSynthComponent Function SetFilterType
struct Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics
{
	struct ModularSynthComponent_eventSetFilterType_Parms
	{
		ESynthFilterType FilterType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter type.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterType_Parms, FilterType), Z_Construct_UEnum_Synthesis_ESynthFilterType, METADATA_PARAMS(0, nullptr) }; // 3736983726
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterType", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::ModularSynthComponent_eventSetFilterType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::ModularSynthComponent_eventSetFilterType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetFilterType)
{
	P_GET_ENUM(ESynthFilterType,Z_Param_FilterType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterType(ESynthFilterType(Z_Param_FilterType));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetFilterType

// Begin Class UModularSynthComponent Function SetGainDb
struct Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics
{
	struct ModularSynthComponent_eventSetGainDb_Parms
	{
		float GainDb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the synth gain in decibels.\n" },
		{ "DisplayName", "Set Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the synth gain in decibels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetGainDb_Parms, GainDb), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::NewProp_GainDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetGainDb", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::ModularSynthComponent_eventSetGainDb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::ModularSynthComponent_eventSetGainDb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetGainDb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetGainDb)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_GainDb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGainDb(Z_Param_GainDb);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetGainDb

// Begin Class UModularSynthComponent Function SetLFOFrequency
struct Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics
{
	struct ModularSynthComponent_eventSetLFOFrequency_Parms
	{
		int32 LFOIndex;
		float FrequencyHz;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO frequency in hz\n// @param LFOIndex Which LFO to set the frequency for.\n// @param FrequencyHz The LFO frequency to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO frequency in hz\n@param LFOIndex Which LFO to set the frequency for.\n@param FrequencyHz The LFO frequency to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequency_Parms, LFOIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequency_Parms, FrequencyHz), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_LFOIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_FrequencyHz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOFrequency", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::ModularSynthComponent_eventSetLFOFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::ModularSynthComponent_eventSetLFOFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetLFOFrequency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrequencyHz);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLFOFrequency(Z_Param_LFOIndex,Z_Param_FrequencyHz);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetLFOFrequency

// Begin Class UModularSynthComponent Function SetLFOFrequencyMod
struct Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics
{
	struct ModularSynthComponent_eventSetLFOFrequencyMod_Parms
	{
		int32 LFOIndex;
		float FrequencyModHz;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO frequency modulation in hz\n// @param LFOIndex Which LFO to set the frequency for.\n// @param FrequencyModHz The LFO frequency to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO frequency modulation in hz\n@param LFOIndex Which LFO to set the frequency for.\n@param FrequencyModHz The LFO frequency to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyModHz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequencyMod_Parms, LFOIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_FrequencyModHz = { "FrequencyModHz", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequencyMod_Parms, FrequencyModHz), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_LFOIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_FrequencyModHz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOFrequencyMod", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::ModularSynthComponent_eventSetLFOFrequencyMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::ModularSynthComponent_eventSetLFOFrequencyMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetLFOFrequencyMod)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrequencyModHz);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLFOFrequencyMod(Z_Param_LFOIndex,Z_Param_FrequencyModHz);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetLFOFrequencyMod

// Begin Class UModularSynthComponent Function SetLFOGain
struct Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics
{
	struct ModularSynthComponent_eventSetLFOGain_Parms
	{
		int32 LFOIndex;
		float Gain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO gain factor\n// @param LFOIndex Which LFO to set the frequency for.\n// @param Gain The gain factor to use for the LFO.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO gain factor\n@param LFOIndex Which LFO to set the frequency for.\n@param Gain The gain factor to use for the LFO." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGain_Parms, LFOIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGain_Parms, Gain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_LFOIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_Gain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOGain", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::ModularSynthComponent_eventSetLFOGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::ModularSynthComponent_eventSetLFOGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetLFOGain)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLFOGain(Z_Param_LFOIndex,Z_Param_Gain);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetLFOGain

// Begin Class UModularSynthComponent Function SetLFOGainMod
struct Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics
{
	struct ModularSynthComponent_eventSetLFOGainMod_Parms
	{
		int32 LFOIndex;
		float GainMod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO gain mod factor (external modulation)\n// @param LFOIndex Which LFO to set the frequency for.\n// @param Gain The gain factor to use for the LFO.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO gain mod factor (external modulation)\n@param LFOIndex Which LFO to set the frequency for.\n@param Gain The gain factor to use for the LFO." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GainMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGainMod_Parms, LFOIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_GainMod = { "GainMod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGainMod_Parms, GainMod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_LFOIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_GainMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOGainMod", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::ModularSynthComponent_eventSetLFOGainMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::ModularSynthComponent_eventSetLFOGainMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetLFOGainMod)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GainMod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLFOGainMod(Z_Param_LFOIndex,Z_Param_GainMod);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetLFOGainMod

// Begin Class UModularSynthComponent Function SetLFOMode
struct Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics
{
	struct ModularSynthComponent_eventSetLFOMode_Parms
	{
		int32 LFOIndex;
		ESynthLFOMode LFOMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO type\n// @param LFOIndex Which LFO to set the frequency for.\n// @param LFOMode The LFO mode to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO type\n@param LFOIndex Which LFO to set the frequency for.\n@param LFOMode The LFO mode to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFOMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFOMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOMode_Parms, LFOIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode = { "LFOMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOMode_Parms, LFOMode), Z_Construct_UEnum_Synthesis_ESynthLFOMode, METADATA_PARAMS(0, nullptr) }; // 3248464609
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOMode", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::ModularSynthComponent_eventSetLFOMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::ModularSynthComponent_eventSetLFOMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetLFOMode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
	P_GET_ENUM(ESynthLFOMode,Z_Param_LFOMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLFOMode(Z_Param_LFOIndex,ESynthLFOMode(Z_Param_LFOMode));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetLFOMode

// Begin Class UModularSynthComponent Function SetLFOPatch
struct Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics
{
	struct ModularSynthComponent_eventSetLFOPatch_Parms
	{
		int32 LFOIndex;
		ESynthLFOPatchType LFOPatchType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO patch type. LFO patch determines what parameter is modulated by the LFO.\n// @param LFOIndex Which LFO to set the frequency for.\n// @param LFOPatchType The LFO patch type to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO patch type. LFO patch determines what parameter is modulated by the LFO.\n@param LFOIndex Which LFO to set the frequency for.\n@param LFOPatchType The LFO patch type to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFOPatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFOPatchType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOPatch_Parms, LFOIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType = { "LFOPatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOPatch_Parms, LFOPatchType), Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, METADATA_PARAMS(0, nullptr) }; // 49440938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOPatch", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::ModularSynthComponent_eventSetLFOPatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::ModularSynthComponent_eventSetLFOPatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetLFOPatch)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
	P_GET_ENUM(ESynthLFOPatchType,Z_Param_LFOPatchType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLFOPatch(Z_Param_LFOIndex,ESynthLFOPatchType(Z_Param_LFOPatchType));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetLFOPatch

// Begin Class UModularSynthComponent Function SetLFOType
struct Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics
{
	struct ModularSynthComponent_eventSetLFOType_Parms
	{
		int32 LFOIndex;
		ESynthLFOType LFOType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO type\n// @param LFOIndex Which LFO to set the frequency for.\n// @param LFOType The LFO type to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO type\n@param LFOIndex Which LFO to set the frequency for.\n@param LFOType The LFO type to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LFOType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LFOType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOType_Parms, LFOIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType = { "LFOType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOType_Parms, LFOType), Z_Construct_UEnum_Synthesis_ESynthLFOType, METADATA_PARAMS(0, nullptr) }; // 456560989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOType", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::ModularSynthComponent_eventSetLFOType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::ModularSynthComponent_eventSetLFOType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetLFOType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
	P_GET_ENUM(ESynthLFOType,Z_Param_LFOType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLFOType(Z_Param_LFOIndex,ESynthLFOType(Z_Param_LFOType));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetLFOType

// Begin Class UModularSynthComponent Function SetModEnvAttackTime
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics
{
	struct ModularSynthComponent_eventSetModEnvAttackTime_Parms
	{
		float AttackTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator attack time in msec\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator attack time in msec" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvAttackTime_Parms, AttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTimeMsec_MetaData), NewProp_AttackTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::NewProp_AttackTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvAttackTime", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::ModularSynthComponent_eventSetModEnvAttackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::ModularSynthComponent_eventSetModEnvAttackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvAttackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvAttackTime(Z_Param_AttackTimeMsec);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvAttackTime

// Begin Class UModularSynthComponent Function SetModEnvBiasInvert
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics
{
	struct ModularSynthComponent_eventSetModEnvBiasInvert_Parms
	{
		bool bInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to invert the bias output of the envelope modulator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to invert the bias output of the envelope modulator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetModEnvBiasInvert_Parms*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetModEnvBiasInvert_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvBiasInvert", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::ModularSynthComponent_eventSetModEnvBiasInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::ModularSynthComponent_eventSetModEnvBiasInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvBiasInvert)
{
	P_GET_UBOOL(Z_Param_bInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvBiasInvert(Z_Param_bInvert);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvBiasInvert

// Begin Class UModularSynthComponent Function SetModEnvBiasPatch
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics
{
	struct ModularSynthComponent_eventSetModEnvBiasPatch_Parms
	{
		ESynthModEnvBiasPatch InPatchType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPatchType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InPatchType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType = { "InPatchType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvBiasPatch_Parms, InPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPatchType_MetaData), NewProp_InPatchType_MetaData) }; // 4159725048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvBiasPatch", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::ModularSynthComponent_eventSetModEnvBiasPatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::ModularSynthComponent_eventSetModEnvBiasPatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvBiasPatch)
{
	P_GET_ENUM(ESynthModEnvBiasPatch,Z_Param_InPatchType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvBiasPatch(ESynthModEnvBiasPatch(Z_Param_InPatchType));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvBiasPatch

// Begin Class UModularSynthComponent Function SetModEnvDecayTime
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics
{
	struct ModularSynthComponent_eventSetModEnvDecayTime_Parms
	{
		float DecayTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator attack time in msec\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator attack time in msec" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::NewProp_DecayTimeMsec = { "DecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvDecayTime_Parms, DecayTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayTimeMsec_MetaData), NewProp_DecayTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::NewProp_DecayTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvDecayTime", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::ModularSynthComponent_eventSetModEnvDecayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::ModularSynthComponent_eventSetModEnvDecayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvDecayTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DecayTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvDecayTime(Z_Param_DecayTimeMsec);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvDecayTime

// Begin Class UModularSynthComponent Function SetModEnvDepth
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics
{
	struct ModularSynthComponent_eventSetModEnvDepth_Parms
	{
		float Depth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator depth (amount to apply the output modulation)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator depth (amount to apply the output modulation)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvDepth_Parms, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvDepth", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::ModularSynthComponent_eventSetModEnvDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::ModularSynthComponent_eventSetModEnvDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvDepth(Z_Param_Depth);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvDepth

// Begin Class UModularSynthComponent Function SetModEnvInvert
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics
{
	struct ModularSynthComponent_eventSetModEnvInvert_Parms
	{
		bool bInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to invert the envelope modulator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to invert the envelope modulator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetModEnvInvert_Parms*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetModEnvInvert_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvInvert", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::ModularSynthComponent_eventSetModEnvInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::ModularSynthComponent_eventSetModEnvInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvInvert)
{
	P_GET_UBOOL(Z_Param_bInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvInvert(Z_Param_bInvert);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvInvert

// Begin Class UModularSynthComponent Function SetModEnvPatch
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics
{
	struct ModularSynthComponent_eventSetModEnvPatch_Parms
	{
		ESynthModEnvPatch InPatchType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPatchType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InPatchType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType = { "InPatchType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvPatch_Parms, InPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvPatch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPatchType_MetaData), NewProp_InPatchType_MetaData) }; // 2687074453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvPatch", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::ModularSynthComponent_eventSetModEnvPatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::ModularSynthComponent_eventSetModEnvPatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvPatch)
{
	P_GET_ENUM(ESynthModEnvPatch,Z_Param_InPatchType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvPatch(ESynthModEnvPatch(Z_Param_InPatchType));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvPatch

// Begin Class UModularSynthComponent Function SetModEnvReleaseTime
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics
{
	struct ModularSynthComponent_eventSetModEnvReleaseTime_Parms
	{
		float Release;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator release\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator release" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Release_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Release;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::NewProp_Release = { "Release", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvReleaseTime_Parms, Release), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Release_MetaData), NewProp_Release_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::NewProp_Release,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvReleaseTime", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::ModularSynthComponent_eventSetModEnvReleaseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::ModularSynthComponent_eventSetModEnvReleaseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvReleaseTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Release);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvReleaseTime(Z_Param_Release);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvReleaseTime

// Begin Class UModularSynthComponent Function SetModEnvSustainGain
struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics
{
	struct ModularSynthComponent_eventSetModEnvSustainGain_Parms
	{
		float SustainGain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator sustain gain\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator sustain gain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SustainGain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvSustainGain_Parms, SustainGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SustainGain_MetaData), NewProp_SustainGain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::NewProp_SustainGain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvSustainGain", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::ModularSynthComponent_eventSetModEnvSustainGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::ModularSynthComponent_eventSetModEnvSustainGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvSustainGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SustainGain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModEnvSustainGain(Z_Param_SustainGain);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetModEnvSustainGain

// Begin Class UModularSynthComponent Function SetOscCents
struct Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics
{
	struct ModularSynthComponent_eventSetOscCents_Parms
	{
		int32 OscIndex;
		float Cents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator cents.\n// @param OscIndex Which oscillator to set the type for.\n// @param Cents The amount of cents to set the oscillator to (relative to base frequency/pitch)..\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the oscillator cents.\n@param OscIndex Which oscillator to set the type for.\n@param Cents The amount of cents to set the oscillator to (relative to base frequency/pitch).." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscCents_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_Cents = { "Cents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscCents_Parms, Cents), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_Cents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscCents", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::ModularSynthComponent_eventSetOscCents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::ModularSynthComponent_eventSetOscCents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscCents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscCents)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Cents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscCents(Z_Param_OscIndex,Z_Param_Cents);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscCents

// Begin Class UModularSynthComponent Function SetOscFrequencyMod
struct Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics
{
	struct ModularSynthComponent_eventSetOscFrequencyMod_Parms
	{
		int32 OscIndex;
		float OscFreqMod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator frequency modulation\n// @param OscIndex Which oscillator to set the type for.\n// @param OscFreqMod The oscillator frequency modulation to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator frequency modulation\n@param OscIndex Which oscillator to set the type for.\n@param OscFreqMod The oscillator frequency modulation to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscFreqMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscFrequencyMod_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscFreqMod = { "OscFreqMod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscFrequencyMod_Parms, OscFreqMod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscFreqMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscFrequencyMod", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::ModularSynthComponent_eventSetOscFrequencyMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::ModularSynthComponent_eventSetOscFrequencyMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscFrequencyMod)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OscFreqMod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscFrequencyMod(Z_Param_OscIndex,Z_Param_OscFreqMod);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscFrequencyMod

// Begin Class UModularSynthComponent Function SetOscGain
struct Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics
{
	struct ModularSynthComponent_eventSetOscGain_Parms
	{
		int32 OscIndex;
		float OscGain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator gain. \n// @param OscIndex Which oscillator to set the type for.\n// @param OscGain The oscillator gain.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator gain.\n@param OscIndex Which oscillator to set the type for.\n@param OscGain The oscillator gain." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscGain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGain_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscGain = { "OscGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGain_Parms, OscGain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscGain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscGain", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::ModularSynthComponent_eventSetOscGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::ModularSynthComponent_eventSetOscGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscGain)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OscGain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscGain(Z_Param_OscIndex,Z_Param_OscGain);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscGain

// Begin Class UModularSynthComponent Function SetOscGainMod
struct Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics
{
	struct ModularSynthComponent_eventSetOscGainMod_Parms
	{
		int32 OscIndex;
		float OscGainMod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator gain modulation. \n// @param OscIndex Which oscillator to set the type for.\n// @param OscGainMod The oscillator gain modulation to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator gain modulation.\n@param OscIndex Which oscillator to set the type for.\n@param OscGainMod The oscillator gain modulation to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscGainMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGainMod_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscGainMod = { "OscGainMod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGainMod_Parms, OscGainMod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscGainMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscGainMod", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::ModularSynthComponent_eventSetOscGainMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::ModularSynthComponent_eventSetOscGainMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscGainMod)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OscGainMod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscGainMod(Z_Param_OscIndex,Z_Param_OscGainMod);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscGainMod

// Begin Class UModularSynthComponent Function SetOscOctave
struct Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics
{
	struct ModularSynthComponent_eventSetOscOctave_Parms
	{
		int32 OscIndex;
		float Octave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator octaves\n// @param OscIndex Which oscillator to set the type for.\n// @param Octave Which octave to set the oscillator to (relative to base frequency/pitch).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the oscillator octaves\n@param OscIndex Which oscillator to set the type for.\n@param Octave Which octave to set the oscillator to (relative to base frequency/pitch)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Octave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscOctave_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_Octave = { "Octave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscOctave_Parms, Octave), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_Octave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscOctave", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::ModularSynthComponent_eventSetOscOctave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::ModularSynthComponent_eventSetOscOctave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscOctave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscOctave)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Octave);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscOctave(Z_Param_OscIndex,Z_Param_Octave);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscOctave

// Begin Class UModularSynthComponent Function SetOscPulsewidth
struct Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics
{
	struct ModularSynthComponent_eventSetOscPulsewidth_Parms
	{
		int32 OscIndex;
		float Pulsewidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the square wave pulsewidth [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the square wave pulsewidth [0.0, 1.0]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pulsewidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscPulsewidth_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_Pulsewidth = { "Pulsewidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscPulsewidth_Parms, Pulsewidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_Pulsewidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscPulsewidth", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::ModularSynthComponent_eventSetOscPulsewidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::ModularSynthComponent_eventSetOscPulsewidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscPulsewidth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pulsewidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscPulsewidth(Z_Param_OscIndex,Z_Param_Pulsewidth);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscPulsewidth

// Begin Class UModularSynthComponent Function SetOscSemitones
struct Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics
{
	struct ModularSynthComponent_eventSetOscSemitones_Parms
	{
		int32 OscIndex;
		float Semitones;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator semitones.\n// @param OscIndex Which oscillator to set the type for.\n// @param Semitones The amount of semitones to set the oscillator to (relative to base frequency/pitch).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the oscillator semitones.\n@param OscIndex Which oscillator to set the type for.\n@param Semitones The amount of semitones to set the oscillator to (relative to base frequency/pitch)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Semitones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscSemitones_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_Semitones = { "Semitones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscSemitones_Parms, Semitones), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_Semitones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscSemitones", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::ModularSynthComponent_eventSetOscSemitones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::ModularSynthComponent_eventSetOscSemitones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscSemitones)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Semitones);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscSemitones(Z_Param_OscIndex,Z_Param_Semitones);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscSemitones

// Begin Class UModularSynthComponent Function SetOscSync
struct Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics
{
	struct ModularSynthComponent_eventSetOscSync_Parms
	{
		bool bIsSynced;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set whether or not to follow the phase of osc2 to osc1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set whether or not to follow the phase of osc2 to osc1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSynced_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSynced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSynced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetOscSync_Parms*)Obj)->bIsSynced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced = { "bIsSynced", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetOscSync_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSynced_MetaData), NewProp_bIsSynced_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscSync", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::ModularSynthComponent_eventSetOscSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::ModularSynthComponent_eventSetOscSync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscSync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscSync)
{
	P_GET_UBOOL(Z_Param_bIsSynced);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscSync(Z_Param_bIsSynced);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscSync

// Begin Class UModularSynthComponent Function SetOscType
struct Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics
{
	struct ModularSynthComponent_eventSetOscType_Parms
	{
		int32 OscIndex;
		ESynth1OscType OscType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator type. \n// @param OscIndex Which oscillator to set the type for.\n// @param OscType The oscillator type to set.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator type.\n@param OscIndex Which oscillator to set the type for.\n@param OscType The oscillator type to set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OscIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OscType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OscType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscType_Parms, OscIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType = { "OscType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscType_Parms, OscType), Z_Construct_UEnum_Synthesis_ESynth1OscType, METADATA_PARAMS(0, nullptr) }; // 1786457325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscType", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::ModularSynthComponent_eventSetOscType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::ModularSynthComponent_eventSetOscType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetOscType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
	P_GET_ENUM(ESynth1OscType,Z_Param_OscType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOscType(Z_Param_OscIndex,ESynth1OscType(Z_Param_OscType));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetOscType

// Begin Class UModularSynthComponent Function SetPan
struct Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics
{
	struct ModularSynthComponent_eventSetPan_Parms
	{
		float Pan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the pan of the synth [-1.0, 1.0].\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the pan of the synth [-1.0, 1.0]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::NewProp_Pan = { "Pan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetPan_Parms, Pan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::NewProp_Pan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetPan", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::ModularSynthComponent_eventSetPan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::ModularSynthComponent_eventSetPan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetPan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetPan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPan(Z_Param_Pan);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetPan

// Begin Class UModularSynthComponent Function SetPitchBend
struct Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics
{
	struct ModularSynthComponent_eventSetPitchBend_Parms
	{
		float PitchBend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the synth pitch bend amount.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the synth pitch bend amount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchBend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::NewProp_PitchBend = { "PitchBend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetPitchBend_Parms, PitchBend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::NewProp_PitchBend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetPitchBend", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::ModularSynthComponent_eventSetPitchBend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::ModularSynthComponent_eventSetPitchBend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetPitchBend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetPitchBend)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchBend);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPitchBend(Z_Param_PitchBend);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetPitchBend

// Begin Class UModularSynthComponent Function SetPortamento
struct Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics
{
	struct ModularSynthComponent_eventSetPortamento_Parms
	{
		float Portamento;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the synth portamento [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the synth portamento [0.0, 1.0]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Portamento;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::NewProp_Portamento = { "Portamento", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetPortamento_Parms, Portamento), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::NewProp_Portamento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetPortamento", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::ModularSynthComponent_eventSetPortamento_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::ModularSynthComponent_eventSetPortamento_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetPortamento()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetPortamento)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Portamento);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPortamento(Z_Param_Portamento);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetPortamento

// Begin Class UModularSynthComponent Function SetReleaseTime
struct Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics
{
	struct ModularSynthComponent_eventSetReleaseTime_Parms
	{
		float ReleaseTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope release time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope release time in msec." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetReleaseTime_Parms, ReleaseTimeMsec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::NewProp_ReleaseTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetReleaseTime", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::ModularSynthComponent_eventSetReleaseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::ModularSynthComponent_eventSetReleaseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetReleaseTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReleaseTime(Z_Param_ReleaseTimeMsec);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetReleaseTime

// Begin Class UModularSynthComponent Function SetSpread
struct Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics
{
	struct ModularSynthComponent_eventSetSpread_Parms
	{
		float Spread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of spread of the oscillators. [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of spread of the oscillators. [0.0, 1.0]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetSpread_Parms, Spread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetSpread", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::ModularSynthComponent_eventSetSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::ModularSynthComponent_eventSetSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpread(Z_Param_Spread);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetSpread

// Begin Class UModularSynthComponent Function SetStereoDelayFeedback
struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics
{
	struct ModularSynthComponent_eventSetStereoDelayFeedback_Parms
	{
		float DelayFeedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay feedback [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay feedback [0.0, 1.0]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayFeedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::NewProp_DelayFeedback = { "DelayFeedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayFeedback_Parms, DelayFeedback), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::NewProp_DelayFeedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayFeedback", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::ModularSynthComponent_eventSetStereoDelayFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::ModularSynthComponent_eventSetStereoDelayFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayFeedback)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayFeedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStereoDelayFeedback(Z_Param_DelayFeedback);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetStereoDelayFeedback

// Begin Class UModularSynthComponent Function SetStereoDelayIsEnabled
struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics
{
	struct ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms
	{
		bool StereoDelayEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether not stereo delay is enabled.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether not stereo delay is enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_StereoDelayEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StereoDelayEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled_SetBit(void* Obj)
{
	((ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms*)Obj)->StereoDelayEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled = { "StereoDelayEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayIsEnabled", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayIsEnabled)
{
	P_GET_UBOOL(Z_Param_StereoDelayEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStereoDelayIsEnabled(Z_Param_StereoDelayEnabled);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetStereoDelayIsEnabled

// Begin Class UModularSynthComponent Function SetStereoDelayMode
struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics
{
	struct ModularSynthComponent_eventSetStereoDelayMode_Parms
	{
		ESynthStereoDelayMode StereoDelayMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether not stereo delay is enabled.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether not stereo delay is enabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_StereoDelayMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StereoDelayMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode = { "StereoDelayMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayMode_Parms, StereoDelayMode), Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode, METADATA_PARAMS(0, nullptr) }; // 1873300514
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayMode", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::ModularSynthComponent_eventSetStereoDelayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::ModularSynthComponent_eventSetStereoDelayMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayMode)
{
	P_GET_ENUM(ESynthStereoDelayMode,Z_Param_StereoDelayMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStereoDelayMode(ESynthStereoDelayMode(Z_Param_StereoDelayMode));
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetStereoDelayMode

// Begin Class UModularSynthComponent Function SetStereoDelayRatio
struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics
{
	struct ModularSynthComponent_eventSetStereoDelayRatio_Parms
	{
		float DelayRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay ratio between left and right delay lines [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay ratio between left and right delay lines [0.0, 1.0]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::NewProp_DelayRatio = { "DelayRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayRatio_Parms, DelayRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::NewProp_DelayRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayRatio", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::ModularSynthComponent_eventSetStereoDelayRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::ModularSynthComponent_eventSetStereoDelayRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayRatio)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStereoDelayRatio(Z_Param_DelayRatio);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetStereoDelayRatio

// Begin Class UModularSynthComponent Function SetStereoDelayTime
struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics
{
	struct ModularSynthComponent_eventSetStereoDelayTime_Parms
	{
		float DelayTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay time in msec." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::NewProp_DelayTimeMsec = { "DelayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayTime_Parms, DelayTimeMsec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::NewProp_DelayTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayTime", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::ModularSynthComponent_eventSetStereoDelayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::ModularSynthComponent_eventSetStereoDelayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStereoDelayTime(Z_Param_DelayTimeMsec);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetStereoDelayTime

// Begin Class UModularSynthComponent Function SetStereoDelayWetlevel
struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics
{
	struct ModularSynthComponent_eventSetStereoDelayWetlevel_Parms
	{
		float DelayWetlevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay wetlevel [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay wetlevel [0.0, 1.0]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayWetlevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::NewProp_DelayWetlevel = { "DelayWetlevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayWetlevel_Parms, DelayWetlevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::NewProp_DelayWetlevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayWetlevel", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::ModularSynthComponent_eventSetStereoDelayWetlevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::ModularSynthComponent_eventSetStereoDelayWetlevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayWetlevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayWetlevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStereoDelayWetlevel(Z_Param_DelayWetlevel);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetStereoDelayWetlevel

// Begin Class UModularSynthComponent Function SetSustainGain
struct Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics
{
	struct ModularSynthComponent_eventSetSustainGain_Parms
	{
		float SustainGain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope sustain gain value.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope sustain gain value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetSustainGain_Parms, SustainGain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::NewProp_SustainGain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetSustainGain", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::ModularSynthComponent_eventSetSustainGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::ModularSynthComponent_eventSetSustainGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetSustainGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetSustainGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SustainGain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSustainGain(Z_Param_SustainGain);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetSustainGain

// Begin Class UModularSynthComponent Function SetSynthPreset
struct Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics
{
	struct ModularSynthComponent_eventSetSynthPreset_Parms
	{
		FModularSynthPreset SynthPreset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the preset struct for the synth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the preset struct for the synth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SynthPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SynthPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::NewProp_SynthPreset = { "SynthPreset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetSynthPreset_Parms, SynthPreset), Z_Construct_UScriptStruct_FModularSynthPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SynthPreset_MetaData), NewProp_SynthPreset_MetaData) }; // 2852414982
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::NewProp_SynthPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetSynthPreset", nullptr, nullptr, Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::ModularSynthComponent_eventSetSynthPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::ModularSynthComponent_eventSetSynthPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularSynthComponent::execSetSynthPreset)
{
	P_GET_STRUCT_REF(FModularSynthPreset,Z_Param_Out_SynthPreset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSynthPreset(Z_Param_Out_SynthPreset);
	P_NATIVE_END;
}
// End Class UModularSynthComponent Function SetSynthPreset

// Begin Class UModularSynthComponent
void UModularSynthComponent::StaticRegisterNativesUModularSynthComponent()
{
	UClass* Class = UModularSynthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePatch", &UModularSynthComponent::execCreatePatch },
		{ "NoteOff", &UModularSynthComponent::execNoteOff },
		{ "NoteOn", &UModularSynthComponent::execNoteOn },
		{ "SetAttackTime", &UModularSynthComponent::execSetAttackTime },
		{ "SetChorusDepth", &UModularSynthComponent::execSetChorusDepth },
		{ "SetChorusEnabled", &UModularSynthComponent::execSetChorusEnabled },
		{ "SetChorusFeedback", &UModularSynthComponent::execSetChorusFeedback },
		{ "SetChorusFrequency", &UModularSynthComponent::execSetChorusFrequency },
		{ "SetDecayTime", &UModularSynthComponent::execSetDecayTime },
		{ "SetEnableLegato", &UModularSynthComponent::execSetEnableLegato },
		{ "SetEnablePatch", &UModularSynthComponent::execSetEnablePatch },
		{ "SetEnablePolyphony", &UModularSynthComponent::execSetEnablePolyphony },
		{ "SetEnableRetrigger", &UModularSynthComponent::execSetEnableRetrigger },
		{ "SetEnableUnison", &UModularSynthComponent::execSetEnableUnison },
		{ "SetFilterAlgorithm", &UModularSynthComponent::execSetFilterAlgorithm },
		{ "SetFilterFrequency", &UModularSynthComponent::execSetFilterFrequency },
		{ "SetFilterFrequencyMod", &UModularSynthComponent::execSetFilterFrequencyMod },
		{ "SetFilterQ", &UModularSynthComponent::execSetFilterQ },
		{ "SetFilterQMod", &UModularSynthComponent::execSetFilterQMod },
		{ "SetFilterType", &UModularSynthComponent::execSetFilterType },
		{ "SetGainDb", &UModularSynthComponent::execSetGainDb },
		{ "SetLFOFrequency", &UModularSynthComponent::execSetLFOFrequency },
		{ "SetLFOFrequencyMod", &UModularSynthComponent::execSetLFOFrequencyMod },
		{ "SetLFOGain", &UModularSynthComponent::execSetLFOGain },
		{ "SetLFOGainMod", &UModularSynthComponent::execSetLFOGainMod },
		{ "SetLFOMode", &UModularSynthComponent::execSetLFOMode },
		{ "SetLFOPatch", &UModularSynthComponent::execSetLFOPatch },
		{ "SetLFOType", &UModularSynthComponent::execSetLFOType },
		{ "SetModEnvAttackTime", &UModularSynthComponent::execSetModEnvAttackTime },
		{ "SetModEnvBiasInvert", &UModularSynthComponent::execSetModEnvBiasInvert },
		{ "SetModEnvBiasPatch", &UModularSynthComponent::execSetModEnvBiasPatch },
		{ "SetModEnvDecayTime", &UModularSynthComponent::execSetModEnvDecayTime },
		{ "SetModEnvDepth", &UModularSynthComponent::execSetModEnvDepth },
		{ "SetModEnvInvert", &UModularSynthComponent::execSetModEnvInvert },
		{ "SetModEnvPatch", &UModularSynthComponent::execSetModEnvPatch },
		{ "SetModEnvReleaseTime", &UModularSynthComponent::execSetModEnvReleaseTime },
		{ "SetModEnvSustainGain", &UModularSynthComponent::execSetModEnvSustainGain },
		{ "SetOscCents", &UModularSynthComponent::execSetOscCents },
		{ "SetOscFrequencyMod", &UModularSynthComponent::execSetOscFrequencyMod },
		{ "SetOscGain", &UModularSynthComponent::execSetOscGain },
		{ "SetOscGainMod", &UModularSynthComponent::execSetOscGainMod },
		{ "SetOscOctave", &UModularSynthComponent::execSetOscOctave },
		{ "SetOscPulsewidth", &UModularSynthComponent::execSetOscPulsewidth },
		{ "SetOscSemitones", &UModularSynthComponent::execSetOscSemitones },
		{ "SetOscSync", &UModularSynthComponent::execSetOscSync },
		{ "SetOscType", &UModularSynthComponent::execSetOscType },
		{ "SetPan", &UModularSynthComponent::execSetPan },
		{ "SetPitchBend", &UModularSynthComponent::execSetPitchBend },
		{ "SetPortamento", &UModularSynthComponent::execSetPortamento },
		{ "SetReleaseTime", &UModularSynthComponent::execSetReleaseTime },
		{ "SetSpread", &UModularSynthComponent::execSetSpread },
		{ "SetStereoDelayFeedback", &UModularSynthComponent::execSetStereoDelayFeedback },
		{ "SetStereoDelayIsEnabled", &UModularSynthComponent::execSetStereoDelayIsEnabled },
		{ "SetStereoDelayMode", &UModularSynthComponent::execSetStereoDelayMode },
		{ "SetStereoDelayRatio", &UModularSynthComponent::execSetStereoDelayRatio },
		{ "SetStereoDelayTime", &UModularSynthComponent::execSetStereoDelayTime },
		{ "SetStereoDelayWetlevel", &UModularSynthComponent::execSetStereoDelayWetlevel },
		{ "SetSustainGain", &UModularSynthComponent::execSetSustainGain },
		{ "SetSynthPreset", &UModularSynthComponent::execSetSynthPreset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularSynthComponent);
UClass* Z_Construct_UClass_UModularSynthComponent_NoRegister()
{
	return UModularSynthComponent::StaticClass();
}
struct Z_Construct_UClass_UModularSynthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "Comment", "/**\n* UModularSynthComponent\n* Implementation of a USynthComponent.\n*/" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/EpicSynth1Component.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UModularSynthComponent\nImplementation of a USynthComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceCount_MetaData[] = {
		{ "Category", "Synth|VoiceCount" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "// The voice count to use for the synthesizer. Cannot be changed\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The voice count to use for the synthesizer. Cannot be changed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularSynthComponent_CreatePatch, "CreatePatch" }, // 2591182874
		{ &Z_Construct_UFunction_UModularSynthComponent_NoteOff, "NoteOff" }, // 3796245750
		{ &Z_Construct_UFunction_UModularSynthComponent_NoteOn, "NoteOn" }, // 2285116433
		{ &Z_Construct_UFunction_UModularSynthComponent_SetAttackTime, "SetAttackTime" }, // 2302937553
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth, "SetChorusDepth" }, // 3328804779
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled, "SetChorusEnabled" }, // 1790988785
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback, "SetChorusFeedback" }, // 1850614371
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency, "SetChorusFrequency" }, // 1184177697
		{ &Z_Construct_UFunction_UModularSynthComponent_SetDecayTime, "SetDecayTime" }, // 3137707578
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato, "SetEnableLegato" }, // 2693148604
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch, "SetEnablePatch" }, // 2419494836
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony, "SetEnablePolyphony" }, // 397757500
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger, "SetEnableRetrigger" }, // 3918551549
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison, "SetEnableUnison" }, // 3581521932
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm, "SetFilterAlgorithm" }, // 1779276329
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency, "SetFilterFrequency" }, // 1810477096
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod, "SetFilterFrequencyMod" }, // 2353267122
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterQ, "SetFilterQ" }, // 3620264714
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod, "SetFilterQMod" }, // 3589421209
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterType, "SetFilterType" }, // 1825796990
		{ &Z_Construct_UFunction_UModularSynthComponent_SetGainDb, "SetGainDb" }, // 3833144174
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency, "SetLFOFrequency" }, // 2702630421
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod, "SetLFOFrequencyMod" }, // 703810879
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOGain, "SetLFOGain" }, // 1256196009
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod, "SetLFOGainMod" }, // 4194584116
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOMode, "SetLFOMode" }, // 2475880438
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch, "SetLFOPatch" }, // 2766675252
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOType, "SetLFOType" }, // 2447898838
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime, "SetModEnvAttackTime" }, // 3393944363
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert, "SetModEnvBiasInvert" }, // 25484207
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch, "SetModEnvBiasPatch" }, // 3829984367
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime, "SetModEnvDecayTime" }, // 1832667201
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth, "SetModEnvDepth" }, // 663353575
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert, "SetModEnvInvert" }, // 3156488969
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch, "SetModEnvPatch" }, // 374807258
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime, "SetModEnvReleaseTime" }, // 1272233224
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain, "SetModEnvSustainGain" }, // 2284508820
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscCents, "SetOscCents" }, // 1302322062
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod, "SetOscFrequencyMod" }, // 3688269671
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscGain, "SetOscGain" }, // 2341073538
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod, "SetOscGainMod" }, // 2790727069
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscOctave, "SetOscOctave" }, // 2984129634
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth, "SetOscPulsewidth" }, // 1733725461
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones, "SetOscSemitones" }, // 682874580
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscSync, "SetOscSync" }, // 2695912638
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscType, "SetOscType" }, // 4141640039
		{ &Z_Construct_UFunction_UModularSynthComponent_SetPan, "SetPan" }, // 3204660020
		{ &Z_Construct_UFunction_UModularSynthComponent_SetPitchBend, "SetPitchBend" }, // 1851835800
		{ &Z_Construct_UFunction_UModularSynthComponent_SetPortamento, "SetPortamento" }, // 447775325
		{ &Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime, "SetReleaseTime" }, // 993814
		{ &Z_Construct_UFunction_UModularSynthComponent_SetSpread, "SetSpread" }, // 725601758
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback, "SetStereoDelayFeedback" }, // 1588766651
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled, "SetStereoDelayIsEnabled" }, // 2726696251
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode, "SetStereoDelayMode" }, // 3631560290
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio, "SetStereoDelayRatio" }, // 1625794355
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime, "SetStereoDelayTime" }, // 276074624
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel, "SetStereoDelayWetlevel" }, // 278974772
		{ &Z_Construct_UFunction_UModularSynthComponent_SetSustainGain, "SetSustainGain" }, // 3151035003
		{ &Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset, "SetSynthPreset" }, // 2627301613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSynthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModularSynthComponent_Statics::NewProp_VoiceCount = { "VoiceCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSynthComponent, VoiceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceCount_MetaData), NewProp_VoiceCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularSynthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSynthComponent_Statics::NewProp_VoiceCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularSynthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularSynthComponent_Statics::ClassParams = {
	&UModularSynthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularSynthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularSynthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularSynthComponent()
{
	if (!Z_Registration_Info_UClass_UModularSynthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularSynthComponent.OuterSingleton, Z_Construct_UClass_UModularSynthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularSynthComponent.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<UModularSynthComponent>()
{
	return UModularSynthComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSynthComponent);
UModularSynthComponent::~UModularSynthComponent() {}
// End Class UModularSynthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEpicSynth1Patch::StaticStruct, Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewStructOps, TEXT("EpicSynth1Patch"), &Z_Registration_Info_UScriptStruct_EpicSynth1Patch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEpicSynth1Patch), 1599383369U) },
		{ FModularSynthPreset::StaticStruct, Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewStructOps, TEXT("ModularSynthPreset"), &Z_Registration_Info_UScriptStruct_ModularSynthPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularSynthPreset), 2852414982U) },
		{ FModularSynthPresetBankEntry::StaticStruct, Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewStructOps, TEXT("ModularSynthPresetBankEntry"), &Z_Registration_Info_UScriptStruct_ModularSynthPresetBankEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularSynthPresetBankEntry), 2889031706U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularSynthPresetBank, UModularSynthPresetBank::StaticClass, TEXT("UModularSynthPresetBank"), &Z_Registration_Info_UClass_UModularSynthPresetBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularSynthPresetBank), 1808207781U) },
		{ Z_Construct_UClass_UModularSynthLibrary, UModularSynthLibrary::StaticClass, TEXT("UModularSynthLibrary"), &Z_Registration_Info_UClass_UModularSynthLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularSynthLibrary), 804955525U) },
		{ Z_Construct_UClass_UModularSynthComponent, UModularSynthComponent::StaticClass, TEXT("UModularSynthComponent"), &Z_Registration_Info_UClass_UModularSynthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularSynthComponent), 567372758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_4034335845(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
