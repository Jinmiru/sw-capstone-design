// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/PerQualityLevelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGrassType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EGrassScaling();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum EGrassScaling
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrassScaling;
static UEnum* EGrassScaling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGrassScaling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGrassScaling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EGrassScaling, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("EGrassScaling"));
	}
	return Z_Registration_Info_UEnum_EGrassScaling.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<EGrassScaling>()
{
	return EGrassScaling_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_EGrassScaling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Free.Comment", "/** Grass instances will have random X, Y and Z scales. */" },
		{ "Free.Name", "EGrassScaling::Free" },
		{ "Free.ToolTip", "Grass instances will have random X, Y and Z scales." },
		{ "LockXY.Comment", "/** X and Y will be the same random scale, Z will be another */" },
		{ "LockXY.Name", "EGrassScaling::LockXY" },
		{ "LockXY.ToolTip", "X and Y will be the same random scale, Z will be another" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "Uniform.Comment", "/** Grass instances will have uniform X, Y and Z scales. */" },
		{ "Uniform.Name", "EGrassScaling::Uniform" },
		{ "Uniform.ToolTip", "Grass instances will have uniform X, Y and Z scales." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGrassScaling::Uniform", (int64)EGrassScaling::Uniform },
		{ "EGrassScaling::Free", (int64)EGrassScaling::Free },
		{ "EGrassScaling::LockXY", (int64)EGrassScaling::LockXY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_EGrassScaling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"EGrassScaling",
	"EGrassScaling",
	Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_EGrassScaling()
{
	if (!Z_Registration_Info_UEnum_EGrassScaling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrassScaling.InnerSingleton, Z_Construct_UEnum_Landscape_EGrassScaling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGrassScaling.InnerSingleton;
}
// End Enum EGrassScaling

// Begin ScriptStruct FGrassVariety
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrassVariety;
class UScriptStruct* FGrassVariety::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrassVariety.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrassVariety.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassVariety, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("GrassVariety"));
	}
	return Z_Registration_Info_UScriptStruct_GrassVariety.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FGrassVariety>()
{
	return FGrassVariety::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGrassVariety_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Material Overrides." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Instances per 10 square meters. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Instances per 10 square meters." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassDensityQuality_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGrid_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/* If true, use a jittered grid sequence for placement, otherwise use a halton sequence. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "If true, use a jittered grid sequence for placement, otherwise use a halton sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bUseGrid" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables." },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistanceQuality_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The distance where instances will have completely faded out when using a PerInstanceFadeAmount material node. 0 disables. \n\x09 * When the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "The distance where instances will have completely faded out when using a PerInstanceFadeAmount material node. 0 disables.\nWhen the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all." },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistanceQuality_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "8" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** \n\x09 * Specifies the smallest LOD that will be used for this component.\n\x09 * If -1 (default), the MinLOD of the static mesh asset will be used instead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nIf -1 (default), the MinLOD of the static mesh asset will be used instead." },
		{ "UIMax", "8" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies grass instance scaling type */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies grass instance scaling type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a grass instance's X Scale property */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's X Scale property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Y Scale property */" },
		{ "EditCondition", "Scaling == EGrassScaling::Free" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Y Scale property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Z Scale property */" },
		{ "EditCondition", "Scaling == EGrassScaling::Free || Scaling == EGrassScaling::LockXY" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Z Scale property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeightAttenuatesMaxScale_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** If enabled the the scale of instances is reduced as the weight (density) decreases */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "If enabled the the scale of instances is reduced as the weight (density) decreases" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleWeightAttenuation_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Modulate the scale of the instances based on weight (normalized density). The weight range (ScaleWeightAttenuation, 1.0) maps to (scaleMin, scaleMax), weight values less than ScaleWeightAttenuation are set to minScale */" },
		{ "EditCondition", "bWeightAttenuatesMaxScale == true" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Modulate the scale of the instances based on weight (normalized density). The weight range (ScaleWeightAttenuation, 1.0) maps to (scaleMin, scaleMax), weight values less than ScaleWeightAttenuation are set to minScale" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass instances should be placed at random rotation (true) or all at the same rotation (false) */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should be placed at random rotation (true) or all at the same rotation (false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass instances should be tilted to the normal of the landscape (true), or always vertical (false) */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should be tilted to the normal of the landscape (true), or always vertical (false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeLightmap_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/* Whether to use the landscape's lightmap when rendering the grass. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether to use the landscape's lightmap when rendering the grass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/**\n\x09 * Lighting channels that the grass will be assigned. Lights with matching channels will affect the grass.\n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Lighting channels that the grass will be assigned. Lights with matching channels will affect the grass.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass instances should receive decals. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should receive decals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass should cast shadows when using non-precomputed shadowing. **/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass should cast shadows when using non-precomputed shadowing. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass should cast contact shadows. **/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass should cast contact shadows. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepInstanceBufferCPUCopy_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether we should keep a cpu copy of the instance buffer. This should be set to true if you plan on using GetOverlappingXXXXCount functions of the component otherwise it won't return any data.**/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether we should keep a cpu copy of the instance buffer. This should be set to true if you plan on using GetOverlappingXXXXCount functions of the component otherwise it won't return any data.*" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceWorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Distance at which to grass instances should disable WPO for performance reasons */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Distance at which to grass instances should disable WPO for performance reasons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCacheInvalidationBehavior_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrassMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrassDensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrassDensityQuality;
	static void NewProp_bUseGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartCullDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartCullDistanceQuality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndCullDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndCullDistanceQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLOD;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
	static void NewProp_bWeightAttenuatesMaxScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeightAttenuatesMaxScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleWeightAttenuation;
	static void NewProp_RandomRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomRotation;
	static void NewProp_AlignToSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface;
	static void NewProp_bUseLandscapeLightmap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeLightmap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
	static void NewProp_bCastContactShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
	static void NewProp_bKeepInstanceBufferCPUCopy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepInstanceBufferCPUCopy;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InstanceWorldPositionOffsetDisableDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowCacheInvalidationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShadowCacheInvalidationBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassVariety>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh = { "GrassMesh", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, GrassMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassMesh_MetaData), NewProp_GrassMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity = { "GrassDensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, GrassDensity), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassDensity_MetaData), NewProp_GrassDensity_MetaData) }; // 50753708
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensityQuality = { "GrassDensityQuality", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, GrassDensityQuality), Z_Construct_UScriptStruct_FPerQualityLevelFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassDensityQuality_MetaData), NewProp_GrassDensityQuality_MetaData) }; // 2915177448
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bUseGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid = { "bUseGrid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGrid_MetaData), NewProp_bUseGrid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter = { "PlacementJitter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, PlacementJitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementJitter_MetaData), NewProp_PlacementJitter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, StartCullDistance), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCullDistance_MetaData), NewProp_StartCullDistance_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistanceQuality = { "StartCullDistanceQuality", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, StartCullDistanceQuality), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCullDistanceQuality_MetaData), NewProp_StartCullDistanceQuality_MetaData) }; // 178663833
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, EndCullDistance), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndCullDistance_MetaData), NewProp_EndCullDistance_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistanceQuality = { "EndCullDistanceQuality", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, EndCullDistanceQuality), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndCullDistanceQuality_MetaData), NewProp_EndCullDistanceQuality_MetaData) }; // 178663833
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, MinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLOD_MetaData), NewProp_MinLOD_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, Scaling), Z_Construct_UEnum_Landscape_EGrassScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scaling_MetaData), NewProp_Scaling_MetaData) }; // 2233721126
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleX_MetaData), NewProp_ScaleX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleY_MetaData), NewProp_ScaleY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZ_MetaData), NewProp_ScaleZ_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bWeightAttenuatesMaxScale_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bWeightAttenuatesMaxScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bWeightAttenuatesMaxScale = { "bWeightAttenuatesMaxScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bWeightAttenuatesMaxScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeightAttenuatesMaxScale_MetaData), NewProp_bWeightAttenuatesMaxScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MaxScaleWeightAttenuation = { "MaxScaleWeightAttenuation", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, MaxScaleWeightAttenuation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScaleWeightAttenuation_MetaData), NewProp_MaxScaleWeightAttenuation_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->RandomRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation = { "RandomRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotation_MetaData), NewProp_RandomRotation_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->AlignToSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface = { "AlignToSurface", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignToSurface_MetaData), NewProp_AlignToSurface_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bUseLandscapeLightmap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap = { "bUseLandscapeLightmap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLandscapeLightmap_MetaData), NewProp_bUseLandscapeLightmap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 828539464
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bCastDynamicShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadow_MetaData), NewProp_bCastDynamicShadow_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bCastContactShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastContactShadow_MetaData), NewProp_bCastContactShadow_MetaData) };
void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_SetBit(void* Obj)
{
	((FGrassVariety*)Obj)->bKeepInstanceBufferCPUCopy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy = { "bKeepInstanceBufferCPUCopy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepInstanceBufferCPUCopy_MetaData), NewProp_bKeepInstanceBufferCPUCopy_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_InstanceWorldPositionOffsetDisableDistance = { "InstanceWorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, InstanceWorldPositionOffsetDisableDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceWorldPositionOffsetDisableDistance_MetaData), NewProp_InstanceWorldPositionOffsetDisableDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ShadowCacheInvalidationBehavior = { "ShadowCacheInvalidationBehavior", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassVariety, ShadowCacheInvalidationBehavior), Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCacheInvalidationBehavior_MetaData), NewProp_ShadowCacheInvalidationBehavior_MetaData) }; // 2141891292
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensityQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistanceQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistanceQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bWeightAttenuatesMaxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MaxScaleWeightAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_InstanceWorldPositionOffsetDisableDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ShadowCacheInvalidationBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrassVariety_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"GrassVariety",
	Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers),
	sizeof(FGrassVariety),
	alignof(FGrassVariety),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety()
{
	if (!Z_Registration_Info_UScriptStruct_GrassVariety.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrassVariety.InnerSingleton, Z_Construct_UScriptStruct_FGrassVariety_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GrassVariety.InnerSingleton;
}
// End ScriptStruct FGrassVariety

// Begin Class ULandscapeGrassType
void ULandscapeGrassType::StaticRegisterNativesULandscapeGrassType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeGrassType);
UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister()
{
	return ULandscapeGrassType::StaticClass();
}
struct Z_Construct_UClass_ULandscapeGrassType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LandscapeGrassType.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassVarieties_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/**\n\x09* Whether this grass type should be affected by the Engine Scalability system's Foliage grass.DensityScale setting. \n\x09* This is enabled by default but can be disabled should this grass type be important for gameplay reasons.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether this grass type should be affected by the Engine Scalability system's Foliage grass.DensityScale setting.\nThis is enabled by default but can be disabled should this grass type be important for gameplay reasons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrassVarieties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrassVarieties;
	static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_StateHash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrassMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrassDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
	static void NewProp_RandomRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomRotation;
	static void NewProp_AlignToSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGrassType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_Inner = { "GrassVarieties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGrassVariety, METADATA_PARAMS(0, nullptr) }; // 1984744318
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties = { "GrassVarieties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeGrassType, GrassVarieties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassVarieties_MetaData), NewProp_GrassVarieties_MetaData) }; // 1984744318
void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
{
	((ULandscapeGrassType*)Obj)->bEnableDensityScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDensityScaling_MetaData), NewProp_bEnableDensityScaling_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StateHash = { "StateHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeGrassType, StateHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateHash_MetaData), NewProp_StateHash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh = { "GrassMesh", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeGrassType, GrassMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassMesh_MetaData), NewProp_GrassMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity = { "GrassDensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeGrassType, GrassDensity_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassDensity_MetaData), NewProp_GrassDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter = { "PlacementJitter", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeGrassType, PlacementJitter_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementJitter_MetaData), NewProp_PlacementJitter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeGrassType, StartCullDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCullDistance_MetaData), NewProp_StartCullDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeGrassType, EndCullDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndCullDistance_MetaData), NewProp_EndCullDistance_MetaData) };
void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_SetBit(void* Obj)
{
	((ULandscapeGrassType*)Obj)->RandomRotation_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation = { "RandomRotation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotation_MetaData), NewProp_RandomRotation_MetaData) };
void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_SetBit(void* Obj)
{
	((ULandscapeGrassType*)Obj)->AlignToSurface_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface = { "AlignToSurface", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignToSurface_MetaData), NewProp_AlignToSurface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StateHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeGrassType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGrassType_Statics::ClassParams = {
	&ULandscapeGrassType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeGrassType()
{
	if (!Z_Registration_Info_UClass_ULandscapeGrassType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeGrassType.OuterSingleton, Z_Construct_UClass_ULandscapeGrassType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeGrassType.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeGrassType>()
{
	return ULandscapeGrassType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGrassType);
ULandscapeGrassType::~ULandscapeGrassType() {}
// End Class ULandscapeGrassType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGrassScaling_StaticEnum, TEXT("EGrassScaling"), &Z_Registration_Info_UEnum_EGrassScaling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2233721126U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGrassVariety::StaticStruct, Z_Construct_UScriptStruct_FGrassVariety_Statics::NewStructOps, TEXT("GrassVariety"), &Z_Registration_Info_UScriptStruct_GrassVariety, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrassVariety), 1984744318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeGrassType, ULandscapeGrassType::StaticClass, TEXT("ULandscapeGrassType"), &Z_Registration_Info_UClass_ULandscapeGrassType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeGrassType), 739225631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_1713793888(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
