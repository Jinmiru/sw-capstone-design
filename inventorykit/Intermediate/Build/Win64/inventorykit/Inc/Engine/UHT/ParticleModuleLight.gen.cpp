// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Light/ParticleModuleLight.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleLight
void UParticleModuleLight::StaticRegisterNativesUParticleModuleLight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLight);
UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister()
{
	return UParticleModuleLight::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Light" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Light/ParticleModuleLight.h" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether to use physically based inverse squared falloff from the light.  If unchecked, the LightExponent distribution will be used instead. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether to use physically based inverse squared falloff from the light.  If unchecked, the LightExponent distribution will be used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsTranslucency_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether lights from this module should affect translucency.\n\x09 * Use with caution.  Modules enabling this should only make a few particle lights at most, and the smaller they are, the less they will cost.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether lights from this module should affect translucency.\nUse with caution.  Modules enabling this should only make a few particle lights at most, and the smaller they are, the less they will cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInverseExposureBlend_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** When enabled we will override the project default setting with our local setting. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When enabled we will override the project default setting with our local setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLightRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Will draw wireframe spheres to preview the light radius if enabled.\n\x09 * Note: this is intended for previewing and the value will not be saved, it will always revert to disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Will draw wireframe spheres to preview the light radius if enabled.\nNote: this is intended for previewing and the value will not be saved, it will always revert to disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnFraction_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Fraction of particles in this emitter to create lights on. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Fraction of particles in this emitter to create lights on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Scale that is applied to the particle's color to calculate the light's color, and can be setup as a curve over the particle's lifetime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Scale that is applied to the particle's color to calculate the light's color, and can be setup as a curve over the particle's lifetime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrightnessOverLife_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Brightness scale for the light, which can be setup as a curve over the particle's lifetime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Brightness scale for the light, which can be setup as a curve over the particle's lifetime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Scales the particle's radius, to calculate the light's radius. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Scales the particle's radius, to calculate the light's radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightExponent_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Provides the light's exponent when inverse squared falloff is disabled. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Provides the light's exponent when inverse squared falloff is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseExposureBlend_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Blend Factor used to blend between Intensity and Intensity/Exposure.\n\x09* This is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\n\x09* This feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited.\n\x09*/" },
		{ "EditCondition", "bOverrideInverseExposureBlend" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Blend Factor used to blend between Intensity and Intensity/Exposure.\nThis is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\nThis feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Channels that this light should affect.\n\x09* Only affect high quality lights\n\x09* These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Channels that this light should affect.\nOnly affect high quality lights\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighQualityLights_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Converts the particle lights into high quality lights as if they came from a PointLightComponent.  High quality lights cost significantly more on both CPU and GPU. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Converts the particle lights into high quality lights as if they came from a PointLightComponent.  High quality lights cost significantly more on both CPU and GPU." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShadowCastingLights_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether to cast shadows from the particle lights.  Requires High Quality Lights to be enabled.\n\x09 * Warning: This can be incredibly expensive on the GPU - use with caution.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether to cast shadows from the particle lights.  Requires High Quality Lights to be enabled.\nWarning: This can be incredibly expensive on the GPU - use with caution." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff;
	static void NewProp_bAffectsTranslucency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsTranslucency;
	static void NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInverseExposureBlend;
	static void NewProp_bPreviewLightRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnFraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrightnessOverLife;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InverseExposureBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
	static void NewProp_bHighQualityLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighQualityLights;
	static void NewProp_bShadowCastingLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShadowCastingLights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj)
{
	((UParticleModuleLight*)Obj)->bUseInverseSquaredFalloff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff = { "bUseInverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInverseSquaredFalloff_MetaData), NewProp_bUseInverseSquaredFalloff_MetaData) };
void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_SetBit(void* Obj)
{
	((UParticleModuleLight*)Obj)->bAffectsTranslucency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency = { "bAffectsTranslucency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectsTranslucency_MetaData), NewProp_bAffectsTranslucency_MetaData) };
void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj)
{
	((UParticleModuleLight*)Obj)->bOverrideInverseExposureBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend = { "bOverrideInverseExposureBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideInverseExposureBlend_MetaData), NewProp_bOverrideInverseExposureBlend_MetaData) };
void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_SetBit(void* Obj)
{
	((UParticleModuleLight*)Obj)->bPreviewLightRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius = { "bPreviewLightRadius", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewLightRadius_MetaData), NewProp_bPreviewLightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction = { "SpawnFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, SpawnFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnFraction_MetaData), NewProp_SpawnFraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife = { "ColorScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorScaleOverLife_MetaData), NewProp_ColorScaleOverLife_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife = { "BrightnessOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, BrightnessOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrightnessOverLife_MetaData), NewProp_BrightnessOverLife_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, RadiusScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusScale_MetaData), NewProp_RadiusScale_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent = { "LightExponent", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, LightExponent), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightExponent_MetaData), NewProp_LightExponent_MetaData) }; // 3711494764
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_InverseExposureBlend = { "InverseExposureBlend", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, InverseExposureBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseExposureBlend_MetaData), NewProp_InverseExposureBlend_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 828539464
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLight, VolumetricScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricScatteringIntensity_MetaData), NewProp_VolumetricScatteringIntensity_MetaData) };
void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_SetBit(void* Obj)
{
	((UParticleModuleLight*)Obj)->bHighQualityLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights = { "bHighQualityLights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighQualityLights_MetaData), NewProp_bHighQualityLights_MetaData) };
void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_SetBit(void* Obj)
{
	((UParticleModuleLight*)Obj)->bShadowCastingLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights = { "bShadowCastingLights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShadowCastingLights_MetaData), NewProp_bShadowCastingLights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_InverseExposureBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleLight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLightBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLight_Statics::ClassParams = {
	&UParticleModuleLight::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLight()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLight.OuterSingleton, Z_Construct_UClass_UParticleModuleLight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLight.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLight>()
{
	return UParticleModuleLight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLight);
UParticleModuleLight::~UParticleModuleLight() {}
// End Class UParticleModuleLight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLight, UParticleModuleLight::StaticClass, TEXT("UParticleModuleLight"), &Z_Registration_Info_UClass_UParticleModuleLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLight), 1002921676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_3436583214(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
