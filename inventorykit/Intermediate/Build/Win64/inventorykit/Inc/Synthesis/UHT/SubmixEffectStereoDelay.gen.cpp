// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectStereoDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoDelay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSubmixEffectStereoDelaySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings;
class UScriptStruct* FSubmixEffectStereoDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectStereoDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectStereoDelaySettings>()
{
	return FSubmixEffectStereoDelaySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayMode_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// What mode to set the stereo delay effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "What mode to set the stereo delay effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayTimeMsec_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The base amount of delay in the left and right channels of the delay line.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The base amount of delay in the left and right channels of the delay line." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of audio to feedback into the delay line once the delay has been tapped.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The amount of audio to feedback into the delay line once the delay has been tapped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayRatio_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of delay effect to mix with the dry input signal into the effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The amount of delay effect to mix with the dry input signal into the effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The dry level of the effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterEnabled_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// Whether or not to enable filtering\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Whether or not to enable filtering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// Filter type to feed feedback audio to\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Filter type to feed feedback audio to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// Cutoff frequency of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Cutoff frequency of the filter" },
		{ "UIMax", "20000" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// Q of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Q of the filter" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DelayMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DelayMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
	static void NewProp_bFilterEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectStereoDelaySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode = { "DelayMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayMode), Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayMode_MetaData), NewProp_DelayMode_MetaData) }; // 763809148
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec = { "DelayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayTimeMsec_MetaData), NewProp_DelayTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, Feedback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedback_MetaData), NewProp_Feedback_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio = { "DelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayRatio_MetaData), NewProp_DelayRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, WetLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevel_MetaData), NewProp_WetLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevel_MetaData), NewProp_DryLevel_MetaData) };
void Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit(void* Obj)
{
	((FSubmixEffectStereoDelaySettings*)Obj)->bFilterEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled = { "bFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubmixEffectStereoDelaySettings), &Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterEnabled_MetaData), NewProp_bFilterEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterType), Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 2664033187
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterFrequency_MetaData), NewProp_FilterFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterQ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterQ_MetaData), NewProp_FilterQ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SubmixEffectStereoDelaySettings",
	Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers),
	sizeof(FSubmixEffectStereoDelaySettings),
	alignof(FSubmixEffectStereoDelaySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectStereoDelaySettings

// Begin Class USubmixEffectStereoDelayPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics
{
	struct SubmixEffectStereoDelayPreset_eventSetSettings_Parms
	{
		FSubmixEffectStereoDelaySettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set all tap delay settings. This will replace any dynamically added or modified taps.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Set all tap delay settings. This will replace any dynamically added or modified taps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectStereoDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 947901403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectStereoDelayPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::SubmixEffectStereoDelayPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::SubmixEffectStereoDelayPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectStereoDelayPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectStereoDelaySettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectStereoDelayPreset Function SetSettings

// Begin Class USubmixEffectStereoDelayPreset
void USubmixEffectStereoDelayPreset::StaticRegisterNativesUSubmixEffectStereoDelayPreset()
{
	UClass* Class = USubmixEffectStereoDelayPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USubmixEffectStereoDelayPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectStereoDelayPreset);
UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister()
{
	return USubmixEffectStereoDelayPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USubmixEffectDelayPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "USubmixEffectDelayPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings, "SetSettings" }, // 3438187238
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectStereoDelayPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectStereoDelayPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 947901403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::ClassParams = {
	&USubmixEffectStereoDelayPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectStereoDelayPreset>()
{
	return USubmixEffectStereoDelayPreset::StaticClass();
}
USubmixEffectStereoDelayPreset::USubmixEffectStereoDelayPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectStereoDelayPreset);
USubmixEffectStereoDelayPreset::~USubmixEffectStereoDelayPreset() {}
// End Class USubmixEffectStereoDelayPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectStereoDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewStructOps, TEXT("SubmixEffectStereoDelaySettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectStereoDelaySettings), 947901403U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectStereoDelayPreset, USubmixEffectStereoDelayPreset::StaticClass, TEXT("USubmixEffectStereoDelayPreset"), &Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectStereoDelayPreset), 4005280380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_2655155188(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
