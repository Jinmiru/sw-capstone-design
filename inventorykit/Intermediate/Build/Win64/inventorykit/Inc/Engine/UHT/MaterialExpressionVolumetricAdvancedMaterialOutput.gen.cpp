// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVolumetricAdvancedMaterialOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionVolumetricAdvancedMaterialOutput
void UMaterialExpressionVolumetricAdvancedMaterialOutput::StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVolumetricAdvancedMaterialOutput);
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_NoRegister()
{
	return UMaterialExpressionVolumetricAdvancedMaterialOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for writing advanced volumetric material properties. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "Material output expression for writing advanced volumetric material properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Parameter 'g' input to the phase function  describing how much forward(g<0) or backward (g>0) light scatter around. Valid range is [-1,1]. Defaults to ConstPhaseG from properties panel if not specified. Evaluated per sample if EvaluatePhaseOncePerSample is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Parameter 'g' input to the second phase function  describing how much forward(g<0) or backward (g>0) light scatter around. Valid range is [-1,1]. Defaults to ConstPhaseG2 from properties panel if not specified. Evaluated per sample if EvaluatePhaseOncePerSample is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Lerp factor when blending the two phase functions parameterized by G and G2. Valid range is [0,1] Defaults to ConstPhaseBlend from properties panel if not specified. Evaluated per sample if EvaluatePhaseOncePerSample is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringContribution_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Multi-scattering approximation: represents how much contribution each successive octave will add. Evaluated per pixel. Valid range is [0,1], from low to high contribution. Defaults to ConstMultiScatteringContribution from properties panel if not specified. Evaluated per pixel (globally)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringOcclusion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Multi-scattering approximation: represents how much occlusion will be reduced for each successive octave. Evaluated per pixel. Valid range is [0,1], from low to high occlusion. Defaults to ConstMultiScatteringOcclusion from properties panel if not specified. Evaluated per pixel (globally)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringEccentricity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Multi-scattering approximation: represents how much the phase will become isotropic for each successive octave. Evaluated per pixel. Valid range is [0,1], from anisotropic to isotropic phase. Defaults to ConstMultiScatteringEccentricity from properties panel if not specified. Evaluated per pixel (globally)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConservativeDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "This is a 3-components float vector. The X component must represent the participating medium conservative density. This is used to accelerate the ray marching by early skipping expensive material evaluation. For example, a simple top down 2D density texture would be enough to help by not evaluating the material in empty regions. The Y and Z components can contain parameters that can be recovered during the material evaluation using the VolumetricAdvancedMaterialInput node. Evaluated per sample." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstPhaseG_MetaData[] = {
		{ "Category", "Phase" },
		{ "ClampMax", "0.999000" },
		{ "ClampMin", "-0.999000" },
		{ "Comment", "/** Only used if PhaseG is not hooked up. Parameter 'g' input to the phase function  describing how much forward(g<0) or backward (g>0) light scatter around. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "OverridingInputProperty", "PhaseG" },
		{ "ToolTip", "Only used if PhaseG is not hooked up. Parameter 'g' input to the phase function  describing how much forward(g<0) or backward (g>0) light scatter around." },
		{ "UIMax", "0.999000" },
		{ "UIMin", "-0.999000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstPhaseG2_MetaData[] = {
		{ "Category", "Phase" },
		{ "ClampMax", "0.999000" },
		{ "ClampMin", "-0.999000" },
		{ "Comment", "/** Only used if PhaseG2 is not hooked up. Parameter 'g' input to the second phase function  describing how much forward(g<0) or backward (g>0) light scatter around. Valid range is [-1,1]. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "OverridingInputProperty", "PhaseG2" },
		{ "ToolTip", "Only used if PhaseG2 is not hooked up. Parameter 'g' input to the second phase function  describing how much forward(g<0) or backward (g>0) light scatter around. Valid range is [-1,1]." },
		{ "UIMax", "0.999000" },
		{ "UIMin", "-0.999000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstPhaseBlend_MetaData[] = {
		{ "Category", "Phase" },
		{ "ClampMax", "0.999000" },
		{ "ClampMin", "-0.999000" },
		{ "Comment", "/** Only used if PhaseBlend is not hooked up. Lerp factor when blending the two phase functions parameterized by G and G2. Valid range is [0,1]. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "OverridingInputProperty", "PhaseBlend" },
		{ "ToolTip", "Only used if PhaseBlend is not hooked up. Lerp factor when blending the two phase functions parameterized by G and G2. Valid range is [0,1]." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerSamplePhaseEvaluation_MetaData[] = {
		{ "Category", "Phase" },
		{ "Comment", "/** Set this to true to force the phase function to be evaluated per sample, instead once per pixel (globally). Per sample evaluation is slower. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "Set this to true to force the phase function to be evaluated per sample, instead once per pixel (globally). Per sample evaluation is slower." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringApproximationOctaveCount_MetaData[] = {
		{ "Category", "Multi-Scattering" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many octave to use for the multiple-scattering approximation. This makes the shader more expensive so you should only use 0 or 1 for better performance, and tweak multiple scattering parameters accordingly. 0 means single scattering only. The maximum value is 2 (expenssive). */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "How many octave to use for the multiple-scattering approximation. This makes the shader more expensive so you should only use 0 or 1 for better performance, and tweak multiple scattering parameters accordingly. 0 means single scattering only. The maximum value is 2 (expenssive)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstMultiScatteringContribution_MetaData[] = {
		{ "Category", "Multi-Scattering" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Only used if MultiScatteringContribution is not hooked up. Multi-scattering approximation: represents how much contribution each successive octave will add. Valid range is [0,1], from low to high contribution */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "OverridingInputProperty", "MultiScatteringContribution" },
		{ "ToolTip", "Only used if MultiScatteringContribution is not hooked up. Multi-scattering approximation: represents how much contribution each successive octave will add. Valid range is [0,1], from low to high contribution" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstMultiScatteringOcclusion_MetaData[] = {
		{ "Category", "Multi-Scattering" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Only used if MultiScatteringOcclusion is not hooked up. Multi-scattering approximation: represents how much occlusion will be reduced for each successive octave. Valid range is [0,1], from low to high occlusion. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "OverridingInputProperty", "MultiScatteringOcclusion" },
		{ "ToolTip", "Only used if MultiScatteringOcclusion is not hooked up. Multi-scattering approximation: represents how much occlusion will be reduced for each successive octave. Valid range is [0,1], from low to high occlusion." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstMultiScatteringEccentricity_MetaData[] = {
		{ "Category", "Multi-Scattering" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Only used if MultiScatteringEccentricity is not hooked up. Multi-scattering approximation: represents how much the phase will become isotropic for each successive octave. Valid range is [0,1], from anisotropic to isotropic phase. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "OverridingInputProperty", "MultiScatteringEccentricity" },
		{ "ToolTip", "Only used if MultiScatteringEccentricity is not hooked up. Multi-scattering approximation: represents how much the phase will become isotropic for each successive octave. Valid range is [0,1], from anisotropic to isotropic phase." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroundContribution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Sample the shadowed lighting contribution from the ground onto the medium (single scattering). This adds some costs to the tracing when enabled.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "Sample the shadowed lighting contribution from the ground onto the medium (single scattering). This adds some costs to the tracing when enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGrayScaleMaterial_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Set this for the material to only be considered grey scale, only using the R chanel of the input parameters internally. The lighting will still be colored. This is an optimisation.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "Set this for the material to only be considered grey scale, only using the R chanel of the input parameters internally. The lighting will still be colored. This is an optimisation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRayMarchVolumeShadow_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Disable this to use the cloud shadow map instead of secondary raymarching. This is usually enough for clouds viewed from the ground and it result in a performance boost. Shadow now have infinite length but also becomes less accurate and gray scale.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "Disable this to use the cloud shadow map instead of secondary raymarching. This is usually enough for clouds viewed from the ground and it result in a performance boost. Shadow now have infinite length but also becomes less accurate and gray scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampMultiScatteringContribution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Set whether multiple scattering contribution entry is clamped in [0,1] or not. When disabled, the artist is in charge for ensuring the visual remain in a reasonable brighness range.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "Set whether multiple scattering contribution entry is clamped in [0,1] or not. When disabled, the artist is in charge for ensuring the visual remain in a reasonable brighness range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseG;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseG2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiScatteringContribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiScatteringOcclusion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiScatteringEccentricity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConservativeDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstPhaseG;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstPhaseG2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstPhaseBlend;
	static void NewProp_PerSamplePhaseEvaluation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PerSamplePhaseEvaluation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MultiScatteringApproximationOctaveCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstMultiScatteringContribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstMultiScatteringOcclusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstMultiScatteringEccentricity;
	static void NewProp_bGroundContribution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroundContribution;
	static void NewProp_bGrayScaleMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGrayScaleMaterial;
	static void NewProp_bRayMarchVolumeShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRayMarchVolumeShadow;
	static void NewProp_bClampMultiScatteringContribution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampMultiScatteringContribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVolumetricAdvancedMaterialOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PhaseG = { "PhaseG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, PhaseG), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseG_MetaData), NewProp_PhaseG_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PhaseG2 = { "PhaseG2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, PhaseG2), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseG2_MetaData), NewProp_PhaseG2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PhaseBlend = { "PhaseBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, PhaseBlend), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseBlend_MetaData), NewProp_PhaseBlend_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringContribution = { "MultiScatteringContribution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, MultiScatteringContribution), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiScatteringContribution_MetaData), NewProp_MultiScatteringContribution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringOcclusion = { "MultiScatteringOcclusion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, MultiScatteringOcclusion), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiScatteringOcclusion_MetaData), NewProp_MultiScatteringOcclusion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringEccentricity = { "MultiScatteringEccentricity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, MultiScatteringEccentricity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiScatteringEccentricity_MetaData), NewProp_MultiScatteringEccentricity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConservativeDensity = { "ConservativeDensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConservativeDensity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConservativeDensity_MetaData), NewProp_ConservativeDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstPhaseG = { "ConstPhaseG", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConstPhaseG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstPhaseG_MetaData), NewProp_ConstPhaseG_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstPhaseG2 = { "ConstPhaseG2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConstPhaseG2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstPhaseG2_MetaData), NewProp_ConstPhaseG2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstPhaseBlend = { "ConstPhaseBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConstPhaseBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstPhaseBlend_MetaData), NewProp_ConstPhaseBlend_MetaData) };
void Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PerSamplePhaseEvaluation_SetBit(void* Obj)
{
	((UMaterialExpressionVolumetricAdvancedMaterialOutput*)Obj)->PerSamplePhaseEvaluation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PerSamplePhaseEvaluation = { "PerSamplePhaseEvaluation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionVolumetricAdvancedMaterialOutput), &Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PerSamplePhaseEvaluation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerSamplePhaseEvaluation_MetaData), NewProp_PerSamplePhaseEvaluation_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringApproximationOctaveCount = { "MultiScatteringApproximationOctaveCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, MultiScatteringApproximationOctaveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiScatteringApproximationOctaveCount_MetaData), NewProp_MultiScatteringApproximationOctaveCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstMultiScatteringContribution = { "ConstMultiScatteringContribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConstMultiScatteringContribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstMultiScatteringContribution_MetaData), NewProp_ConstMultiScatteringContribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstMultiScatteringOcclusion = { "ConstMultiScatteringOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConstMultiScatteringOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstMultiScatteringOcclusion_MetaData), NewProp_ConstMultiScatteringOcclusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstMultiScatteringEccentricity = { "ConstMultiScatteringEccentricity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConstMultiScatteringEccentricity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstMultiScatteringEccentricity_MetaData), NewProp_ConstMultiScatteringEccentricity_MetaData) };
void Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGroundContribution_SetBit(void* Obj)
{
	((UMaterialExpressionVolumetricAdvancedMaterialOutput*)Obj)->bGroundContribution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGroundContribution = { "bGroundContribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionVolumetricAdvancedMaterialOutput), &Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGroundContribution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroundContribution_MetaData), NewProp_bGroundContribution_MetaData) };
void Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGrayScaleMaterial_SetBit(void* Obj)
{
	((UMaterialExpressionVolumetricAdvancedMaterialOutput*)Obj)->bGrayScaleMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGrayScaleMaterial = { "bGrayScaleMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionVolumetricAdvancedMaterialOutput), &Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGrayScaleMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGrayScaleMaterial_MetaData), NewProp_bGrayScaleMaterial_MetaData) };
void Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bRayMarchVolumeShadow_SetBit(void* Obj)
{
	((UMaterialExpressionVolumetricAdvancedMaterialOutput*)Obj)->bRayMarchVolumeShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bRayMarchVolumeShadow = { "bRayMarchVolumeShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionVolumetricAdvancedMaterialOutput), &Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bRayMarchVolumeShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRayMarchVolumeShadow_MetaData), NewProp_bRayMarchVolumeShadow_MetaData) };
void Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bClampMultiScatteringContribution_SetBit(void* Obj)
{
	((UMaterialExpressionVolumetricAdvancedMaterialOutput*)Obj)->bClampMultiScatteringContribution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bClampMultiScatteringContribution = { "bClampMultiScatteringContribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionVolumetricAdvancedMaterialOutput), &Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bClampMultiScatteringContribution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampMultiScatteringContribution_MetaData), NewProp_bClampMultiScatteringContribution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PhaseG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PhaseG2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PhaseBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringContribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringEccentricity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConservativeDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstPhaseG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstPhaseG2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstPhaseBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_PerSamplePhaseEvaluation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_MultiScatteringApproximationOctaveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstMultiScatteringContribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstMultiScatteringOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_ConstMultiScatteringEccentricity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGroundContribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bGrayScaleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bRayMarchVolumeShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::NewProp_bClampMultiScatteringContribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::ClassParams = {
	&UMaterialExpressionVolumetricAdvancedMaterialOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVolumetricAdvancedMaterialOutput>()
{
	return UMaterialExpressionVolumetricAdvancedMaterialOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVolumetricAdvancedMaterialOutput);
UMaterialExpressionVolumetricAdvancedMaterialOutput::~UMaterialExpressionVolumetricAdvancedMaterialOutput() {}
// End Class UMaterialExpressionVolumetricAdvancedMaterialOutput

// Begin Class UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput
void UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::StaticRegisterNativesUMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput);
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_NoRegister()
{
	return UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** USed to help the cloud system to fast skip empty space areas when ray marching. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "ToolTip", "USed to help the cloud system to fast skip empty space areas when ray marching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainsMatter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Specify 0 if no matter (cloud or participating media) can be found within the area, otherwise should be set > 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainsMatter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::NewProp_ContainsMatter = { "ContainsMatter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput, ContainsMatter), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainsMatter_MetaData), NewProp_ContainsMatter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::NewProp_ContainsMatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::ClassParams = {
	&UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput>()
{
	return UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput);
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::~UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput() {}
// End Class UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput, UMaterialExpressionVolumetricAdvancedMaterialOutput::StaticClass, TEXT("UMaterialExpressionVolumetricAdvancedMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVolumetricAdvancedMaterialOutput), 1390373102U) },
		{ Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput, UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::StaticClass, TEXT("UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput"), &Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput), 2194597162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialOutput_h_532996436(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
