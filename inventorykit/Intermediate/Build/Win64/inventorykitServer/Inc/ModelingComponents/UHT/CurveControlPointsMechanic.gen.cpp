// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/CurveControlPointsMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveControlPointsMechanic() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCurveControlPointsMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UCurveControlPointsMechanic
void UCurveControlPointsMechanic::StaticRegisterNativesUCurveControlPointsMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveControlPointsMechanic);
UClass* Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister()
{
	return UCurveControlPointsMechanic::StaticClass();
}
struct Z_Construct_UClass_UCurveControlPointsMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A mechanic for displaying a sequence of control points and moving them about. Has an interactive initialization mode for\n * first setting the points.\n *\n * When editing, hold shift to select multiple points. Hold Ctrl to add an extra point along an edge. To add points to either end of\n * the sequence, first select either the first or last point and then hold Ctrl.\n * Backspace deletes currently selected points. In edit mode, holding Shift generally toggles the snapping behavior (makes it opposite\n * of the current SnappingEnabled setting), though this is not yet implemented while the gizmo is being dragged.\n *\n * TODO:\n * - Make it possible to open/close loop in edit mode\n * - Improve display of occluded control points (checkerboard the material)\n * - Allow deselection of vertices by clicking away?\n * - Lump the point/line set components into PreviewGeometryActor.\n */" },
		{ "IncludePath", "Mechanics/CurveControlPointsMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "A mechanic for displaying a sequence of control points and moving them about. Has an interactive initialization mode for\nfirst setting the points.\n\nWhen editing, hold shift to select multiple points. Hold Ctrl to add an extra point along an edge. To add points to either end of\nthe sequence, first select either the first or last point and then hold Ctrl.\nBackspace deletes currently selected points. In edit mode, holding Shift generally toggles the snapping behavior (makes it opposite\nof the current SnappingEnabled setting), though this is not yet implemented while the gizmo is being dragged.\n\nTODO:\n- Make it possible to open/close loop in edit mode\n- Improve display of occluded control points (checkerboard the material)\n- Allow deselection of vertices by clicking away?\n- Lump the point/line set components into PreviewGeometryActor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickBehavior_MetaData[] = {
		{ "Comment", "// Behaviors used for moving points around and hovering them\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "Behaviors used for moving points around and hovering them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometryActor_MetaData[] = {
		{ "Comment", "/** Used for displaying points/segments */" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "Used for displaying points/segments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnControlPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnControlSegments_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPoint_MetaData[] = {
		{ "Comment", "// These get drawn separately because the other components have to be 1:1 with the control\n// points structure, which would make it complicated to keep track of special id's.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "These get drawn separately because the other components have to be 1:1 with the control\npoints structure, which would make it complicated to keep track of special id's." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSegment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometryActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnControlPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnControlSegments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSegment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointTransformGizmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveControlPointsMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_ClickBehavior = { "ClickBehavior", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, ClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickBehavior_MetaData), NewProp_ClickBehavior_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverBehavior_MetaData), NewProp_HoverBehavior_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewGeometryActor = { "PreviewGeometryActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, PreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometryActor_MetaData), NewProp_PreviewGeometryActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlPoints = { "DrawnControlPoints", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, DrawnControlPoints), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnControlPoints_MetaData), NewProp_DrawnControlPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlSegments = { "DrawnControlSegments", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, DrawnControlSegments), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnControlSegments_MetaData), NewProp_DrawnControlSegments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewPoint = { "PreviewPoint", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, PreviewPoint), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewPoint_MetaData), NewProp_PreviewPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewSegment = { "PreviewSegment", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, PreviewSegment), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSegment_MetaData), NewProp_PreviewSegment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformProxy = { "PointTransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, PointTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTransformProxy_MetaData), NewProp_PointTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformGizmo = { "PointTransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveControlPointsMechanic, PointTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTransformGizmo_MetaData), NewProp_PointTransformGizmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveControlPointsMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_ClickBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_HoverBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewGeometryActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformGizmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveControlPointsMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::ClassParams = {
	&UCurveControlPointsMechanic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCurveControlPointsMechanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveControlPointsMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveControlPointsMechanic()
{
	if (!Z_Registration_Info_UClass_UCurveControlPointsMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveControlPointsMechanic.OuterSingleton, Z_Construct_UClass_UCurveControlPointsMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveControlPointsMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UCurveControlPointsMechanic>()
{
	return UCurveControlPointsMechanic::StaticClass();
}
UCurveControlPointsMechanic::UCurveControlPointsMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveControlPointsMechanic);
// End Class UCurveControlPointsMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveControlPointsMechanic, UCurveControlPointsMechanic::StaticClass, TEXT("UCurveControlPointsMechanic"), &Z_Registration_Info_UClass_UCurveControlPointsMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveControlPointsMechanic), 4157541927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_2693223250(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
