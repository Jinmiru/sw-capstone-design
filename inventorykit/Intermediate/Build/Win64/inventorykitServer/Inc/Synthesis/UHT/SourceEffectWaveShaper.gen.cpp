// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectWaveShaper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectWaveShaper() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSourceEffectWaveShaperSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings;
class UScriptStruct* FSourceEffectWaveShaperSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectWaveShaperSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectWaveShaperSettings>()
{
	return FSourceEffectWaveShaperSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of wave shaping. 0.0 = no wave shaping.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
		{ "ToolTip", "The amount of wave shaping. 0.0 = no wave shaping." },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The amount of wave shaping. 0.0 = no wave shaping.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
		{ "ToolTip", "The amount of wave shaping. 0.0 = no wave shaping." },
		{ "UIMax", "20.0" },
		{ "UIMin", "-60.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectWaveShaperSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectWaveShaperSettings, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectWaveShaperSettings, OutputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputGainDb_MetaData), NewProp_OutputGainDb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewProp_OutputGainDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectWaveShaperSettings",
	Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::PropPointers),
	sizeof(FSourceEffectWaveShaperSettings),
	alignof(FSourceEffectWaveShaperSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectWaveShaperSettings

// Begin Class USourceEffectWaveShaperPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics
{
	struct SourceEffectWaveShaperPreset_eventSetSettings_Parms
	{
		FSourceEffectWaveShaperSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectWaveShaperPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 4077779075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectWaveShaperPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::SourceEffectWaveShaperPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::SourceEffectWaveShaperPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectWaveShaperPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectWaveShaperSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectWaveShaperPreset Function SetSettings

// Begin Class USourceEffectWaveShaperPreset
void USourceEffectWaveShaperPreset::StaticRegisterNativesUSourceEffectWaveShaperPreset()
{
	UClass* Class = USourceEffectWaveShaperPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USourceEffectWaveShaperPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectWaveShaperPreset);
UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset_NoRegister()
{
	return USourceEffectWaveShaperPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectWaveShaper.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectWaveShaper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectWaveShaperPreset_SetSettings, "SetSettings" }, // 1466212206
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectWaveShaperPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectWaveShaperPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4077779075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::ClassParams = {
	&USourceEffectWaveShaperPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectWaveShaperPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton, Z_Construct_UClass_USourceEffectWaveShaperPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectWaveShaperPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectWaveShaperPreset>()
{
	return USourceEffectWaveShaperPreset::StaticClass();
}
USourceEffectWaveShaperPreset::USourceEffectWaveShaperPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectWaveShaperPreset);
USourceEffectWaveShaperPreset::~USourceEffectWaveShaperPreset() {}
// End Class USourceEffectWaveShaperPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectWaveShaperSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectWaveShaperSettings_Statics::NewStructOps, TEXT("SourceEffectWaveShaperSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectWaveShaperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectWaveShaperSettings), 4077779075U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectWaveShaperPreset, USourceEffectWaveShaperPreset::StaticClass, TEXT("USourceEffectWaveShaperPreset"), &Z_Registration_Info_UClass_USourceEffectWaveShaperPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectWaveShaperPreset), 1908030239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_3867770360(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectWaveShaper_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
