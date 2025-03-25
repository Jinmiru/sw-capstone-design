// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Drawing/MeshElementsVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshElementsVisualizer() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshWireframeComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UMeshElementsVisualizerProperties
void UMeshElementsVisualizerProperties::StaticRegisterNativesUMeshElementsVisualizerProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshElementsVisualizerProperties);
UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties_NoRegister()
{
	return UMeshElementsVisualizerProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings UMeshElementsVisualizer\n */" },
		{ "IncludePath", "Drawing/MeshElementsVisualizer.h" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Visualization settings UMeshElementsVisualizer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should any be mesh elements be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should any be mesh elements be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh wireframe be shown */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh wireframe be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBorders_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh boundary edges be shown */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh boundary edges be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowUVSeams_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh uv seam edges be shown */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh uv seam edges be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNormalSeams_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh normal seam edges be shown */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh normal seam edges be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTangentSeams_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh tangent seam edges be shown */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh tangent seam edges be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowColorSeams_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh color seam edges be shown */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh color seam edges be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** multiplier on edge thicknesses */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "multiplier on edge thicknesses" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh wireframe */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh wireframe" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh boundary edges */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh boundary edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVSeamColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh UV seam edges */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh UV seam edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSeamColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh normal seam edges */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh normal seam edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentSeamColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh tangent seam edges */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh tangent seam edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSeamColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh color seam edges */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh color seam edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthBias_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** depth bias used to slightly shift depth of lines */" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "depth bias used to slightly shift depth of lines" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "-2.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustDepthBiasUsingMeshSize_MetaData[] = {
		{ "Comment", "//~ Will be removed- generally not desirable with percentage-wise depth offset\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static void NewProp_bShowBorders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBorders;
	static void NewProp_bShowUVSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUVSeams;
	static void NewProp_bShowNormalSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNormalSeams;
	static void NewProp_bShowTangentSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTangentSeams;
	static void NewProp_bShowColorSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowColorSeams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryEdgeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVSeamColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalSeamColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentSeamColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSeamColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
	static void NewProp_bAdjustDepthBiasUsingMeshSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustDepthBiasUsingMeshSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshElementsVisualizerProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bShowBorders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders = { "bShowBorders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBorders_MetaData), NewProp_bShowBorders_MetaData) };
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bShowUVSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams = { "bShowUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowUVSeams_MetaData), NewProp_bShowUVSeams_MetaData) };
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bShowNormalSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams = { "bShowNormalSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNormalSeams_MetaData), NewProp_bShowNormalSeams_MetaData) };
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowTangentSeams_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bShowTangentSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowTangentSeams = { "bShowTangentSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowTangentSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTangentSeams_MetaData), NewProp_bShowTangentSeams_MetaData) };
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bShowColorSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams = { "bShowColorSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowColorSeams_MetaData), NewProp_bShowColorSeams_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, ThicknessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThicknessScale_MetaData), NewProp_ThicknessScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, WireframeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeColor_MetaData), NewProp_WireframeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_BoundaryEdgeColor = { "BoundaryEdgeColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, BoundaryEdgeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryEdgeColor_MetaData), NewProp_BoundaryEdgeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_UVSeamColor = { "UVSeamColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, UVSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVSeamColor_MetaData), NewProp_UVSeamColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_NormalSeamColor = { "NormalSeamColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, NormalSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSeamColor_MetaData), NewProp_NormalSeamColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_TangentSeamColor = { "TangentSeamColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, TangentSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentSeamColor_MetaData), NewProp_TangentSeamColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ColorSeamColor = { "ColorSeamColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, ColorSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSeamColor_MetaData), NewProp_ColorSeamColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizerProperties, DepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthBias_MetaData), NewProp_DepthBias_MetaData) };
void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize_SetBit(void* Obj)
{
	((UMeshElementsVisualizerProperties*)Obj)->bAdjustDepthBiasUsingMeshSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize = { "bAdjustDepthBiasUsingMeshSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdjustDepthBiasUsingMeshSize_MetaData), NewProp_bAdjustDepthBiasUsingMeshSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowTangentSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ThicknessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_WireframeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_BoundaryEdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_UVSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_NormalSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_TangentSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ColorSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_DepthBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::ClassParams = {
	&UMeshElementsVisualizerProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties()
{
	if (!Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.OuterSingleton, Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshElementsVisualizerProperties>()
{
	return UMeshElementsVisualizerProperties::StaticClass();
}
UMeshElementsVisualizerProperties::UMeshElementsVisualizerProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshElementsVisualizerProperties);
UMeshElementsVisualizerProperties::~UMeshElementsVisualizerProperties() {}
// End Class UMeshElementsVisualizerProperties

// Begin Class UMeshElementsVisualizer
void UMeshElementsVisualizer::StaticRegisterNativesUMeshElementsVisualizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshElementsVisualizer);
UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister()
{
	return UMeshElementsVisualizer::StaticClass();
}
struct Z_Construct_UClass_UMeshElementsVisualizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshElementsVisualizer is a subclass of UPreviewGeometry that displays mesh elements.\n * Currently supports wireframe, boundary edges, UV seams, Normal seams and Color seams.\n *\n * UMeshElementsVisualizer initializes an instance of UMeshElementsVisualizerProperties\n * as its .Settings value, and will watch for changes in these properties.\n *\n * Mesh is accessed via lambda callback provided by creator/client. See SetMeshAccessFunction() comments\n */" },
		{ "IncludePath", "Drawing/MeshElementsVisualizer.h" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "UMeshElementsVisualizer is a subclass of UPreviewGeometry that displays mesh elements.\nCurrently supports wireframe, boundary edges, UV seams, Normal seams and Color seams.\n\nUMeshElementsVisualizer initializes an instance of UMeshElementsVisualizerProperties\nas its .Settings value, and will watch for changes in these properties.\n\nMesh is accessed via lambda callback provided by creator/client. See SetMeshAccessFunction() comments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Visualization settings */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Visualization settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeComponent_MetaData[] = {
		{ "Comment", "/** Mesh Wireframe component, draws wireframe, boundaries, UV seams, normal seams, color seams */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Mesh Wireframe component, draws wireframe, boundaries, UV seams, normal seams, color seams" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WireframeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshElementsVisualizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizer, Settings), Z_Construct_UClass_UMeshElementsVisualizerProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_WireframeComponent = { "WireframeComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshElementsVisualizer, WireframeComponent), Z_Construct_UClass_UMeshWireframeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeComponent_MetaData), NewProp_WireframeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshElementsVisualizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_WireframeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshElementsVisualizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPreviewGeometry,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshElementsVisualizer_Statics::ClassParams = {
	&UMeshElementsVisualizer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshElementsVisualizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshElementsVisualizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshElementsVisualizer()
{
	if (!Z_Registration_Info_UClass_UMeshElementsVisualizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshElementsVisualizer.OuterSingleton, Z_Construct_UClass_UMeshElementsVisualizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshElementsVisualizer.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshElementsVisualizer>()
{
	return UMeshElementsVisualizer::StaticClass();
}
UMeshElementsVisualizer::UMeshElementsVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshElementsVisualizer);
UMeshElementsVisualizer::~UMeshElementsVisualizer() {}
// End Class UMeshElementsVisualizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshElementsVisualizerProperties, UMeshElementsVisualizerProperties::StaticClass, TEXT("UMeshElementsVisualizerProperties"), &Z_Registration_Info_UClass_UMeshElementsVisualizerProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshElementsVisualizerProperties), 3411047473U) },
		{ Z_Construct_UClass_UMeshElementsVisualizer, UMeshElementsVisualizer::StaticClass, TEXT("UMeshElementsVisualizer"), &Z_Registration_Info_UClass_UMeshElementsVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshElementsVisualizer), 3295308705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_2816601445(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
