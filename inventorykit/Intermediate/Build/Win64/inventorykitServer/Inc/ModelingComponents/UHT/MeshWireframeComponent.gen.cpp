// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Drawing/MeshWireframeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshWireframeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshWireframeComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshWireframeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UMeshWireframeComponent
void UMeshWireframeComponent::StaticRegisterNativesUMeshWireframeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshWireframeComponent);
UClass* Z_Construct_UClass_UMeshWireframeComponent_NoRegister()
{
	return UMeshWireframeComponent::StaticClass();
}
struct Z_Construct_UClass_UMeshWireframeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshWireframeComponent draws a mesh wireframe as lines, with line color/thickness\n * varying depending on line type and the configuration settings.\n * Currently can draw:\n *    - all mesh edges\n *    - boundary edges\n *    - UV seam edges\n *    - Normal seam edges\n *    - Color seam edges\n *\n * Client must provide a IMeshWireframeSourceProvider implementation that provides the \n * edge set, vertices, and edge type\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/MeshWireframeComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "UMeshWireframeComponent draws a mesh wireframe as lines, with line color/thickness\nvarying depending on line type and the configuration settings.\nCurrently can draw:\n   - all mesh edges\n   - boundary edges\n   - UV seam edges\n   - Normal seam edges\n   - Color seam edges\n\nClient must provide a IMeshWireframeSourceProvider implementation that provides the\nedge set, vertices, and edge type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineDepthBias_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "/**\n\x09 * Depth bias of the lines, used to offset in depth to avoid z-fighting\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Depth bias of the lines, used to offset in depth to avoid z-fighting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineDepthBiasSizeScale_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "/**\n\x09 * Target-size depth bias scale. This is multiplied by LineDepthBias.\n\x09 * Client of UMeshWireframeComponent can set this if desired, eg to fraction of target object bounding box size, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Target-size depth bias scale. This is multiplied by LineDepthBias.\nClient of UMeshWireframeComponent can set this if desired, eg to fraction of target object bounding box size, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "/**\n\x09 * Scaling factor applied to the per-edge-type thicknesses defined below\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Scaling factor applied to the per-edge-type thicknesses defined below" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWireframe_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// Wireframe properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Wireframe properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBoundaryEdges_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// Boundary Edge properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Boundary Edge properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUVSeams_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// UV seam properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "UV seam properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVSeamColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVSeamThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNormalSeams_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// normal seam properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "normal seam properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSeamColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSeamThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTangentSeams_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// tangent seam properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "tangent seam properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentSeamColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentSeamThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableColorSeams_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// color seam properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "color seam properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSeamColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSeamThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[] = {
		{ "Comment", "//~ End USceneComponent Interface.\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDepthBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDepthBiasSizeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessScale;
	static void NewProp_bEnableWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWireframe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WireframeThickness;
	static void NewProp_bEnableBoundaryEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBoundaryEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryEdgeColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryEdgeThickness;
	static void NewProp_bEnableUVSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUVSeams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVSeamColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVSeamThickness;
	static void NewProp_bEnableNormalSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNormalSeams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalSeamColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSeamThickness;
	static void NewProp_bEnableTangentSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTangentSeams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentSeamColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentSeamThickness;
	static void NewProp_bEnableColorSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableColorSeams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSeamColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorSeamThickness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshWireframeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBias = { "LineDepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, LineDepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineDepthBias_MetaData), NewProp_LineDepthBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBiasSizeScale = { "LineDepthBiasSizeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, LineDepthBiasSizeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineDepthBiasSizeScale_MetaData), NewProp_LineDepthBiasSizeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, ThicknessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThicknessScale_MetaData), NewProp_ThicknessScale_MetaData) };
void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe_SetBit(void* Obj)
{
	((UMeshWireframeComponent*)Obj)->bEnableWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe = { "bEnableWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWireframe_MetaData), NewProp_bEnableWireframe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, WireframeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeColor_MetaData), NewProp_WireframeColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeThickness = { "WireframeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, WireframeThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeThickness_MetaData), NewProp_WireframeThickness_MetaData) };
void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges_SetBit(void* Obj)
{
	((UMeshWireframeComponent*)Obj)->bEnableBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges = { "bEnableBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBoundaryEdges_MetaData), NewProp_bEnableBoundaryEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeColor = { "BoundaryEdgeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, BoundaryEdgeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryEdgeColor_MetaData), NewProp_BoundaryEdgeColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeThickness = { "BoundaryEdgeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, BoundaryEdgeThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryEdgeThickness_MetaData), NewProp_BoundaryEdgeThickness_MetaData) };
void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams_SetBit(void* Obj)
{
	((UMeshWireframeComponent*)Obj)->bEnableUVSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams = { "bEnableUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUVSeams_MetaData), NewProp_bEnableUVSeams_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamColor = { "UVSeamColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, UVSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVSeamColor_MetaData), NewProp_UVSeamColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamThickness = { "UVSeamThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, UVSeamThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVSeamThickness_MetaData), NewProp_UVSeamThickness_MetaData) };
void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams_SetBit(void* Obj)
{
	((UMeshWireframeComponent*)Obj)->bEnableNormalSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams = { "bEnableNormalSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNormalSeams_MetaData), NewProp_bEnableNormalSeams_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamColor = { "NormalSeamColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, NormalSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSeamColor_MetaData), NewProp_NormalSeamColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamThickness = { "NormalSeamThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, NormalSeamThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSeamThickness_MetaData), NewProp_NormalSeamThickness_MetaData) };
void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableTangentSeams_SetBit(void* Obj)
{
	((UMeshWireframeComponent*)Obj)->bEnableTangentSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableTangentSeams = { "bEnableTangentSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableTangentSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTangentSeams_MetaData), NewProp_bEnableTangentSeams_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_TangentSeamColor = { "TangentSeamColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, TangentSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentSeamColor_MetaData), NewProp_TangentSeamColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_TangentSeamThickness = { "TangentSeamThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, TangentSeamThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentSeamThickness_MetaData), NewProp_TangentSeamThickness_MetaData) };
void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams_SetBit(void* Obj)
{
	((UMeshWireframeComponent*)Obj)->bEnableColorSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams = { "bEnableColorSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableColorSeams_MetaData), NewProp_bEnableColorSeams_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamColor = { "ColorSeamColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, ColorSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSeamColor_MetaData), NewProp_ColorSeamColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamThickness = { "ColorSeamThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, ColorSeamThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSeamThickness_MetaData), NewProp_ColorSeamThickness_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterial_MetaData), NewProp_LineMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshWireframeComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBounds_MetaData), NewProp_LocalBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshWireframeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBiasSizeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ThicknessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableTangentSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_TangentSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_TangentSeamThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LocalBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshWireframeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshWireframeComponent_Statics::ClassParams = {
	&UMeshWireframeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshWireframeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshWireframeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshWireframeComponent()
{
	if (!Z_Registration_Info_UClass_UMeshWireframeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshWireframeComponent.OuterSingleton, Z_Construct_UClass_UMeshWireframeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshWireframeComponent.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshWireframeComponent>()
{
	return UMeshWireframeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshWireframeComponent);
UMeshWireframeComponent::~UMeshWireframeComponent() {}
// End Class UMeshWireframeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshWireframeComponent, UMeshWireframeComponent::StaticClass, TEXT("UMeshWireframeComponent"), &Z_Registration_Info_UClass_UMeshWireframeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshWireframeComponent), 2286804891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_4069396681(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
