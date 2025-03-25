// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceBasePropertyOverrides() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDisplacementScaling();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMaterialInstanceBasePropertyOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides;
class UScriptStruct* FMaterialInstanceBasePropertyOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialInstanceBasePropertyOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialInstanceBasePropertyOverrides>()
{
	return FMaterialInstanceBasePropertyOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Properties from the base material that can be overridden in material instances. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Properties from the base material that can be overridden in material instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the opacity mask clip value. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the opacity mask clip value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the blend mode. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the shading model. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the shading model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the dithered LOD transition property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the dithered LOD transition property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of whether to shadow using masked opacity on translucent materials. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of whether to shadow using masked opacity on translucent materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the two sided property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the two sided property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bIsThinSurface_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the IsThinSurface property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the IsThinSurface property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OutputTranslucentVelocity_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the output velocity property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the output velocity property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bHasPixelAnimation_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the has pixel animation property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the has pixel animation property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bEnableTessellation_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the enable tessellation property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the enable tessellation property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DisplacementScaling_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the displacement magnitude and center property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the displacement magnitude and center property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxWorldPositionOffsetDisplacement_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the max world position offset property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the max world position offset property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces. */" },
		{ "editcondition", "bOverride_TwoSided" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsThinSurface_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Indicates that the material should be rendered as. */" },
		{ "editcondition", "bOverride_bThinSurface" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Indicates that the material should be rendered as." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should support a dithered LOD transition when used with the foliage system. */" },
		{ "editcondition", "bOverride_DitheredLODTransition" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Whether the material should support a dithered LOD transition when used with the foliage system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should cast shadows as masked even though it has a translucent blend mode. */" },
		{ "editcondition", "bOverride_CastDynamicShadowAsMasked" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Whether the material should cast shadows as masked even though it has a translucent blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTranslucentVelocity_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should output velocity even though it has a translucent blend mode. */" },
		{ "editcondition", "bOverride_OutputTranslucentVelocity" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Whether the material should output velocity even though it has a translucent blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPixelAnimation_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the opaque material has any pixel animations happening, that isn't included in the geometric velocities.\n\x09 * This allows to disable renderer's heuristics that assumes animation is fully described with motion vector, such as TSR's anti-flickering heuristic.\n\x09 */" },
		{ "editcondition", "bOverride_bHasPixelAnimation" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Whether the opaque material has any pixel animations happening, that isn't included in the geometric velocities.\nThis allows to disable renderer's heuristics that assumes animation is fully described with motion vector, such as TSR's anti-flickering heuristic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTessellation_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether or not tessellation is enabled. Required for displacement to work. */" },
		{ "editcondition", "bOverride_bEnableTessellation" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Whether or not tessellation is enabled. Required for displacement to work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** The blend mode */" },
		{ "editcondition", "bOverride_BlendMode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "The blend mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** The shading model */" },
		{ "editcondition", "bOverride_ShadingModel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "The shading model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue. */" },
		{ "editcondition", "bOverride_OpacityMaskClipValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementScaling_MetaData[] = {
		{ "Category", "Material" },
		{ "editcondition", "bOverride_DisplacementScaling" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWorldPositionOffsetDisplacement_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The maximum World Position Offset distance. Zero means no maximum. */" },
		{ "editcondition", "bOverride_MaxWorldPositionOffsetDisplacement" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The maximum World Position Offset distance. Zero means no maximum." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_OpacityMaskClipValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OpacityMaskClipValue;
	static void NewProp_bOverride_BlendMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlendMode;
	static void NewProp_bOverride_ShadingModel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadingModel;
	static void NewProp_bOverride_DitheredLODTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DitheredLODTransition;
	static void NewProp_bOverride_CastDynamicShadowAsMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CastDynamicShadowAsMasked;
	static void NewProp_bOverride_TwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TwoSided;
	static void NewProp_bOverride_bIsThinSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bIsThinSurface;
	static void NewProp_bOverride_OutputTranslucentVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OutputTranslucentVelocity;
	static void NewProp_bOverride_bHasPixelAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bHasPixelAnimation;
	static void NewProp_bOverride_bEnableTessellation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bEnableTessellation;
	static void NewProp_bOverride_DisplacementScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DisplacementScaling;
	static void NewProp_bOverride_MaxWorldPositionOffsetDisplacement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxWorldPositionOffsetDisplacement;
	static void NewProp_TwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
	static void NewProp_bIsThinSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThinSurface;
	static void NewProp_DitheredLODTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition;
	static void NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadowAsMasked;
	static void NewProp_bOutputTranslucentVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTranslucentVelocity;
	static void NewProp_bHasPixelAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPixelAnimation;
	static void NewProp_bEnableTessellation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTessellation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskClipValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplacementScaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWorldPositionOffsetDisplacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceBasePropertyOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_OpacityMaskClipValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue = { "bOverride_OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_OpacityMaskClipValue_MetaData), NewProp_bOverride_OpacityMaskClipValue_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_BlendMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode = { "bOverride_BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_BlendMode_MetaData), NewProp_bOverride_BlendMode_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_ShadingModel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel = { "bOverride_ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ShadingModel_MetaData), NewProp_bOverride_ShadingModel_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_DitheredLODTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition = { "bOverride_DitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DitheredLODTransition_MetaData), NewProp_bOverride_DitheredLODTransition_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_CastDynamicShadowAsMasked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked = { "bOverride_CastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_CastDynamicShadowAsMasked_MetaData), NewProp_bOverride_CastDynamicShadowAsMasked_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_TwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided = { "bOverride_TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_TwoSided_MetaData), NewProp_bOverride_TwoSided_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_bIsThinSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface = { "bOverride_bIsThinSurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_bIsThinSurface_MetaData), NewProp_bOverride_bIsThinSurface_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_OutputTranslucentVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity = { "bOverride_OutputTranslucentVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_OutputTranslucentVelocity_MetaData), NewProp_bOverride_OutputTranslucentVelocity_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bHasPixelAnimation_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_bHasPixelAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bHasPixelAnimation = { "bOverride_bHasPixelAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bHasPixelAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_bHasPixelAnimation_MetaData), NewProp_bOverride_bHasPixelAnimation_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bEnableTessellation_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_bEnableTessellation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bEnableTessellation = { "bOverride_bEnableTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bEnableTessellation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_bEnableTessellation_MetaData), NewProp_bOverride_bEnableTessellation_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DisplacementScaling_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_DisplacementScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DisplacementScaling = { "bOverride_DisplacementScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DisplacementScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DisplacementScaling_MetaData), NewProp_bOverride_DisplacementScaling_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_MaxWorldPositionOffsetDisplacement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement = { "bOverride_MaxWorldPositionOffsetDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MaxWorldPositionOffsetDisplacement_MetaData), NewProp_bOverride_MaxWorldPositionOffsetDisplacement_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->TwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwoSided_MetaData), NewProp_TwoSided_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bIsThinSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface = { "bIsThinSurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsThinSurface_MetaData), NewProp_bIsThinSurface_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->DitheredLODTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition = { "DitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitheredLODTransition_MetaData), NewProp_DitheredLODTransition_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bCastDynamicShadowAsMasked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked = { "bCastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadowAsMasked_MetaData), NewProp_bCastDynamicShadowAsMasked_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bOutputTranslucentVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity = { "bOutputTranslucentVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputTranslucentVelocity_MetaData), NewProp_bOutputTranslucentVelocity_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bHasPixelAnimation_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bHasPixelAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bHasPixelAnimation = { "bHasPixelAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bHasPixelAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPixelAnimation_MetaData), NewProp_bHasPixelAnimation_MetaData) };
void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bEnableTessellation_SetBit(void* Obj)
{
	((FMaterialInstanceBasePropertyOverrides*)Obj)->bEnableTessellation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bEnableTessellation = { "bEnableTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bEnableTessellation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTessellation_MetaData), NewProp_bEnableTessellation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 1831819339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingModel_MetaData), NewProp_ShadingModel_MetaData) }; // 1797132865
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue = { "OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, OpacityMaskClipValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityMaskClipValue_MetaData), NewProp_OpacityMaskClipValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DisplacementScaling = { "DisplacementScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, DisplacementScaling), Z_Construct_UScriptStruct_FDisplacementScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplacementScaling_MetaData), NewProp_DisplacementScaling_MetaData) }; // 147785571
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_MaxWorldPositionOffsetDisplacement = { "MaxWorldPositionOffsetDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, MaxWorldPositionOffsetDisplacement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWorldPositionOffsetDisplacement_MetaData), NewProp_MaxWorldPositionOffsetDisplacement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bHasPixelAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bEnableTessellation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DisplacementScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bHasPixelAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bEnableTessellation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DisplacementScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_MaxWorldPositionOffsetDisplacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialInstanceBasePropertyOverrides",
	Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers),
	sizeof(FMaterialInstanceBasePropertyOverrides),
	alignof(FMaterialInstanceBasePropertyOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.InnerSingleton;
}
// End ScriptStruct FMaterialInstanceBasePropertyOverrides

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialInstanceBasePropertyOverrides::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewStructOps, TEXT("MaterialInstanceBasePropertyOverrides"), &Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceBasePropertyOverrides), 367364877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_1829908410(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
