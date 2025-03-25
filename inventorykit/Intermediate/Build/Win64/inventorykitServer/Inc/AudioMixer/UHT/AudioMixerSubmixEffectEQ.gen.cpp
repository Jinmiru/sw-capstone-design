// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectEQ() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset();
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin ScriptStruct FSubmixEffectEQBand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectEQBand;
class UScriptStruct* FSubmixEffectEQBand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectEQBand, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectEQBand"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectEQBand>()
{
	return FSubmixEffectEQBand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A multiband EQ submix effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "A multiband EQ submix effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "DisplayName", "Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bandwidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectEQBand, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectEQBand, Bandwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth_MetaData), NewProp_Bandwidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectEQBand, GainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GainDb_MetaData), NewProp_GainDb_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FSubmixEffectEQBand*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSubmixEffectEQBand), &Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	&NewStructOps,
	"SubmixEffectEQBand",
	Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers),
	sizeof(FSubmixEffectEQBand),
	alignof(FSubmixEffectEQBand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.InnerSingleton;
}
// End ScriptStruct FSubmixEffectEQBand

// Begin ScriptStruct FSubmixEffectSubmixEQSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings;
class UScriptStruct* FSubmixEffectSubmixEQSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectSubmixEQSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectSubmixEQSettings>()
{
	return FSubmixEffectSubmixEQSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// EQ submix effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "EQ submix effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EQBands_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "Comment", "// The EQ bands to use. \n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "The EQ bands to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EQBands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EQBands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_Inner = { "EQBands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubmixEffectEQBand, METADATA_PARAMS(0, nullptr) }; // 2989872473
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands = { "EQBands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectSubmixEQSettings, EQBands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EQBands_MetaData), NewProp_EQBands_MetaData) }; // 2989872473
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	&NewStructOps,
	"SubmixEffectSubmixEQSettings",
	Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers),
	sizeof(FSubmixEffectSubmixEQSettings),
	alignof(FSubmixEffectSubmixEQSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectSubmixEQSettings

// Begin Class USubmixEffectSubmixEQPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics
{
	struct SubmixEffectSubmixEQPreset_eventSetSettings_Parms
	{
		FSubmixEffectSubmixEQSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectSubmixEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 2013433652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectSubmixEQPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::SubmixEffectSubmixEQPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::SubmixEffectSubmixEQPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectSubmixEQPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectSubmixEQSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectSubmixEQPreset Function SetSettings

// Begin Class USubmixEffectSubmixEQPreset
void USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset()
{
	UClass* Class = USubmixEffectSubmixEQPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USubmixEffectSubmixEQPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectSubmixEQPreset);
UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister()
{
	return USubmixEffectSubmixEQPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings, "SetSettings" }, // 654953741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectSubmixEQPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectSubmixEQPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2013433652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::ClassParams = {
	&USubmixEffectSubmixEQPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectSubmixEQPreset>()
{
	return USubmixEffectSubmixEQPreset::StaticClass();
}
USubmixEffectSubmixEQPreset::USubmixEffectSubmixEQPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectSubmixEQPreset);
USubmixEffectSubmixEQPreset::~USubmixEffectSubmixEQPreset() {}
// End Class USubmixEffectSubmixEQPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectEQBand::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewStructOps, TEXT("SubmixEffectEQBand"), &Z_Registration_Info_UScriptStruct_SubmixEffectEQBand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectEQBand), 2989872473U) },
		{ FSubmixEffectSubmixEQSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewStructOps, TEXT("SubmixEffectSubmixEQSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectSubmixEQSettings), 2013433652U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectSubmixEQPreset, USubmixEffectSubmixEQPreset::StaticClass, TEXT("USubmixEffectSubmixEQPreset"), &Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectSubmixEQPreset), 2404443517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_206008659(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
