// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/TransformMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformMeshesTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransformMeshesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransformMeshesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransformMeshesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransformMeshesToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransformMeshesToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransformMeshesToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FTransformMeshesTarget();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UTransformMeshesToolBuilder
void UTransformMeshesToolBuilder::StaticRegisterNativesUTransformMeshesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformMeshesToolBuilder);
UClass* Z_Construct_UClass_UTransformMeshesToolBuilder_NoRegister()
{
	return UTransformMeshesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UTransformMeshesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TransformMeshesTool.h" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformMeshesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTransformMeshesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformMeshesToolBuilder_Statics::ClassParams = {
	&UTransformMeshesToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformMeshesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformMeshesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UTransformMeshesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UTransformMeshesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformMeshesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTransformMeshesToolBuilder>()
{
	return UTransformMeshesToolBuilder::StaticClass();
}
UTransformMeshesToolBuilder::UTransformMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformMeshesToolBuilder);
UTransformMeshesToolBuilder::~UTransformMeshesToolBuilder() {}
// End Class UTransformMeshesToolBuilder

// Begin Enum ETransformMeshesTransformMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformMeshesTransformMode;
static UEnum* ETransformMeshesTransformMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransformMeshesTransformMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransformMeshesTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ETransformMeshesTransformMode"));
	}
	return Z_Registration_Info_UEnum_ETransformMeshesTransformMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ETransformMeshesTransformMode>()
{
	return ETransformMeshesTransformMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Transform modes */" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "ETransformMeshesTransformMode::LastValue" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "PerObjectGizmo.Comment", "/** Separate Gizmo for each Object */" },
		{ "PerObjectGizmo.DisplayName", "Multi-Gizmo" },
		{ "PerObjectGizmo.Name", "ETransformMeshesTransformMode::PerObjectGizmo" },
		{ "PerObjectGizmo.ToolTip", "Separate Gizmo for each Object" },
		{ "SharedGizmo.Comment", "/** Single Gizmo for all Objects */" },
		{ "SharedGizmo.DisplayName", "Shared Gizmo" },
		{ "SharedGizmo.Name", "ETransformMeshesTransformMode::SharedGizmo" },
		{ "SharedGizmo.ToolTip", "Single Gizmo for all Objects" },
		{ "SharedGizmoLocal.Comment", "/** Single Gizmo for all Objects, Rotations applied per-Object */" },
		{ "SharedGizmoLocal.DisplayName", "Shared Gizmo (Local)" },
		{ "SharedGizmoLocal.Name", "ETransformMeshesTransformMode::SharedGizmoLocal" },
		{ "SharedGizmoLocal.ToolTip", "Single Gizmo for all Objects, Rotations applied per-Object" },
		{ "ToolTip", "Mesh Transform modes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransformMeshesTransformMode::SharedGizmo", (int64)ETransformMeshesTransformMode::SharedGizmo },
		{ "ETransformMeshesTransformMode::SharedGizmoLocal", (int64)ETransformMeshesTransformMode::SharedGizmoLocal },
		{ "ETransformMeshesTransformMode::PerObjectGizmo", (int64)ETransformMeshesTransformMode::PerObjectGizmo },
		{ "ETransformMeshesTransformMode::LastValue", (int64)ETransformMeshesTransformMode::LastValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ETransformMeshesTransformMode",
	"ETransformMeshesTransformMode",
	Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode()
{
	if (!Z_Registration_Info_UEnum_ETransformMeshesTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformMeshesTransformMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransformMeshesTransformMode.InnerSingleton;
}
// End Enum ETransformMeshesTransformMode

// Begin Enum ETransformMeshesSnapDragSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource;
static UEnum* ETransformMeshesSnapDragSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ETransformMeshesSnapDragSource"));
	}
	return Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ETransformMeshesSnapDragSource>()
{
	return ETransformMeshesSnapDragSource_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClickPoint.Comment", "/** Snap-Drag moves the Clicked Point to the Target Location */" },
		{ "ClickPoint.DisplayName", "Click Point" },
		{ "ClickPoint.Name", "ETransformMeshesSnapDragSource::ClickPoint" },
		{ "ClickPoint.ToolTip", "Snap-Drag moves the Clicked Point to the Target Location" },
		{ "Comment", "/** Snap-Drag Source Point */" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "ETransformMeshesSnapDragSource::LastValue" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "Pivot.Comment", "/** Snap-Drag moves the Gizmo/Pivot to the Target Location */" },
		{ "Pivot.DisplayName", "Pivot" },
		{ "Pivot.Name", "ETransformMeshesSnapDragSource::Pivot" },
		{ "Pivot.ToolTip", "Snap-Drag moves the Gizmo/Pivot to the Target Location" },
		{ "ToolTip", "Snap-Drag Source Point" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransformMeshesSnapDragSource::ClickPoint", (int64)ETransformMeshesSnapDragSource::ClickPoint },
		{ "ETransformMeshesSnapDragSource::Pivot", (int64)ETransformMeshesSnapDragSource::Pivot },
		{ "ETransformMeshesSnapDragSource::LastValue", (int64)ETransformMeshesSnapDragSource::LastValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ETransformMeshesSnapDragSource",
	"ETransformMeshesSnapDragSource",
	Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource()
{
	if (!Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource.InnerSingleton;
}
// End Enum ETransformMeshesSnapDragSource

// Begin Enum ETransformMeshesSnapDragRotationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode;
static UEnum* ETransformMeshesSnapDragRotationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ETransformMeshesSnapDragRotationMode"));
	}
	return Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ETransformMeshesSnapDragRotationMode>()
{
	return ETransformMeshesSnapDragRotationMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Align.Comment", "/** Snap-Drag aligns the Source and Target Normals to point in the same direction */" },
		{ "Align.DisplayName", "Align" },
		{ "Align.Name", "ETransformMeshesSnapDragRotationMode::Align" },
		{ "Align.ToolTip", "Snap-Drag aligns the Source and Target Normals to point in the same direction" },
		{ "AlignFlipped.Comment", "/** Snap-Drag aligns the Source Normal to the opposite of the Target Normal direction */" },
		{ "AlignFlipped.DisplayName", "Align Flipped" },
		{ "AlignFlipped.Name", "ETransformMeshesSnapDragRotationMode::AlignFlipped" },
		{ "AlignFlipped.ToolTip", "Snap-Drag aligns the Source Normal to the opposite of the Target Normal direction" },
		{ "Comment", "/** Snap-Drag Rotation Mode */" },
		{ "Ignore.Comment", "/** Snap-Drag only translates, ignoring Normals */" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "ETransformMeshesSnapDragRotationMode::Ignore" },
		{ "Ignore.ToolTip", "Snap-Drag only translates, ignoring Normals" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "ETransformMeshesSnapDragRotationMode::LastValue" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "Snap-Drag Rotation Mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransformMeshesSnapDragRotationMode::Ignore", (int64)ETransformMeshesSnapDragRotationMode::Ignore },
		{ "ETransformMeshesSnapDragRotationMode::Align", (int64)ETransformMeshesSnapDragRotationMode::Align },
		{ "ETransformMeshesSnapDragRotationMode::AlignFlipped", (int64)ETransformMeshesSnapDragRotationMode::AlignFlipped },
		{ "ETransformMeshesSnapDragRotationMode::LastValue", (int64)ETransformMeshesSnapDragRotationMode::LastValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ETransformMeshesSnapDragRotationMode",
	"ETransformMeshesSnapDragRotationMode",
	Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode()
{
	if (!Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode.InnerSingleton;
}
// End Enum ETransformMeshesSnapDragRotationMode

// Begin Class UTransformMeshesToolProperties
void UTransformMeshesToolProperties::StaticRegisterNativesUTransformMeshesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformMeshesToolProperties);
UClass* Z_Construct_UClass_UTransformMeshesToolProperties_NoRegister()
{
	return UTransformMeshesToolProperties::StaticClass();
}
struct Z_Construct_UClass_UTransformMeshesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Transform Meshes operation\n */" },
		{ "IncludePath", "TransformMeshesTool.h" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "Standard properties of the Transform Meshes operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Transformation Mode controls the overall behavior of the Gizmos in the Tool */" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "Transformation Mode controls the overall behavior of the Gizmos in the Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToInstances_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When true, transformations are applied to the Instances of any Instanced Components (eg InstancedStaticMeshComponent) instead of to the Components */" },
		{ "EditCondition", "bHaveInstances" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "When true, transformations are applied to the Instances of any Instanced Components (eg InstancedStaticMeshComponent) instead of to the Components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetPivotMode_MetaData[] = {
		{ "Category", "Pivot" },
		{ "Comment", "/** When true, the Gizmo can be moved independently without affecting objects. This allows the Gizmo to be repositioned before transforming. */" },
		{ "EditCondition", "TransformMode != ETransformMeshesTransformMode::PerObjectGizmo" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "When true, the Gizmo can be moved independently without affecting objects. This allows the Gizmo to be repositioned before transforming." },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapDragging_MetaData[] = {
		{ "Category", "SnapDragging" },
		{ "Comment", "/** When Snap-Dragging is enabled, you can Click-drag starting on the target objects to reposition them relative to the rest of the scene */" },
		{ "DisplayName", "Enable" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "When Snap-Dragging is enabled, you can Click-drag starting on the target objects to reposition them relative to the rest of the scene" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapDragSource_MetaData[] = {
		{ "Category", "SnapDragging" },
		{ "Comment", "/** Which point on the object being Snap-Dragged to use as the \"Source\" point */" },
		{ "EditCondition", "bEnableSnapDragging == true" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "Which point on the object being Snap-Dragged to use as the \"Source\" point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "Category", "SnapDragging" },
		{ "Comment", "/** How the object being Snap-Dragged should be rotated relative to the Source point location and Hit Surface normal  */" },
		{ "EditCondition", "bEnableSnapDragging == true" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "How the object being Snap-Dragged should be rotated relative to the Source point location and Hit Surface normal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHaveInstances_MetaData[] = {
		{ "Comment", "// internal, used to control visibility of Instance settings\n" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
		{ "ToolTip", "internal, used to control visibility of Instance settings" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
	static void NewProp_bApplyToInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToInstances;
	static void NewProp_bSetPivotMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPivotMode;
	static void NewProp_bEnableSnapDragging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapDragging;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapDragSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapDragSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static void NewProp_bHaveInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformMeshesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformMeshesToolProperties, TransformMode), Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMode_MetaData), NewProp_TransformMode_MetaData) }; // 1882976620
void Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bApplyToInstances_SetBit(void* Obj)
{
	((UTransformMeshesToolProperties*)Obj)->bApplyToInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bApplyToInstances = { "bApplyToInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransformMeshesToolProperties), &Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bApplyToInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyToInstances_MetaData), NewProp_bApplyToInstances_MetaData) };
void Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bSetPivotMode_SetBit(void* Obj)
{
	((UTransformMeshesToolProperties*)Obj)->bSetPivotMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bSetPivotMode = { "bSetPivotMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransformMeshesToolProperties), &Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bSetPivotMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetPivotMode_MetaData), NewProp_bSetPivotMode_MetaData) };
void Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bEnableSnapDragging_SetBit(void* Obj)
{
	((UTransformMeshesToolProperties*)Obj)->bEnableSnapDragging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bEnableSnapDragging = { "bEnableSnapDragging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransformMeshesToolProperties), &Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bEnableSnapDragging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSnapDragging_MetaData), NewProp_bEnableSnapDragging_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_SnapDragSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_SnapDragSource = { "SnapDragSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformMeshesToolProperties, SnapDragSource), Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapDragSource_MetaData), NewProp_SnapDragSource_MetaData) }; // 243850980
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformMeshesToolProperties, RotationMode), Z_Construct_UEnum_MeshModelingToolsExp_ETransformMeshesSnapDragRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 529047274
void Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bHaveInstances_SetBit(void* Obj)
{
	((UTransformMeshesToolProperties*)Obj)->bHaveInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bHaveInstances = { "bHaveInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransformMeshesToolProperties), &Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bHaveInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHaveInstances_MetaData), NewProp_bHaveInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformMeshesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_TransformMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_TransformMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bApplyToInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bSetPivotMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bEnableSnapDragging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_SnapDragSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_SnapDragSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesToolProperties_Statics::NewProp_bHaveInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransformMeshesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformMeshesToolProperties_Statics::ClassParams = {
	&UTransformMeshesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransformMeshesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformMeshesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformMeshesToolProperties()
{
	if (!Z_Registration_Info_UClass_UTransformMeshesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UTransformMeshesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformMeshesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTransformMeshesToolProperties>()
{
	return UTransformMeshesToolProperties::StaticClass();
}
UTransformMeshesToolProperties::UTransformMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformMeshesToolProperties);
UTransformMeshesToolProperties::~UTransformMeshesToolProperties() {}
// End Class UTransformMeshesToolProperties

// Begin ScriptStruct FTransformMeshesTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformMeshesTarget;
class UScriptStruct* FTransformMeshesTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformMeshesTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformMeshesTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformMeshesTarget, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("TransformMeshesTarget"));
	}
	return Z_Registration_Info_UScriptStruct_TransformMeshesTarget.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FTransformMeshesTarget>()
{
	return FTransformMeshesTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformGizmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformMeshesTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformMeshesTarget, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProxy_MetaData), NewProp_TransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformMeshesTarget, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformGizmo_MetaData), NewProp_TransformGizmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::NewProp_TransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::NewProp_TransformGizmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"TransformMeshesTarget",
	Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::PropPointers),
	sizeof(FTransformMeshesTarget),
	alignof(FTransformMeshesTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransformMeshesTarget()
{
	if (!Z_Registration_Info_UScriptStruct_TransformMeshesTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformMeshesTarget.InnerSingleton, Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransformMeshesTarget.InnerSingleton;
}
// End ScriptStruct FTransformMeshesTarget

// Begin Class UTransformMeshesTool
void UTransformMeshesTool::StaticRegisterNativesUTransformMeshesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformMeshesTool);
UClass* Z_Construct_UClass_UTransformMeshesTool_NoRegister()
{
	return UTransformMeshesTool::StaticClass();
}
struct Z_Construct_UClass_UTransformMeshesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TransformMeshesTool.h" },
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransformMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGizmos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragAlignmentMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformMeshesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_TransformProps = { "TransformProps", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformMeshesTool, TransformProps), Z_Construct_UClass_UTransformMeshesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProps_MetaData), NewProp_TransformProps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransformMeshesTarget, METADATA_PARAMS(0, nullptr) }; // 189117705
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformMeshesTool, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGizmos_MetaData), NewProp_ActiveGizmos_MetaData) }; // 189117705
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformMeshesTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragAlignmentMechanic_MetaData), NewProp_DragAlignmentMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformMeshesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_TransformProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_ActiveGizmos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_ActiveGizmos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformMeshesTool_Statics::NewProp_DragAlignmentMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransformMeshesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTransformMeshesTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UTransformMeshesTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformMeshesTool_Statics::ClassParams = {
	&UTransformMeshesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransformMeshesTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformMeshesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformMeshesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformMeshesTool()
{
	if (!Z_Registration_Info_UClass_UTransformMeshesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformMeshesTool.OuterSingleton, Z_Construct_UClass_UTransformMeshesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformMeshesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTransformMeshesTool>()
{
	return UTransformMeshesTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformMeshesTool);
UTransformMeshesTool::~UTransformMeshesTool() {}
// End Class UTransformMeshesTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETransformMeshesTransformMode_StaticEnum, TEXT("ETransformMeshesTransformMode"), &Z_Registration_Info_UEnum_ETransformMeshesTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1882976620U) },
		{ ETransformMeshesSnapDragSource_StaticEnum, TEXT("ETransformMeshesSnapDragSource"), &Z_Registration_Info_UEnum_ETransformMeshesSnapDragSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 243850980U) },
		{ ETransformMeshesSnapDragRotationMode_StaticEnum, TEXT("ETransformMeshesSnapDragRotationMode"), &Z_Registration_Info_UEnum_ETransformMeshesSnapDragRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 529047274U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTransformMeshesTarget::StaticStruct, Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics::NewStructOps, TEXT("TransformMeshesTarget"), &Z_Registration_Info_UScriptStruct_TransformMeshesTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformMeshesTarget), 189117705U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransformMeshesToolBuilder, UTransformMeshesToolBuilder::StaticClass, TEXT("UTransformMeshesToolBuilder"), &Z_Registration_Info_UClass_UTransformMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformMeshesToolBuilder), 665535801U) },
		{ Z_Construct_UClass_UTransformMeshesToolProperties, UTransformMeshesToolProperties::StaticClass, TEXT("UTransformMeshesToolProperties"), &Z_Registration_Info_UClass_UTransformMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformMeshesToolProperties), 7187285U) },
		{ Z_Construct_UClass_UTransformMeshesTool, UTransformMeshesTool::StaticClass, TEXT("UTransformMeshesTool"), &Z_Registration_Info_UClass_UTransformMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformMeshesTool), 2686138244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_581571249(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
