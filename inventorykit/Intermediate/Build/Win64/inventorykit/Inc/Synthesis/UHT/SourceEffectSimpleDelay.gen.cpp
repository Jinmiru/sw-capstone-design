// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectSimpleDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectSimpleDelay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSourceEffectSimpleDelaySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings;
class UScriptStruct* FSourceEffectSimpleDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectSimpleDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectSimpleDelaySettings>()
{
	return FSourceEffectSimpleDelaySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSound_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.01" },
		{ "Comment", "// Speed of sound in meters per second when using distance-based delay\n" },
		{ "EditCondition", "bDelayBasedOnDistance" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Speed of sound in meters per second when using distance-based delay" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Delay amount in seconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Delay amount in seconds" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain stage on dry (non-delayed signal)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Gain stage on dry (non-delayed signal)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain stage on wet (delayed) signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Gain stage on wet (delayed) signal" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount to feedback into the delay line (because why not)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Amount to feedback into the delay line (because why not)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayBasedOnDistance_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not to delay the audio based on the distance to the listener or use manual delay\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Whether or not to delay the audio based on the distance to the listener or use manual delay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceOverride_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not to allow the attenuation distance override value vs the distance to listener to be used for distance-based delay.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Whether or not to allow the attenuation distance override value vs the distance to listener to be used for distance-based delay." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
	static void NewProp_bDelayBasedOnDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayBasedOnDistance;
	static void NewProp_bUseDistanceOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectSimpleDelaySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_SpeedOfSound = { "SpeedOfSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, SpeedOfSound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedOfSound_MetaData), NewProp_SpeedOfSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DelayAmount = { "DelayAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, DelayAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayAmount_MetaData), NewProp_DelayAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DryAmount = { "DryAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, DryAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryAmount_MetaData), NewProp_DryAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_WetAmount = { "WetAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, WetAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetAmount_MetaData), NewProp_WetAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, Feedback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedback_MetaData), NewProp_Feedback_MetaData) };
void Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance_SetBit(void* Obj)
{
	((FSourceEffectSimpleDelaySettings*)Obj)->bDelayBasedOnDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance = { "bDelayBasedOnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSourceEffectSimpleDelaySettings), &Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayBasedOnDistance_MetaData), NewProp_bDelayBasedOnDistance_MetaData) };
void Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bUseDistanceOverride_SetBit(void* Obj)
{
	((FSourceEffectSimpleDelaySettings*)Obj)->bUseDistanceOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bUseDistanceOverride = { "bUseDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSourceEffectSimpleDelaySettings), &Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bUseDistanceOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistanceOverride_MetaData), NewProp_bUseDistanceOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_SpeedOfSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DelayAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DryAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_WetAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_Feedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bUseDistanceOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectSimpleDelaySettings",
	Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::PropPointers),
	sizeof(FSourceEffectSimpleDelaySettings),
	alignof(FSourceEffectSimpleDelaySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectSimpleDelaySettings

// Begin Class USourceEffectSimpleDelayPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics
{
	struct SourceEffectSimpleDelayPreset_eventSetSettings_Parms
	{
		FSourceEffectSimpleDelaySettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectSimpleDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 1963658350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectSimpleDelayPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::SourceEffectSimpleDelayPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::SourceEffectSimpleDelayPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectSimpleDelayPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectSimpleDelaySettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectSimpleDelayPreset Function SetSettings

// Begin Class USourceEffectSimpleDelayPreset
void USourceEffectSimpleDelayPreset::StaticRegisterNativesUSourceEffectSimpleDelayPreset()
{
	UClass* Class = USourceEffectSimpleDelayPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USourceEffectSimpleDelayPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectSimpleDelayPreset);
UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister()
{
	return USourceEffectSimpleDelayPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings, "SetSettings" }, // 4231672659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectSimpleDelayPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectSimpleDelayPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1963658350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::ClassParams = {
	&USourceEffectSimpleDelayPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.OuterSingleton, Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectSimpleDelayPreset>()
{
	return USourceEffectSimpleDelayPreset::StaticClass();
}
USourceEffectSimpleDelayPreset::USourceEffectSimpleDelayPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectSimpleDelayPreset);
USourceEffectSimpleDelayPreset::~USourceEffectSimpleDelayPreset() {}
// End Class USourceEffectSimpleDelayPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectSimpleDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewStructOps, TEXT("SourceEffectSimpleDelaySettings"), &Z_Registration_Info_UScriptStruct_SourceEffectSimpleDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectSimpleDelaySettings), 1963658350U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectSimpleDelayPreset, USourceEffectSimpleDelayPreset::StaticClass, TEXT("USourceEffectSimpleDelayPreset"), &Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectSimpleDelayPreset), 3073225164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_1461627567(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
