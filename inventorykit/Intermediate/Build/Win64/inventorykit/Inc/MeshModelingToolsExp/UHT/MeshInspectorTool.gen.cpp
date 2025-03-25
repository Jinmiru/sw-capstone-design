// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/MeshInspectorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshInspectorTool() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorMaterialProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorMaterialProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshInspectorToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMeshInspectorToolBuilder
void UMeshInspectorToolBuilder::StaticRegisterNativesUMeshInspectorToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshInspectorToolBuilder);
UClass* Z_Construct_UClass_UMeshInspectorToolBuilder_NoRegister()
{
	return UMeshInspectorToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMeshInspectorToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MeshInspectorTool.h" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshInspectorToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshInspectorToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshInspectorToolBuilder_Statics::ClassParams = {
	&UMeshInspectorToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshInspectorToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshInspectorToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMeshInspectorToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshInspectorToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshInspectorToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshInspectorToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshInspectorToolBuilder>()
{
	return UMeshInspectorToolBuilder::StaticClass();
}
UMeshInspectorToolBuilder::UMeshInspectorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshInspectorToolBuilder);
UMeshInspectorToolBuilder::~UMeshInspectorToolBuilder() {}
// End Class UMeshInspectorToolBuilder

// Begin Enum EMeshInspectorToolDrawIndexMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode;
static UEnum* EMeshInspectorToolDrawIndexMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshInspectorToolDrawIndexMode"));
	}
	return Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshInspectorToolDrawIndexMode>()
{
	return EMeshInspectorToolDrawIndexMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EdgeID.Name", "EMeshInspectorToolDrawIndexMode::EdgeID" },
		{ "GroupID.Name", "EMeshInspectorToolDrawIndexMode::GroupID" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "None.Name", "EMeshInspectorToolDrawIndexMode::None" },
		{ "TriangleID.Name", "EMeshInspectorToolDrawIndexMode::TriangleID" },
		{ "VertexID.Name", "EMeshInspectorToolDrawIndexMode::VertexID" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshInspectorToolDrawIndexMode::None", (int64)EMeshInspectorToolDrawIndexMode::None },
		{ "EMeshInspectorToolDrawIndexMode::VertexID", (int64)EMeshInspectorToolDrawIndexMode::VertexID },
		{ "EMeshInspectorToolDrawIndexMode::TriangleID", (int64)EMeshInspectorToolDrawIndexMode::TriangleID },
		{ "EMeshInspectorToolDrawIndexMode::GroupID", (int64)EMeshInspectorToolDrawIndexMode::GroupID },
		{ "EMeshInspectorToolDrawIndexMode::EdgeID", (int64)EMeshInspectorToolDrawIndexMode::EdgeID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshInspectorToolDrawIndexMode",
	"EMeshInspectorToolDrawIndexMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode()
{
	if (!Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode.InnerSingleton;
}
// End Enum EMeshInspectorToolDrawIndexMode

// Begin Class UMeshInspectorProperties
void UMeshInspectorProperties::StaticRegisterNativesUMeshInspectorProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshInspectorProperties);
UClass* Z_Construct_UClass_UMeshInspectorProperties_NoRegister()
{
	return UMeshInspectorProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshInspectorProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshInspectorTool.h" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWireframe_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of all mesh edges */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of all mesh edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoundaryEdges_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of open boundary edges */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of open boundary edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBowtieVertices_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of bowtie vertices */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of bowtie vertices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPolygonBorders_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of polygon borders */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of polygon borders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUVSeams_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of UV seam edges */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of UV seam edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUVBowties_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of UV bowtie vertices */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of UV bowtie vertices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMissingUVs_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of triangles with missing UVs */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of triangles with missing UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalSeams_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of Normal seam edges */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of Normal seam edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTangentSeams_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of Tangent seam edges */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of Tangent seam edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalVectors_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of normal vectors */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of normal vectors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTangentVectors_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of tangent vectors */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of tangent vectors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawHiddenEdgesAndSeams_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Toggle visibility of occluded boundary edges and seams */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle visibility of occluded boundary edges and seams" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalLength_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000000000.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length of line segments representing normal vectors */" },
		{ "EditCondition", "bNormalVectors" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Length of line segments representing normal vectors" },
		{ "UIMax", "400" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentLength_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000000000.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length of line segments representing tangent vectors */" },
		{ "EditCondition", "bTangentVectors" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Length of line segments representing tangent vectors" },
		{ "UIMax", "400" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowIndices_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Draw the mesh indices of the selected type. A maximum of 500 visible indices will be rendered. */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Draw the mesh indices of the selected type. A maximum of 500 visible indices will be rendered." },
	};
#endif // WITH_METADATA
	static void NewProp_bWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireframe;
	static void NewProp_bBoundaryEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundaryEdges;
	static void NewProp_bBowtieVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBowtieVertices;
	static void NewProp_bPolygonBorders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPolygonBorders;
	static void NewProp_bUVSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVSeams;
	static void NewProp_bUVBowties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVBowties;
	static void NewProp_bMissingUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingUVs;
	static void NewProp_bNormalSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalSeams;
	static void NewProp_bTangentSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTangentSeams;
	static void NewProp_bNormalVectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalVectors;
	static void NewProp_bTangentVectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTangentVectors;
	static void NewProp_bDrawHiddenEdgesAndSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawHiddenEdgesAndSeams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShowIndices_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshInspectorProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bWireframe_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bWireframe = { "bWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWireframe_MetaData), NewProp_bWireframe_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBoundaryEdges_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBoundaryEdges = { "bBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoundaryEdges_MetaData), NewProp_bBoundaryEdges_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBowtieVertices_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bBowtieVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBowtieVertices = { "bBowtieVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBowtieVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBowtieVertices_MetaData), NewProp_bBowtieVertices_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bPolygonBorders_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bPolygonBorders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bPolygonBorders = { "bPolygonBorders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bPolygonBorders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPolygonBorders_MetaData), NewProp_bPolygonBorders_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVSeams_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bUVSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVSeams = { "bUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUVSeams_MetaData), NewProp_bUVSeams_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVBowties_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bUVBowties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVBowties = { "bUVBowties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVBowties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUVBowties_MetaData), NewProp_bUVBowties_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bMissingUVs_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bMissingUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bMissingUVs = { "bMissingUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bMissingUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMissingUVs_MetaData), NewProp_bMissingUVs_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalSeams_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bNormalSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalSeams = { "bNormalSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalSeams_MetaData), NewProp_bNormalSeams_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentSeams_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bTangentSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentSeams = { "bTangentSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTangentSeams_MetaData), NewProp_bTangentSeams_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalVectors_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bNormalVectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalVectors = { "bNormalVectors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalVectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalVectors_MetaData), NewProp_bNormalVectors_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentVectors_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bTangentVectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentVectors = { "bTangentVectors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentVectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTangentVectors_MetaData), NewProp_bTangentVectors_MetaData) };
void Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bDrawHiddenEdgesAndSeams_SetBit(void* Obj)
{
	((UMeshInspectorProperties*)Obj)->bDrawHiddenEdgesAndSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bDrawHiddenEdgesAndSeams = { "bDrawHiddenEdgesAndSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorProperties), &Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bDrawHiddenEdgesAndSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawHiddenEdgesAndSeams_MetaData), NewProp_bDrawHiddenEdgesAndSeams_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_NormalLength = { "NormalLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorProperties, NormalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalLength_MetaData), NewProp_NormalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_TangentLength = { "TangentLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorProperties, TangentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentLength_MetaData), NewProp_TangentLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_ShowIndices_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_ShowIndices = { "ShowIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorProperties, ShowIndices), Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorToolDrawIndexMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowIndices_MetaData), NewProp_ShowIndices_MetaData) }; // 370609602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshInspectorProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bBowtieVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bPolygonBorders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bUVBowties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bMissingUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bNormalVectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bTangentVectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_bDrawHiddenEdgesAndSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_NormalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_TangentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_ShowIndices_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorProperties_Statics::NewProp_ShowIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshInspectorProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshInspectorProperties_Statics::ClassParams = {
	&UMeshInspectorProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshInspectorProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshInspectorProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshInspectorProperties()
{
	if (!Z_Registration_Info_UClass_UMeshInspectorProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshInspectorProperties.OuterSingleton, Z_Construct_UClass_UMeshInspectorProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshInspectorProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshInspectorProperties>()
{
	return UMeshInspectorProperties::StaticClass();
}
UMeshInspectorProperties::UMeshInspectorProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshInspectorProperties);
UMeshInspectorProperties::~UMeshInspectorProperties() {}
// End Class UMeshInspectorProperties

// Begin Enum EMeshInspectorMaterialMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshInspectorMaterialMode;
static UEnum* EMeshInspectorMaterialMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshInspectorMaterialMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshInspectorMaterialMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshInspectorMaterialMode"));
	}
	return Z_Registration_Info_UEnum_EMeshInspectorMaterialMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshInspectorMaterialMode>()
{
	return EMeshInspectorMaterialMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Checkerboard.Comment", "/** Checkerboard material */" },
		{ "Checkerboard.Name", "EMeshInspectorMaterialMode::Checkerboard" },
		{ "Checkerboard.ToolTip", "Checkerboard material" },
		{ "Comment", "/** Material Modes for Mesh Inspector Tool */" },
		{ "FlatShaded.Comment", "/** Flat Shaded Material, ie with per-triangle normals */" },
		{ "FlatShaded.Name", "EMeshInspectorMaterialMode::FlatShaded" },
		{ "FlatShaded.ToolTip", "Flat Shaded Material, ie with per-triangle normals" },
		{ "Grey.Comment", "/** Grey material */" },
		{ "Grey.Name", "EMeshInspectorMaterialMode::Grey" },
		{ "Grey.ToolTip", "Grey material" },
		{ "GroupColor.Comment", "/** Polygroup Color material */" },
		{ "GroupColor.Name", "EMeshInspectorMaterialMode::GroupColor" },
		{ "GroupColor.ToolTip", "Polygroup Color material" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "Original.Comment", "/** Input material */" },
		{ "Original.Name", "EMeshInspectorMaterialMode::Original" },
		{ "Original.ToolTip", "Input material" },
		{ "Override.Comment", "/** Override material */" },
		{ "Override.Name", "EMeshInspectorMaterialMode::Override" },
		{ "Override.ToolTip", "Override material" },
		{ "TangentNormal.Comment", "/** Tangent/Normal material */" },
		{ "TangentNormal.Name", "EMeshInspectorMaterialMode::TangentNormal" },
		{ "TangentNormal.ToolTip", "Tangent/Normal material" },
		{ "ToolTip", "Material Modes for Mesh Inspector Tool" },
		{ "Transparent.Comment", "/** Transparent material, with opacity/color controls */" },
		{ "Transparent.Name", "EMeshInspectorMaterialMode::Transparent" },
		{ "Transparent.ToolTip", "Transparent material, with opacity/color controls" },
		{ "VertexColor.Comment", "/** Vertex Color material */" },
		{ "VertexColor.Name", "EMeshInspectorMaterialMode::VertexColor" },
		{ "VertexColor.ToolTip", "Vertex Color material" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshInspectorMaterialMode::Original", (int64)EMeshInspectorMaterialMode::Original },
		{ "EMeshInspectorMaterialMode::FlatShaded", (int64)EMeshInspectorMaterialMode::FlatShaded },
		{ "EMeshInspectorMaterialMode::Grey", (int64)EMeshInspectorMaterialMode::Grey },
		{ "EMeshInspectorMaterialMode::Transparent", (int64)EMeshInspectorMaterialMode::Transparent },
		{ "EMeshInspectorMaterialMode::TangentNormal", (int64)EMeshInspectorMaterialMode::TangentNormal },
		{ "EMeshInspectorMaterialMode::VertexColor", (int64)EMeshInspectorMaterialMode::VertexColor },
		{ "EMeshInspectorMaterialMode::GroupColor", (int64)EMeshInspectorMaterialMode::GroupColor },
		{ "EMeshInspectorMaterialMode::Checkerboard", (int64)EMeshInspectorMaterialMode::Checkerboard },
		{ "EMeshInspectorMaterialMode::Override", (int64)EMeshInspectorMaterialMode::Override },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshInspectorMaterialMode",
	"EMeshInspectorMaterialMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode()
{
	if (!Z_Registration_Info_UEnum_EMeshInspectorMaterialMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshInspectorMaterialMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshInspectorMaterialMode.InnerSingleton;
}
// End Enum EMeshInspectorMaterialMode

// Begin Class UMeshInspectorMaterialProperties Function GetUVChannelNamesFunc
struct Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics
{
	struct MeshInspectorMaterialProperties_eventGetUVChannelNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshInspectorMaterialProperties_eventGetUVChannelNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshInspectorMaterialProperties, nullptr, "GetUVChannelNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::MeshInspectorMaterialProperties_eventGetUVChannelNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::MeshInspectorMaterialProperties_eventGetUVChannelNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshInspectorMaterialProperties::execGetUVChannelNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVChannelNamesFunc();
	P_NATIVE_END;
}
// End Class UMeshInspectorMaterialProperties Function GetUVChannelNamesFunc

// Begin Class UMeshInspectorMaterialProperties
void UMeshInspectorMaterialProperties::StaticRegisterNativesUMeshInspectorMaterialProperties()
{
	UClass* Class = UMeshInspectorMaterialProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUVChannelNamesFunc", &UMeshInspectorMaterialProperties::execGetUVChannelNamesFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshInspectorMaterialProperties);
UClass* Z_Construct_UClass_UMeshInspectorMaterialProperties_NoRegister()
{
	return UMeshInspectorMaterialProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// material settings for mesh inspector tool\n" },
		{ "IncludePath", "MeshInspectorTool.h" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "material settings for mesh inspector tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMode_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Material that will be used to render the mesh */" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Material that will be used to render the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerDensity_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of checkerboard tiles within the 0 to 1 range; only available when Checkerboard is selected as material mode */" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::Checkerboard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Number of checkerboard tiles within the 0 to 1 range; only available when Checkerboard is selected as material mode" },
		{ "UIMax", "100.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Material to use instead of the original material; only available when Override is selected as material mode */" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::Override" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Material to use instead of the original material; only available when Override is selected as material mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Which UV channel to use for visualizing the checkerboard material on the mesh; note that this does not affect the preview layout */" },
		{ "DisplayName", "Preview UV Channel" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::Checkerboard" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetUVChannelNamesFunc" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Which UV channel to use for visualizing the checkerboard material on the mesh; note that this does not affect the preview layout" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlatShading_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Toggle flat shading on/off */" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::VertexColor || MaterialMode == EMeshInspectorMaterialMode::GroupColor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Toggle flat shading on/off" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Main Color of Material */" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::Diffuse" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Main Color of Material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Opacity of transparent material */" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::Transparent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Opacity of transparent material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransparentMaterialColor_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "//~ Could have used the same property as Color, above, but the user may want different saved values for the two\n" },
		{ "DisplayName", "Color" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::Transparent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwoSided_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Although a two-sided transparent material causes rendering issues with overlapping faces, it is still frequently useful to see the shape when sculpting around other objects. */" },
		{ "EditCondition", "MaterialMode == EMeshInspectorMaterialMode::Transparent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Although a two-sided transparent material causes rendering issues with overlapping faces, it is still frequently useful to see the shape when sculpting around other objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCustomMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckerDensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannelNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UVChannelNamesList;
	static void NewProp_bFlatShading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlatShading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransparentMaterialColor;
	static void NewProp_bTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwoSided;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckerMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCustomMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshInspectorMaterialProperties_GetUVChannelNamesFunc, "GetUVChannelNamesFunc" }, // 2245007273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshInspectorMaterialProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_MaterialMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_MaterialMode = { "MaterialMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, MaterialMode), Z_Construct_UEnum_MeshModelingToolsExp_EMeshInspectorMaterialMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialMode_MetaData), NewProp_MaterialMode_MetaData) }; // 3026894607
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_CheckerDensity = { "CheckerDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, CheckerDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerDensity_MetaData), NewProp_CheckerDensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterial_MetaData), NewProp_OverrideMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannel_MetaData), NewProp_UVChannel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_UVChannelNamesList_Inner = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_UVChannelNamesList = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, UVChannelNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelNamesList_MetaData), NewProp_UVChannelNamesList_MetaData) };
void Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bFlatShading_SetBit(void* Obj)
{
	((UMeshInspectorMaterialProperties*)Obj)->bFlatShading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bFlatShading = { "bFlatShading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorMaterialProperties), &Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bFlatShading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlatShading_MetaData), NewProp_bFlatShading_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_TransparentMaterialColor = { "TransparentMaterialColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, TransparentMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransparentMaterialColor_MetaData), NewProp_TransparentMaterialColor_MetaData) };
void Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bTwoSided_SetBit(void* Obj)
{
	((UMeshInspectorMaterialProperties*)Obj)->bTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bTwoSided = { "bTwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshInspectorMaterialProperties), &Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwoSided_MetaData), NewProp_bTwoSided_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_CheckerMaterial = { "CheckerMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, CheckerMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerMaterial_MetaData), NewProp_CheckerMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_ActiveCustomMaterial = { "ActiveCustomMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorMaterialProperties, ActiveCustomMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCustomMaterial_MetaData), NewProp_ActiveCustomMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_MaterialMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_MaterialMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_CheckerDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_OverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_UVChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_UVChannelNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_UVChannelNamesList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bFlatShading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_TransparentMaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_bTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_CheckerMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::NewProp_ActiveCustomMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::ClassParams = {
	&UMeshInspectorMaterialProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshInspectorMaterialProperties()
{
	if (!Z_Registration_Info_UClass_UMeshInspectorMaterialProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshInspectorMaterialProperties.OuterSingleton, Z_Construct_UClass_UMeshInspectorMaterialProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshInspectorMaterialProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshInspectorMaterialProperties>()
{
	return UMeshInspectorMaterialProperties::StaticClass();
}
UMeshInspectorMaterialProperties::UMeshInspectorMaterialProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshInspectorMaterialProperties);
UMeshInspectorMaterialProperties::~UMeshInspectorMaterialProperties() {}
// End Class UMeshInspectorMaterialProperties

// Begin Class UMeshInspectorTool
void UMeshInspectorTool::StaticRegisterNativesUMeshInspectorTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshInspectorTool);
UClass* Z_Construct_UClass_UMeshInspectorTool_NoRegister()
{
	return UMeshInspectorTool::StaticClass();
}
struct Z_Construct_UClass_UMeshInspectorTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Inspector Tool for visualizing mesh information\n */" },
		{ "IncludePath", "MeshInspectorTool.h" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
		{ "ToolTip", "Mesh Inspector Tool for visualizing mesh information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLineSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshInspectorTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolygroupLayerProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnLineSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshInspectorTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorTool, Settings), Z_Construct_UClass_UMeshInspectorProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygroupLayerProperties_MetaData), NewProp_PolygroupLayerProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorTool, MaterialSettings), Z_Construct_UClass_UMeshInspectorMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_DrawnLineSet = { "DrawnLineSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorTool, DrawnLineSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnLineSet_MetaData), NewProp_DrawnLineSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshInspectorTool, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshInspectorTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_PolygroupLayerProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_MaterialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_DrawnLineSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInspectorTool_Statics::NewProp_DefaultMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshInspectorTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshInspectorTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UMeshInspectorTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshInspectorTool_Statics::ClassParams = {
	&UMeshInspectorTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshInspectorTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInspectorTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshInspectorTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshInspectorTool()
{
	if (!Z_Registration_Info_UClass_UMeshInspectorTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshInspectorTool.OuterSingleton, Z_Construct_UClass_UMeshInspectorTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshInspectorTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshInspectorTool>()
{
	return UMeshInspectorTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshInspectorTool);
UMeshInspectorTool::~UMeshInspectorTool() {}
// End Class UMeshInspectorTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshInspectorTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshInspectorToolDrawIndexMode_StaticEnum, TEXT("EMeshInspectorToolDrawIndexMode"), &Z_Registration_Info_UEnum_EMeshInspectorToolDrawIndexMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 370609602U) },
		{ EMeshInspectorMaterialMode_StaticEnum, TEXT("EMeshInspectorMaterialMode"), &Z_Registration_Info_UEnum_EMeshInspectorMaterialMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3026894607U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshInspectorToolBuilder, UMeshInspectorToolBuilder::StaticClass, TEXT("UMeshInspectorToolBuilder"), &Z_Registration_Info_UClass_UMeshInspectorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshInspectorToolBuilder), 975920107U) },
		{ Z_Construct_UClass_UMeshInspectorProperties, UMeshInspectorProperties::StaticClass, TEXT("UMeshInspectorProperties"), &Z_Registration_Info_UClass_UMeshInspectorProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshInspectorProperties), 2020769483U) },
		{ Z_Construct_UClass_UMeshInspectorMaterialProperties, UMeshInspectorMaterialProperties::StaticClass, TEXT("UMeshInspectorMaterialProperties"), &Z_Registration_Info_UClass_UMeshInspectorMaterialProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshInspectorMaterialProperties), 1025429157U) },
		{ Z_Construct_UClass_UMeshInspectorTool, UMeshInspectorTool::StaticClass, TEXT("UMeshInspectorTool"), &Z_Registration_Info_UClass_UMeshInspectorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshInspectorTool), 2241201309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshInspectorTool_h_1589774210(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshInspectorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshInspectorTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshInspectorTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshInspectorTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
