// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementBase.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementRenderState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementBase
void UGizmoElementBase::StaticRegisterNativesUGizmoElementBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementBase);
UClass* Z_Construct_UClass_UGizmoElementBase_NoRegister()
{
	return UGizmoElementBase::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for 2d and 3d primitive objects intended to be used as part of 3D Gizmos.\n * Contains common properties and utility functions.\n * This class does nothing by itself, use subclasses like UGizmoElementCylinder\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementBase.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Base class for 2d and 3d primitive objects intended to be used as part of 3D Gizmos.\nContains common properties and utility functions.\nThis class does nothing by itself, use subclasses like UGizmoElementCylinder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "// Whether element is enabled. Render and LineTrace only occur when bEnabled is true.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled. Render and LineTrace only occur when bEnabled is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForPerspectiveProjection_MetaData[] = {
		{ "Comment", "// Whether element is enabled for perspective projection\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled for perspective projection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForOrthographicProjection_MetaData[] = {
		{ "Comment", "// Whether element is enabled for orthographic projection\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled for orthographic projection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForDefaultState_MetaData[] = {
		{ "Comment", "// Whether element is enabled when element state is default\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled when element state is default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForHoveringState_MetaData[] = {
		{ "Comment", "// Whether element is enabled when element state is hovering\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled when element state is hovering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForInteractingState_MetaData[] = {
		{ "Comment", "// Whether element is enabled when element state is interacting\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled when element state is interacting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartIdentifier_MetaData[] = {
		{ "Comment", "// Part identifier\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Part identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshRenderAttributes_MetaData[] = {
		{ "Comment", "// Mesh render state attributes for this element\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Mesh render state attributes for this element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementState_MetaData[] = {
		{ "Comment", "// Element state - indicates whether object is visible or hittable\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Element state - indicates whether object is visible or hittable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementInteractionState_MetaData[] = {
		{ "Comment", "// Current element interaction state - None, Hovering or Interacting\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Current element interaction state - None, Hovering or Interacting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentType_MetaData[] = {
		{ "Comment", "// View-dependent type - None, Axis or Plane. \n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View-dependent type - None, Axis or Plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentAxis_MetaData[] = {
		{ "Comment", "// View-dependent axis or plane normal, based on the view-dependent type.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View-dependent axis or plane normal, based on the view-dependent type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentAngleTol_MetaData[] = {
		{ "Comment", "// View-dependent angle tolerance based on :\n//   For Axis, minimum radians between view dependent axis and view direction.\n//   For Planar, minimum radians between view dependent axis and the plane where axis is its normal.\n// When the angle between the view direction and the axis/plane is less than this tolerance, this object should be culled.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View-dependent angle tolerance based on :\n  For Axis, minimum radians between view dependent axis and view direction.\n  For Planar, minimum radians between view dependent axis and the plane where axis is its normal.\nWhen the angle between the view direction and the axis/plane is less than this tolerance, this object should be culled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentAxialMaxCosAngleTol_MetaData[] = {
		{ "Comment", "// Axial view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol. \n// When the cos of the angle between the view direction and the axis is less than this value, this object should not be culled.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Axial view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol.\nWhen the cos of the angle between the view direction and the axis is less than this value, this object should not be culled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentPlanarMinCosAngleTol_MetaData[] = {
		{ "Comment", "// Planar view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol. \n// When the cos of the angle between the view direction and the axis is greater than this value, this object should not be culled.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Planar view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol.\nWhen the cos of the angle between the view direction and the axis is greater than this value, this object should not be culled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignType_MetaData[] = {
		{ "Comment", "// View align type: None, PointEye, or PointWorld.\n// PointEye rotates this axis to align with the view up axis.\n// PointWorld rotates this axis to align with the world up axis.\n// Axial rotates around this axis to align the normal as closely as possible to the view direction.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View align type: None, PointEye, or PointWorld.\nPointEye rotates this axis to align with the view up axis.\nPointWorld rotates this axis to align with the world up axis.\nAxial rotates around this axis to align the normal as closely as possible to the view direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignAxis_MetaData[] = {
		{ "Comment", "// View align axis. \n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View align axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignNormal_MetaData[] = {
		{ "Comment", "// View align normal.\n// PointEye and PointWorld both rotate the normal to align with the view direction.\n// Axial rotates the normal to align as closely as possible with view direction.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View align normal.\nPointEye and PointWorld both rotate the normal to align with the view direction.\nAxial rotates the normal to align as closely as possible with view direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignAxialAngleTol_MetaData[] = {
		{ "Comment", "// Axial view alignment angle tolerance in radians, based on angle between align normal and view direction. \n// When angle between the view align normal and the view direction is greater than this angle, the align rotation will be computed.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Axial view alignment angle tolerance in radians, based on angle between align normal and view direction.\nWhen angle between the view align normal and the view direction is greater than this angle, the align rotation will be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignAxialMaxCosAngleTol_MetaData[] = {
		{ "Comment", "// Axial view alignment minimum cos angle tolerance, computed based on ViewAlignAxialAngleTol. \n// When the cos of the angle between the view direction and the align normal is less than this value, the align rotation will be computed.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Axial view alignment minimum cos angle tolerance, computed based on ViewAlignAxialAngleTol.\nWhen the cos of the angle between the view direction and the align normal is less than this value, the align rotation will be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelHitDistanceThreshold_MetaData[] = {
		{ "Comment", "// Pixel hit distance threshold, element will be scaled enough to add this threshold when line-tracing.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Pixel hit distance threshold, element will be scaled enough to add this threshold when line-tracing." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bEnabledForPerspectiveProjection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForPerspectiveProjection;
	static void NewProp_bEnabledForOrthographicProjection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForOrthographicProjection;
	static void NewProp_bEnabledForDefaultState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForDefaultState;
	static void NewProp_bEnabledForHoveringState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForHoveringState;
	static void NewProp_bEnabledForInteractingState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForInteractingState;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PartIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRenderAttributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementInteractionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementInteractionState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDependentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewDependentType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewDependentAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewDependentAngleTol;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewDependentAxialMaxCosAngleTol;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewDependentPlanarMinCosAngleTol;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewAlignType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewAlignType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewAlignAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewAlignNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewAlignAxialAngleTol;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewAlignAxialMaxCosAngleTol;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelHitDistanceThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UGizmoElementBase*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_SetBit(void* Obj)
{
	((UGizmoElementBase*)Obj)->bEnabledForPerspectiveProjection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection = { "bEnabledForPerspectiveProjection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledForPerspectiveProjection_MetaData), NewProp_bEnabledForPerspectiveProjection_MetaData) };
void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_SetBit(void* Obj)
{
	((UGizmoElementBase*)Obj)->bEnabledForOrthographicProjection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection = { "bEnabledForOrthographicProjection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledForOrthographicProjection_MetaData), NewProp_bEnabledForOrthographicProjection_MetaData) };
void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_SetBit(void* Obj)
{
	((UGizmoElementBase*)Obj)->bEnabledForDefaultState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState = { "bEnabledForDefaultState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledForDefaultState_MetaData), NewProp_bEnabledForDefaultState_MetaData) };
void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_SetBit(void* Obj)
{
	((UGizmoElementBase*)Obj)->bEnabledForHoveringState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState = { "bEnabledForHoveringState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledForHoveringState_MetaData), NewProp_bEnabledForHoveringState_MetaData) };
void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_SetBit(void* Obj)
{
	((UGizmoElementBase*)Obj)->bEnabledForInteractingState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState = { "bEnabledForInteractingState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledForInteractingState_MetaData), NewProp_bEnabledForInteractingState_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PartIdentifier = { "PartIdentifier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, PartIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartIdentifier_MetaData), NewProp_PartIdentifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_MeshRenderAttributes = { "MeshRenderAttributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, MeshRenderAttributes), Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshRenderAttributes_MetaData), NewProp_MeshRenderAttributes_MetaData) }; // 2069010658
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState = { "ElementState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ElementState), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementState_MetaData), NewProp_ElementState_MetaData) }; // 3960190341
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState = { "ElementInteractionState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ElementInteractionState), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementInteractionState_MetaData), NewProp_ElementInteractionState_MetaData) }; // 2190655602
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType = { "ViewDependentType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewDependentType), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDependentType_MetaData), NewProp_ViewDependentType_MetaData) }; // 3860216403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxis = { "ViewDependentAxis", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewDependentAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDependentAxis_MetaData), NewProp_ViewDependentAxis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAngleTol = { "ViewDependentAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewDependentAngleTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDependentAngleTol_MetaData), NewProp_ViewDependentAngleTol_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxialMaxCosAngleTol = { "ViewDependentAxialMaxCosAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewDependentAxialMaxCosAngleTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDependentAxialMaxCosAngleTol_MetaData), NewProp_ViewDependentAxialMaxCosAngleTol_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentPlanarMinCosAngleTol = { "ViewDependentPlanarMinCosAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewDependentPlanarMinCosAngleTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDependentPlanarMinCosAngleTol_MetaData), NewProp_ViewDependentPlanarMinCosAngleTol_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType = { "ViewAlignType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewAlignType), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewAlignType_MetaData), NewProp_ViewAlignType_MetaData) }; // 3740679907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxis = { "ViewAlignAxis", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewAlignAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewAlignAxis_MetaData), NewProp_ViewAlignAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignNormal = { "ViewAlignNormal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewAlignNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewAlignNormal_MetaData), NewProp_ViewAlignNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialAngleTol = { "ViewAlignAxialAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewAlignAxialAngleTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewAlignAxialAngleTol_MetaData), NewProp_ViewAlignAxialAngleTol_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialMaxCosAngleTol = { "ViewAlignAxialMaxCosAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, ViewAlignAxialMaxCosAngleTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewAlignAxialMaxCosAngleTol_MetaData), NewProp_ViewAlignAxialMaxCosAngleTol_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PixelHitDistanceThreshold = { "PixelHitDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementBase, PixelHitDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelHitDistanceThreshold_MetaData), NewProp_PixelHitDistanceThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PartIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_MeshRenderAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAngleTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxialMaxCosAngleTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentPlanarMinCosAngleTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialAngleTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialMaxCosAngleTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PixelHitDistanceThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementBase_Statics::ClassParams = {
	&UGizmoElementBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::PropPointers),
	0,
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementBase()
{
	if (!Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton, Z_Construct_UClass_UGizmoElementBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementBase>()
{
	return UGizmoElementBase::StaticClass();
}
UGizmoElementBase::UGizmoElementBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementBase);
UGizmoElementBase::~UGizmoElementBase() {}
// End Class UGizmoElementBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementBase, UGizmoElementBase::StaticClass, TEXT("UGizmoElementBase"), &Z_Registration_Info_UClass_UGizmoElementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementBase), 2469909114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_2520767316(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
