// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectPanner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectPanner() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPannerPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPannerPreset_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectPannerSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSourceEffectPannerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings;
class UScriptStruct* FSourceEffectPannerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectPannerSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectPannerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectPannerSettings>()
{
	return FSourceEffectPannerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// The spread of the source. 1.0 means left only in left channel, right only in right; 0.0 means both mixed, -1.0 means right and left channels are inverted.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPanner.h" },
		{ "ToolTip", "The spread of the source. 1.0 means left only in left channel, right only in right; 0.0 means both mixed, -1.0 means right and left channels are inverted." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pan_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// The pan of the source. -1.0 means left, 0.0 means center, 1.0 means right.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPanner.h" },
		{ "ToolTip", "The pan of the source. -1.0 means left, 0.0 means center, 1.0 means right." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectPannerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectPannerSettings, Spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::NewProp_Pan = { "Pan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectPannerSettings, Pan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pan_MetaData), NewProp_Pan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::NewProp_Spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::NewProp_Pan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectPannerSettings",
	Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::PropPointers),
	sizeof(FSourceEffectPannerSettings),
	alignof(FSourceEffectPannerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectPannerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectPannerSettings

// Begin Class USourceEffectPannerPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics
{
	struct SourceEffectPannerPreset_eventSetSettings_Parms
	{
		FSourceEffectPannerSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectPannerPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectPannerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 800328365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectPannerPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::SourceEffectPannerPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::SourceEffectPannerPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectPannerPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectPannerSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectPannerPreset Function SetSettings

// Begin Class USourceEffectPannerPreset
void USourceEffectPannerPreset::StaticRegisterNativesUSourceEffectPannerPreset()
{
	UClass* Class = USourceEffectPannerPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USourceEffectPannerPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectPannerPreset);
UClass* Z_Construct_UClass_USourceEffectPannerPreset_NoRegister()
{
	return USourceEffectPannerPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectPannerPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectPanner.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPanner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectPannerPreset_SetSettings, "SetSettings" }, // 999059247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectPannerPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectPannerPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectPannerPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectPannerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 800328365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectPannerPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectPannerPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPannerPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectPannerPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPannerPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectPannerPreset_Statics::ClassParams = {
	&USourceEffectPannerPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectPannerPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPannerPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPannerPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectPannerPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectPannerPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectPannerPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectPannerPreset.OuterSingleton, Z_Construct_UClass_USourceEffectPannerPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectPannerPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectPannerPreset>()
{
	return USourceEffectPannerPreset::StaticClass();
}
USourceEffectPannerPreset::USourceEffectPannerPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectPannerPreset);
USourceEffectPannerPreset::~USourceEffectPannerPreset() {}
// End Class USourceEffectPannerPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectPannerSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics::NewStructOps, TEXT("SourceEffectPannerSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectPannerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectPannerSettings), 800328365U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectPannerPreset, USourceEffectPannerPreset::StaticClass, TEXT("USourceEffectPannerPreset"), &Z_Registration_Info_UClass_USourceEffectPannerPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectPannerPreset), 214663857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_2581538479(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
