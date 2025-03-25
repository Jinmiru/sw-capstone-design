// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverbEffect() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UReverbEffect();
ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UReverbEffect
void UReverbEffect::StaticRegisterNativesUReverbEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReverbEffect);
UClass* Z_Construct_UClass_UReverbEffect_NoRegister()
{
	return UReverbEffect::StaticClass();
}
struct Z_Construct_UClass_UReverbEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Sound/ReverbEffect.h" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassEarlyReflections_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "Comment", "/** Bypasses early reflections */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Bypasses early reflections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "0.3" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection */" },
		{ "EditCondition", "!bBypassEarlyReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GainHF_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound */" },
		{ "EditCondition", "!bBypassEarlyReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsGain_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "3.16" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections */" },
		{ "EditCondition", "!bBypassEarlyReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassLateReflections_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "Comment", "/** Bypasses late reflections. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Bypasses late reflections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateDelay_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density - 0.0 < 1.0 < 1.0 - Coloration of the late reverb - lower value is more grainy */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Density - 0.0 < 1.0 < 1.0 - Coloration of the late reverb - lower value is more grainy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Diffusion - 0.0 < 1.0 < 1.0 - Echo density in the reverberation decay - lower is more grainy */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Diffusion - 0.0 < 1.0 < 1.0 - Echo density in the reverberation decay - lower is more grainy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirAbsorptionGainHF_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much quicker or slower the high frequencies decay relative to the lower frequencies. */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much quicker or slower the high frequencies decay relative to the lower frequencies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateGain_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control */" },
		{ "EditCondition", "!bBypassLateReflections" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomRolloffFactor_MetaData[] = {
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[] = {
		{ "Comment", "/** Transient property used to trigger real-time updates of the reverb for real-time editor previewing */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Transient property used to trigger real-time updates of the reverb for real-time editor previewing" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bBypassEarlyReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassEarlyReflections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GainHF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsGain;
	static void NewProp_bBypassLateReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassLateReflections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirAbsorptionGainHF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateGain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomRolloffFactor;
#if WITH_EDITORONLY_DATA
	static void NewProp_bChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChanged;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverbEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassEarlyReflections_SetBit(void* Obj)
{
	((UReverbEffect*)Obj)->bBypassEarlyReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassEarlyReflections = { "bBypassEarlyReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReverbEffect), &Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassEarlyReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassEarlyReflections_MetaData), NewProp_bBypassEarlyReflections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsDelay = { "ReflectionsDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, ReflectionsDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionsDelay_MetaData), NewProp_ReflectionsDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_GainHF = { "GainHF", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, GainHF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GainHF_MetaData), NewProp_GainHF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsGain = { "ReflectionsGain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, ReflectionsGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionsGain_MetaData), NewProp_ReflectionsGain_MetaData) };
void Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassLateReflections_SetBit(void* Obj)
{
	((UReverbEffect*)Obj)->bBypassLateReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassLateReflections = { "bBypassLateReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReverbEffect), &Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassLateReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassLateReflections_MetaData), NewProp_bBypassLateReflections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateDelay = { "LateDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, LateDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateDelay_MetaData), NewProp_LateDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, DecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayTime_MetaData), NewProp_DecayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, Diffusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diffusion_MetaData), NewProp_Diffusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_AirAbsorptionGainHF = { "AirAbsorptionGainHF", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, AirAbsorptionGainHF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirAbsorptionGainHF_MetaData), NewProp_AirAbsorptionGainHF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayHFRatio = { "DecayHFRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, DecayHFRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayHFRatio_MetaData), NewProp_DecayHFRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateGain = { "LateGain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, LateGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateGain_MetaData), NewProp_LateGain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_RoomRolloffFactor = { "RoomRolloffFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverbEffect, RoomRolloffFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomRolloffFactor_MetaData), NewProp_RoomRolloffFactor_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged_SetBit(void* Obj)
{
	((UReverbEffect*)Obj)->bChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UReverbEffect), &Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChanged_MetaData), NewProp_bChanged_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReverbEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassEarlyReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_GainHF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_bBypassLateReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_Diffusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_AirAbsorptionGainHF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayHFRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_RoomRolloffFactor,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReverbEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReverbEffect_Statics::ClassParams = {
	&UReverbEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReverbEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UReverbEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReverbEffect()
{
	if (!Z_Registration_Info_UClass_UReverbEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReverbEffect.OuterSingleton, Z_Construct_UClass_UReverbEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReverbEffect.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UReverbEffect>()
{
	return UReverbEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbEffect);
UReverbEffect::~UReverbEffect() {}
// End Class UReverbEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReverbEffect, UReverbEffect::StaticClass, TEXT("UReverbEffect"), &Z_Registration_Info_UClass_UReverbEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReverbEffect), 240112824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_2703003580(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
