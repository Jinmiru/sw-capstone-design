// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshReductionSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum SkeletalMeshTerminationCriterion
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion;
static UEnum* SkeletalMeshTerminationCriterion_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshTerminationCriterion"));
	}
	return Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<SkeletalMeshTerminationCriterion>()
{
	return SkeletalMeshTerminationCriterion_StaticEnum();
}
struct Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum specifying the reduction type to use when simplifying skeletal meshes with internal tool */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "SMTC_AbsNumOfTriangles.DisplayName", "Max Triangles" },
		{ "SMTC_AbsNumOfTriangles.Name", "SMTC_AbsNumOfTriangles" },
		{ "SMTC_AbsNumOfTriangles.ToolTip", "Triangle count criterion will be used for simplification." },
		{ "SMTC_AbsNumOfVerts.DisplayName", "Max Vertices" },
		{ "SMTC_AbsNumOfVerts.Name", "SMTC_AbsNumOfVerts" },
		{ "SMTC_AbsNumOfVerts.ToolTip", "Vertex cont criterion will be used for simplification." },
		{ "SMTC_AbsTriangleOrVert.DisplayName", "First Max Satisfied" },
		{ "SMTC_AbsTriangleOrVert.Name", "SMTC_AbsTriangleOrVert" },
		{ "SMTC_AbsTriangleOrVert.ToolTip", "Simplification will continue until either Triangle or Vertex count criteria is met." },
		{ "SMTC_MAX.Hidden", "" },
		{ "SMTC_MAX.Name", "SMTC_MAX" },
		{ "SMTC_NumOfTriangles.DisplayName", "Triangles" },
		{ "SMTC_NumOfTriangles.Name", "SMTC_NumOfTriangles" },
		{ "SMTC_NumOfTriangles.ToolTip", "Triangle count criterion will be used for simplification." },
		{ "SMTC_NumOfVerts.DisplayName", "Vertices" },
		{ "SMTC_NumOfVerts.Name", "SMTC_NumOfVerts" },
		{ "SMTC_NumOfVerts.ToolTip", "Vertex cont criterion will be used for simplification." },
		{ "SMTC_TriangleOrVert.DisplayName", "First Percent Satisfied" },
		{ "SMTC_TriangleOrVert.Name", "SMTC_TriangleOrVert" },
		{ "SMTC_TriangleOrVert.ToolTip", "Simplification will continue until either Triangle or Vertex count criteria is met." },
		{ "ToolTip", "Enum specifying the reduction type to use when simplifying skeletal meshes with internal tool" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SMTC_NumOfTriangles", (int64)SMTC_NumOfTriangles },
		{ "SMTC_NumOfVerts", (int64)SMTC_NumOfVerts },
		{ "SMTC_TriangleOrVert", (int64)SMTC_TriangleOrVert },
		{ "SMTC_AbsNumOfTriangles", (int64)SMTC_AbsNumOfTriangles },
		{ "SMTC_AbsNumOfVerts", (int64)SMTC_AbsNumOfVerts },
		{ "SMTC_AbsTriangleOrVert", (int64)SMTC_AbsTriangleOrVert },
		{ "SMTC_MAX", (int64)SMTC_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"SkeletalMeshTerminationCriterion",
	"SkeletalMeshTerminationCriterion",
	Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion()
{
	if (!Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion.InnerSingleton, Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion.InnerSingleton;
}
// End Enum SkeletalMeshTerminationCriterion

// Begin Enum SkeletalMeshOptimizationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SkeletalMeshOptimizationType;
static UEnum* SkeletalMeshOptimizationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SkeletalMeshOptimizationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SkeletalMeshOptimizationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationType"));
	}
	return Z_Registration_Info_UEnum_SkeletalMeshOptimizationType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<SkeletalMeshOptimizationType>()
{
	return SkeletalMeshOptimizationType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum specifying the reduction type to use when simplifying skeletal meshes with Simmplygon */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "SMOT_MAX.Hidden", "" },
		{ "SMOT_MAX.Name", "SMOT_MAX" },
		{ "SMOT_MaxDeviation.DisplayName", "Accuracy" },
		{ "SMOT_MaxDeviation.Name", "SMOT_MaxDeviation" },
		{ "SMOT_MaxDeviation.ToolTip", "Accuracy requirement will be used for simplification." },
		{ "SMOT_NumOfTriangles.DisplayName", "Triangles" },
		{ "SMOT_NumOfTriangles.Name", "SMOT_NumOfTriangles" },
		{ "SMOT_NumOfTriangles.ToolTip", "Triangle requirement will be used for simplification." },
		{ "SMOT_TriangleOrDeviation.DisplayName", "Any" },
		{ "SMOT_TriangleOrDeviation.Name", "SMOT_TriangleOrDeviation" },
		{ "SMOT_TriangleOrDeviation.ToolTip", "Simplification will continue until either Triangle or Accuracy requirement is met." },
		{ "ToolTip", "Enum specifying the reduction type to use when simplifying skeletal meshes with Simmplygon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SMOT_NumOfTriangles", (int64)SMOT_NumOfTriangles },
		{ "SMOT_MaxDeviation", (int64)SMOT_MaxDeviation },
		{ "SMOT_TriangleOrDeviation", (int64)SMOT_TriangleOrDeviation },
		{ "SMOT_MAX", (int64)SMOT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"SkeletalMeshOptimizationType",
	"SkeletalMeshOptimizationType",
	Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType()
{
	if (!Z_Registration_Info_UEnum_SkeletalMeshOptimizationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SkeletalMeshOptimizationType.InnerSingleton, Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SkeletalMeshOptimizationType.InnerSingleton;
}
// End Enum SkeletalMeshOptimizationType

// Begin Enum SkeletalMeshOptimizationImportance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance;
static UEnum* SkeletalMeshOptimizationImportance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationImportance"));
	}
	return Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<SkeletalMeshOptimizationImportance>()
{
	return SkeletalMeshOptimizationImportance_StaticEnum();
}
struct Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum specifying the importance of properties when simplifying skeletal meshes. */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "SMOI_High.DisplayName", "High" },
		{ "SMOI_High.Name", "SMOI_High" },
		{ "SMOI_Highest.DisplayName", "Highest" },
		{ "SMOI_Highest.Name", "SMOI_Highest" },
		{ "SMOI_Low.DisplayName", "Low" },
		{ "SMOI_Low.Name", "SMOI_Low" },
		{ "SMOI_Lowest.DisplayName", "Lowest" },
		{ "SMOI_Lowest.Name", "SMOI_Lowest" },
		{ "SMOI_MAX.Hidden", "" },
		{ "SMOI_MAX.Name", "SMOI_MAX" },
		{ "SMOI_Normal.DisplayName", "Normal" },
		{ "SMOI_Normal.Name", "SMOI_Normal" },
		{ "SMOI_Off.DisplayName", "Off" },
		{ "SMOI_Off.Name", "SMOI_Off" },
		{ "ToolTip", "Enum specifying the importance of properties when simplifying skeletal meshes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SMOI_Off", (int64)SMOI_Off },
		{ "SMOI_Lowest", (int64)SMOI_Lowest },
		{ "SMOI_Low", (int64)SMOI_Low },
		{ "SMOI_Normal", (int64)SMOI_Normal },
		{ "SMOI_High", (int64)SMOI_High },
		{ "SMOI_Highest", (int64)SMOI_Highest },
		{ "SMOI_MAX", (int64)SMOI_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"SkeletalMeshOptimizationImportance",
	"SkeletalMeshOptimizationImportance",
	Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance()
{
	if (!Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance.InnerSingleton, Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance.InnerSingleton;
}
// End Enum SkeletalMeshOptimizationImportance

// Begin ScriptStruct FSkeletalMeshOptimizationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings;
class UScriptStruct* FSkeletalMeshOptimizationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshOptimizationSettings>()
{
	return FSkeletalMeshOptimizationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FSkeletalMeshOptimizationSettings - The settings used to optimize a skeletal mesh LOD.\n*/" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "FSkeletalMeshOptimizationSettings - The settings used to optimize a skeletal mesh LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminationCriterion_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The method to use when optimizing the skeletal mesh LOD */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The percentage of triangles to retain as a ratio, e.g. 0.1 indicates 10 percent */" },
		{ "DisplayName", "Percent of Triangles" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The percentage of triangles to retain as a ratio, e.g. 0.1 indicates 10 percent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfVertPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The percentage of vertices to retain as a ratio, e.g. 0.1 indicates 10 percent */" },
		{ "DisplayName", "Percent of Vertices" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The percentage of vertices to retain as a ratio, e.g. 0.1 indicates 10 percent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfTriangles_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum number of triangles to retain */" },
		{ "DisplayName", "Max Triangle Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of triangles to retain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfVerts_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "6" },
		{ "Comment", "/** The maximum number of vertices to retain */" },
		{ "DisplayName", "Max Vertex Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of vertices to retain" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfTrianglesPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum number of triangles to retain when using percentage termination criterion. */" },
		{ "DisplayName", "Max Triangle Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of triangles to retain when using percentage termination criterion." },
		{ "UIMin", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfVertsPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "6" },
		{ "Comment", "/** The maximum number of vertices to retain when using percentage termination criterion. */" },
		{ "DisplayName", "Max Vertex Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of vertices to retain when using percentage termination criterion." },
		{ "UIMin", "6" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/**If ReductionMethod equals MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere. \n\x09 * In code, it ranges from [0, 1]. In the editor UI, it ranges from [0, 100]\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If ReductionMethod equals MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere.\nIn code, it ranges from [0, 1]. In the editor UI, it ranges from [0, 100]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The method to use when optimizing the skeletal mesh LOD */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important the shape of the geometry is. */" },
		{ "DisplayName", "Silhouette" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important the shape of the geometry is." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important texture density is. */" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important texture density is." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important shading quality is. */" },
		{ "DisplayName", "Shading" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important shading quality is." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinningImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important skinning quality is. */" },
		{ "DisplayName", "Skinning" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important skinning quality is." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemapMorphTargets_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/* Remap the morph targets from the base LOD onto the reduce LOD. */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Remap the morph targets from the base LOD onto the reduce LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Whether Normal smoothing groups should be preserved. If true then Hard Edge Angle (NormalsThreshold) is used **/" },
		{ "DisplayName", "Recompute Normal" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Whether Normal smoothing groups should be preserved. If true then Hard Edge Angle (NormalsThreshold) is used *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** The welding threshold distance. Vertices under this distance will be welded. */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** If the angle between two triangles are above this value, the normals will not be\n\x09smooth over the edge between those two triangles. Set in degrees. This is only used when bRecalcNormals is set to true*/" },
		{ "DisplayName", "Hard Edge Angle" },
		{ "EditCondition", "bRecalcNormals" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when bRecalcNormals is set to true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBonesPerVertex_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of bones that can be assigned to each vertex. */" },
		{ "DisplayName", "Max Bones Influence" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Maximum number of bones that can be assigned to each vertex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceBoneBoundaries_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Penalize edge collapse between vertices that have different major bones.  This will help articulated segments like tongues but can lead to undesirable results under extreme simplification */" },
		{ "DisplayName", "Enforce Bone Boundaries" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Penalize edge collapse between vertices that have different major bones.  This will help articulated segments like tongues but can lead to undesirable results under extreme simplification" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeCoincidentVertBones_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** If enabled this option make sure vertices that share the same location (e.g. UV boundaries) have the same bone weights. This can fix cracks when the characters animate. */" },
		{ "DisplayName", "Merge Coincident Vertices Bones" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If enabled this option make sure vertices that share the same location (e.g. UV boundaries) have the same bone weights. This can fix cracks when the characters animate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default value of 1 attempts to preserve volume.  Smaller values will loose volume by flattening curved surfaces, and larger values will accentuate curved surfaces.  */" },
		{ "DisplayName", "Volumetric Correction" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Default value of 1 attempts to preserve volume.  Smaller values will loose volume by flattening curved surfaces, and larger values will accentuate curved surfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockEdges_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Preserve cuts in the mesh surface by locking vertices in place.  Increases the quality of the simplified mesh at edges at the cost of more triangles*/" },
		{ "DisplayName", "Lock Mesh Edges" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Preserve cuts in the mesh surface by locking vertices in place.  Increases the quality of the simplified mesh at edges at the cost of more triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockColorBounaries_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Disallow edge collapse when the vertices do not have a common color*/" },
		{ "DisplayName", "Lock Vertex Color Boundaries" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Disallow edge collapse when the vertices do not have a common color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImproveTrianglesForCloth_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Better distribution of triangles on 2d meshes, such as flat cloth, but at the cost of potentially worse UVs in those areas.  This generally has little or no effect for mesh regions that aren't laid out on a plane intersecting the origin such as the xy-plane. When this is disabled, the planar regions may simplify to fewer large triangles.*/" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Better distribution of triangles on 2d meshes, such as flat cloth, but at the cost of potentially worse UVs in those areas.  This generally has little or no effect for mesh regions that aren't laid out on a plane intersecting the origin such as the xy-plane. When this is disabled, the planar regions may simplify to fewer large triangles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLOD_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Base LOD index to generate this LOD. By default, we generate from LOD 0 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Base LOD index to generate this LOD. By default, we generate from LOD 0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TerminationCriterion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumOfVertPercentage;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfTriangles;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfVerts;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfTrianglesPercentage;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfVertsPercentage;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReductionMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkinningImportance;
	static void NewProp_bRemapMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemapMorphTargets;
	static void NewProp_bRecalcNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBonesPerVertex;
	static void NewProp_bEnforceBoneBoundaries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceBoneBoundaries;
	static void NewProp_bMergeCoincidentVertBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeCoincidentVertBones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeImportance;
	static void NewProp_bLockEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockEdges;
	static void NewProp_bLockColorBounaries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockColorBounaries;
	static void NewProp_bImproveTrianglesForCloth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImproveTrianglesForCloth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseLOD;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakePose;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshOptimizationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TerminationCriterion = { "TerminationCriterion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, TerminationCriterion), Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminationCriterion_MetaData), NewProp_TerminationCriterion_MetaData) }; // 2958017776
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage = { "NumOfTrianglesPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfTrianglesPercentage_MetaData), NewProp_NumOfTrianglesPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfVertPercentage = { "NumOfVertPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NumOfVertPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfVertPercentage_MetaData), NewProp_NumOfVertPercentage_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTriangles = { "MaxNumOfTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfTriangles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOfTriangles_MetaData), NewProp_MaxNumOfTriangles_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVerts = { "MaxNumOfVerts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfVerts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOfVerts_MetaData), NewProp_MaxNumOfVerts_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTrianglesPercentage = { "MaxNumOfTrianglesPercentage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfTrianglesPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOfTrianglesPercentage_MetaData), NewProp_MaxNumOfTrianglesPercentage_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVertsPercentage = { "MaxNumOfVertsPercentage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfVertsPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOfVertsPercentage_MetaData), NewProp_MaxNumOfVertsPercentage_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage = { "MaxDeviationPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeviationPercentage_MetaData), NewProp_MaxDeviationPercentage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod = { "ReductionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReductionMethod_MetaData), NewProp_ReductionMethod_MetaData) }; // 4280951380
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SilhouetteImportance_MetaData), NewProp_SilhouetteImportance_MetaData) }; // 3010312219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, TextureImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureImportance_MetaData), NewProp_TextureImportance_MetaData) }; // 3010312219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ShadingImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingImportance_MetaData), NewProp_ShadingImportance_MetaData) }; // 3010312219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance = { "SkinningImportance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SkinningImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinningImportance_MetaData), NewProp_SkinningImportance_MetaData) }; // 3010312219
void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_SetBit(void* Obj)
{
	((FSkeletalMeshOptimizationSettings*)Obj)->bRemapMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets = { "bRemapMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemapMorphTargets_MetaData), NewProp_bRemapMorphTargets_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
{
	((FSkeletalMeshOptimizationSettings*)Obj)->bRecalcNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals = { "bRecalcNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalcNormals_MetaData), NewProp_bRecalcNormals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeldingThreshold_MetaData), NewProp_WeldingThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold = { "NormalsThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalsThreshold_MetaData), NewProp_NormalsThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex = { "MaxBonesPerVertex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxBonesPerVertex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBonesPerVertex_MetaData), NewProp_MaxBonesPerVertex_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries_SetBit(void* Obj)
{
	((FSkeletalMeshOptimizationSettings*)Obj)->bEnforceBoneBoundaries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries = { "bEnforceBoneBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnforceBoneBoundaries_MetaData), NewProp_bEnforceBoneBoundaries_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bMergeCoincidentVertBones_SetBit(void* Obj)
{
	((FSkeletalMeshOptimizationSettings*)Obj)->bMergeCoincidentVertBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bMergeCoincidentVertBones = { "bMergeCoincidentVertBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bMergeCoincidentVertBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeCoincidentVertBones_MetaData), NewProp_bMergeCoincidentVertBones_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_VolumeImportance = { "VolumeImportance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, VolumeImportance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeImportance_MetaData), NewProp_VolumeImportance_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges_SetBit(void* Obj)
{
	((FSkeletalMeshOptimizationSettings*)Obj)->bLockEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges = { "bLockEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockEdges_MetaData), NewProp_bLockEdges_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries_SetBit(void* Obj)
{
	((FSkeletalMeshOptimizationSettings*)Obj)->bLockColorBounaries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries = { "bLockColorBounaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockColorBounaries_MetaData), NewProp_bLockColorBounaries_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bImproveTrianglesForCloth_SetBit(void* Obj)
{
	((FSkeletalMeshOptimizationSettings*)Obj)->bImproveTrianglesForCloth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bImproveTrianglesForCloth = { "bImproveTrianglesForCloth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bImproveTrianglesForCloth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImproveTrianglesForCloth_MetaData), NewProp_bImproveTrianglesForCloth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD = { "BaseLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BaseLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLOD_MetaData), NewProp_BaseLOD_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_Inner = { "BonesToRemove", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove = { "BonesToRemove", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BonesToRemove_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesToRemove_MetaData), NewProp_BonesToRemove_MetaData) }; // 4218265988
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose = { "BakePose", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BakePose_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakePose_MetaData), NewProp_BakePose_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TerminationCriterion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfVertPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVerts,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTrianglesPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVertsPercentage,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bMergeCoincidentVertBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_VolumeImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bImproveTrianglesForCloth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletalMeshOptimizationSettings",
	Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers),
	sizeof(FSkeletalMeshOptimizationSettings),
	alignof(FSkeletalMeshOptimizationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshOptimizationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ SkeletalMeshTerminationCriterion_StaticEnum, TEXT("SkeletalMeshTerminationCriterion"), &Z_Registration_Info_UEnum_SkeletalMeshTerminationCriterion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2958017776U) },
		{ SkeletalMeshOptimizationType_StaticEnum, TEXT("SkeletalMeshOptimizationType"), &Z_Registration_Info_UEnum_SkeletalMeshOptimizationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4280951380U) },
		{ SkeletalMeshOptimizationImportance_StaticEnum, TEXT("SkeletalMeshOptimizationImportance"), &Z_Registration_Info_UEnum_SkeletalMeshOptimizationImportance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3010312219U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletalMeshOptimizationSettings::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewStructOps, TEXT("SkeletalMeshOptimizationSettings"), &Z_Registration_Info_UScriptStruct_SkeletalMeshOptimizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshOptimizationSettings), 3903286612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_3079996229(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
