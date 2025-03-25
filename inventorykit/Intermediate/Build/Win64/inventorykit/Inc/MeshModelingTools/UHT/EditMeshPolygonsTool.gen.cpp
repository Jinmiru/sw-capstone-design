// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/EditMeshPolygonsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditMeshPolygonsTool() {}

// Begin Cross Module References
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolUVActions();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEditMeshPolygonsToolUVActions_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCommonProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCommonProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditTopologyProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditTopologyProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UToolActivityHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UEditMeshPolygonsToolBuilder
void UEditMeshPolygonsToolBuilder::StaticRegisterNativesUEditMeshPolygonsToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsToolBuilder);
UClass* Z_Construct_UClass_UEditMeshPolygonsToolBuilder_NoRegister()
{
	return UEditMeshPolygonsToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsToolBuilder_Statics::ClassParams = {
	&UEditMeshPolygonsToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsToolBuilder()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsToolBuilder>()
{
	return UEditMeshPolygonsToolBuilder::StaticClass();
}
UEditMeshPolygonsToolBuilder::UEditMeshPolygonsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsToolBuilder);
UEditMeshPolygonsToolBuilder::~UEditMeshPolygonsToolBuilder() {}
// End Class UEditMeshPolygonsToolBuilder

// Begin Enum ELocalFrameMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalFrameMode;
static UEnum* ELocalFrameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocalFrameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocalFrameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("ELocalFrameMode"));
	}
	return Z_Registration_Info_UEnum_ELocalFrameMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ELocalFrameMode>()
{
	return ELocalFrameMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FromGeometry.Name", "ELocalFrameMode::FromGeometry" },
		{ "FromObject.Name", "ELocalFrameMode::FromObject" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocalFrameMode::FromObject", (int64)ELocalFrameMode::FromObject },
		{ "ELocalFrameMode::FromGeometry", (int64)ELocalFrameMode::FromGeometry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"ELocalFrameMode",
	"ELocalFrameMode",
	Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode()
{
	if (!Z_Registration_Info_UEnum_ELocalFrameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalFrameMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocalFrameMode.InnerSingleton;
}
// End Enum ELocalFrameMode

// Begin Class UPolyEditCommonProperties
void UPolyEditCommonProperties::StaticRegisterNativesUPolyEditCommonProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditCommonProperties);
UClass* Z_Construct_UClass_UPolyEditCommonProperties_NoRegister()
{
	return UPolyEditCommonProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditCommonProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * These are properties that do not get enabled/disabled based on the action \n */" },
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "These are properties that do not get enabled/disabled based on the action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSelectableCorners_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGizmoVisible_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When true, allows the transform gizmo to be rendered */" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "When true, allows the transform gizmo to be rendered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalFrameMode_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Determines whether, on selection changes, the gizmo's rotation is taken from the object transform, or from the geometry\n\x09 elements selected. Only relevant with a local coordinate system and when rotation is not locked. */" },
		{ "EditCondition", "bLocalCoordSystem && !bLockRotation" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Determines whether, on selection changes, the gizmo's rotation is taken from the object transform, or from the geometry\n       elements selected. Only relevant with a local coordinate system and when rotation is not locked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockRotation_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** When true, keeps rotation of gizmo constant through selection changes and manipulations \n\x09 (but not middle-click repositions). Only active with a local coordinate system.*/" },
		{ "EditCondition", "bLocalCoordSystem" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "When true, keeps rotation of gizmo constant through selection changes and manipulations\n       (but not middle-click repositions). Only active with a local coordinate system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalCoordSystem_MetaData[] = {
		{ "Comment", "/** This gets updated internally so that properties can respond to whether the coordinate system is set to local or global */" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "This gets updated internally so that properties can respond to whether the coordinate system is set to local or global" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static void NewProp_bShowSelectableCorners_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSelectableCorners;
	static void NewProp_bGizmoVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGizmoVisible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalFrameMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocalFrameMode;
	static void NewProp_bLockRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockRotation;
	static void NewProp_bLocalCoordSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalCoordSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditCommonProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UPolyEditCommonProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditCommonProperties), &Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
void Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowSelectableCorners_SetBit(void* Obj)
{
	((UPolyEditCommonProperties*)Obj)->bShowSelectableCorners = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowSelectableCorners = { "bShowSelectableCorners", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditCommonProperties), &Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowSelectableCorners_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSelectableCorners_MetaData), NewProp_bShowSelectableCorners_MetaData) };
void Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bGizmoVisible_SetBit(void* Obj)
{
	((UPolyEditCommonProperties*)Obj)->bGizmoVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bGizmoVisible = { "bGizmoVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditCommonProperties), &Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bGizmoVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGizmoVisible_MetaData), NewProp_bGizmoVisible_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_LocalFrameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_LocalFrameMode = { "LocalFrameMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditCommonProperties, LocalFrameMode), Z_Construct_UEnum_MeshModelingTools_ELocalFrameMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalFrameMode_MetaData), NewProp_LocalFrameMode_MetaData) }; // 1341814008
void Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLockRotation_SetBit(void* Obj)
{
	((UPolyEditCommonProperties*)Obj)->bLockRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLockRotation = { "bLockRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditCommonProperties), &Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLockRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockRotation_MetaData), NewProp_bLockRotation_MetaData) };
void Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLocalCoordSystem_SetBit(void* Obj)
{
	((UPolyEditCommonProperties*)Obj)->bLocalCoordSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLocalCoordSystem = { "bLocalCoordSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditCommonProperties), &Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLocalCoordSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalCoordSystem_MetaData), NewProp_bLocalCoordSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditCommonProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bShowSelectableCorners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bGizmoVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_LocalFrameMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_LocalFrameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLockRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCommonProperties_Statics::NewProp_bLocalCoordSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCommonProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditCommonProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCommonProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditCommonProperties_Statics::ClassParams = {
	&UPolyEditCommonProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditCommonProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCommonProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCommonProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditCommonProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditCommonProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditCommonProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditCommonProperties.OuterSingleton, Z_Construct_UClass_UPolyEditCommonProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditCommonProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditCommonProperties>()
{
	return UPolyEditCommonProperties::StaticClass();
}
UPolyEditCommonProperties::UPolyEditCommonProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditCommonProperties);
UPolyEditCommonProperties::~UPolyEditCommonProperties() {}
// End Class UPolyEditCommonProperties

// Begin Enum EEditMeshPolygonsToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions;
static UEnum* EEditMeshPolygonsToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EEditMeshPolygonsToolActions"));
	}
	return Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EEditMeshPolygonsToolActions>()
{
	return EEditMeshPolygonsToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AcceptCurrent.Name", "EEditMeshPolygonsToolActions::AcceptCurrent" },
		{ "BevelAuto.Comment", "// for external use\n" },
		{ "BevelAuto.Name", "EEditMeshPolygonsToolActions::BevelAuto" },
		{ "BevelAuto.ToolTip", "for external use" },
		{ "BevelEdges.Name", "EEditMeshPolygonsToolActions::BevelEdges" },
		{ "BevelFaces.Name", "EEditMeshPolygonsToolActions::BevelFaces" },
		{ "BridgeEdges.Name", "EEditMeshPolygonsToolActions::BridgeEdges" },
		{ "CancelCurrent.Name", "EEditMeshPolygonsToolActions::CancelCurrent" },
		{ "CollapseEdge.Name", "EEditMeshPolygonsToolActions::CollapseEdge" },
		{ "CollapseSingleEdge.Name", "EEditMeshPolygonsToolActions::CollapseSingleEdge" },
		{ "Complete.Name", "EEditMeshPolygonsToolActions::Complete" },
		{ "CutFaces.Name", "EEditMeshPolygonsToolActions::CutFaces" },
		{ "Decompose.Name", "EEditMeshPolygonsToolActions::Decompose" },
		{ "Delete.Name", "EEditMeshPolygonsToolActions::Delete" },
		{ "Disconnect.Name", "EEditMeshPolygonsToolActions::Disconnect" },
		{ "Duplicate.Name", "EEditMeshPolygonsToolActions::Duplicate" },
		{ "Extrude.Name", "EEditMeshPolygonsToolActions::Extrude" },
		{ "ExtrudeEdges.Name", "EEditMeshPolygonsToolActions::ExtrudeEdges" },
		{ "FillHole.Name", "EEditMeshPolygonsToolActions::FillHole" },
		{ "FlipNormals.Name", "EEditMeshPolygonsToolActions::FlipNormals" },
		{ "FlipSingleEdge.Name", "EEditMeshPolygonsToolActions::FlipSingleEdge" },
		{ "InsertEdge.Name", "EEditMeshPolygonsToolActions::InsertEdge" },
		{ "InsertEdgeLoop.Name", "EEditMeshPolygonsToolActions::InsertEdgeLoop" },
		{ "Inset.Name", "EEditMeshPolygonsToolActions::Inset" },
		{ "Merge.Name", "EEditMeshPolygonsToolActions::Merge" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "NoAction.Name", "EEditMeshPolygonsToolActions::NoAction" },
		{ "Offset.Name", "EEditMeshPolygonsToolActions::Offset" },
		{ "Outset.Name", "EEditMeshPolygonsToolActions::Outset" },
		{ "PlanarProjectionUV.Name", "EEditMeshPolygonsToolActions::PlanarProjectionUV" },
		{ "PlaneCut.Name", "EEditMeshPolygonsToolActions::PlaneCut" },
		{ "PokeSingleFace.Comment", "// triangle-specific edits\n" },
		{ "PokeSingleFace.Name", "EEditMeshPolygonsToolActions::PokeSingleFace" },
		{ "PokeSingleFace.ToolTip", "triangle-specific edits" },
		{ "PushPull.Name", "EEditMeshPolygonsToolActions::PushPull" },
		{ "RecalculateNormals.Name", "EEditMeshPolygonsToolActions::RecalculateNormals" },
		{ "RegenerateExtraCorners.Name", "EEditMeshPolygonsToolActions::RegenerateExtraCorners" },
		{ "Retriangulate.Name", "EEditMeshPolygonsToolActions::Retriangulate" },
		{ "SimplifyAlongEdges.Name", "EEditMeshPolygonsToolActions::SimplifyAlongEdges" },
		{ "SimplifyByGroups.Name", "EEditMeshPolygonsToolActions::SimplifyByGroups" },
		{ "SplitSingleEdge.Name", "EEditMeshPolygonsToolActions::SplitSingleEdge" },
		{ "StraightenEdge.Name", "EEditMeshPolygonsToolActions::StraightenEdge" },
		{ "WeldEdges.Name", "EEditMeshPolygonsToolActions::WeldEdges" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEditMeshPolygonsToolActions::NoAction", (int64)EEditMeshPolygonsToolActions::NoAction },
		{ "EEditMeshPolygonsToolActions::AcceptCurrent", (int64)EEditMeshPolygonsToolActions::AcceptCurrent },
		{ "EEditMeshPolygonsToolActions::CancelCurrent", (int64)EEditMeshPolygonsToolActions::CancelCurrent },
		{ "EEditMeshPolygonsToolActions::Extrude", (int64)EEditMeshPolygonsToolActions::Extrude },
		{ "EEditMeshPolygonsToolActions::PushPull", (int64)EEditMeshPolygonsToolActions::PushPull },
		{ "EEditMeshPolygonsToolActions::Offset", (int64)EEditMeshPolygonsToolActions::Offset },
		{ "EEditMeshPolygonsToolActions::Inset", (int64)EEditMeshPolygonsToolActions::Inset },
		{ "EEditMeshPolygonsToolActions::Outset", (int64)EEditMeshPolygonsToolActions::Outset },
		{ "EEditMeshPolygonsToolActions::BevelFaces", (int64)EEditMeshPolygonsToolActions::BevelFaces },
		{ "EEditMeshPolygonsToolActions::InsertEdge", (int64)EEditMeshPolygonsToolActions::InsertEdge },
		{ "EEditMeshPolygonsToolActions::InsertEdgeLoop", (int64)EEditMeshPolygonsToolActions::InsertEdgeLoop },
		{ "EEditMeshPolygonsToolActions::Complete", (int64)EEditMeshPolygonsToolActions::Complete },
		{ "EEditMeshPolygonsToolActions::PlaneCut", (int64)EEditMeshPolygonsToolActions::PlaneCut },
		{ "EEditMeshPolygonsToolActions::Merge", (int64)EEditMeshPolygonsToolActions::Merge },
		{ "EEditMeshPolygonsToolActions::Delete", (int64)EEditMeshPolygonsToolActions::Delete },
		{ "EEditMeshPolygonsToolActions::CutFaces", (int64)EEditMeshPolygonsToolActions::CutFaces },
		{ "EEditMeshPolygonsToolActions::RecalculateNormals", (int64)EEditMeshPolygonsToolActions::RecalculateNormals },
		{ "EEditMeshPolygonsToolActions::FlipNormals", (int64)EEditMeshPolygonsToolActions::FlipNormals },
		{ "EEditMeshPolygonsToolActions::Retriangulate", (int64)EEditMeshPolygonsToolActions::Retriangulate },
		{ "EEditMeshPolygonsToolActions::Decompose", (int64)EEditMeshPolygonsToolActions::Decompose },
		{ "EEditMeshPolygonsToolActions::Disconnect", (int64)EEditMeshPolygonsToolActions::Disconnect },
		{ "EEditMeshPolygonsToolActions::Duplicate", (int64)EEditMeshPolygonsToolActions::Duplicate },
		{ "EEditMeshPolygonsToolActions::CollapseEdge", (int64)EEditMeshPolygonsToolActions::CollapseEdge },
		{ "EEditMeshPolygonsToolActions::WeldEdges", (int64)EEditMeshPolygonsToolActions::WeldEdges },
		{ "EEditMeshPolygonsToolActions::StraightenEdge", (int64)EEditMeshPolygonsToolActions::StraightenEdge },
		{ "EEditMeshPolygonsToolActions::FillHole", (int64)EEditMeshPolygonsToolActions::FillHole },
		{ "EEditMeshPolygonsToolActions::BridgeEdges", (int64)EEditMeshPolygonsToolActions::BridgeEdges },
		{ "EEditMeshPolygonsToolActions::ExtrudeEdges", (int64)EEditMeshPolygonsToolActions::ExtrudeEdges },
		{ "EEditMeshPolygonsToolActions::BevelEdges", (int64)EEditMeshPolygonsToolActions::BevelEdges },
		{ "EEditMeshPolygonsToolActions::SimplifyAlongEdges", (int64)EEditMeshPolygonsToolActions::SimplifyAlongEdges },
		{ "EEditMeshPolygonsToolActions::PlanarProjectionUV", (int64)EEditMeshPolygonsToolActions::PlanarProjectionUV },
		{ "EEditMeshPolygonsToolActions::SimplifyByGroups", (int64)EEditMeshPolygonsToolActions::SimplifyByGroups },
		{ "EEditMeshPolygonsToolActions::RegenerateExtraCorners", (int64)EEditMeshPolygonsToolActions::RegenerateExtraCorners },
		{ "EEditMeshPolygonsToolActions::PokeSingleFace", (int64)EEditMeshPolygonsToolActions::PokeSingleFace },
		{ "EEditMeshPolygonsToolActions::SplitSingleEdge", (int64)EEditMeshPolygonsToolActions::SplitSingleEdge },
		{ "EEditMeshPolygonsToolActions::FlipSingleEdge", (int64)EEditMeshPolygonsToolActions::FlipSingleEdge },
		{ "EEditMeshPolygonsToolActions::CollapseSingleEdge", (int64)EEditMeshPolygonsToolActions::CollapseSingleEdge },
		{ "EEditMeshPolygonsToolActions::BevelAuto", (int64)EEditMeshPolygonsToolActions::BevelAuto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EEditMeshPolygonsToolActions",
	"EEditMeshPolygonsToolActions",
	Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions()
{
	if (!Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions.InnerSingleton;
}
// End Enum EEditMeshPolygonsToolActions

// Begin Class UEditMeshPolygonsActionModeToolBuilder
void UEditMeshPolygonsActionModeToolBuilder::StaticRegisterNativesUEditMeshPolygonsActionModeToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsActionModeToolBuilder);
UClass* Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_NoRegister()
{
	return UEditMeshPolygonsActionModeToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsActionModeToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_Statics::ClassParams = {
	&UEditMeshPolygonsActionModeToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsActionModeToolBuilder>()
{
	return UEditMeshPolygonsActionModeToolBuilder::StaticClass();
}
UEditMeshPolygonsActionModeToolBuilder::UEditMeshPolygonsActionModeToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsActionModeToolBuilder);
UEditMeshPolygonsActionModeToolBuilder::~UEditMeshPolygonsActionModeToolBuilder() {}
// End Class UEditMeshPolygonsActionModeToolBuilder

// Begin Enum EEditMeshPolygonsToolSelectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode;
static UEnum* EEditMeshPolygonsToolSelectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EEditMeshPolygonsToolSelectionMode"));
	}
	return Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EEditMeshPolygonsToolSelectionMode>()
{
	return EEditMeshPolygonsToolSelectionMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Edges.Name", "EEditMeshPolygonsToolSelectionMode::Edges" },
		{ "Faces.Name", "EEditMeshPolygonsToolSelectionMode::Faces" },
		{ "FacesEdgesVertices.Name", "EEditMeshPolygonsToolSelectionMode::FacesEdgesVertices" },
		{ "Loops.Name", "EEditMeshPolygonsToolSelectionMode::Loops" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "Rings.Name", "EEditMeshPolygonsToolSelectionMode::Rings" },
		{ "Vertices.Name", "EEditMeshPolygonsToolSelectionMode::Vertices" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEditMeshPolygonsToolSelectionMode::Faces", (int64)EEditMeshPolygonsToolSelectionMode::Faces },
		{ "EEditMeshPolygonsToolSelectionMode::Edges", (int64)EEditMeshPolygonsToolSelectionMode::Edges },
		{ "EEditMeshPolygonsToolSelectionMode::Vertices", (int64)EEditMeshPolygonsToolSelectionMode::Vertices },
		{ "EEditMeshPolygonsToolSelectionMode::Loops", (int64)EEditMeshPolygonsToolSelectionMode::Loops },
		{ "EEditMeshPolygonsToolSelectionMode::Rings", (int64)EEditMeshPolygonsToolSelectionMode::Rings },
		{ "EEditMeshPolygonsToolSelectionMode::FacesEdgesVertices", (int64)EEditMeshPolygonsToolSelectionMode::FacesEdgesVertices },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EEditMeshPolygonsToolSelectionMode",
	"EEditMeshPolygonsToolSelectionMode",
	Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode()
{
	if (!Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EEditMeshPolygonsToolSelectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode.InnerSingleton;
}
// End Enum EEditMeshPolygonsToolSelectionMode

// Begin Class UEditMeshPolygonsSelectionModeToolBuilder
void UEditMeshPolygonsSelectionModeToolBuilder::StaticRegisterNativesUEditMeshPolygonsSelectionModeToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsSelectionModeToolBuilder);
UClass* Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_NoRegister()
{
	return UEditMeshPolygonsSelectionModeToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsSelectionModeToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_Statics::ClassParams = {
	&UEditMeshPolygonsSelectionModeToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsSelectionModeToolBuilder>()
{
	return UEditMeshPolygonsSelectionModeToolBuilder::StaticClass();
}
UEditMeshPolygonsSelectionModeToolBuilder::UEditMeshPolygonsSelectionModeToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsSelectionModeToolBuilder);
UEditMeshPolygonsSelectionModeToolBuilder::~UEditMeshPolygonsSelectionModeToolBuilder() {}
// End Class UEditMeshPolygonsSelectionModeToolBuilder

// Begin Class UEditMeshPolygonsToolActionPropertySet
void UEditMeshPolygonsToolActionPropertySet::StaticRegisterNativesUEditMeshPolygonsToolActionPropertySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsToolActionPropertySet);
UClass* Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_NoRegister()
{
	return UEditMeshPolygonsToolActionPropertySet::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsToolActionPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_Statics::ClassParams = {
	&UEditMeshPolygonsToolActionPropertySet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsToolActionPropertySet>()
{
	return UEditMeshPolygonsToolActionPropertySet::StaticClass();
}
UEditMeshPolygonsToolActionPropertySet::UEditMeshPolygonsToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsToolActionPropertySet);
UEditMeshPolygonsToolActionPropertySet::~UEditMeshPolygonsToolActionPropertySet() {}
// End Class UEditMeshPolygonsToolActionPropertySet

// Begin Class UPolyEditTopologyProperties Function RegenerateExtraCorners
struct Z_Construct_UFunction_UPolyEditTopologyProperties_RegenerateExtraCorners_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TopologyOptions" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyEditTopologyProperties_RegenerateExtraCorners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyEditTopologyProperties, nullptr, "RegenerateExtraCorners", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyEditTopologyProperties_RegenerateExtraCorners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolyEditTopologyProperties_RegenerateExtraCorners_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPolyEditTopologyProperties_RegenerateExtraCorners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyEditTopologyProperties_RegenerateExtraCorners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolyEditTopologyProperties::execRegenerateExtraCorners)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateExtraCorners();
	P_NATIVE_END;
}
// End Class UPolyEditTopologyProperties Function RegenerateExtraCorners

// Begin Class UPolyEditTopologyProperties
void UPolyEditTopologyProperties::StaticRegisterNativesUPolyEditTopologyProperties()
{
	UClass* Class = UPolyEditTopologyProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegenerateExtraCorners", &UPolyEditTopologyProperties::execRegenerateExtraCorners },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditTopologyProperties);
UClass* Z_Construct_UClass_UPolyEditTopologyProperties_NoRegister()
{
	return UPolyEditTopologyProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditTopologyProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddExtraCorners_MetaData[] = {
		{ "Category", "TopologyOptions" },
		{ "Comment", "/** \n\x09 * When true, adds extra corners at sharp group edge bends (in addition to the normal corners that\n\x09 * are placed at junctures of three or more group edges). For instance, a single disconnected quad-like group\n\x09 * would normally have a single group edge with no corners, since it has no neighboring groups, but this\n\x09 * setting will allow for the generation of corners at the quad corners, which is very useful for editing.\n\x09 * Note that the setting takes effect only after clicking Regenerate Extra Corners or performing some\n\x09 * operation that changes the group topology.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "When true, adds extra corners at sharp group edge bends (in addition to the normal corners that\nare placed at junctures of three or more group edges). For instance, a single disconnected quad-like group\nwould normally have a single group edge with no corners, since it has no neighboring groups, but this\nsetting will allow for the generation of corners at the quad corners, which is very useful for editing.\nNote that the setting takes effect only after clicking Regenerate Extra Corners or performing some\noperation that changes the group topology." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraCornerAngleThresholdDegrees_MetaData[] = {
		{ "Category", "TopologyOptions" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * When generating extra corners, how sharp the angle needs to be to warrant an extra corner placement there. Lower values require\n\x09 * sharper corners, so are more tolerant of curved group edges. For instance, 180 will place corners at every vertex along a group\n\x09 * edge even if the edge is perfectly straight, and 135 will place a vertex only once the edge bends 45 degrees off the straight path\n\x09 * (i.e. 135 degrees to the previous edge). \n\x09 * The setting is applied either when Regenerate Extra Corners is clicked, or after any operation that modifies topology.\n\x09 */" },
		{ "EditCondition", "bAddExtraCorners" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "When generating extra corners, how sharp the angle needs to be to warrant an extra corner placement there. Lower values require\nsharper corners, so are more tolerant of curved group edges. For instance, 180 will place corners at every vertex along a group\nedge even if the edge is perfectly straight, and 135 will place a vertex only once the edge bends 45 degrees off the straight path\n(i.e. 135 degrees to the previous edge).\nThe setting is applied either when Regenerate Extra Corners is clicked, or after any operation that modifies topology." },
	};
#endif // WITH_METADATA
	static void NewProp_bAddExtraCorners_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddExtraCorners;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtraCornerAngleThresholdDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolyEditTopologyProperties_RegenerateExtraCorners, "RegenerateExtraCorners" }, // 1200987244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditTopologyProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPolyEditTopologyProperties_Statics::NewProp_bAddExtraCorners_SetBit(void* Obj)
{
	((UPolyEditTopologyProperties*)Obj)->bAddExtraCorners = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditTopologyProperties_Statics::NewProp_bAddExtraCorners = { "bAddExtraCorners", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditTopologyProperties), &Z_Construct_UClass_UPolyEditTopologyProperties_Statics::NewProp_bAddExtraCorners_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddExtraCorners_MetaData), NewProp_bAddExtraCorners_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditTopologyProperties_Statics::NewProp_ExtraCornerAngleThresholdDegrees = { "ExtraCornerAngleThresholdDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditTopologyProperties, ExtraCornerAngleThresholdDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraCornerAngleThresholdDegrees_MetaData), NewProp_ExtraCornerAngleThresholdDegrees_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditTopologyProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditTopologyProperties_Statics::NewProp_bAddExtraCorners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditTopologyProperties_Statics::NewProp_ExtraCornerAngleThresholdDegrees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditTopologyProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditTopologyProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditTopologyProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditTopologyProperties_Statics::ClassParams = {
	&UPolyEditTopologyProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPolyEditTopologyProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditTopologyProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditTopologyProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditTopologyProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditTopologyProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditTopologyProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditTopologyProperties.OuterSingleton, Z_Construct_UClass_UPolyEditTopologyProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditTopologyProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditTopologyProperties>()
{
	return UPolyEditTopologyProperties::StaticClass();
}
UPolyEditTopologyProperties::UPolyEditTopologyProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditTopologyProperties);
UPolyEditTopologyProperties::~UPolyEditTopologyProperties() {}
// End Class UPolyEditTopologyProperties

// Begin Class UEditMeshPolygonsToolActions Function Bevel
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Bevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Bevel the edge loops around the selected faces, inserting edge-aligned faces that interpolate the normals of the selected faces */" },
		{ "DisplayName", "Bevel" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Bevel the edge loops around the selected faces, inserting edge-aligned faces that interpolate the normals of the selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Bevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Bevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Bevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Bevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Bevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Bevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execBevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Bevel();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Bevel

// Begin Class UEditMeshPolygonsToolActions Function CutFaces
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_CutFaces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Cut the current set of selected faces. Click twice in viewport to set cut line. */" },
		{ "DisplayName", "CutFaces" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Cut the current set of selected faces. Click twice in viewport to set cut line." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_CutFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "CutFaces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_CutFaces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_CutFaces_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_CutFaces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_CutFaces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execCutFaces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CutFaces();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function CutFaces

// Begin Class UEditMeshPolygonsToolActions Function Decompose
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Decompose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Split each of the selected faces into a separate polygon for each triangle */" },
		{ "DisplayName", "Decompose" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Split each of the selected faces into a separate polygon for each triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Decompose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Decompose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Decompose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Decompose_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Decompose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Decompose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execDecompose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Decompose();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Decompose

// Begin Class UEditMeshPolygonsToolActions Function Delete
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Delete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Delete the current set of selected faces */" },
		{ "DisplayName", "Delete Faces" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Delete the current set of selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Delete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Delete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Delete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Delete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Delete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execDelete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Delete();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Delete

// Begin Class UEditMeshPolygonsToolActions Function Disconnect
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Separate the selected faces at their borders */" },
		{ "DisplayName", "Disconnect" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Separate the selected faces at their borders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Disconnect

// Begin Class UEditMeshPolygonsToolActions Function Duplicate
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Duplicate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Duplicate the selected faces at their borders */" },
		{ "DisplayName", "Duplicate" },
		{ "DisplayPriority", "12" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Duplicate the selected faces at their borders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Duplicate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Duplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Duplicate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Duplicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Duplicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execDuplicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Duplicate();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Duplicate

// Begin Class UEditMeshPolygonsToolActions Function Extrude
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Extrude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Extrude the current set of selected faces by moving and stitching them. */" },
		{ "DisplayName", "Extrude" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Extrude the current set of selected faces by moving and stitching them." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Extrude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Extrude", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Extrude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Extrude_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Extrude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Extrude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execExtrude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Extrude();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Extrude

// Begin Class UEditMeshPolygonsToolActions Function Flip
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Flip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Flip normals and face orientation for the current set of selected faces */" },
		{ "DisplayName", "Flip" },
		{ "DisplayPriority", "7" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Flip normals and face orientation for the current set of selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Flip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Flip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Flip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Flip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Flip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Flip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execFlip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Flip();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Flip

// Begin Class UEditMeshPolygonsToolActions Function InsertEdge
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ShapeEdits" },
		{ "Comment", "/** Insert a new edge connecting existing edges or vertices on a single face */" },
		{ "DisplayName", "Insert Edge" },
		{ "DisplayPriority", "14" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Insert a new edge connecting existing edges or vertices on a single face" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "InsertEdge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execInsertEdge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InsertEdge();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function InsertEdge

// Begin Class UEditMeshPolygonsToolActions Function InsertEdgeLoop
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdgeLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ShapeEdits" },
		{ "Comment", "/** Insert a chain of edges across quads (faces with four edges) in the mesh. Due to ambiguity, edges will not be inserted on non-quad faces. */" },
		{ "DisplayName", "InsertEdgeLoop" },
		{ "DisplayPriority", "13" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Insert a chain of edges across quads (faces with four edges) in the mesh. Due to ambiguity, edges will not be inserted on non-quad faces." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdgeLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "InsertEdgeLoop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdgeLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdgeLoop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdgeLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdgeLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execInsertEdgeLoop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InsertEdgeLoop();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function InsertEdgeLoop

// Begin Class UEditMeshPolygonsToolActions Function Inset
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Inset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/**\n\x09 * Inset the current set of selected faces. Click in viewport to confirm inset distance.\n\x09 * \n\x09 * (An Inset operation stitches in a smaller version of selected faces inside the existing ones)\n\x09 */" },
		{ "DisplayName", "Inset" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Inset the current set of selected faces. Click in viewport to confirm inset distance.\n\n(An Inset operation stitches in a smaller version of selected faces inside the existing ones)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Inset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Inset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Inset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Inset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Inset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Inset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execInset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Inset();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Inset

// Begin Class UEditMeshPolygonsToolActions Function Merge
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Merge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Merge the current set of selected faces into a single face */" },
		{ "DisplayName", "Merge" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Merge the current set of selected faces into a single face" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Merge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Merge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Merge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Merge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Merge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Merge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execMerge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Merge();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Merge

// Begin Class UEditMeshPolygonsToolActions Function Offset
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Offset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Like Extrude, but defaults to moving verts along vertex normals instead of a single direction.*/" },
		{ "DisplayName", "Offset" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Like Extrude, but defaults to moving verts along vertex normals instead of a single direction." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Offset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Offset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Offset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Offset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Offset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Offset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Offset();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Offset

// Begin Class UEditMeshPolygonsToolActions Function Outset
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Outset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/**\n\x09 * Outset the current set of selected faces. Click in viewport to confirm outset distance.\n\x09 * \n\x09 * (An Outset operation stitches in a larger version of selected faces inside the existing ones)\n\x09 */" },
		{ "DisplayName", "Outset" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Outset the current set of selected faces. Click in viewport to confirm outset distance.\n\n(An Outset operation stitches in a larger version of selected faces inside the existing ones)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Outset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Outset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Outset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Outset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Outset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Outset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execOutset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Outset();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Outset

// Begin Class UEditMeshPolygonsToolActions Function PushPull
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_PushPull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Like Extrude/Offset, but performed in a boolean way, meaning that the faces can cut away the mesh or bridge mesh parts. */" },
		{ "DisplayName", "Push/Pull" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Like Extrude/Offset, but performed in a boolean way, meaning that the faces can cut away the mesh or bridge mesh parts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_PushPull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "PushPull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_PushPull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_PushPull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_PushPull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_PushPull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execPushPull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PushPull();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function PushPull

// Begin Class UEditMeshPolygonsToolActions Function RecalcNormals
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_RecalcNormals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Recalculate normals for the current set of selected faces */" },
		{ "DisplayName", "RecalcNormals" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Recalculate normals for the current set of selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_RecalcNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "RecalcNormals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_RecalcNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_RecalcNormals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_RecalcNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_RecalcNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execRecalcNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalcNormals();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function RecalcNormals

// Begin Class UEditMeshPolygonsToolActions Function Retriangulate
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Retriangulate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FaceEdits" },
		{ "Comment", "/** Retriangulate each of the selected faces */" },
		{ "DisplayName", "Retriangulate" },
		{ "DisplayPriority", "9" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Retriangulate each of the selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Retriangulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "Retriangulate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Retriangulate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Retriangulate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Retriangulate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Retriangulate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execRetriangulate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Retriangulate();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function Retriangulate

// Begin Class UEditMeshPolygonsToolActions Function SimplifyByGroups
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_SimplifyByGroups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ShapeEdits" },
		{ "Comment", "/** Simplify every polygon group by removing vertices on shared straight edges and retriangulating */" },
		{ "DisplayName", "SimplifyByGroups" },
		{ "DisplayPriority", "15" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Simplify every polygon group by removing vertices on shared straight edges and retriangulating" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_SimplifyByGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions, nullptr, "SimplifyByGroups", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_SimplifyByGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_SimplifyByGroups_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_SimplifyByGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_SimplifyByGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions::execSimplifyByGroups)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimplifyByGroups();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions Function SimplifyByGroups

// Begin Class UEditMeshPolygonsToolActions
void UEditMeshPolygonsToolActions::StaticRegisterNativesUEditMeshPolygonsToolActions()
{
	UClass* Class = UEditMeshPolygonsToolActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Bevel", &UEditMeshPolygonsToolActions::execBevel },
		{ "CutFaces", &UEditMeshPolygonsToolActions::execCutFaces },
		{ "Decompose", &UEditMeshPolygonsToolActions::execDecompose },
		{ "Delete", &UEditMeshPolygonsToolActions::execDelete },
		{ "Disconnect", &UEditMeshPolygonsToolActions::execDisconnect },
		{ "Duplicate", &UEditMeshPolygonsToolActions::execDuplicate },
		{ "Extrude", &UEditMeshPolygonsToolActions::execExtrude },
		{ "Flip", &UEditMeshPolygonsToolActions::execFlip },
		{ "InsertEdge", &UEditMeshPolygonsToolActions::execInsertEdge },
		{ "InsertEdgeLoop", &UEditMeshPolygonsToolActions::execInsertEdgeLoop },
		{ "Inset", &UEditMeshPolygonsToolActions::execInset },
		{ "Merge", &UEditMeshPolygonsToolActions::execMerge },
		{ "Offset", &UEditMeshPolygonsToolActions::execOffset },
		{ "Outset", &UEditMeshPolygonsToolActions::execOutset },
		{ "PushPull", &UEditMeshPolygonsToolActions::execPushPull },
		{ "RecalcNormals", &UEditMeshPolygonsToolActions::execRecalcNormals },
		{ "Retriangulate", &UEditMeshPolygonsToolActions::execRetriangulate },
		{ "SimplifyByGroups", &UEditMeshPolygonsToolActions::execSimplifyByGroups },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsToolActions);
UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions_NoRegister()
{
	return UEditMeshPolygonsToolActions::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** PolyEdit Actions */" },
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "PolyEdit Actions" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Bevel, "Bevel" }, // 2689759551
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_CutFaces, "CutFaces" }, // 3622062359
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Decompose, "Decompose" }, // 4126576349
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Delete, "Delete" }, // 2450320057
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Disconnect, "Disconnect" }, // 2449021056
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Duplicate, "Duplicate" }, // 3352863512
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Extrude, "Extrude" }, // 477401862
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Flip, "Flip" }, // 1286563039
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdge, "InsertEdge" }, // 929234509
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_InsertEdgeLoop, "InsertEdgeLoop" }, // 2022698468
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Inset, "Inset" }, // 3129606066
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Merge, "Merge" }, // 1051281364
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Offset, "Offset" }, // 2375085278
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Outset, "Outset" }, // 4239847015
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_PushPull, "PushPull" }, // 2706104047
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_RecalcNormals, "RecalcNormals" }, // 3262024657
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Retriangulate, "Retriangulate" }, // 1318084743
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_SimplifyByGroups, "SimplifyByGroups" }, // 2599707632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsToolActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics::ClassParams = {
	&UEditMeshPolygonsToolActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsToolActions>()
{
	return UEditMeshPolygonsToolActions::StaticClass();
}
UEditMeshPolygonsToolActions::UEditMeshPolygonsToolActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsToolActions);
UEditMeshPolygonsToolActions::~UEditMeshPolygonsToolActions() {}
// End Class UEditMeshPolygonsToolActions

// Begin Class UEditMeshPolygonsToolActions_Triangles Function CutFaces
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_CutFaces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Cut the current set of selected faces. Click twice in viewport to set cut line. */" },
		{ "DisplayName", "CutFaces" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Cut the current set of selected faces. Click twice in viewport to set cut line." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_CutFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "CutFaces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_CutFaces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_CutFaces_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_CutFaces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_CutFaces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execCutFaces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CutFaces();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function CutFaces

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Delete
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Delete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Delete the current set of selected faces */" },
		{ "DisplayName", "Delete Faces" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Delete the current set of selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Delete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Delete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Delete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Delete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Delete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execDelete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Delete();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Delete

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Disconnect
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Separate the selected faces at their borders */" },
		{ "DisplayName", "Disconnect" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Separate the selected faces at their borders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Disconnect

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Duplicate
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Duplicate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Duplicate the selected faces */" },
		{ "DisplayName", "Duplicate" },
		{ "DisplayPriority", "12" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Duplicate the selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Duplicate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Duplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Duplicate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Duplicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Duplicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execDuplicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Duplicate();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Duplicate

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Extrude
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Extrude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Extrude the current set of selected faces. Click in viewport to confirm extrude height. */" },
		{ "DisplayName", "Extrude" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Extrude the current set of selected faces. Click in viewport to confirm extrude height." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Extrude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Extrude", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Extrude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Extrude_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Extrude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Extrude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execExtrude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Extrude();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Extrude

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Flip
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Flip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Flip normals and face orientation for the current set of selected faces */" },
		{ "DisplayName", "Flip" },
		{ "DisplayPriority", "7" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Flip normals and face orientation for the current set of selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Flip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Flip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Flip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Flip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Flip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Flip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execFlip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Flip();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Flip

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Inset
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Inset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Inset the current set of selected faces. Click in viewport to confirm inset distance. */" },
		{ "DisplayName", "Inset" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Inset the current set of selected faces. Click in viewport to confirm inset distance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Inset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Inset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Inset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Inset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Inset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Inset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execInset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Inset();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Inset

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Offset
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Offset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Like Extrude, but defaults to moving verts along vertex normals instead of a single direction. */" },
		{ "DisplayName", "Offset" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Like Extrude, but defaults to moving verts along vertex normals instead of a single direction." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Offset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Offset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Offset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Offset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Offset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Offset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Offset();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Offset

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Outset
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Outset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Outset the current set of selected faces. Click in viewport to confirm outset distance. */" },
		{ "DisplayName", "Outset" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Outset the current set of selected faces. Click in viewport to confirm outset distance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Outset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Outset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Outset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Outset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Outset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Outset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execOutset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Outset();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Outset

// Begin Class UEditMeshPolygonsToolActions_Triangles Function Poke
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Poke_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Insert a new vertex at the center of each selected face */" },
		{ "DisplayName", "Poke" },
		{ "DisplayPriority", "13" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Insert a new vertex at the center of each selected face" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Poke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "Poke", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Poke_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Poke_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Poke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Poke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execPoke)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Poke();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function Poke

// Begin Class UEditMeshPolygonsToolActions_Triangles Function PushPull
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_PushPull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Like Extrude/Offset, but performed in a boolean way, meaning that the faces can cut away the mesh or bridge mesh parts. */" },
		{ "DisplayName", "Push/Pull" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Like Extrude/Offset, but performed in a boolean way, meaning that the faces can cut away the mesh or bridge mesh parts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_PushPull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "PushPull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_PushPull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_PushPull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_PushPull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_PushPull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execPushPull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PushPull();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function PushPull

// Begin Class UEditMeshPolygonsToolActions_Triangles Function RecalcNormals
struct Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TriangleEdits" },
		{ "Comment", "/** Recalculate normals for the current set of selected faces */" },
		{ "DisplayName", "RecalcNormals" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Recalculate normals for the current set of selected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, nullptr, "RecalcNormals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_RecalcNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolActions_Triangles::execRecalcNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalcNormals();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolActions_Triangles Function RecalcNormals

// Begin Class UEditMeshPolygonsToolActions_Triangles
void UEditMeshPolygonsToolActions_Triangles::StaticRegisterNativesUEditMeshPolygonsToolActions_Triangles()
{
	UClass* Class = UEditMeshPolygonsToolActions_Triangles::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CutFaces", &UEditMeshPolygonsToolActions_Triangles::execCutFaces },
		{ "Delete", &UEditMeshPolygonsToolActions_Triangles::execDelete },
		{ "Disconnect", &UEditMeshPolygonsToolActions_Triangles::execDisconnect },
		{ "Duplicate", &UEditMeshPolygonsToolActions_Triangles::execDuplicate },
		{ "Extrude", &UEditMeshPolygonsToolActions_Triangles::execExtrude },
		{ "Flip", &UEditMeshPolygonsToolActions_Triangles::execFlip },
		{ "Inset", &UEditMeshPolygonsToolActions_Triangles::execInset },
		{ "Offset", &UEditMeshPolygonsToolActions_Triangles::execOffset },
		{ "Outset", &UEditMeshPolygonsToolActions_Triangles::execOutset },
		{ "Poke", &UEditMeshPolygonsToolActions_Triangles::execPoke },
		{ "PushPull", &UEditMeshPolygonsToolActions_Triangles::execPushPull },
		{ "RecalcNormals", &UEditMeshPolygonsToolActions_Triangles::execRecalcNormals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsToolActions_Triangles);
UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_NoRegister()
{
	return UEditMeshPolygonsToolActions_Triangles::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_CutFaces, "CutFaces" }, // 3396555733
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Delete, "Delete" }, // 2242825774
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Disconnect, "Disconnect" }, // 3625465846
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Duplicate, "Duplicate" }, // 1560194357
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Extrude, "Extrude" }, // 3905402941
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Flip, "Flip" }, // 775171837
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Inset, "Inset" }, // 67325760
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Offset, "Offset" }, // 2384383030
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Outset, "Outset" }, // 2628285422
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_Poke, "Poke" }, // 3360848330
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_PushPull, "PushPull" }, // 4200901649
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolActions_Triangles_RecalcNormals, "RecalcNormals" }, // 3049250439
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsToolActions_Triangles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics::ClassParams = {
	&UEditMeshPolygonsToolActions_Triangles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsToolActions_Triangles>()
{
	return UEditMeshPolygonsToolActions_Triangles::StaticClass();
}
UEditMeshPolygonsToolActions_Triangles::UEditMeshPolygonsToolActions_Triangles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsToolActions_Triangles);
UEditMeshPolygonsToolActions_Triangles::~UEditMeshPolygonsToolActions_Triangles() {}
// End Class UEditMeshPolygonsToolActions_Triangles

// Begin Class UEditMeshPolygonsToolUVActions Function PlanarProjection
struct Z_Construct_UFunction_UEditMeshPolygonsToolUVActions_PlanarProjection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVs" },
		{ "Comment", "/** Assign planar-projection UVs to mesh */" },
		{ "DisplayName", "PlanarProjection" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Assign planar-projection UVs to mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolUVActions_PlanarProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolUVActions, nullptr, "PlanarProjection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolUVActions_PlanarProjection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolUVActions_PlanarProjection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolUVActions_PlanarProjection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolUVActions_PlanarProjection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolUVActions::execPlanarProjection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlanarProjection();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolUVActions Function PlanarProjection

// Begin Class UEditMeshPolygonsToolUVActions
void UEditMeshPolygonsToolUVActions::StaticRegisterNativesUEditMeshPolygonsToolUVActions()
{
	UClass* Class = UEditMeshPolygonsToolUVActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlanarProjection", &UEditMeshPolygonsToolUVActions::execPlanarProjection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsToolUVActions);
UClass* Z_Construct_UClass_UEditMeshPolygonsToolUVActions_NoRegister()
{
	return UEditMeshPolygonsToolUVActions::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolUVActions_PlanarProjection, "PlanarProjection" }, // 1766821932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsToolUVActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics::ClassParams = {
	&UEditMeshPolygonsToolUVActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsToolUVActions()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsToolUVActions>()
{
	return UEditMeshPolygonsToolUVActions::StaticClass();
}
UEditMeshPolygonsToolUVActions::UEditMeshPolygonsToolUVActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsToolUVActions);
UEditMeshPolygonsToolUVActions::~UEditMeshPolygonsToolUVActions() {}
// End Class UEditMeshPolygonsToolUVActions

// Begin Class UEditMeshPolygonsToolEdgeActions Function Bevel
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Bevel the selected edges, replacing them with angled faces */" },
		{ "DisplayName", "Bevel" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Bevel the selected edges, replacing them with angled faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "Bevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execBevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Bevel();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function Bevel

// Begin Class UEditMeshPolygonsToolEdgeActions Function Bridge
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Create a new face that connects the selected edges */" },
		{ "DisplayName", "Bridge" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Create a new face that connects the selected edges" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bridge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "Bridge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bridge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bridge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bridge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bridge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execBridge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Bridge();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function Bridge

// Begin Class UEditMeshPolygonsToolEdgeActions Function DeleteEdge
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_DeleteEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Delete selected edge, implicitly merging any connected faces */" },
		{ "DisplayName", "Delete Edges" },
		{ "DisplayPriority", "8" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Delete selected edge, implicitly merging any connected faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_DeleteEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "DeleteEdge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_DeleteEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_DeleteEdge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_DeleteEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_DeleteEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execDeleteEdge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteEdge();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function DeleteEdge

// Begin Class UEditMeshPolygonsToolEdgeActions Function Extrude
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Extrude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Duplicate and move boundary edge vertices outwards and connect them to the original boundary to create new faces. */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Duplicate and move boundary edge vertices outwards and connect them to the original boundary to create new faces." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Extrude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "Extrude", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Extrude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Extrude_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Extrude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Extrude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execExtrude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Extrude();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function Extrude

// Begin Class UEditMeshPolygonsToolEdgeActions Function FillHole
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_FillHole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Fill the adjacent hole for any selected boundary edges */" },
		{ "DisplayName", "Fill Hole" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Fill the adjacent hole for any selected boundary edges" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_FillHole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "FillHole", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_FillHole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_FillHole_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_FillHole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_FillHole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execFillHole)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FillHole();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function FillHole

// Begin Class UEditMeshPolygonsToolEdgeActions Function Simplify
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Simplify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Simplify the underlying triangulation along the selected edges, when doing so won't change the shape or UVs, or make low-quality triangles */" },
		{ "DisplayPriority", "7" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Simplify the underlying triangulation along the selected edges, when doing so won't change the shape or UVs, or make low-quality triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Simplify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "Simplify", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Simplify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Simplify_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Simplify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Simplify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execSimplify)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Simplify();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function Simplify

// Begin Class UEditMeshPolygonsToolEdgeActions Function Straighten
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Straighten_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Make each selected polygroup edge follow a straight path between its endpoints */" },
		{ "DisplayName", "Straighten" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Make each selected polygroup edge follow a straight path between its endpoints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Straighten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "Straighten", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Straighten_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Straighten_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Straighten()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Straighten_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execStraighten)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Straighten();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function Straighten

// Begin Class UEditMeshPolygonsToolEdgeActions Function Weld
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Weld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Merge selected edges, moving the first edge to the second */" },
		{ "DisplayName", "Weld" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Merge selected edges, moving the first edge to the second" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Weld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, nullptr, "Weld", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Weld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Weld_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Weld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Weld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions::execWeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Weld();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions Function Weld

// Begin Class UEditMeshPolygonsToolEdgeActions
void UEditMeshPolygonsToolEdgeActions::StaticRegisterNativesUEditMeshPolygonsToolEdgeActions()
{
	UClass* Class = UEditMeshPolygonsToolEdgeActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Bevel", &UEditMeshPolygonsToolEdgeActions::execBevel },
		{ "Bridge", &UEditMeshPolygonsToolEdgeActions::execBridge },
		{ "DeleteEdge", &UEditMeshPolygonsToolEdgeActions::execDeleteEdge },
		{ "Extrude", &UEditMeshPolygonsToolEdgeActions::execExtrude },
		{ "FillHole", &UEditMeshPolygonsToolEdgeActions::execFillHole },
		{ "Simplify", &UEditMeshPolygonsToolEdgeActions::execSimplify },
		{ "Straighten", &UEditMeshPolygonsToolEdgeActions::execStraighten },
		{ "Weld", &UEditMeshPolygonsToolEdgeActions::execWeld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsToolEdgeActions);
UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_NoRegister()
{
	return UEditMeshPolygonsToolEdgeActions::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bevel, "Bevel" }, // 2254598085
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Bridge, "Bridge" }, // 1688454514
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_DeleteEdge, "DeleteEdge" }, // 502185539
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Extrude, "Extrude" }, // 674000207
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_FillHole, "FillHole" }, // 355952156
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Simplify, "Simplify" }, // 2298867035
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Straighten, "Straighten" }, // 2365199404
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Weld, "Weld" }, // 757381682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsToolEdgeActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics::ClassParams = {
	&UEditMeshPolygonsToolEdgeActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsToolEdgeActions>()
{
	return UEditMeshPolygonsToolEdgeActions::StaticClass();
}
UEditMeshPolygonsToolEdgeActions::UEditMeshPolygonsToolEdgeActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsToolEdgeActions);
UEditMeshPolygonsToolEdgeActions::~UEditMeshPolygonsToolEdgeActions() {}
// End Class UEditMeshPolygonsToolEdgeActions

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles Function Bridge
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Bridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Create a new face that connects the selected edges */" },
		{ "DisplayName", "Bridge" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Create a new face that connects the selected edges" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Bridge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, nullptr, "Bridge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Bridge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Bridge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Bridge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Bridge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions_Triangles::execBridge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Bridge();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles Function Bridge

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles Function Collapse
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Collapse the selected edges, deleting the attached triangles and merging its two vertices into one */" },
		{ "DisplayName", "Collapse" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Collapse the selected edges, deleting the attached triangles and merging its two vertices into one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, nullptr, "Collapse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Collapse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions_Triangles::execCollapse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Collapse();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles Function Collapse

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles Function Extrude
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Extrude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Duplicate and move boundary vertices outwards and connect them to the original boundary to create new faces. */" },
		{ "DisplayName", "Extrude" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Duplicate and move boundary vertices outwards and connect them to the original boundary to create new faces." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Extrude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, nullptr, "Extrude", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Extrude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Extrude_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Extrude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Extrude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions_Triangles::execExtrude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Extrude();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles Function Extrude

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles Function FillHole
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Fill the adjacent hole for any selected boundary edges */" },
		{ "DisplayName", "Fill Hole" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Fill the adjacent hole for any selected boundary edges" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, nullptr, "FillHole", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_FillHole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions_Triangles::execFillHole)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FillHole();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles Function FillHole

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles Function Flip
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Flip the selected (non-border, non-seam) edges, replacing them with new edges in the crossing direction */" },
		{ "DisplayName", "Flip" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Flip the selected (non-border, non-seam) edges, replacing them with new edges in the crossing direction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, nullptr, "Flip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Flip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions_Triangles::execFlip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Flip();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles Function Flip

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles Function Split
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Split_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Split the selected edges, inserting a new vertex at each edge midpoint */" },
		{ "DisplayName", "Split" },
		{ "DisplayPriority", "7" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Split the selected edges, inserting a new vertex at each edge midpoint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Split_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, nullptr, "Split", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Split_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Split_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Split()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Split_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions_Triangles::execSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Split();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles Function Split

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles Function Weld
struct Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "EdgeEdits" },
		{ "Comment", "/** Merge selected edges, moving the first edge to the second */" },
		{ "DisplayName", "Weld" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Merge selected edges, moving the first edge to the second" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, nullptr, "Weld", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Weld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditMeshPolygonsToolEdgeActions_Triangles::execWeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Weld();
	P_NATIVE_END;
}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles Function Weld

// Begin Class UEditMeshPolygonsToolEdgeActions_Triangles
void UEditMeshPolygonsToolEdgeActions_Triangles::StaticRegisterNativesUEditMeshPolygonsToolEdgeActions_Triangles()
{
	UClass* Class = UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Bridge", &UEditMeshPolygonsToolEdgeActions_Triangles::execBridge },
		{ "Collapse", &UEditMeshPolygonsToolEdgeActions_Triangles::execCollapse },
		{ "Extrude", &UEditMeshPolygonsToolEdgeActions_Triangles::execExtrude },
		{ "FillHole", &UEditMeshPolygonsToolEdgeActions_Triangles::execFillHole },
		{ "Flip", &UEditMeshPolygonsToolEdgeActions_Triangles::execFlip },
		{ "Split", &UEditMeshPolygonsToolEdgeActions_Triangles::execSplit },
		{ "Weld", &UEditMeshPolygonsToolEdgeActions_Triangles::execWeld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsToolEdgeActions_Triangles);
UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_NoRegister()
{
	return UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Bridge, "Bridge" }, // 1431835497
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Collapse, "Collapse" }, // 142212524
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Extrude, "Extrude" }, // 2457435440
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_FillHole, "FillHole" }, // 2156796842
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Flip, "Flip" }, // 2978728011
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Split, "Split" }, // 3327902130
		{ &Z_Construct_UFunction_UEditMeshPolygonsToolEdgeActions_Triangles_Weld, "Weld" }, // 800965872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsToolEdgeActions_Triangles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics::ClassParams = {
	&UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsToolEdgeActions_Triangles>()
{
	return UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass();
}
UEditMeshPolygonsToolEdgeActions_Triangles::UEditMeshPolygonsToolEdgeActions_Triangles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsToolEdgeActions_Triangles);
UEditMeshPolygonsToolEdgeActions_Triangles::~UEditMeshPolygonsToolEdgeActions_Triangles() {}
// End Class UEditMeshPolygonsToolEdgeActions_Triangles

// Begin Class UEditMeshPolygonsTool
void UEditMeshPolygonsTool::StaticRegisterNativesUEditMeshPolygonsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMeshPolygonsTool);
UClass* Z_Construct_UClass_UEditMeshPolygonsTool_NoRegister()
{
	return UEditMeshPolygonsTool::StaticClass();
}
struct Z_Construct_UClass_UEditMeshPolygonsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EditMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditActions_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditEdgeActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditEdgeActions_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditUVActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopologyProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeActivity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Activity objects that handle multi-interaction operations\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
		{ "ToolTip", "Activity objects that handle multi-interaction operations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsetOutsetActivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutFacesActivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarProjectionUVActivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertEdgeActivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertEdgeLoopActivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BevelEdgeActivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeEdgeActivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonProps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditActions_Triangles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditEdgeActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditEdgeActions_Triangles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditUVActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopologyProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtrudeActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InsetOutsetActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CutFacesActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanarProjectionUVActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InsertEdgeActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InsertEdgeLoopActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BevelEdgeActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtrudeEdgeActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragAlignmentMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMeshPolygonsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_CommonProps = { "CommonProps", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, CommonProps), Z_Construct_UClass_UPolyEditCommonProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonProps_MetaData), NewProp_CommonProps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditActions = { "EditActions", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, EditActions), Z_Construct_UClass_UEditMeshPolygonsToolActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditActions_MetaData), NewProp_EditActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditActions_Triangles = { "EditActions_Triangles", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, EditActions_Triangles), Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditActions_Triangles_MetaData), NewProp_EditActions_Triangles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditEdgeActions = { "EditEdgeActions", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, EditEdgeActions), Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditEdgeActions_MetaData), NewProp_EditEdgeActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditEdgeActions_Triangles = { "EditEdgeActions_Triangles", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, EditEdgeActions_Triangles), Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditEdgeActions_Triangles_MetaData), NewProp_EditEdgeActions_Triangles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditUVActions = { "EditUVActions", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, EditUVActions), Z_Construct_UClass_UEditMeshPolygonsToolUVActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditUVActions_MetaData), NewProp_EditUVActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_TopologyProperties = { "TopologyProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, TopologyProperties), Z_Construct_UClass_UPolyEditTopologyProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopologyProperties_MetaData), NewProp_TopologyProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_ExtrudeActivity = { "ExtrudeActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, ExtrudeActivity), Z_Construct_UClass_UPolyEditExtrudeActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeActivity_MetaData), NewProp_ExtrudeActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_InsetOutsetActivity = { "InsetOutsetActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, InsetOutsetActivity), Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsetOutsetActivity_MetaData), NewProp_InsetOutsetActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_CutFacesActivity = { "CutFacesActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, CutFacesActivity), Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutFacesActivity_MetaData), NewProp_CutFacesActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_PlanarProjectionUVActivity = { "PlanarProjectionUVActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, PlanarProjectionUVActivity), Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarProjectionUVActivity_MetaData), NewProp_PlanarProjectionUVActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_InsertEdgeActivity = { "InsertEdgeActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, InsertEdgeActivity), Z_Construct_UClass_UPolyEditInsertEdgeActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertEdgeActivity_MetaData), NewProp_InsertEdgeActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_InsertEdgeLoopActivity = { "InsertEdgeLoopActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, InsertEdgeLoopActivity), Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertEdgeLoopActivity_MetaData), NewProp_InsertEdgeLoopActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_BevelEdgeActivity = { "BevelEdgeActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, BevelEdgeActivity), Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BevelEdgeActivity_MetaData), NewProp_BevelEdgeActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_ExtrudeEdgeActivity = { "ExtrudeEdgeActivity", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, ExtrudeEdgeActivity), Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeEdgeActivity_MetaData), NewProp_ExtrudeEdgeActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityContext_MetaData), NewProp_ActivityContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, SelectionMechanic), Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMechanic_MetaData), NewProp_SelectionMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragAlignmentMechanic_MetaData), NewProp_DragAlignmentMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformGizmo_MetaData), NewProp_TransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditMeshPolygonsTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProxy_MetaData), NewProp_TransformProxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditMeshPolygonsTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_CommonProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditActions_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditEdgeActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditEdgeActions_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_EditUVActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_TopologyProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_ExtrudeActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_InsetOutsetActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_CutFacesActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_PlanarProjectionUVActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_InsertEdgeActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_InsertEdgeLoopActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_BevelEdgeActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_ExtrudeEdgeActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_ActivityContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_SelectionMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_DragAlignmentMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_TransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditMeshPolygonsTool_Statics::NewProp_TransformProxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditMeshPolygonsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UToolActivityHost_NoRegister, (int32)VTABLE_OFFSET(UEditMeshPolygonsTool, IToolActivityHost), false },  // 899697458
	{ Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UEditMeshPolygonsTool, IMeshVertexCommandChangeTarget), false },  // 2644474088
	{ Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister, (int32)VTABLE_OFFSET(UEditMeshPolygonsTool, IInteractiveToolNestedAcceptCancelAPI), false },  // 2931093765
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMeshPolygonsTool_Statics::ClassParams = {
	&UEditMeshPolygonsTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditMeshPolygonsTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMeshPolygonsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMeshPolygonsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMeshPolygonsTool()
{
	if (!Z_Registration_Info_UClass_UEditMeshPolygonsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMeshPolygonsTool.OuterSingleton, Z_Construct_UClass_UEditMeshPolygonsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMeshPolygonsTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEditMeshPolygonsTool>()
{
	return UEditMeshPolygonsTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMeshPolygonsTool);
UEditMeshPolygonsTool::~UEditMeshPolygonsTool() {}
// End Class UEditMeshPolygonsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_EditMeshPolygonsTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocalFrameMode_StaticEnum, TEXT("ELocalFrameMode"), &Z_Registration_Info_UEnum_ELocalFrameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1341814008U) },
		{ EEditMeshPolygonsToolActions_StaticEnum, TEXT("EEditMeshPolygonsToolActions"), &Z_Registration_Info_UEnum_EEditMeshPolygonsToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1395046333U) },
		{ EEditMeshPolygonsToolSelectionMode_StaticEnum, TEXT("EEditMeshPolygonsToolSelectionMode"), &Z_Registration_Info_UEnum_EEditMeshPolygonsToolSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2335150555U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditMeshPolygonsToolBuilder, UEditMeshPolygonsToolBuilder::StaticClass, TEXT("UEditMeshPolygonsToolBuilder"), &Z_Registration_Info_UClass_UEditMeshPolygonsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsToolBuilder), 1654257349U) },
		{ Z_Construct_UClass_UPolyEditCommonProperties, UPolyEditCommonProperties::StaticClass, TEXT("UPolyEditCommonProperties"), &Z_Registration_Info_UClass_UPolyEditCommonProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditCommonProperties), 3853420730U) },
		{ Z_Construct_UClass_UEditMeshPolygonsActionModeToolBuilder, UEditMeshPolygonsActionModeToolBuilder::StaticClass, TEXT("UEditMeshPolygonsActionModeToolBuilder"), &Z_Registration_Info_UClass_UEditMeshPolygonsActionModeToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsActionModeToolBuilder), 577912445U) },
		{ Z_Construct_UClass_UEditMeshPolygonsSelectionModeToolBuilder, UEditMeshPolygonsSelectionModeToolBuilder::StaticClass, TEXT("UEditMeshPolygonsSelectionModeToolBuilder"), &Z_Registration_Info_UClass_UEditMeshPolygonsSelectionModeToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsSelectionModeToolBuilder), 832187752U) },
		{ Z_Construct_UClass_UEditMeshPolygonsToolActionPropertySet, UEditMeshPolygonsToolActionPropertySet::StaticClass, TEXT("UEditMeshPolygonsToolActionPropertySet"), &Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsToolActionPropertySet), 3030996947U) },
		{ Z_Construct_UClass_UPolyEditTopologyProperties, UPolyEditTopologyProperties::StaticClass, TEXT("UPolyEditTopologyProperties"), &Z_Registration_Info_UClass_UPolyEditTopologyProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditTopologyProperties), 2868349081U) },
		{ Z_Construct_UClass_UEditMeshPolygonsToolActions, UEditMeshPolygonsToolActions::StaticClass, TEXT("UEditMeshPolygonsToolActions"), &Z_Registration_Info_UClass_UEditMeshPolygonsToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsToolActions), 3333897797U) },
		{ Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles, UEditMeshPolygonsToolActions_Triangles::StaticClass, TEXT("UEditMeshPolygonsToolActions_Triangles"), &Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsToolActions_Triangles), 3893551213U) },
		{ Z_Construct_UClass_UEditMeshPolygonsToolUVActions, UEditMeshPolygonsToolUVActions::StaticClass, TEXT("UEditMeshPolygonsToolUVActions"), &Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsToolUVActions), 3022385710U) },
		{ Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions, UEditMeshPolygonsToolEdgeActions::StaticClass, TEXT("UEditMeshPolygonsToolEdgeActions"), &Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsToolEdgeActions), 1961287275U) },
		{ Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass, TEXT("UEditMeshPolygonsToolEdgeActions_Triangles"), &Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsToolEdgeActions_Triangles), 2145123832U) },
		{ Z_Construct_UClass_UEditMeshPolygonsTool, UEditMeshPolygonsTool::StaticClass, TEXT("UEditMeshPolygonsTool"), &Z_Registration_Info_UClass_UEditMeshPolygonsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMeshPolygonsTool), 1869330909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_EditMeshPolygonsTool_h_3039474294(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_EditMeshPolygonsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_EditMeshPolygonsTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_EditMeshPolygonsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_EditMeshPolygonsTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
