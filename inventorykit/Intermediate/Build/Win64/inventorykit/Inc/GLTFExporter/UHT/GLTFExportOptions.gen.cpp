// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Options/GLTFExportOptions.h"
#include "GLTFExporter/Public/UserData/GLTFMaterialUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFExportOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExportOptions();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExportOptions_NoRegister();
GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode();
GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup();
GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode();
GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat();
GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFMaterialBakeSize();
GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Enum EGLTFTextureImageFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFTextureImageFormat;
static UEnum* EGLTFTextureImageFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat, (UObject*)Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFTextureImageFormat"));
	}
	return Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton;
}
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFTextureImageFormat>()
{
	return EGLTFTextureImageFormat_StaticEnum();
}
struct Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "JPEG.Comment", "/** If texture does not have an alpha channel, use JPEG (lossy compression); otherwise fallback to PNG. */" },
		{ "JPEG.DisplayName", "JPEG (if no alpha)" },
		{ "JPEG.Name", "EGLTFTextureImageFormat::JPEG" },
		{ "JPEG.ToolTip", "If texture does not have an alpha channel, use JPEG (lossy compression); otherwise fallback to PNG." },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "None.Comment", "/** Don't export any textures. */" },
		{ "None.Name", "EGLTFTextureImageFormat::None" },
		{ "None.ToolTip", "Don't export any textures." },
		{ "PNG.Comment", "/** Always use PNG (lossless compression). */" },
		{ "PNG.Name", "EGLTFTextureImageFormat::PNG" },
		{ "PNG.ToolTip", "Always use PNG (lossless compression)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGLTFTextureImageFormat::None", (int64)EGLTFTextureImageFormat::None },
		{ "EGLTFTextureImageFormat::PNG", (int64)EGLTFTextureImageFormat::PNG },
		{ "EGLTFTextureImageFormat::JPEG", (int64)EGLTFTextureImageFormat::JPEG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
	nullptr,
	"EGLTFTextureImageFormat",
	"EGLTFTextureImageFormat",
	Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat()
{
	if (!Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton;
}
// End Enum EGLTFTextureImageFormat

// Begin Enum EGLTFMaterialVariantMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFMaterialVariantMode;
static UEnum* EGLTFMaterialVariantMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode, (UObject*)Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFMaterialVariantMode"));
	}
	return Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton;
}
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialVariantMode>()
{
	return EGLTFMaterialVariantMode_StaticEnum();
}
struct Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "None.Comment", "/** Never export material variants. */" },
		{ "None.Name", "EGLTFMaterialVariantMode::None" },
		{ "None.ToolTip", "Never export material variants." },
		{ "Simple.Comment", "/** Export material variants but only use a simple quad if a material input needs to be baked out. */" },
		{ "Simple.Name", "EGLTFMaterialVariantMode::Simple" },
		{ "Simple.ToolTip", "Export material variants but only use a simple quad if a material input needs to be baked out." },
		{ "UseMeshData.Comment", "/** Export material variants and allow usage of the mesh data if a material input needs to be baked out with vertex data. */" },
		{ "UseMeshData.Name", "EGLTFMaterialVariantMode::UseMeshData" },
		{ "UseMeshData.ToolTip", "Export material variants and allow usage of the mesh data if a material input needs to be baked out with vertex data." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGLTFMaterialVariantMode::None", (int64)EGLTFMaterialVariantMode::None },
		{ "EGLTFMaterialVariantMode::Simple", (int64)EGLTFMaterialVariantMode::Simple },
		{ "EGLTFMaterialVariantMode::UseMeshData", (int64)EGLTFMaterialVariantMode::UseMeshData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
	nullptr,
	"EGLTFMaterialVariantMode",
	"EGLTFMaterialVariantMode",
	Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode()
{
	if (!Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton;
}
// End Enum EGLTFMaterialVariantMode

// Begin Class UGLTFExportOptions Function ResetToDefault
struct Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLTFExportOptions, nullptr, "ResetToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLTFExportOptions::execResetToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefault();
	P_NATIVE_END;
}
// End Class UGLTFExportOptions Function ResetToDefault

// Begin Class UGLTFExportOptions
void UGLTFExportOptions::StaticRegisterNativesUGLTFExportOptions()
{
	UClass* Class = UGLTFExportOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetToDefault", &UGLTFExportOptions::execResetToDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFExportOptions);
UClass* Z_Construct_UClass_UGLTFExportOptions_NoRegister()
{
	return UGLTFExportOptions::StaticClass();
}
struct Z_Construct_UClass_UGLTFExportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "Options/GLTFExportOptions.h" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportUniformScale_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Scale factor used for exporting all assets (0.01 by default) for conversion from centimeters (Unreal default) to meters (glTF). */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Scale factor used for exporting all assets (0.01 by default) for conversion from centimeters (Unreal default) to meters (glTF)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportPreviewMesh_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, the preview mesh for a standalone animation or material asset will also be exported. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, the preview mesh for a standalone animation or material asset will also be exported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipNearDefaultValues_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, floating-point-based JSON properties that are nearly equal to their default value will not be exported and thus regarded as exactly default, reducing JSON size. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, floating-point-based JSON properties that are nearly equal to their default value will not be exported and thus regarded as exactly default, reducing JSON size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeCopyrightNotice_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, the copyright notice from project settings will be included as metadata in the glTF asset. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, the copyright notice from project settings will be included as metadata in the glTF asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportProxyMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials that have a proxy defined in their user data, will be exported using that proxy instead. This setting won't affect proxy materials exported or referenced directly. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials that have a proxy defined in their user data, will be exported using that proxy instead. This setting won't affect proxy materials exported or referenced directly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseImporterMaterialMapping_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials imported with the Interchange-glTF importer will be directly mapped for the Exporter. bExport material options below will be ignored. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials imported with the Interchange-glTF importer will be directly mapped for the Exporter. bExport material options below will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportUnlitMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with shading model unlit will be properly exported. Uses extension KHR_materials_unlit. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials with shading model unlit will be properly exported. Uses extension KHR_materials_unlit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportClearCoatMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with shading model clear coat will be properly exported. Uses extension KHR_materials_clearcoat. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials with shading model clear coat will be properly exported. Uses extension KHR_materials_clearcoat." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportClothMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with shading model cloth will be properly exported. Uses extension KHR_materials_sheen. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials with shading model cloth will be properly exported. Uses extension KHR_materials_sheen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportThinTranslucentMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with shading model thin translucency will be exported. Export is only partial. Uses extension KHR_materials_transmission. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials with shading model thin translucency will be exported. Export is only partial. Uses extension KHR_materials_transmission." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularGlossinessMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials using the Importer's SpecularGlossiness material function will be exported. Uses extension KHR_materials_pbrSpecularGlossiness. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials using the Importer's SpecularGlossiness material function will be exported. Uses extension KHR_materials_pbrSpecularGlossiness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportEmissiveStrength_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, allows materials to have an emissive factor that exceeds the standard range [0.0, 1.0]. Uses extension KHR_materials_emissive_strength. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, allows materials to have an emissive factor that exceeds the standard range [0.0, 1.0]. Uses extension KHR_materials_emissive_strength." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeMaterialInputs_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Bake mode determining if and how a material input is baked out to a texture. Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions). */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Bake mode determining if and how a material input is baked out to a texture. Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeSize_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeFilter_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
		{ "ValidEnumValues", "TF_Nearest, TF_Bilinear, TF_Trilinear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeTiling_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputBakeSettings_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Input-specific default bake settings that override the general defaults above. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Input-specific default bake settings that override the general defaults above." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLevelOfDetail_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default LOD level used for exporting a mesh. Can be overridden by component or asset settings (e.g. minimum or forced LOD level). */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default LOD level used for exporting a mesh. Can be overridden by component or asset settings (e.g. minimum or forced LOD level)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportVertexColors_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, export vertex color. Not recommended due to vertex colors always being used as a base color multiplier in glTF, regardless of material. Often producing undesirable results. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export vertex color. Not recommended due to vertex colors always being used as a base color multiplier in glTF, regardless of material. Often producing undesirable results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportVertexSkinWeights_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, export vertex bone weights and indices in skeletal meshes. Necessary for animation sequences. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export vertex bone weights and indices in skeletal meshes. Necessary for animation sequences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMakeSkinnedMeshesRoot_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, make skeletal meshes into root nodes to strictly comply with the glTF specification. Final bone transforms remain the same and visual results are unaffected. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, make skeletal meshes into root nodes to strictly comply with the glTF specification. Final bone transforms remain the same and visual results are unaffected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMeshQuantization_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, use quantization for vertex tangents and normals, reducing size. Requires extension KHR_mesh_quantization, which may result in the mesh not loading in some glTF viewers. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, use quantization for vertex tangents and normals, reducing size. Requires extension KHR_mesh_quantization, which may result in the mesh not loading in some glTF viewers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLevelSequences_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enabled, export level sequences. Only transform tracks are currently supported. The level sequence will be played at the assigned display rate. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export level sequences. Only transform tracks are currently supported. The level sequence will be played at the assigned display rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportAnimationSequences_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enabled, export single animation asset used by a skeletal mesh component. Export of vertex skin weights must be enabled. */" },
		{ "EditCondition", "bExportVertexSkinWeights" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export single animation asset used by a skeletal mesh component. Export of vertex skin weights must be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureImageFormat_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Desired image format used for exported textures. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Desired image format used for exported textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureImageQuality_MetaData[] = {
		{ "Category", "Texture" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Level of compression used for textures exported with lossy image formats, 0 (default) or value between 1 (worst quality, best compression) and 100 (best quality, worst compression). */" },
		{ "EditCondition", "TextureImageFormat == EGLTFTextureImageFormat::JPEG" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Level of compression used for textures exported with lossy image formats, 0 (default) or value between 1 (worst quality, best compression) and 100 (best quality, worst compression)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportTextureTransforms_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** If enabled, export UV offset and scale/tiling used in materials. Uses extension KHR_texture_transform. */" },
		{ "EditCondition", "TextureImageFormat != EGLTFTextureImageFormat::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export UV offset and scale/tiling used in materials. Uses extension KHR_texture_transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustNormalmaps_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** If enabled, exported normalmaps will be adjusted from Unreal to glTF convention (i.e. the green channel is flipped). */" },
		{ "EditCondition", "TextureImageFormat != EGLTFTextureImageFormat::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, exported normalmaps will be adjusted from Unreal to glTF convention (i.e. the green channel is flipped)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportHiddenInGame_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** If enabled, export actors and components that are flagged as hidden in-game. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export actors and components that are flagged as hidden in-game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLights_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** If enabled, export directional, point, and spot light components. Uses extension KHR_lights_punctual. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export directional, point, and spot light components. Uses extension KHR_lights_punctual." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportCameras_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** If enabled, export camera components. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export camera components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportMaterialVariants_MetaData[] = {
		{ "Category", "VariantSets" },
		{ "Comment", "/** Mode determining if and how to export material variants that change the materials property on a static or skeletal mesh component. */" },
		{ "EditCondition", "VariantSetsMode != EGLTFVariantSetsMode::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Mode determining if and how to export material variants that change the materials property on a static or skeletal mesh component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExportUniformScale;
	static void NewProp_bExportPreviewMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPreviewMesh;
	static void NewProp_bSkipNearDefaultValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipNearDefaultValues;
	static void NewProp_bIncludeCopyrightNotice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeCopyrightNotice;
	static void NewProp_bExportProxyMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportProxyMaterials;
	static void NewProp_bUseImporterMaterialMapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseImporterMaterialMapping;
	static void NewProp_bExportUnlitMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportUnlitMaterials;
	static void NewProp_bExportClearCoatMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportClearCoatMaterials;
	static void NewProp_bExportClothMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportClothMaterials;
	static void NewProp_bExportThinTranslucentMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportThinTranslucentMaterials;
	static void NewProp_bExportSpecularGlossinessMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularGlossinessMaterials;
	static void NewProp_bExportEmissiveStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportEmissiveStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeMaterialInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeMaterialInputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMaterialBakeSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialBakeFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialBakeTiling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputBakeSettings_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInputBakeSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultInputBakeSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultLevelOfDetail;
	static void NewProp_bExportVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportVertexColors;
	static void NewProp_bExportVertexSkinWeights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportVertexSkinWeights;
	static void NewProp_bMakeSkinnedMeshesRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeSkinnedMeshesRoot;
	static void NewProp_bUseMeshQuantization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMeshQuantization;
	static void NewProp_bExportLevelSequences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLevelSequences;
	static void NewProp_bExportAnimationSequences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportAnimationSequences;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureImageFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureImageFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureImageQuality;
	static void NewProp_bExportTextureTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportTextureTransforms;
	static void NewProp_bAdjustNormalmaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustNormalmaps;
	static void NewProp_bExportHiddenInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportHiddenInGame;
	static void NewProp_bExportLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLights;
	static void NewProp_bExportCameras_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportCameras;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExportMaterialVariants_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExportMaterialVariants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault, "ResetToDefault" }, // 2344839314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFExportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportUniformScale = { "ExportUniformScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, ExportUniformScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportUniformScale_MetaData), NewProp_ExportUniformScale_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportPreviewMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh = { "bExportPreviewMesh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportPreviewMesh_MetaData), NewProp_bExportPreviewMesh_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bSkipNearDefaultValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues = { "bSkipNearDefaultValues", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipNearDefaultValues_MetaData), NewProp_bSkipNearDefaultValues_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeCopyrightNotice_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bIncludeCopyrightNotice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeCopyrightNotice = { "bIncludeCopyrightNotice", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeCopyrightNotice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeCopyrightNotice_MetaData), NewProp_bIncludeCopyrightNotice_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportProxyMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials = { "bExportProxyMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportProxyMaterials_MetaData), NewProp_bExportProxyMaterials_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseImporterMaterialMapping_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bUseImporterMaterialMapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseImporterMaterialMapping = { "bUseImporterMaterialMapping", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseImporterMaterialMapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseImporterMaterialMapping_MetaData), NewProp_bUseImporterMaterialMapping_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportUnlitMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials = { "bExportUnlitMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportUnlitMaterials_MetaData), NewProp_bExportUnlitMaterials_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportClearCoatMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials = { "bExportClearCoatMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportClearCoatMaterials_MetaData), NewProp_bExportClearCoatMaterials_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClothMaterials_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportClothMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClothMaterials = { "bExportClothMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClothMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportClothMaterials_MetaData), NewProp_bExportClothMaterials_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportThinTranslucentMaterials_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportThinTranslucentMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportThinTranslucentMaterials = { "bExportThinTranslucentMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportThinTranslucentMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportThinTranslucentMaterials_MetaData), NewProp_bExportThinTranslucentMaterials_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSpecularGlossinessMaterials_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportSpecularGlossinessMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSpecularGlossinessMaterials = { "bExportSpecularGlossinessMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSpecularGlossinessMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportSpecularGlossinessMaterials_MetaData), NewProp_bExportSpecularGlossinessMaterials_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportEmissiveStrength_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportEmissiveStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportEmissiveStrength = { "bExportEmissiveStrength", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportEmissiveStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportEmissiveStrength_MetaData), NewProp_bExportEmissiveStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs = { "BakeMaterialInputs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, BakeMaterialInputs), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeMaterialInputs_MetaData), NewProp_BakeMaterialInputs_MetaData) }; // 2787297389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize = { "DefaultMaterialBakeSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, DefaultMaterialBakeSize), Z_Construct_UScriptStruct_FGLTFMaterialBakeSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialBakeSize_MetaData), NewProp_DefaultMaterialBakeSize_MetaData) }; // 3894204209
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeFilter = { "DefaultMaterialBakeFilter", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, DefaultMaterialBakeFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialBakeFilter_MetaData), NewProp_DefaultMaterialBakeFilter_MetaData) }; // 525537855
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeTiling = { "DefaultMaterialBakeTiling", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, DefaultMaterialBakeTiling), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialBakeTiling_MetaData), NewProp_DefaultMaterialBakeTiling_MetaData) }; // 2220430387
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_ValueProp = { "DefaultInputBakeSettings", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(0, nullptr) }; // 1666532053
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp = { "DefaultInputBakeSettings_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup, METADATA_PARAMS(0, nullptr) }; // 4087595200
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings = { "DefaultInputBakeSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, DefaultInputBakeSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputBakeSettings_MetaData), NewProp_DefaultInputBakeSettings_MetaData) }; // 4087595200 1666532053
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultLevelOfDetail = { "DefaultLevelOfDetail", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, DefaultLevelOfDetail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLevelOfDetail_MetaData), NewProp_DefaultLevelOfDetail_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors = { "bExportVertexColors", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportVertexColors_MetaData), NewProp_bExportVertexColors_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportVertexSkinWeights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights = { "bExportVertexSkinWeights", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportVertexSkinWeights_MetaData), NewProp_bExportVertexSkinWeights_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bMakeSkinnedMeshesRoot_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bMakeSkinnedMeshesRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bMakeSkinnedMeshesRoot = { "bMakeSkinnedMeshesRoot", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bMakeSkinnedMeshesRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMakeSkinnedMeshesRoot_MetaData), NewProp_bMakeSkinnedMeshesRoot_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bUseMeshQuantization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization = { "bUseMeshQuantization", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMeshQuantization_MetaData), NewProp_bUseMeshQuantization_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportLevelSequences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences = { "bExportLevelSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLevelSequences_MetaData), NewProp_bExportLevelSequences_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportAnimationSequences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences = { "bExportAnimationSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportAnimationSequences_MetaData), NewProp_bExportAnimationSequences_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat = { "TextureImageFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, TextureImageFormat), Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureImageFormat_MetaData), NewProp_TextureImageFormat_MetaData) }; // 3414893447
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageQuality = { "TextureImageQuality", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, TextureImageQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureImageQuality_MetaData), NewProp_TextureImageQuality_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportTextureTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms = { "bExportTextureTransforms", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportTextureTransforms_MetaData), NewProp_bExportTextureTransforms_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bAdjustNormalmaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps = { "bAdjustNormalmaps", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdjustNormalmaps_MetaData), NewProp_bAdjustNormalmaps_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportHiddenInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame = { "bExportHiddenInGame", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportHiddenInGame_MetaData), NewProp_bExportHiddenInGame_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLights_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLights = { "bExportLights", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLights_MetaData), NewProp_bExportLights_MetaData) };
void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_SetBit(void* Obj)
{
	((UGLTFExportOptions*)Obj)->bExportCameras = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras = { "bExportCameras", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportCameras_MetaData), NewProp_bExportCameras_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants = { "ExportMaterialVariants", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFExportOptions, ExportMaterialVariants), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportMaterialVariants_MetaData), NewProp_ExportMaterialVariants_MetaData) }; // 1672347310
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFExportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportUniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeCopyrightNotice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseImporterMaterialMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClothMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportThinTranslucentMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSpecularGlossinessMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportEmissiveStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultLevelOfDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bMakeSkinnedMeshesRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLTFExportOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFExportOptions_Statics::ClassParams = {
	&UGLTFExportOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGLTFExportOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFExportOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFExportOptions()
{
	if (!Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton, Z_Construct_UClass_UGLTFExportOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFExportOptions>()
{
	return UGLTFExportOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFExportOptions);
UGLTFExportOptions::~UGLTFExportOptions() {}
// End Class UGLTFExportOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGLTFTextureImageFormat_StaticEnum, TEXT("EGLTFTextureImageFormat"), &Z_Registration_Info_UEnum_EGLTFTextureImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3414893447U) },
		{ EGLTFMaterialVariantMode_StaticEnum, TEXT("EGLTFMaterialVariantMode"), &Z_Registration_Info_UEnum_EGLTFMaterialVariantMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1672347310U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFExportOptions, UGLTFExportOptions::StaticClass, TEXT("UGLTFExportOptions"), &Z_Registration_Info_UClass_UGLTFExportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFExportOptions), 1793452022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_3390993887(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
