// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/SynthComponentToneGenerator.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentToneGenerator() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentToneGenerator();
SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentToneGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Class USynthComponentToneGenerator Function SetFrequency
struct Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics
{
	struct SynthComponentToneGenerator_eventSetFrequency_Parms
	{
		float InFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tone Generator" },
		{ "Comment", "// Sets the frequency of the tone generator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "Sets the frequency of the tone generator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentToneGenerator_eventSetFrequency_Parms, InFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::NewProp_InFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentToneGenerator, nullptr, "SetFrequency", nullptr, nullptr, Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::SynthComponentToneGenerator_eventSetFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::SynthComponentToneGenerator_eventSetFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentToneGenerator::execSetFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequency(Z_Param_InFrequency);
	P_NATIVE_END;
}
// End Class USynthComponentToneGenerator Function SetFrequency

// Begin Class USynthComponentToneGenerator Function SetVolume
struct Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics
{
	struct SynthComponentToneGenerator_eventSetVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tone Generator" },
		{ "Comment", "// Sets the volume of the tone generator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "Sets the volume of the tone generator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentToneGenerator_eventSetVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentToneGenerator, nullptr, "SetVolume", nullptr, nullptr, Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::SynthComponentToneGenerator_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::SynthComponentToneGenerator_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentToneGenerator::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// End Class USynthComponentToneGenerator Function SetVolume

// Begin Class USynthComponentToneGenerator
void USynthComponentToneGenerator::StaticRegisterNativesUSynthComponentToneGenerator()
{
	UClass* Class = USynthComponentToneGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFrequency", &USynthComponentToneGenerator::execSetFrequency },
		{ "SetVolume", &USynthComponentToneGenerator::execSetVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthComponentToneGenerator);
UClass* Z_Construct_UClass_USynthComponentToneGenerator_NoRegister()
{
	return USynthComponentToneGenerator::StaticClass();
}
struct Z_Construct_UClass_USynthComponentToneGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentToneGenerator.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Tone Generator" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// The frequency (in hz) of the tone generator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "The frequency (in hz) of the tone generator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Tone Generator" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear volume of the tone generator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "The linear volume of the tone generator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttenuationCurve_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* A distance attenuation curve to use to attenuate the audio. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "A distance attenuation curve to use to attenuate the audio." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceRange_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* A distance range over which to apply distance attenuation using the supplied curve. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "A distance range over which to apply distance attenuation using the supplied curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDbAtMaxRange_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* An attenuation, in decibels, to apply to the sound at max range. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "An attenuation, in decibels, to apply to the sound at max range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceAttenuationCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationDbAtMaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency, "SetFrequency" }, // 2808323470
		{ &Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume, "SetVolume" }, // 384305839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponentToneGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentToneGenerator, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentToneGenerator, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceAttenuationCurve = { "DistanceAttenuationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentToneGenerator, DistanceAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttenuationCurve_MetaData), NewProp_DistanceAttenuationCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceRange = { "DistanceRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentToneGenerator, DistanceRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceRange_MetaData), NewProp_DistanceRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_AttenuationDbAtMaxRange = { "AttenuationDbAtMaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentToneGenerator, AttenuationDbAtMaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationDbAtMaxRange_MetaData), NewProp_AttenuationDbAtMaxRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceAttenuationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_AttenuationDbAtMaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynthComponentToneGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::ClassParams = {
	&USynthComponentToneGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynthComponentToneGenerator()
{
	if (!Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton, Z_Construct_UClass_USynthComponentToneGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USynthComponentToneGenerator>()
{
	return USynthComponentToneGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponentToneGenerator);
// End Class USynthComponentToneGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynthComponentToneGenerator, USynthComponentToneGenerator::StaticClass, TEXT("USynthComponentToneGenerator"), &Z_Registration_Info_UClass_USynthComponentToneGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthComponentToneGenerator), 2140938142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_574746784(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
