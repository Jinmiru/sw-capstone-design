// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectRingModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectRingModulation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectRingModulationPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum ERingModulatorTypeSourceEffect
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect;
static UEnum* ERingModulatorTypeSourceEffect_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ERingModulatorTypeSourceEffect"));
	}
	return Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ERingModulatorTypeSourceEffect>()
{
	return ERingModulatorTypeSourceEffect_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ERingModulatorTypeSourceEffect::Count" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "Saw.Name", "ERingModulatorTypeSourceEffect::Saw" },
		{ "Sine.Name", "ERingModulatorTypeSourceEffect::Sine" },
		{ "Square.Name", "ERingModulatorTypeSourceEffect::Square" },
		{ "Triangle.Name", "ERingModulatorTypeSourceEffect::Triangle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERingModulatorTypeSourceEffect::Sine", (int64)ERingModulatorTypeSourceEffect::Sine },
		{ "ERingModulatorTypeSourceEffect::Saw", (int64)ERingModulatorTypeSourceEffect::Saw },
		{ "ERingModulatorTypeSourceEffect::Triangle", (int64)ERingModulatorTypeSourceEffect::Triangle },
		{ "ERingModulatorTypeSourceEffect::Square", (int64)ERingModulatorTypeSourceEffect::Square },
		{ "ERingModulatorTypeSourceEffect::Count", (int64)ERingModulatorTypeSourceEffect::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ERingModulatorTypeSourceEffect",
	"ERingModulatorTypeSourceEffect",
	Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect()
{
	if (!Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton, Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton;
}
// End Enum ERingModulatorTypeSourceEffect

// Begin ScriptStruct FSourceEffectRingModulationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings;
class UScriptStruct* FSourceEffectRingModulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectRingModulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectRingModulationSettings>()
{
	return FSourceEffectRingModulationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulatorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// Ring modulation modulator oscillator type\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation modulator oscillator type" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// Ring modulation frequency\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation frequency" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Ring modulation depth\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation depth" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain for the dry signal (no ring mod)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Gain for the dry signal (no ring mod)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain for the wet signal (with ring mod)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Gain for the wet signal (with ring mod)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBusModulator_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Audio bus to use to modulate the effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Audio bus to use to modulate the effect" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModulatorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModulatorType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBusModulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectRingModulationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType = { "ModulatorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, ModulatorType), Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulatorType_MetaData), NewProp_ModulatorType_MetaData) }; // 1898454872
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, DryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevel_MetaData), NewProp_DryLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, WetLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevel_MetaData), NewProp_WetLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator = { "AudioBusModulator", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, AudioBusModulator), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBusModulator_MetaData), NewProp_AudioBusModulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectRingModulationSettings",
	Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers),
	sizeof(FSourceEffectRingModulationSettings),
	alignof(FSourceEffectRingModulationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectRingModulationSettings

// Begin Class USourceEffectRingModulationPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics
{
	struct SourceEffectRingModulationPreset_eventSetSettings_Parms
	{
		FSourceEffectRingModulationSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectRingModulationPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 3045290396
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectRingModulationPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::SourceEffectRingModulationPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::SourceEffectRingModulationPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectRingModulationPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectRingModulationSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectRingModulationPreset Function SetSettings

// Begin Class USourceEffectRingModulationPreset
void USourceEffectRingModulationPreset::StaticRegisterNativesUSourceEffectRingModulationPreset()
{
	UClass* Class = USourceEffectRingModulationPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USourceEffectRingModulationPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectRingModulationPreset);
UClass* Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister()
{
	return USourceEffectRingModulationPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectRingModulationPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectRingModulation.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings, "SetSettings" }, // 1001814503
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectRingModulationPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectRingModulationPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3045290396
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::ClassParams = {
	&USourceEffectRingModulationPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectRingModulationPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton, Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectRingModulationPreset>()
{
	return USourceEffectRingModulationPreset::StaticClass();
}
USourceEffectRingModulationPreset::USourceEffectRingModulationPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectRingModulationPreset);
USourceEffectRingModulationPreset::~USourceEffectRingModulationPreset() {}
// End Class USourceEffectRingModulationPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERingModulatorTypeSourceEffect_StaticEnum, TEXT("ERingModulatorTypeSourceEffect"), &Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1898454872U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectRingModulationSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewStructOps, TEXT("SourceEffectRingModulationSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectRingModulationSettings), 3045290396U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectRingModulationPreset, USourceEffectRingModulationPreset::StaticClass, TEXT("USourceEffectRingModulationPreset"), &Z_Registration_Info_UClass_USourceEffectRingModulationPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectRingModulationPreset), 3105789563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_4045470537(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
