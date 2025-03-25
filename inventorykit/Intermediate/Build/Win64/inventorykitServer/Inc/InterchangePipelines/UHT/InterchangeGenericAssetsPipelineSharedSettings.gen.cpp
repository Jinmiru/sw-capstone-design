// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeGenericAssetsPipelineSharedSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipelineSharedSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType();
INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Enum EInterchangeForceMeshType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeForceMeshType;
static UEnum* EInterchangeForceMeshType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeForceMeshType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeForceMeshType>()
{
	return EInterchangeForceMeshType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumerates the options for importing all meshes as one type. */" },
		{ "IFMT_MAX.Name", "EInterchangeForceMeshType::IFMT_MAX" },
		{ "IFMT_None.Comment", "/** Import both static meshes and skeletal meshes from the source without converting them. */" },
		{ "IFMT_None.DisplayName", "None" },
		{ "IFMT_None.Name", "EInterchangeForceMeshType::IFMT_None" },
		{ "IFMT_None.ToolTip", "Import both static meshes and skeletal meshes from the source without converting them." },
		{ "IFMT_SkeletalMesh.Comment", "/** Import all meshes from the source as skeletal meshes. */" },
		{ "IFMT_SkeletalMesh.DisplayName", "Skeletal Mesh" },
		{ "IFMT_SkeletalMesh.Name", "EInterchangeForceMeshType::IFMT_SkeletalMesh" },
		{ "IFMT_SkeletalMesh.ToolTip", "Import all meshes from the source as skeletal meshes." },
		{ "IFMT_StaticMesh.Comment", "/** Import all meshes from the source as static meshes. */" },
		{ "IFMT_StaticMesh.DisplayName", "Static Mesh" },
		{ "IFMT_StaticMesh.Name", "EInterchangeForceMeshType::IFMT_StaticMesh" },
		{ "IFMT_StaticMesh.ToolTip", "Import all meshes from the source as static meshes." },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Enumerates the options for importing all meshes as one type." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeForceMeshType::IFMT_None", (int64)EInterchangeForceMeshType::IFMT_None },
		{ "EInterchangeForceMeshType::IFMT_StaticMesh", (int64)EInterchangeForceMeshType::IFMT_StaticMesh },
		{ "EInterchangeForceMeshType::IFMT_SkeletalMesh", (int64)EInterchangeForceMeshType::IFMT_SkeletalMesh },
		{ "EInterchangeForceMeshType::IFMT_MAX", (int64)EInterchangeForceMeshType::IFMT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	"EInterchangeForceMeshType",
	"EInterchangeForceMeshType",
	Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton;
}
// End Enum EInterchangeForceMeshType

// Begin Enum EInterchangeVertexColorImportOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption;
static UEnum* EInterchangeVertexColorImportOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeVertexColorImportOption"));
	}
	return Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeVertexColorImportOption>()
{
	return EInterchangeVertexColorImportOption_StaticEnum();
}
struct Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IVCIO_Ignore.Comment", "/** Ignore vertex colors from the translated source. In case of a reimport, keep the existing mesh vertex colors. */" },
		{ "IVCIO_Ignore.DisplayName", "Ignore" },
		{ "IVCIO_Ignore.Name", "EInterchangeVertexColorImportOption::IVCIO_Ignore" },
		{ "IVCIO_Ignore.ToolTip", "Ignore vertex colors from the translated source. In case of a reimport, keep the existing mesh vertex colors." },
		{ "IVCIO_MAX.Name", "EInterchangeVertexColorImportOption::IVCIO_MAX" },
		{ "IVCIO_Override.Comment", "/** Override all vertex colors with the specified color. */" },
		{ "IVCIO_Override.DisplayName", "Override" },
		{ "IVCIO_Override.Name", "EInterchangeVertexColorImportOption::IVCIO_Override" },
		{ "IVCIO_Override.ToolTip", "Override all vertex colors with the specified color." },
		{ "IVCIO_Replace.Comment", "/** Import the mesh using the vertex colors from the translated source. */" },
		{ "IVCIO_Replace.DisplayName", "Replace" },
		{ "IVCIO_Replace.Name", "EInterchangeVertexColorImportOption::IVCIO_Replace" },
		{ "IVCIO_Replace.ToolTip", "Import the mesh using the vertex colors from the translated source." },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeVertexColorImportOption::IVCIO_Replace", (int64)EInterchangeVertexColorImportOption::IVCIO_Replace },
		{ "EInterchangeVertexColorImportOption::IVCIO_Ignore", (int64)EInterchangeVertexColorImportOption::IVCIO_Ignore },
		{ "EInterchangeVertexColorImportOption::IVCIO_Override", (int64)EInterchangeVertexColorImportOption::IVCIO_Override },
		{ "EInterchangeVertexColorImportOption::IVCIO_MAX", (int64)EInterchangeVertexColorImportOption::IVCIO_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	"EInterchangeVertexColorImportOption",
	"EInterchangeVertexColorImportOption",
	Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption()
{
	if (!Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton;
}
// End Enum EInterchangeVertexColorImportOption

// Begin Class UInterchangeGenericCommonMeshesProperties
void UInterchangeGenericCommonMeshesProperties::StaticRegisterNativesUInterchangeGenericCommonMeshesProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericCommonMeshesProperties);
UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister()
{
	return UInterchangeGenericCommonMeshesProperties::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceAllMeshAsType_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If set, imports all meshes in the source as either static meshes or skeletal meshes. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If set, imports all meshes in the source as either static meshes or skeletal meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectMeshType_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/**\n\x09 * If enabled, and some static mesh transforms are animated, the pipeline will convert the static mesh into a rigid skeletal mesh.\n\x09 * This setting is only used if the Force All Meshes As Type setting is set to \"None\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enabled, and some static mesh transforms are animated, the pipeline will convert the static mesh into a rigid skeletal mesh.\nThis setting is only used if the Force All Meshes As Type setting is set to \"None\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportLods_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enabled, any existing LODs for meshes are imported. This setting is only used if the Bake Meshes setting is also enabled. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enabled, any existing LODs for meshes are imported. This setting is only used if the Bake Meshes setting is also enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMeshes_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enabled, meshes are baked with the scene instance hierarchy transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enabled, meshes are baked with the scene instance hierarchy transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepSectionsSeparate_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If checked, sections with matching materials are kept separate and will not get combined. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If checked, sections with matching materials are kept separate and will not get combined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** Specify how vertex colors should be imported. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Specify how vertex colors should be imported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** Specify an override color for use when the Vertex Color Import Option setting is set to Override. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Specify an override color for use when the Vertex Color Import Option setting is set to Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enabled, normals in the imported mesh are ignored and recomputed. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, normals in the imported mesh are ignored and recomputed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangents_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enabled, tangents in the imported mesh are ignored and recomputed. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, tangents in the imported mesh are ignored and recomputed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enabled, tangents are recomputed using MikkTSpace. */" },
		{ "editcondition", "bRecomputeTangents" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, tangents are recomputed using MikkTSpace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeWeightedNormals_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enabled, normals are computed using the surface area and the corner angle of the triangle as a ratio. */" },
		{ "editcondition", "bRecomputeNormals" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, normals are computed using the surface area and the corner angle of the triangle as a ratio." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, tangents are stored at 16-bit vs 8-bit precision. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, tangents are stored at 16-bit vs 8-bit precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, UVs are stored at full floating-point precision. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, UVs are stored at full floating-point precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBackwardsCompatibleF16TruncUVs_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enabled, UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, degenerate triangles are removed. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, degenerate triangles are removed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForceAllMeshAsType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceAllMeshAsType;
	static void NewProp_bAutoDetectMeshType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectMeshType;
	static void NewProp_bImportLods_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportLods;
	static void NewProp_bBakeMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMeshes;
	static void NewProp_bKeepSectionsSeparate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepSectionsSeparate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorImportOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VertexColorImportOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexOverrideColor;
	static void NewProp_bRecomputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
	static void NewProp_bRecomputeTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangents;
	static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
	static void NewProp_bComputeWeightedNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeWeightedNormals;
	static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
	static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
	static void NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBackwardsCompatibleF16TruncUVs;
	static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericCommonMeshesProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType = { "ForceAllMeshAsType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericCommonMeshesProperties, ForceAllMeshAsType), Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceAllMeshAsType_MetaData), NewProp_ForceAllMeshAsType_MetaData) }; // 2728035901
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bAutoDetectMeshType_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bAutoDetectMeshType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bAutoDetectMeshType = { "bAutoDetectMeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bAutoDetectMeshType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDetectMeshType_MetaData), NewProp_bAutoDetectMeshType_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bImportLods = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods = { "bImportLods", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportLods_MetaData), NewProp_bImportLods_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bBakeMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes = { "bBakeMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeMeshes_MetaData), NewProp_bBakeMeshes_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bKeepSectionsSeparate_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bKeepSectionsSeparate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bKeepSectionsSeparate = { "bKeepSectionsSeparate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bKeepSectionsSeparate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepSectionsSeparate_MetaData), NewProp_bKeepSectionsSeparate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericCommonMeshesProperties, VertexColorImportOption), Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorImportOption_MetaData), NewProp_VertexColorImportOption_MetaData) }; // 3012190719
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericCommonMeshesProperties, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexOverrideColor_MetaData), NewProp_VertexOverrideColor_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bRecomputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecomputeNormals_MetaData), NewProp_bRecomputeNormals_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bRecomputeTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents = { "bRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecomputeTangents_MetaData), NewProp_bRecomputeTangents_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseMikkTSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMikkTSpace_MetaData), NewProp_bUseMikkTSpace_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bComputeWeightedNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals = { "bComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeWeightedNormals_MetaData), NewProp_bComputeWeightedNormals_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseHighPrecisionTangentBasis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPrecisionTangentBasis_MetaData), NewProp_bUseHighPrecisionTangentBasis_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseFullPrecisionUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFullPrecisionUVs_MetaData), NewProp_bUseFullPrecisionUVs_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseBackwardsCompatibleF16TruncUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs = { "bUseBackwardsCompatibleF16TruncUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBackwardsCompatibleF16TruncUVs_MetaData), NewProp_bUseBackwardsCompatibleF16TruncUVs_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
{
	((UInterchangeGenericCommonMeshesProperties*)Obj)->bRemoveDegenerates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDegenerates_MetaData), NewProp_bRemoveDegenerates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bAutoDetectMeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bKeepSectionsSeparate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexOverrideColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::ClassParams = {
	&UInterchangeGenericCommonMeshesProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::PropPointers),
	0,
	0x041010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton, Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericCommonMeshesProperties>()
{
	return UInterchangeGenericCommonMeshesProperties::StaticClass();
}
UInterchangeGenericCommonMeshesProperties::UInterchangeGenericCommonMeshesProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericCommonMeshesProperties);
UInterchangeGenericCommonMeshesProperties::~UInterchangeGenericCommonMeshesProperties() {}
// End Class UInterchangeGenericCommonMeshesProperties

// Begin Class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
void UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties);
UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister()
{
	return UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportOnlyAnimations_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** If enabled, only animations are imported from the source. You must also set a valid skeleton. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enabled, only animations are imported from the source. You must also set a valid skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** Skeleton to use for imported asset. When importing a skeletal mesh, leaving this as \"None\" will create a new skeleton. When importing an animation, this must be specified. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Skeleton to use for imported asset. When importing a skeletal mesh, leaving this as \"None\" will create a new skeleton. When importing an animation, this must be specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** \n\x09 * If enabled, meshes nested in bone hierarchies will be imported as meshes instead of being converted to bones. If the meshes are not skinned, they are\n\x09 * added to the skeletal mesh and removed from the list of static meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enabled, meshes nested in bone hierarchies will be imported as meshes instead of being converted to bones. If the meshes are not skinned, they are\nadded to the skeletal mesh and removed from the list of static meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseT0AsRefPose_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** If enabled, frame 0 is used as the reference pose for skeletal meshes. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enabled, frame 0 is used as the reference pose for skeletal meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, all static meshes that have morph targets will be imported as skeletal meshes instead. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enabled, all static meshes that have morph targets will be imported as skeletal meshes instead." },
	};
