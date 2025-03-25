// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectConvolutionReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectConvolutionReverb() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSourceEffectConvolutionReverbSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings;
class UScriptStruct* FSourceEffectConvolutionReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectConvolutionReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectConvolutionReverbSettings>()
{
	return FSourceEffectConvolutionReverbSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationVolumeDb_MetaData[] = {
		{ "Comment", "/* Used to account for energy added by convolution with \"loud\" Impulse Responses. \n\x09 * This value is not directly editable in the editor because it is copied from the \n\x09 * associated UAudioImpulseResponse. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Used to account for energy added by convolution with \"loud\" Impulse Responses.\n       * This value is not directly editable in the editor because it is copied from the\n       * associated UAudioImpulseResponse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the wet signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the wet signal is mixed into the output, in Decibels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the dry signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the dry signal is mixed into the output, in Decibels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[] = {
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/* If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationVolumeDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetVolumeDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryVolumeDb;
	static void NewProp_bBypass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectConvolutionReverbSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb = { "NormalizationVolumeDb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectConvolutionReverbSettings, NormalizationVolumeDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationVolumeDb_MetaData), NewProp_NormalizationVolumeDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb = { "WetVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectConvolutionReverbSettings, WetVolumeDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetVolumeDb_MetaData), NewProp_WetVolumeDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb = { "DryVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectConvolutionReverbSettings, DryVolumeDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryVolumeDb_MetaData), NewProp_DryVolumeDb_MetaData) };
void Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
{
	((FSourceEffectConvolutionReverbSettings*)Obj)->bBypass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypass_MetaData), NewProp_bBypass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectConvolutionReverbSettings",
	Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::PropPointers),
	sizeof(FSourceEffectConvolutionReverbSettings),
	alignof(FSourceEffectConvolutionReverbSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectConvolutionReverbSettings

// Begin Class USourceEffectConvolutionReverbPreset Function SetImpulseResponse
struct Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics
{
	struct SourceEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms
	{
		UAudioImpulseResponse* InImpulseResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb impulse response */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb impulse response" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InImpulseResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse = { "InImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms, InImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectConvolutionReverbPreset, nullptr, "SetImpulseResponse", nullptr, nullptr, Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::SourceEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::SourceEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectConvolutionReverbPreset::execSetImpulseResponse)
{
	P_GET_OBJECT(UAudioImpulseResponse,Z_Param_InImpulseResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImpulseResponse(Z_Param_InImpulseResponse);
	P_NATIVE_END;
}
// End Class USourceEffectConvolutionReverbPreset Function SetImpulseResponse

// Begin Class USourceEffectConvolutionReverbPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics
{
	struct SourceEffectConvolutionReverbPreset_eventSetSettings_Parms
	{
		FSourceEffectConvolutionReverbSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb settings */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectConvolutionReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 1181053842
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectConvolutionReverbPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::SourceEffectConvolutionReverbPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::SourceEffectConvolutionReverbPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectConvolutionReverbPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectConvolutionReverbSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectConvolutionReverbPreset Function SetSettings

// Begin Class USourceEffectConvolutionReverbPreset
void USourceEffectConvolutionReverbPreset::StaticRegisterNativesUSourceEffectConvolutionReverbPreset()
{
	UClass* Class = USourceEffectConvolutionReverbPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetImpulseResponse", &USourceEffectConvolutionReverbPreset::execSetImpulseResponse },
		{ "SetSettings", &USourceEffectConvolutionReverbPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectConvolutionReverbPreset);
UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister()
{
	return USourceEffectConvolutionReverbPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[] = {
		{ "BlueprintSetter", "SetImpulseResponse" },
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** The impulse response used for convolution. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "The impulse response used for convolution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetSettings" },
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** ConvolutionReverbPreset Preset Settings. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "ConvolutionReverbPreset Preset Settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[] = {
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** Set the internal block size. This can effect latency and performance. Higher values will result in\n\x09 * lower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\n\x09 * on the interplay between audio engines buffer sizes and this effects block size. Generally, higher\n\x09 * values result in higher latency, and lower values result in lower latency. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the internal block size. This can effect latency and performance. Higher values will result in\nlower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\non the interplay between audio engines buffer sizes and this effects block size. Generally, higher\nvalues result in higher latency, and lower values result in lower latency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardwareAcceleration_MetaData[] = {
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** Opt into hardware acceleration of the convolution reverb (if available) */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Opt into hardware acceleration of the convolution reverb (if available)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpulseResponse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlockSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockSize;
	static void NewProp_bEnableHardwareAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardwareAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse, "SetImpulseResponse" }, // 2971096044
		{ &Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings, "SetSettings" }, // 1500158646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectConvolutionReverbPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectConvolutionReverbPreset, ImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseResponse_MetaData), NewProp_ImpulseResponse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectConvolutionReverbPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1181053842
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectConvolutionReverbPreset, BlockSize), Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockSize_MetaData), NewProp_BlockSize_MetaData) }; // 189648267
void Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit(void* Obj)
{
	((USourceEffectConvolutionReverbPreset*)Obj)->bEnableHardwareAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration = { "bEnableHardwareAcceleration", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USourceEffectConvolutionReverbPreset), &Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHardwareAcceleration_MetaData), NewProp_bEnableHardwareAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::ClassParams = {
	&USourceEffectConvolutionReverbPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton, Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectConvolutionReverbPreset>()
{
	return USourceEffectConvolutionReverbPreset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectConvolutionReverbPreset);
USourceEffectConvolutionReverbPreset::~USourceEffectConvolutionReverbPreset() {}
// End Class USourceEffectConvolutionReverbPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectConvolutionReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewStructOps, TEXT("SourceEffectConvolutionReverbSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectConvolutionReverbSettings), 1181053842U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectConvolutionReverbPreset, USourceEffectConvolutionReverbPreset::StaticClass, TEXT("USourceEffectConvolutionReverbPreset"), &Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectConvolutionReverbPreset), 2100904745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_1902582588(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
