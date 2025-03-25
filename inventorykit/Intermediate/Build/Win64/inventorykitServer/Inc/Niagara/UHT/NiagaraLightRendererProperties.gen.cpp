// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraLightRendererProperties.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraLightRendererProperties() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraLightRendererProperties();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraLightRendererProperties
void UNiagaraLightRendererProperties::StaticRegisterNativesUNiagaraLightRendererProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraLightRendererProperties);
UClass* Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister()
{
	return UNiagaraLightRendererProperties::StaticClass();
}
struct Z_Construct_UClass_UNiagaraLightRendererProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Light Renderer" },
		{ "IncludePath", "NiagaraLightRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** Whether to use physically based inverse squared falloff from the light.  If unchecked, the value from the LightExponent binding will be used instead. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether to use physically based inverse squared falloff from the light.  If unchecked, the value from the LightExponent binding will be used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsTranslucency_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/**\n\x09 * Whether lights from this renderer should affect translucency.\n\x09 * Use with caution - if enabled, create only a few particle lights at most, and the smaller they are, the less they will cost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether lights from this renderer should affect translucency.\nUse with caution - if enabled, create only a few particle lights at most, and the smaller they are, the less they will cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaScalesBrightness_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** When checked, will treat the alpha value of the particle's color as a multiplier of the light's brightness. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "When checked, will treat the alpha value of the particle's color as a multiplier of the light's brightness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInverseExposureBlend_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** When enabled we will override the project default setting with our local setting. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When enabled we will override the project default setting with our local setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A factor used to scale each particle light radius */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "A factor used to scale each particle light radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExponent_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The exponent to use for all lights if no exponent binding was found */" },
		{ "EditCondition", "!bUseInverseSquaredFalloff" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "The exponent to use for all lights if no exponent binding was found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularScale_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The specular scale to use for all lights if no binding was found */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "The specular scale to use for all lights if no binding was found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAdd_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** A static color shift applied to each rendered light */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "A static color shift applied to each rendered light" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseExposureBlend_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/**\n\x09* Blend Factor used to blend between Intensity and Intensity/Exposure.\n\x09* This is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\n\x09* This feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited.\n\x09*/" },
		{ "EditCondition", "bOverrideInverseExposureBlend" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Blend Factor used to blend between Intensity and Intensity/Exposure.\nThis is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\nThis feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightRenderingEnabledBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use to check if light rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if light rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightExponentBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the light's exponent when inverse squared falloff is disabled? */" },
		{ "EditCondition", "!bUseInverseSquaredFalloff" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the light's exponent when inverse squared falloff is disabled?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating lights?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for light color when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for light color when generating lights?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for light radius when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for light radius when generating lights?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the intensity of the volumetric scattering from this light? This scales the light's intensity and color. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the intensity of the volumetric scattering from this light? This scales the light's intensity and color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the renderer visibility tag? */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the renderer visibility tag?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularScaleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the specular scale when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the specular scale when generating lights?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static void NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff;
	static void NewProp_bAffectsTranslucency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsTranslucency;
	static void NewProp_bAlphaScalesBrightness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaScalesBrightness;
	static void NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInverseExposureBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecularScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAdd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InverseExposureBlend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightRenderingEnabledBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightExponentBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricScatteringBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecularScaleBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraLightRendererProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 2982988763
void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj)
{
	((UNiagaraLightRendererProperties*)Obj)->bUseInverseSquaredFalloff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff = { "bUseInverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInverseSquaredFalloff_MetaData), NewProp_bUseInverseSquaredFalloff_MetaData) };
void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_SetBit(void* Obj)
{
	((UNiagaraLightRendererProperties*)Obj)->bAffectsTranslucency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency = { "bAffectsTranslucency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectsTranslucency_MetaData), NewProp_bAffectsTranslucency_MetaData) };
void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_SetBit(void* Obj)
{
	((UNiagaraLightRendererProperties*)Obj)->bAlphaScalesBrightness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness = { "bAlphaScalesBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlphaScalesBrightness_MetaData), NewProp_bAlphaScalesBrightness_MetaData) };
void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj)
{
	((UNiagaraLightRendererProperties*)Obj)->bOverrideInverseExposureBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend = { "bOverrideInverseExposureBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideInverseExposureBlend_MetaData), NewProp_bOverrideInverseExposureBlend_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, RadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusScale_MetaData), NewProp_RadiusScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_DefaultExponent = { "DefaultExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, DefaultExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultExponent_MetaData), NewProp_DefaultExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SpecularScale = { "SpecularScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, SpecularScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularScale_MetaData), NewProp_SpecularScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd = { "ColorAdd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, ColorAdd), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAdd_MetaData), NewProp_ColorAdd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_InverseExposureBlend = { "InverseExposureBlend", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, InverseExposureBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseExposureBlend_MetaData), NewProp_InverseExposureBlend_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, RendererVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibility_MetaData), NewProp_RendererVisibility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding = { "LightRenderingEnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, LightRenderingEnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightRenderingEnabledBinding_MetaData), NewProp_LightRenderingEnabledBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding = { "LightExponentBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, LightExponentBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightExponentBinding_MetaData), NewProp_LightExponentBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBinding_MetaData), NewProp_PositionBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBinding_MetaData), NewProp_ColorBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding = { "RadiusBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, RadiusBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusBinding_MetaData), NewProp_RadiusBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding = { "VolumetricScatteringBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, VolumetricScatteringBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricScatteringBinding_MetaData), NewProp_VolumetricScatteringBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibilityTagBinding_MetaData), NewProp_RendererVisibilityTagBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SpecularScaleBinding = { "SpecularScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, SpecularScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularScaleBinding_MetaData), NewProp_SpecularScaleBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_DefaultExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SpecularScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_InverseExposureBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SpecularScaleBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::ClassParams = {
	&UNiagaraLightRendererProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraLightRendererProperties()
{
	if (!Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraLightRendererProperties>()
{
	return UNiagaraLightRendererProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraLightRendererProperties);
UNiagaraLightRendererProperties::~UNiagaraLightRendererProperties() {}
// End Class UNiagaraLightRendererProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraLightRendererProperties, UNiagaraLightRendererProperties::StaticClass, TEXT("UNiagaraLightRendererProperties"), &Z_Registration_Info_UClass_UNiagaraLightRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraLightRendererProperties), 1786512114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_2523558071(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
