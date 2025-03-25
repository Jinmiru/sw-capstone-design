// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Selection/MeshTopologySelectionMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshTopologySelectionMechanic() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UMeshTopologySelectionMechanicProperties Function InvertSelection
struct Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionActions" },
		{ "Comment", "/** Invert current selection. If selection is empty, has same effect as Select All, and is similarly dependent on selection filter. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Invert current selection. If selection is empty, has same effect as Select All, and is similarly dependent on selection filter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshTopologySelectionMechanicProperties, nullptr, "InvertSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshTopologySelectionMechanicProperties::execInvertSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvertSelection();
	P_NATIVE_END;
}
// End Class UMeshTopologySelectionMechanicProperties Function InvertSelection

// Begin Class UMeshTopologySelectionMechanicProperties Function SelectAll
struct Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionActions" },
		{ "Comment", "/** Select all elements. Depends on selection filter, where vertices are preferred to edges to faces. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Select all elements. Depends on selection filter, where vertices are preferred to edges to faces." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshTopologySelectionMechanicProperties, nullptr, "SelectAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshTopologySelectionMechanicProperties::execSelectAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectAll();
	P_NATIVE_END;
}
// End Class UMeshTopologySelectionMechanicProperties Function SelectAll

// Begin Class UMeshTopologySelectionMechanicProperties
void UMeshTopologySelectionMechanicProperties::StaticRegisterNativesUMeshTopologySelectionMechanicProperties()
{
	UClass* Class = UMeshTopologySelectionMechanicProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InvertSelection", &UMeshTopologySelectionMechanicProperties::execInvertSelection },
		{ "SelectAll", &UMeshTopologySelectionMechanicProperties::execSelectAll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTopologySelectionMechanicProperties);
UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister()
{
	return UMeshTopologySelectionMechanicProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Selection/MeshTopologySelectionMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectVertices_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdges_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectFaces_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdgeLoops_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "Comment", "/** When true, will select edge loops. Edge loops are either paths through vertices with 4 edges, or boundaries of holes. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "When true, will select edge loops. Edge loops are either paths through vertices with 4 edges, or boundaries of holes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdgeRings_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "Comment", "/** When set, will select rings of edges that are opposite each other across a quad face. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "When set, will select rings of edges that are opposite each other across a quad face." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitBackFaces_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions" },
		{ "Comment", "/** When set, faces that face away from the camera are ignored in selection and occlusion. Useful for working with inside-out meshes. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "When set, faces that face away from the camera are ignored in selection and occlusion. Useful for working with inside-out meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMarquee_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarqueeIgnoreOcclusion_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions" },
		{ "Comment", "/** Determines whether vertices should be checked for occlusion in marquee select (Note: marquee select currently only works with edges and vertices) */" },
		{ "EditCondition", "bEnableMarquee" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Determines whether vertices should be checked for occlusion in marquee select (Note: marquee select currently only works with edges and vertices)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferProjectedElement_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions|Ortho Viewport Behavior" },
		{ "Comment", "/** Prefer to select an edge projected to a point rather than the point, or a face projected to an edge rather than the edge. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Prefer to select an edge projected to a point rather than the point, or a face projected to an edge rather than the edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectDownRay_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions|Ortho Viewport Behavior" },
		{ "Comment", "/** If the closest element is valid, select other elements behind it that are aligned with it. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "If the closest element is valid, select other elements behind it that are aligned with it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOcclusion_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions|Ortho Viewport Behavior" },
		{ "Comment", "/** Do not check whether the closest element is occluded from the current view. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Do not check whether the closest element is occluded from the current view." },
	};
#endif // WITH_METADATA
	static void NewProp_bSelectVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectVertices;
	static void NewProp_bSelectEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdges;
	static void NewProp_bSelectFaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectFaces;
	static void NewProp_bSelectEdgeLoops_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdgeLoops;
	static void NewProp_bSelectEdgeRings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdgeRings;
	static void NewProp_bHitBackFaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBackFaces;
	static void NewProp_bEnableMarquee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMarquee;
	static void NewProp_bMarqueeIgnoreOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarqueeIgnoreOcclusion;
	static void NewProp_bPreferProjectedElement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferProjectedElement;
	static void NewProp_bSelectDownRay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectDownRay;
	static void NewProp_bIgnoreOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOcclusion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection, "InvertSelection" }, // 2715054352
		{ &Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll, "SelectAll" }, // 3590279988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTopologySelectionMechanicProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices = { "bSelectVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectVertices_MetaData), NewProp_bSelectVertices_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges = { "bSelectEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectEdges_MetaData), NewProp_bSelectEdges_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectFaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces = { "bSelectFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectFaces_MetaData), NewProp_bSelectFaces_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectEdgeLoops = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops = { "bSelectEdgeLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectEdgeLoops_MetaData), NewProp_bSelectEdgeLoops_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectEdgeRings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings = { "bSelectEdgeRings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectEdgeRings_MetaData), NewProp_bSelectEdgeRings_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bHitBackFaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces = { "bHitBackFaces", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitBackFaces_MetaData), NewProp_bHitBackFaces_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bEnableMarquee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee = { "bEnableMarquee", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMarquee_MetaData), NewProp_bEnableMarquee_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bMarqueeIgnoreOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion = { "bMarqueeIgnoreOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarqueeIgnoreOcclusion_MetaData), NewProp_bMarqueeIgnoreOcclusion_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bPreferProjectedElement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement = { "bPreferProjectedElement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferProjectedElement_MetaData), NewProp_bPreferProjectedElement_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectDownRay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay = { "bSelectDownRay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectDownRay_MetaData), NewProp_bSelectDownRay_MetaData) };
void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_SetBit(void* Obj)
{
	((UMeshTopologySelectionMechanicProperties*)Obj)->bIgnoreOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion = { "bIgnoreOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreOcclusion_MetaData), NewProp_bIgnoreOcclusion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::ClassParams = {
	&UMeshTopologySelectionMechanicProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties()
{
	if (!Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton, Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshTopologySelectionMechanicProperties>()
{
	return UMeshTopologySelectionMechanicProperties::StaticClass();
}
UMeshTopologySelectionMechanicProperties::UMeshTopologySelectionMechanicProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTopologySelectionMechanicProperties);
UMeshTopologySelectionMechanicProperties::~UMeshTopologySelectionMechanicProperties() {}
// End Class UMeshTopologySelectionMechanicProperties

// Begin Enum EMarqueeSelectionUpdateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType;
static UEnum* EMarqueeSelectionUpdateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EMarqueeSelectionUpdateType"));
	}
	return Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EMarqueeSelectionUpdateType>()
{
	return EMarqueeSelectionUpdateType_StaticEnum();
}
struct Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/*\n * Selection update type when the marquee rectangle has changed.\n */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "OnDrag.Name", "EMarqueeSelectionUpdateType::OnDrag" },
		{ "OnRelease.Name", "EMarqueeSelectionUpdateType::OnRelease" },
		{ "OnTickAndRelease.Name", "EMarqueeSelectionUpdateType::OnTickAndRelease" },
		{ "ToolTip", "* Selection update type when the marquee rectangle has changed." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarqueeSelectionUpdateType::OnDrag", (int64)EMarqueeSelectionUpdateType::OnDrag },
		{ "EMarqueeSelectionUpdateType::OnTickAndRelease", (int64)EMarqueeSelectionUpdateType::OnTickAndRelease },
		{ "EMarqueeSelectionUpdateType::OnRelease", (int64)EMarqueeSelectionUpdateType::OnRelease },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	"EMarqueeSelectionUpdateType",
	"EMarqueeSelectionUpdateType",
	Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType()
{
	if (!Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.InnerSingleton;
}
// End Enum EMarqueeSelectionUpdateType

// Begin Class UMeshTopologySelectionMechanic
void UMeshTopologySelectionMechanic::StaticRegisterNativesUMeshTopologySelectionMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTopologySelectionMechanic);
UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister()
{
	return UMeshTopologySelectionMechanic::StaticClass();
}
struct Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class mechanic for selecting a subset of mesh elements (edge loops, groups, corners, etc.)\n * Internally it relies on an FMeshTopologySelector to define which type of mesh topology is selectable.\n * \n * NOTE: Users should not use this class directly, but rather subclass it and specify a particular FMeshTopologySelector to use.\n */" },
		{ "IncludePath", "Selection/MeshTopologySelectionMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Base class mechanic for selecting a subset of mesh elements (edge loops, groups, corners, etc.)\nInternally it relies on an FMeshTopologySelector to define which type of mesh topology is selectable.\n\nNOTE: Users should not use this class directly, but rather subclass it and specify a particular FMeshTopologySelector to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Comment", "// TODO: Is it worth issuing separate callbacks in normal selection changes and in FChange ones, to\n// allow the user to bundle in some FChanges into the normal callback?\n" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "TODO: Is it worth issuing separate callbacks in normal selection changes and in FChange ones, to\nallow the user to bundle in some FChanges into the normal callback?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickOrDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeSelectionUpdateType_MetaData[] = {
		{ "Comment", "/**\n\x09 * Selection update type (default is OnDrag) as it may not need to be triggered for every rectangle change\n\x09 * This can drastically improve the responsiveness of the UI for meshes high density meshes.\n\x09 * - OnDrag: calls HandleRectangleChanged when dragging\n\x09 * - OnTick: stores a PendingSelection function when dragging and calls it when ticking and on release (if any)\n\x09 * - OnRelease: stores a PendingSelection function when dragging and calls it on release (if any)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Selection update type (default is OnDrag) as it may not need to be triggered for every rectangle change\nThis can drastically improve the responsiveness of the UI for meshes high density meshes.\n- OnDrag: calls HandleRectangleChanged when dragging\n- OnTick: stores a PendingSelection function when dragging and calls it when ticking and on release (if any)\n- OnRelease: stores a PendingSelection function when dragging and calls it on release (if any)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometryActor_MetaData[] = {
		{ "Comment", "/** The actor we create internally to own the DrawnTriangleSetComponent */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "The actor we create internally to own the DrawnTriangleSetComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnTriangleSetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedFaceMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickOrDragBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarqueeMechanic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MarqueeSelectionUpdateType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MarqueeSelectionUpdateType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometryActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnTriangleSetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightedFaceMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTopologySelectionMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, Properties), Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverBehavior_MetaData), NewProp_HoverBehavior_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_ClickOrDragBehavior = { "ClickOrDragBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, ClickOrDragBehavior), Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickOrDragBehavior_MetaData), NewProp_ClickOrDragBehavior_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeMechanic = { "MarqueeMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, MarqueeMechanic), Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarqueeMechanic_MetaData), NewProp_MarqueeMechanic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeSelectionUpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeSelectionUpdateType = { "MarqueeSelectionUpdateType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, MarqueeSelectionUpdateType), Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarqueeSelectionUpdateType_MetaData), NewProp_MarqueeSelectionUpdateType_MetaData) }; // 3058100421
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_PreviewGeometryActor = { "PreviewGeometryActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, PreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometryActor_MetaData), NewProp_PreviewGeometryActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_DrawnTriangleSetComponent = { "DrawnTriangleSetComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, DrawnTriangleSetComponent), Z_Construct_UClass_UTriangleSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnTriangleSetComponent_MetaData), NewProp_DrawnTriangleSetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HighlightedFaceMaterial = { "HighlightedFaceMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshTopologySelectionMechanic, HighlightedFaceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightedFaceMaterial_MetaData), NewProp_HighlightedFaceMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HoverBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_ClickOrDragBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeSelectionUpdateType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeSelectionUpdateType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_PreviewGeometryActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_DrawnTriangleSetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HighlightedFaceMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::ClassParams = {
	&UMeshTopologySelectionMechanic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::PropPointers),
	0,
	0x009000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic()
{
	if (!Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton, Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshTopologySelectionMechanic>()
{
	return UMeshTopologySelectionMechanic::StaticClass();
}
UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTopologySelectionMechanic);
// End Class UMeshTopologySelectionMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMarqueeSelectionUpdateType_StaticEnum, TEXT("EMarqueeSelectionUpdateType"), &Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3058100421U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshTopologySelectionMechanicProperties, UMeshTopologySelectionMechanicProperties::StaticClass, TEXT("UMeshTopologySelectionMechanicProperties"), &Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTopologySelectionMechanicProperties), 2546247889U) },
		{ Z_Construct_UClass_UMeshTopologySelectionMechanic, UMeshTopologySelectionMechanic::StaticClass, TEXT("UMeshTopologySelectionMechanic"), &Z_Registration_Info_UClass_UMeshTopologySelectionMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTopologySelectionMechanic), 2722179230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_661152383(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
