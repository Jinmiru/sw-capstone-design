// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialMerging() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialMergeType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSizingType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETextureSizingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureSizingType;
static UEnum* ETextureSizingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSizingType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSizingType"));
	}
	return Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureSizingType>()
{
	return ETextureSizingType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureSizingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "TextureSizingType_AutomaticFromMeshDrawDistance.DisplayName", "Automatic - From Mesh Draw Distance" },
		{ "TextureSizingType_AutomaticFromMeshDrawDistance.Name", "TextureSizingType_AutomaticFromMeshDrawDistance" },
		{ "TextureSizingType_AutomaticFromMeshDrawDistance.ToolTip", "When working with World Partition HLODs, the draw distance is automatically deduced from the runtime grid loading range." },
		{ "TextureSizingType_AutomaticFromMeshScreenSize.DisplayName", "Automatic - From Mesh Screen Size" },
		{ "TextureSizingType_AutomaticFromMeshScreenSize.Name", "TextureSizingType_AutomaticFromMeshScreenSize" },
		{ "TextureSizingType_AutomaticFromTexelDensity.DisplayName", "Automatic - From Texel Density" },
		{ "TextureSizingType_AutomaticFromTexelDensity.Name", "TextureSizingType_AutomaticFromTexelDensity" },
		{ "TextureSizingType_MAX.Name", "TextureSizingType_MAX" },
		{ "TextureSizingType_UseAutomaticBiasedSizes.DisplayName", "Use automatically biased texture sizes based on TextureSize" },
		{ "TextureSizingType_UseAutomaticBiasedSizes.Name", "TextureSizingType_UseAutomaticBiasedSizes" },
		{ "TextureSizingType_UseManualOverrideTextureSize.DisplayName", "Use per property manually overriden texture sizes" },
		{ "TextureSizingType_UseManualOverrideTextureSize.Name", "TextureSizingType_UseManualOverrideTextureSize" },
		{ "TextureSizingType_UseSimplygonAutomaticSizing.DisplayName", "Use Simplygon's automatic texture sizing" },
		{ "TextureSizingType_UseSimplygonAutomaticSizing.Name", "TextureSizingType_UseSimplygonAutomaticSizing" },
		{ "TextureSizingType_UseSingleTextureSize.DisplayName", "Use TextureSize for all material properties" },
		{ "TextureSizingType_UseSingleTextureSize.Name", "TextureSizingType_UseSingleTextureSize" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TextureSizingType_UseSingleTextureSize", (int64)TextureSizingType_UseSingleTextureSize },
		{ "TextureSizingType_UseAutomaticBiasedSizes", (int64)TextureSizingType_UseAutomaticBiasedSizes },
		{ "TextureSizingType_UseManualOverrideTextureSize", (int64)TextureSizingType_UseManualOverrideTextureSize },
		{ "TextureSizingType_UseSimplygonAutomaticSizing", (int64)TextureSizingType_UseSimplygonAutomaticSizing },
		{ "TextureSizingType_AutomaticFromTexelDensity", (int64)TextureSizingType_AutomaticFromTexelDensity },
		{ "TextureSizingType_AutomaticFromMeshScreenSize", (int64)TextureSizingType_AutomaticFromMeshScreenSize },
		{ "TextureSizingType_AutomaticFromMeshDrawDistance", (int64)TextureSizingType_AutomaticFromMeshDrawDistance },
		{ "TextureSizingType_MAX", (int64)TextureSizingType_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureSizingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureSizingType",
	"ETextureSizingType",
	Z_Construct_UEnum_Engine_ETextureSizingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSizingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSizingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureSizingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureSizingType()
{
	if (!Z_Registration_Info_UEnum_ETextureSizingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureSizingType.InnerSingleton, Z_Construct_UEnum_Engine_ETextureSizingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureSizingType.InnerSingleton;
}
// End Enum ETextureSizingType

// Begin Enum EMaterialMergeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialMergeType;
static UEnum* EMaterialMergeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialMergeType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialMergeType"));
	}
	return Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialMergeType>()
{
	return EMaterialMergeType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialMergeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MaterialMergeType_Default.Name", "MaterialMergeType_Default" },
		{ "MaterialMergeType_Simplygon.Name", "MaterialMergeType_Simplygon" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MaterialMergeType_Default", (int64)MaterialMergeType_Default },
		{ "MaterialMergeType_Simplygon", (int64)MaterialMergeType_Simplygon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialMergeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialMergeType",
	"EMaterialMergeType",
	Z_Construct_UEnum_Engine_EMaterialMergeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialMergeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialMergeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialMergeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialMergeType()
{
	if (!Z_Registration_Info_UEnum_EMaterialMergeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialMergeType.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialMergeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialMergeType.InnerSingleton;
}
// End Enum EMaterialMergeType

// Begin ScriptStruct FMaterialProxySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialProxySettings;
class UScriptStruct* FMaterialProxySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialProxySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialProxySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialProxySettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialProxySettings"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialProxySettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialProxySettings>()
{
	return FMaterialProxySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialProxySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSizingType_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Method that should be used to generate the sizes of the output textures\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Method that should be used to generate the sizes of the output textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Size of generated BaseColor map\n" },
		{ "EditCondition", "TextureSizingType == ETextureSizingType::TextureSizingType_UseSingleTextureSize || TextureSizingType == ETextureSizingType::TextureSizingType_UseAutomaticBiasedSizes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Size of generated BaseColor map" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTexelDensityPerMeter_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Target texel density\n" },
		{ "EditCondition", "TextureSizingType == ETextureSizingType::TextureSizingType_AutomaticFromTexelDensity" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Target texel density" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMaxScreenSizePercent_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "// Expected maximum screen size for the mesh\n" },
		{ "EditCondition", "TextureSizingType == ETextureSizingType::TextureSizingType_AutomaticFromMeshScreenSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Expected maximum screen size for the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMinDrawDistance_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "0" },
		{ "Comment", "// Expected minimum distance at which the mesh will be rendered\n" },
		{ "EditCondition", "TextureSizingType == ETextureSizingType::TextureSizingType_AutomaticFromMeshDrawDistance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Expected minimum distance at which the mesh will be rendered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GutterSpace_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Gutter space to take into account \n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Gutter space to take into account" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetallicConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Metallic property\n" },
		{ "DisplayAfter", "bMetallicMap" },
		{ "editcondition", "!bMetallicMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Metallic property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Roughness property\n" },
		{ "DisplayAfter", "bRoughnessMap" },
		{ "editcondition", "!bRoughnessMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Roughness property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnisotropyConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Constant value to use for the Anisotropy property\n" },
		{ "DisplayAfter", "bAnisotropyMap" },
		{ "editcondition", "!bAnisotropyMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Anisotropy property" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Specular property\n" },
		{ "DisplayAfter", "bSpecularMap" },
		{ "editcondition", "!bSpecularMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Specular property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Opacity property\n" },
		{ "DisplayAfter", "bOpacityMap" },
		{ "editcondition", "!bOpacityMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Opacity property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Opacity mask property\n" },
		{ "DisplayAfter", "bOpacityMaskMap" },
		{ "editcondition", "!bOpacityMaskMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Opacity mask property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Ambient Occlusion property\n" },
		{ "DisplayAfter", "bAmbientOcclusionMap" },
		{ "editcondition", "!bAmbientOcclusionMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Ambient Occlusion property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMergeType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Target blend mode for the generated material\n" },
		{ "DisplayAfter", "AmbientOcclusionTextureSize" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Target blend mode for the generated material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTwoSidedMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether or not to allow the generated material can be two-sided\n" },
		{ "DisplayAfter", "BlendMode" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether or not to allow the generated material can be two-sided" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Normal property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Normal property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTangentMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Tangent property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Tangent property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMetallicMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Metallic property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Metallic property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoughnessMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Roughness property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Roughness property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnisotropyMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Anisotropy property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Anisotropy property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpecularMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Specular property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Specular property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmissiveMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Emissive property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Emissive property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpacityMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Opacity property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Opacity property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpacityMaskMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Opacity Mask property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Opacity Mask property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAmbientOcclusionMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Ambient Occlusion property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Ambient Occlusion property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffuseTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Diffuse texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Diffuse texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Normal texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Normal texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Tangent texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Tangent texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetallicTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Metallic texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Metallic texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Roughness texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Roughness texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnisotropyTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Anisotropy texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Anisotropy texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Specular texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Specular texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Emissive texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Emissive texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Opacity texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Opacity texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Opacity Mask texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Opacity Mask texture size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Ambient Occlusion texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Ambient Occlusion texture size" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureSizingType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetTexelDensityPerMeter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshMaxScreenSizePercent;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MeshMinDrawDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GutterSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MetallicConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnisotropyConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecularConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialMergeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static void NewProp_bAllowTwoSidedMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTwoSidedMaterial;
	static void NewProp_bNormalMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalMap;
	static void NewProp_bTangentMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTangentMap;
	static void NewProp_bMetallicMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMetallicMap;
	static void NewProp_bRoughnessMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoughnessMap;
	static void NewProp_bAnisotropyMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnisotropyMap;
	static void NewProp_bSpecularMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecularMap;
	static void NewProp_bEmissiveMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmissiveMap;
	static void NewProp_bOpacityMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpacityMap;
	static void NewProp_bOpacityMaskMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpacityMaskMap;
	static void NewProp_bAmbientOcclusionMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAmbientOcclusionMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiffuseTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetallicTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoughnessTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnisotropyTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecularTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpacityTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpacityMaskTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusionTextureSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialProxySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType = { "TextureSizingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, TextureSizingType), Z_Construct_UEnum_Engine_ETextureSizingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSizingType_MetaData), NewProp_TextureSizingType_MetaData) }; // 1909589602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TargetTexelDensityPerMeter = { "TargetTexelDensityPerMeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, TargetTexelDensityPerMeter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTexelDensityPerMeter_MetaData), NewProp_TargetTexelDensityPerMeter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MeshMaxScreenSizePercent = { "MeshMaxScreenSizePercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, MeshMaxScreenSizePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMaxScreenSizePercent_MetaData), NewProp_MeshMaxScreenSizePercent_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MeshMinDrawDistance = { "MeshMinDrawDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, MeshMinDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMinDrawDistance_MetaData), NewProp_MeshMinDrawDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace = { "GutterSpace", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, GutterSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GutterSpace_MetaData), NewProp_GutterSpace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant = { "MetallicConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, MetallicConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetallicConstant_MetaData), NewProp_MetallicConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant = { "RoughnessConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, RoughnessConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoughnessConstant_MetaData), NewProp_RoughnessConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyConstant = { "AnisotropyConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, AnisotropyConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnisotropyConstant_MetaData), NewProp_AnisotropyConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant = { "SpecularConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, SpecularConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularConstant_MetaData), NewProp_SpecularConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant = { "OpacityConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityConstant_MetaData), NewProp_OpacityConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant = { "OpacityMaskConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityMaskConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityMaskConstant_MetaData), NewProp_OpacityMaskConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant = { "AmbientOcclusionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, AmbientOcclusionConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientOcclusionConstant_MetaData), NewProp_AmbientOcclusionConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType = { "MaterialMergeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, MaterialMergeType), Z_Construct_UEnum_Engine_EMaterialMergeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialMergeType_MetaData), NewProp_MaterialMergeType_MetaData) }; // 3398917119
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 1831819339
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bAllowTwoSidedMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial = { "bAllowTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTwoSidedMaterial_MetaData), NewProp_bAllowTwoSidedMaterial_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bNormalMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap = { "bNormalMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalMap_MetaData), NewProp_bNormalMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bTangentMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap = { "bTangentMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTangentMap_MetaData), NewProp_bTangentMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bMetallicMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap = { "bMetallicMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMetallicMap_MetaData), NewProp_bMetallicMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bRoughnessMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap = { "bRoughnessMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoughnessMap_MetaData), NewProp_bRoughnessMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bAnisotropyMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap = { "bAnisotropyMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnisotropyMap_MetaData), NewProp_bAnisotropyMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bSpecularMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap = { "bSpecularMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpecularMap_MetaData), NewProp_bSpecularMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bEmissiveMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap = { "bEmissiveMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmissiveMap_MetaData), NewProp_bEmissiveMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bOpacityMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap = { "bOpacityMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpacityMap_MetaData), NewProp_bOpacityMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bOpacityMaskMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap = { "bOpacityMaskMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpacityMaskMap_MetaData), NewProp_bOpacityMaskMap_MetaData) };
void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_SetBit(void* Obj)
{
	((FMaterialProxySettings*)Obj)->bAmbientOcclusionMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap = { "bAmbientOcclusionMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAmbientOcclusionMap_MetaData), NewProp_bAmbientOcclusionMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize = { "DiffuseTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, DiffuseTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffuseTextureSize_MetaData), NewProp_DiffuseTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize = { "NormalTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, NormalTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalTextureSize_MetaData), NewProp_NormalTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TangentTextureSize = { "TangentTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, TangentTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentTextureSize_MetaData), NewProp_TangentTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize = { "MetallicTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, MetallicTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetallicTextureSize_MetaData), NewProp_MetallicTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize = { "RoughnessTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, RoughnessTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoughnessTextureSize_MetaData), NewProp_RoughnessTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyTextureSize = { "AnisotropyTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, AnisotropyTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnisotropyTextureSize_MetaData), NewProp_AnisotropyTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize = { "SpecularTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, SpecularTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularTextureSize_MetaData), NewProp_SpecularTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize = { "EmissiveTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, EmissiveTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmissiveTextureSize_MetaData), NewProp_EmissiveTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize = { "OpacityTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityTextureSize_MetaData), NewProp_OpacityTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize = { "OpacityMaskTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityMaskTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityMaskTextureSize_MetaData), NewProp_OpacityMaskTextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize = { "AmbientOcclusionTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialProxySettings, AmbientOcclusionTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientOcclusionTextureSize_MetaData), NewProp_AmbientOcclusionTextureSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TargetTexelDensityPerMeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MeshMaxScreenSizePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MeshMinDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TangentTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialProxySettings",
	Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers),
	sizeof(FMaterialProxySettings),
	alignof(FMaterialProxySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialProxySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialProxySettings.InnerSingleton, Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialProxySettings.InnerSingleton;
}
// End ScriptStruct FMaterialProxySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextureSizingType_StaticEnum, TEXT("ETextureSizingType"), &Z_Registration_Info_UEnum_ETextureSizingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1909589602U) },
		{ EMaterialMergeType_StaticEnum, TEXT("EMaterialMergeType"), &Z_Registration_Info_UEnum_EMaterialMergeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3398917119U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialProxySettings::StaticStruct, Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewStructOps, TEXT("MaterialProxySettings"), &Z_Registration_Info_UScriptStruct_MaterialProxySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialProxySettings), 2102831604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_3154606021(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