#endif // WITH_METADATA
	static void NewProp_bImportOnlyAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportOnlyAnimations;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Skeleton;
	static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
	static void NewProp_bUseT0AsRefPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseT0AsRefPose;
	static void NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertStaticsWithMorphTargetsToSkeletals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations_SetBit(void* Obj)
{
	((UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*)Obj)->bImportOnlyAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations = { "bImportOnlyAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportOnlyAnimations_MetaData), NewProp_bImportOnlyAnimations_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
{
	((UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*)Obj)->bImportMeshesInBoneHierarchy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportMeshesInBoneHierarchy_MetaData), NewProp_bImportMeshesInBoneHierarchy_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose_SetBit(void* Obj)
{
	((UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*)Obj)->bUseT0AsRefPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose = { "bUseT0AsRefPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseT0AsRefPose_MetaData), NewProp_bUseT0AsRefPose_MetaData) };
void Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void* Obj)
{
	((UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*)Obj)->bConvertStaticsWithMorphTargetsToSkeletals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals = { "bConvertStaticsWithMorphTargetsToSkeletals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData), NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::ClassParams = {
	&UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::PropPointers),
	0,
	0x041010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.OuterSingleton, Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>()
{
	return UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass();
}
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties);
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::~UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties() {}
// End Class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeForceMeshType_StaticEnum, TEXT("EInterchangeForceMeshType"), &Z_Registration_Info_UEnum_EInterchangeForceMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2728035901U) },
		{ EInterchangeVertexColorImportOption_StaticEnum, TEXT("EInterchangeVertexColorImportOption"), &Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3012190719U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties, UInterchangeGenericCommonMeshesProperties::StaticClass, TEXT("UInterchangeGenericCommonMeshesProperties"), &Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericCommonMeshesProperties), 2731535787U) },
		{ Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass, TEXT("UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties"), &Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), 2410924687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_1800091663(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
