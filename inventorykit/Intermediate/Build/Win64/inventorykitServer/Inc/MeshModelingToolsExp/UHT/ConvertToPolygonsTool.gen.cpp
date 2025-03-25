// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/ConvertToPolygonsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertToPolygonsTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UConvertToPolygonsToolBuilder
void UConvertToPolygonsToolBuilder::StaticRegisterNativesUConvertToPolygonsToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsToolBuilder);
UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder_NoRegister()
{
	return UConvertToPolygonsToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::ClassParams = {
	&UConvertToPolygonsToolBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder()
{
	if (!Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsToolBuilder>()
{
	return UConvertToPolygonsToolBuilder::StaticClass();
}
UConvertToPolygonsToolBuilder::UConvertToPolygonsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsToolBuilder);
UConvertToPolygonsToolBuilder::~UConvertToPolygonsToolBuilder() {}
// End Class UConvertToPolygonsToolBuilder

// Begin Enum EConvertToPolygonsMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvertToPolygonsMode;
static UEnum* EConvertToPolygonsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EConvertToPolygonsMode"));
	}
	return Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EConvertToPolygonsMode>()
{
	return EConvertToPolygonsMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CopyFromLayer.Comment", "/** Copy from existing Polygroup Layer */" },
		{ "CopyFromLayer.DisplayName", "Copy From Layer" },
		{ "CopyFromLayer.Name", "EConvertToPolygonsMode::CopyFromLayer" },
		{ "CopyFromLayer.ToolTip", "Copy from existing Polygroup Layer" },
		{ "FaceNormalDeviation.Comment", "/** Convert based on Angle Tolerance between Face Normals */" },
		{ "FaceNormalDeviation.DisplayName", "Face Normal Deviation" },
		{ "FaceNormalDeviation.Name", "EConvertToPolygonsMode::FaceNormalDeviation" },
		{ "FaceNormalDeviation.ToolTip", "Convert based on Angle Tolerance between Face Normals" },
		{ "FindPolygons.Comment", "/** Create Polygroups by merging triangle pairs into Quads */" },
		{ "FindPolygons.DisplayName", "Find Quads" },
		{ "FindPolygons.Name", "EConvertToPolygonsMode::FindPolygons" },
		{ "FindPolygons.ToolTip", "Create Polygroups by merging triangle pairs into Quads" },
		{ "FromConnectedTris.Comment", "/** Create Polygroups based on Connected Triangles */" },
		{ "FromConnectedTris.DisplayName", "From Connected Tris" },
		{ "FromConnectedTris.Name", "EConvertToPolygonsMode::FromConnectedTris" },
		{ "FromConnectedTris.ToolTip", "Create Polygroups based on Connected Triangles" },
		{ "FromFurthestPointSampling.Comment", "/** Create Polygroups centered on well-spaced sample points, approximating a surface Voronoi diagram */" },
		{ "FromFurthestPointSampling.DisplayName", "Furthest Point Sampling" },
		{ "FromFurthestPointSampling.Name", "EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "FromFurthestPointSampling.ToolTip", "Create Polygroups centered on well-spaced sample points, approximating a surface Voronoi diagram" },
		{ "FromNormalSeams.Comment", "/** Create PolyGroups based on Hard Normal Seams */" },
		{ "FromNormalSeams.DisplayName", "From Hard Normal Seams" },
		{ "FromNormalSeams.Name", "EConvertToPolygonsMode::FromNormalSeams" },
		{ "FromNormalSeams.ToolTip", "Create PolyGroups based on Hard Normal Seams" },
		{ "FromUVIslands.Comment", "/** Create PolyGroups based on UV Islands */" },
		{ "FromUVIslands.DisplayName", "From UV Islands" },
		{ "FromUVIslands.Name", "EConvertToPolygonsMode::FromUVIslands" },
		{ "FromUVIslands.ToolTip", "Create PolyGroups based on UV Islands" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConvertToPolygonsMode::FaceNormalDeviation", (int64)EConvertToPolygonsMode::FaceNormalDeviation },
		{ "EConvertToPolygonsMode::FindPolygons", (int64)EConvertToPolygonsMode::FindPolygons },
		{ "EConvertToPolygonsMode::FromUVIslands", (int64)EConvertToPolygonsMode::FromUVIslands },
		{ "EConvertToPolygonsMode::FromNormalSeams", (int64)EConvertToPolygonsMode::FromNormalSeams },
		{ "EConvertToPolygonsMode::FromConnectedTris", (int64)EConvertToPolygonsMode::FromConnectedTris },
		{ "EConvertToPolygonsMode::FromFurthestPointSampling", (int64)EConvertToPolygonsMode::FromFurthestPointSampling },
		{ "EConvertToPolygonsMode::CopyFromLayer", (int64)EConvertToPolygonsMode::CopyFromLayer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EConvertToPolygonsMode",
	"EConvertToPolygonsMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode()
{
	if (!Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton;
}
// End Enum EConvertToPolygonsMode

// Begin Class UConvertToPolygonsToolProperties
void UConvertToPolygonsToolProperties::StaticRegisterNativesUConvertToPolygonsToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsToolProperties);
UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister()
{
	return UConvertToPolygonsToolProperties::StaticClass();
}
struct Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionMode_MetaData[] = {
		{ "Category", "PolyGroups" },
		{ "Comment", "/** Strategy to use to group triangles */" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Strategy to use to group triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleTolerance_MetaData[] = {
		{ "Category", "NormalDeviation" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Tolerance for planarity */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FaceNormalDeviation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Tolerance for planarity" },
		{ "UIMax", "60.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAverageGroupNormal_MetaData[] = {
		{ "Category", "NormalDeviation" },
		{ "Comment", "/** Whether to compute Face Normal Deviation based on the overall PolyGroup's average normal, or to only consider the normals of the individual triangles */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FaceNormalDeviation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Whether to compute Face Normal Deviation based on the overall PolyGroup's average normal, or to only consider the normals of the individual triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Furthest-Point Sample count, approximately this number of polygroups will be generated */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Furthest-Point Sample count, approximately this number of polygroups will be generated" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitExisting_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "Comment", "/** If enabled, then furthest-point sampling happens with respect to existing Polygroups, ie the existing groups are further subdivided */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If enabled, then furthest-point sampling happens with respect to existing Polygroups, ie the existing groups are further subdivided" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalWeighted_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "Comment", "/** If true, region-growing in Sampling modes will be controlled by face normals, resulting in regions with borders that are more-aligned with curvature ridges */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, region-growing in Sampling modes will be controlled by face normals, resulting in regions with borders that are more-aligned with curvature ridges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalWeighting_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** This parameter modulates the effect of normal weighting during region-growing */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "This parameter modulates the effect of normal weighting during region-growing" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadAdjacencyWeight_MetaData[] = {
		{ "Category", "FindQuads" },
		{ "Comment", "/** Bias for Quads that are adjacent to already-discovered Quads. Set to 0 to disable.  */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Bias for Quads that are adjacent to already-discovered Quads. Set to 0 to disable." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadMetricClamp_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "FindQuads" },
		{ "Comment", "/** Set to values below 1 to ignore less-likely triangle pairings */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Set to values below 1 to ignore less-likely triangle pairings" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadSearchRounds_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "FindQuads" },
		{ "Comment", "/** Iteratively repeat quad-searching in uncertain areas, to try to slightly improve results */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Iteratively repeat quad-searching in uncertain areas, to try to slightly improve results" },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespectUVSeams_MetaData[] = {
		{ "Category", "Topology" },
		{ "Comment", "/** If true, polygroup borders will not cross existing UV seams */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FaceNormalDeviation || ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, polygroup borders will not cross existing UV seams" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespectHardNormals_MetaData[] = {
		{ "Category", "Topology" },
		{ "Comment", "/** If true, polygroup borders will not cross existing hard normal seams */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FaceNormalDeviation || ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, polygroup borders will not cross existing hard normal seams" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinGroupSize_MetaData[] = {
		{ "Category", "Filtering" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** group filtering */" },
		{ "EditCondition", "ConversionMode != EConvertToPolygonsMode::CopyFromLayer" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "group filtering" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateNormals_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If true, normals are recomputed per-group, with hard edges at group boundaries */" },
		{ "EditCondition", "ConversionMode != EConvertToPolygonsMode::CopyFromLayer" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, normals are recomputed per-group, with hard edges at group boundaries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGroupColors_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display each group with a different auto-generated color */" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Display each group with a different auto-generated color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConversionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTolerance;
	static void NewProp_bUseAverageGroupNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAverageGroupNormal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static void NewProp_bSplitExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitExisting;
	static void NewProp_bNormalWeighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalWeighted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalWeighting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QuadAdjacencyWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QuadMetricClamp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuadSearchRounds;
	static void NewProp_bRespectUVSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectUVSeams;
	static void NewProp_bRespectHardNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectHardNormals;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinGroupSize;
	static void NewProp_bCalculateNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateNormals;
	static void NewProp_bShowGroupColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGroupColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode = { "ConversionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, ConversionMode), Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionMode_MetaData), NewProp_ConversionMode_MetaData) }; // 2026608848
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_AngleTolerance = { "AngleTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, AngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleTolerance_MetaData), NewProp_AngleTolerance_MetaData) };
void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bUseAverageGroupNormal_SetBit(void* Obj)
{
	((UConvertToPolygonsToolProperties*)Obj)->bUseAverageGroupNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bUseAverageGroupNormal = { "bUseAverageGroupNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bUseAverageGroupNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAverageGroupNormal_MetaData), NewProp_bUseAverageGroupNormal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, NumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPoints_MetaData), NewProp_NumPoints_MetaData) };
void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_SetBit(void* Obj)
{
	((UConvertToPolygonsToolProperties*)Obj)->bSplitExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting = { "bSplitExisting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitExisting_MetaData), NewProp_bSplitExisting_MetaData) };
void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_SetBit(void* Obj)
{
	((UConvertToPolygonsToolProperties*)Obj)->bNormalWeighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted = { "bNormalWeighted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalWeighted_MetaData), NewProp_bNormalWeighted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NormalWeighting = { "NormalWeighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, NormalWeighting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalWeighting_MetaData), NewProp_NormalWeighting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadAdjacencyWeight = { "QuadAdjacencyWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, QuadAdjacencyWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadAdjacencyWeight_MetaData), NewProp_QuadAdjacencyWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadMetricClamp = { "QuadMetricClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, QuadMetricClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadMetricClamp_MetaData), NewProp_QuadMetricClamp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadSearchRounds = { "QuadSearchRounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, QuadSearchRounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadSearchRounds_MetaData), NewProp_QuadSearchRounds_MetaData) };
void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_SetBit(void* Obj)
{
	((UConvertToPolygonsToolProperties*)Obj)->bRespectUVSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams = { "bRespectUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespectUVSeams_MetaData), NewProp_bRespectUVSeams_MetaData) };
void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_SetBit(void* Obj)
{
	((UConvertToPolygonsToolProperties*)Obj)->bRespectHardNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals = { "bRespectHardNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespectHardNormals_MetaData), NewProp_bRespectHardNormals_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_MinGroupSize = { "MinGroupSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsToolProperties, MinGroupSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinGroupSize_MetaData), NewProp_MinGroupSize_MetaData) };
void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_SetBit(void* Obj)
{
	((UConvertToPolygonsToolProperties*)Obj)->bCalculateNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals = { "bCalculateNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCalculateNormals_MetaData), NewProp_bCalculateNormals_MetaData) };
void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_SetBit(void* Obj)
{
	((UConvertToPolygonsToolProperties*)Obj)->bShowGroupColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors = { "bShowGroupColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGroupColors_MetaData), NewProp_bShowGroupColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_AngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bUseAverageGroupNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NormalWeighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadAdjacencyWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadMetricClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadSearchRounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_MinGroupSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::ClassParams = {
	&UConvertToPolygonsToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties()
{
	if (!Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsToolProperties>()
{
	return UConvertToPolygonsToolProperties::StaticClass();
}
UConvertToPolygonsToolProperties::UConvertToPolygonsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsToolProperties);
UConvertToPolygonsToolProperties::~UConvertToPolygonsToolProperties() {}
// End Class UConvertToPolygonsToolProperties

// Begin Class UOutputPolygroupLayerProperties Function GetGroupOptionsList
struct Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics
{
	struct OutputPolygroupLayerProperties_eventGetGroupOptionsList_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Provides set of available group layers\n" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Provides set of available group layers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutputPolygroupLayerProperties_eventGetGroupOptionsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutputPolygroupLayerProperties, nullptr, "GetGroupOptionsList", nullptr, nullptr, Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::OutputPolygroupLayerProperties_eventGetGroupOptionsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::OutputPolygroupLayerProperties_eventGetGroupOptionsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutputPolygroupLayerProperties::execGetGroupOptionsList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetGroupOptionsList();
	P_NATIVE_END;
}
// End Class UOutputPolygroupLayerProperties Function GetGroupOptionsList

// Begin Class UOutputPolygroupLayerProperties
void UOutputPolygroupLayerProperties::StaticRegisterNativesUOutputPolygroupLayerProperties()
{
	UClass* Class = UOutputPolygroupLayerProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGroupOptionsList", &UOutputPolygroupLayerProperties::execGetGroupOptionsList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutputPolygroupLayerProperties);
UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties_NoRegister()
{
	return UOutputPolygroupLayerProperties::StaticClass();
}
struct Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayer_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Select PolyGroup layer to use. */" },
		{ "DisplayName", "Output Layer" },
		{ "GetOptions", "GetGroupOptionsList" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Select PolyGroup layer to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNewLayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLayerName_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Name of the new Group Layer */" },
		{ "DisplayName", "New Layer Name" },
		{ "EditCondition", "bShowNewLayerName" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of the new Group Layer" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupLayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionsList;
	static void NewProp_bShowNewLayerName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNewLayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewLayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList, "GetGroupOptionsList" }, // 454292285
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutputPolygroupLayerProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutputPolygroupLayerProperties, GroupLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupLayer_MetaData), NewProp_GroupLayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList_Inner = { "OptionsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList = { "OptionsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutputPolygroupLayerProperties, OptionsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsList_MetaData), NewProp_OptionsList_MetaData) };
void Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName_SetBit(void* Obj)
{
	((UOutputPolygroupLayerProperties*)Obj)->bShowNewLayerName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName = { "bShowNewLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOutputPolygroupLayerProperties), &Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNewLayerName_MetaData), NewProp_bShowNewLayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_NewLayerName = { "NewLayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutputPolygroupLayerProperties, NewLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLayerName_MetaData), NewProp_NewLayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_GroupLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_NewLayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::ClassParams = {
	&UOutputPolygroupLayerProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties()
{
	if (!Z_Registration_Info_UClass_UOutputPolygroupLayerProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutputPolygroupLayerProperties.OuterSingleton, Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOutputPolygroupLayerProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOutputPolygroupLayerProperties>()
{
	return UOutputPolygroupLayerProperties::StaticClass();
}
UOutputPolygroupLayerProperties::UOutputPolygroupLayerProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOutputPolygroupLayerProperties);
UOutputPolygroupLayerProperties::~UOutputPolygroupLayerProperties() {}
// End Class UOutputPolygroupLayerProperties

// Begin Class UConvertToPolygonsOperatorFactory
void UConvertToPolygonsOperatorFactory::StaticRegisterNativesUConvertToPolygonsOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsOperatorFactory);
UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory_NoRegister()
{
	return UConvertToPolygonsOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvertToPolygonsTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConvertToPolygonsTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::NewProp_ConvertToPolygonsTool = { "ConvertToPolygonsTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsOperatorFactory, ConvertToPolygonsTool), Z_Construct_UClass_UConvertToPolygonsTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvertToPolygonsTool_MetaData), NewProp_ConvertToPolygonsTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::NewProp_ConvertToPolygonsTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::ClassParams = {
	&UConvertToPolygonsOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory()
{
	if (!Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsOperatorFactory>()
{
	return UConvertToPolygonsOperatorFactory::StaticClass();
}
UConvertToPolygonsOperatorFactory::UConvertToPolygonsOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsOperatorFactory);
UConvertToPolygonsOperatorFactory::~UConvertToPolygonsOperatorFactory() {}
// End Class UConvertToPolygonsOperatorFactory

// Begin Class UConvertToPolygonsTool
void UConvertToPolygonsTool::StaticRegisterNativesUConvertToPolygonsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsTool);
UClass* Z_Construct_UClass_UConvertToPolygonsTool_NoRegister()
{
	return UConvertToPolygonsTool::StaticClass();
}
struct Z_Construct_UClass_UConvertToPolygonsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyFromLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnmodifiedAreaPreviewMesh_MetaData[] = {
		{ "Comment", "// If a selection was provided (bUsingSelection = true), UnmodifiedAreaPreviewMesh is used to render the unmodified (non-selected) part of the input mesh,\n// as the PreviewCompute input mesh will be limited to the input selected area\n" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If a selection was provided (bUsingSelection = true), UnmodifiedAreaPreviewMesh is used to render the unmodified (non-selected) part of the input mesh,\nas the PreviewCompute input mesh will be limited to the input selected area" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyFromLayerProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewCompute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnmodifiedAreaPreviewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsTool, Settings), Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_CopyFromLayerProperties = { "CopyFromLayerProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsTool, CopyFromLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyFromLayerProperties_MetaData), NewProp_CopyFromLayerProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_OutputProperties = { "OutputProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsTool, OutputProperties), Z_Construct_UClass_UOutputPolygroupLayerProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputProperties_MetaData), NewProp_OutputProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewCompute = { "PreviewCompute", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsTool, PreviewCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCompute_MetaData), NewProp_PreviewCompute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsTool, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometry_MetaData), NewProp_PreviewGeometry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_UnmodifiedAreaPreviewMesh = { "UnmodifiedAreaPreviewMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertToPolygonsTool, UnmodifiedAreaPreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnmodifiedAreaPreviewMesh_MetaData), NewProp_UnmodifiedAreaPreviewMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertToPolygonsTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_CopyFromLayerProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_OutputProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewCompute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_UnmodifiedAreaPreviewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConvertToPolygonsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::ClassParams = {
	&UConvertToPolygonsTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConvertToPolygonsTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvertToPolygonsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConvertToPolygonsTool()
{
	if (!Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsTool>()
{
	return UConvertToPolygonsTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsTool);
UConvertToPolygonsTool::~UConvertToPolygonsTool() {}
// End Class UConvertToPolygonsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConvertToPolygonsMode_StaticEnum, TEXT("EConvertToPolygonsMode"), &Z_Registration_Info_UEnum_EConvertToPolygonsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2026608848U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConvertToPolygonsToolBuilder, UConvertToPolygonsToolBuilder::StaticClass, TEXT("UConvertToPolygonsToolBuilder"), &Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsToolBuilder), 148440375U) },
		{ Z_Construct_UClass_UConvertToPolygonsToolProperties, UConvertToPolygonsToolProperties::StaticClass, TEXT("UConvertToPolygonsToolProperties"), &Z_Registration_Info_UClass_UConvertToPolygonsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsToolProperties), 2275100782U) },
		{ Z_Construct_UClass_UOutputPolygroupLayerProperties, UOutputPolygroupLayerProperties::StaticClass, TEXT("UOutputPolygroupLayerProperties"), &Z_Registration_Info_UClass_UOutputPolygroupLayerProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutputPolygroupLayerProperties), 2991636987U) },
		{ Z_Construct_UClass_UConvertToPolygonsOperatorFactory, UConvertToPolygonsOperatorFactory::StaticClass, TEXT("UConvertToPolygonsOperatorFactory"), &Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsOperatorFactory), 258597904U) },
		{ Z_Construct_UClass_UConvertToPolygonsTool, UConvertToPolygonsTool::StaticClass, TEXT("UConvertToPolygonsTool"), &Z_Registration_Info_UClass_UConvertToPolygonsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsTool), 3387819570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_2362652755(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
