// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/EditPivotTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPivotTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolActionPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolActionPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FEditPivotTarget();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UEditPivotToolBuilder
void UEditPivotToolBuilder::StaticRegisterNativesUEditPivotToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditPivotToolBuilder);
UClass* Z_Construct_UClass_UEditPivotToolBuilder_NoRegister()
{
	return UEditPivotToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UEditPivotToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EditPivotTool.h" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditPivotToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditPivotToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditPivotToolBuilder_Statics::ClassParams = {
	&UEditPivotToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditPivotToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditPivotToolBuilder()
{
	if (!Z_Registration_Info_UClass_UEditPivotToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditPivotToolBuilder.OuterSingleton, Z_Construct_UClass_UEditPivotToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditPivotToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditPivotToolBuilder>()
{
	return UEditPivotToolBuilder::StaticClass();
}
UEditPivotToolBuilder::UEditPivotToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditPivotToolBuilder);
UEditPivotToolBuilder::~UEditPivotToolBuilder() {}
// End Class UEditPivotToolBuilder

// Begin Enum EEditPivotSnapDragRotationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode;
static UEnum* EEditPivotSnapDragRotationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EEditPivotSnapDragRotationMode"));
	}
	return Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EEditPivotSnapDragRotationMode>()
{
	return EEditPivotSnapDragRotationMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Align.Comment", "/** Snap-Drag aligns the pivot Z Axis and Target Normals to point in the same direction */" },
		{ "Align.DisplayName", "Align" },
		{ "Align.Name", "EEditPivotSnapDragRotationMode::Align" },
		{ "Align.ToolTip", "Snap-Drag aligns the pivot Z Axis and Target Normals to point in the same direction" },
		{ "AlignFlipped.Comment", "/** Snap-Drag aligns the pivot Z Axis to the opposite of the Target Normal direction */" },
		{ "AlignFlipped.DisplayName", "Align Flipped" },
		{ "AlignFlipped.Name", "EEditPivotSnapDragRotationMode::AlignFlipped" },
		{ "AlignFlipped.ToolTip", "Snap-Drag aligns the pivot Z Axis to the opposite of the Target Normal direction" },
		{ "Comment", "/** Snap-Drag Rotation Mode */" },
		{ "Ignore.Comment", "/** Snap-Drag only translates, ignoring Normals */" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EEditPivotSnapDragRotationMode::Ignore" },
		{ "Ignore.ToolTip", "Snap-Drag only translates, ignoring Normals" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EEditPivotSnapDragRotationMode::LastValue" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
		{ "ToolTip", "Snap-Drag Rotation Mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEditPivotSnapDragRotationMode::Ignore", (int64)EEditPivotSnapDragRotationMode::Ignore },
		{ "EEditPivotSnapDragRotationMode::Align", (int64)EEditPivotSnapDragRotationMode::Align },
		{ "EEditPivotSnapDragRotationMode::AlignFlipped", (int64)EEditPivotSnapDragRotationMode::AlignFlipped },
		{ "EEditPivotSnapDragRotationMode::LastValue", (int64)EEditPivotSnapDragRotationMode::LastValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EEditPivotSnapDragRotationMode",
	"EEditPivotSnapDragRotationMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode()
{
	if (!Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode.InnerSingleton;
}
// End Enum EEditPivotSnapDragRotationMode

// Begin Class UEditPivotToolProperties
void UEditPivotToolProperties::StaticRegisterNativesUEditPivotToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditPivotToolProperties);
UClass* Z_Construct_UClass_UEditPivotToolProperties_NoRegister()
{
	return UEditPivotToolProperties::StaticClass();
}
struct Z_Construct_UClass_UEditPivotToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Edit Pivot operation\n */" },
		{ "IncludePath", "EditPivotTool.h" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
		{ "ToolTip", "Standard properties of the Edit Pivot operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToAllLODs_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If checked, the baked transform will be applied to all available LODs. Has no effect on selections without LODs. */" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
		{ "ToolTip", "If checked, the baked transform will be applied to all available LODs. Has no effect on selections without LODs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapDragging_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When enabled, click-drag to reposition the Pivot */" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
		{ "ToolTip", "When enabled, click-drag to reposition the Pivot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When Snap-Dragging, align source and target normals */" },
		{ "EditCondition", "bEnableSnapDragging == true" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
		{ "ToolTip", "When Snap-Dragging, align source and target normals" },
	};
#endif // WITH_METADATA
	static void NewProp_bApplyToAllLODs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLODs;
	static void NewProp_bEnableSnapDragging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapDragging;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditPivotToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bApplyToAllLODs_SetBit(void* Obj)
{
	((UEditPivotToolProperties*)Obj)->bApplyToAllLODs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bApplyToAllLODs = { "bApplyToAllLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditPivotToolProperties), &Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bApplyToAllLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyToAllLODs_MetaData), NewProp_bApplyToAllLODs_MetaData) };
void Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bEnableSnapDragging_SetBit(void* Obj)
{
	((UEditPivotToolProperties*)Obj)->bEnableSnapDragging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bEnableSnapDragging = { "bEnableSnapDragging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditPivotToolProperties), &Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bEnableSnapDragging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSnapDragging_MetaData), NewProp_bEnableSnapDragging_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditPivotToolProperties, RotationMode), Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotSnapDragRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 3383476747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditPivotToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bApplyToAllLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_bEnableSnapDragging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotToolProperties_Statics::NewProp_RotationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditPivotToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditPivotToolProperties_Statics::ClassParams = {
	&UEditPivotToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditPivotToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditPivotToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditPivotToolProperties()
{
	if (!Z_Registration_Info_UClass_UEditPivotToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditPivotToolProperties.OuterSingleton, Z_Construct_UClass_UEditPivotToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditPivotToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditPivotToolProperties>()
{
	return UEditPivotToolProperties::StaticClass();
}
UEditPivotToolProperties::UEditPivotToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditPivotToolProperties);
UEditPivotToolProperties::~UEditPivotToolProperties() {}
// End Class UEditPivotToolProperties

// Begin ScriptStruct FEditPivotTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditPivotTarget;
class UScriptStruct* FEditPivotTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditPivotTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditPivotTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPivotTarget, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EditPivotTarget"));
	}
	return Z_Registration_Info_UScriptStruct_EditPivotTarget.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FEditPivotTarget>()
{
	return FEditPivotTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditPivotTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformGizmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPivotTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditPivotTarget_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditPivotTarget, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProxy_MetaData), NewProp_TransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditPivotTarget_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditPivotTarget, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformGizmo_MetaData), NewProp_TransformGizmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPivotTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPivotTarget_Statics::NewProp_TransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPivotTarget_Statics::NewProp_TransformGizmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPivotTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPivotTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"EditPivotTarget",
	Z_Construct_UScriptStruct_FEditPivotTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPivotTarget_Statics::PropPointers),
	sizeof(FEditPivotTarget),
	alignof(FEditPivotTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPivotTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditPivotTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditPivotTarget()
{
	if (!Z_Registration_Info_UScriptStruct_EditPivotTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditPivotTarget.InnerSingleton, Z_Construct_UScriptStruct_FEditPivotTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditPivotTarget.InnerSingleton;
}
// End ScriptStruct FEditPivotTarget

// Begin Enum EEditPivotToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditPivotToolActions;
static UEnum* EEditPivotToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEditPivotToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEditPivotToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EEditPivotToolActions"));
	}
	return Z_Registration_Info_UEnum_EEditPivotToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EEditPivotToolActions>()
{
	return EEditPivotToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Name", "EEditPivotToolActions::Back" },
		{ "Bottom.Name", "EEditPivotToolActions::Bottom" },
		{ "Center.Name", "EEditPivotToolActions::Center" },
		{ "Front.Name", "EEditPivotToolActions::Front" },
		{ "Left.Name", "EEditPivotToolActions::Left" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
		{ "NoAction.Name", "EEditPivotToolActions::NoAction" },
		{ "Right.Name", "EEditPivotToolActions::Right" },
		{ "Top.Name", "EEditPivotToolActions::Top" },
		{ "WorldOrigin.Name", "EEditPivotToolActions::WorldOrigin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEditPivotToolActions::NoAction", (int64)EEditPivotToolActions::NoAction },
		{ "EEditPivotToolActions::Center", (int64)EEditPivotToolActions::Center },
		{ "EEditPivotToolActions::Bottom", (int64)EEditPivotToolActions::Bottom },
		{ "EEditPivotToolActions::Top", (int64)EEditPivotToolActions::Top },
		{ "EEditPivotToolActions::Left", (int64)EEditPivotToolActions::Left },
		{ "EEditPivotToolActions::Right", (int64)EEditPivotToolActions::Right },
		{ "EEditPivotToolActions::Front", (int64)EEditPivotToolActions::Front },
		{ "EEditPivotToolActions::Back", (int64)EEditPivotToolActions::Back },
		{ "EEditPivotToolActions::WorldOrigin", (int64)EEditPivotToolActions::WorldOrigin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EEditPivotToolActions",
	"EEditPivotToolActions",
	Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions()
{
	if (!Z_Registration_Info_UEnum_EEditPivotToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditPivotToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EEditPivotToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEditPivotToolActions.InnerSingleton;
}
// End Enum EEditPivotToolActions

// Begin Class UEditPivotToolActionPropertySet Function Back
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_Back_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_Back_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "Back", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_Back_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_Back_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_Back()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_Back_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Back();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function Back

// Begin Class UEditPivotToolActionPropertySet Function Bottom
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_Bottom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_Bottom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "Bottom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_Bottom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_Bottom_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_Bottom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_Bottom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execBottom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Bottom();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function Bottom

// Begin Class UEditPivotToolActionPropertySet Function Center
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_Center_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_Center_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "Center", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_Center_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_Center_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_Center()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_Center_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Center();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function Center

// Begin Class UEditPivotToolActionPropertySet Function Front
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_Front_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_Front_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "Front", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_Front_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_Front_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_Front()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_Front_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execFront)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Front();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function Front

// Begin Class UEditPivotToolActionPropertySet Function Left
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_Left_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "Left", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_Left_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_Left_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_Left()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_Left_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Left();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function Left

// Begin Class UEditPivotToolActionPropertySet Function Right
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_Right_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "Right", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_Right_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_Right_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_Right()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_Right_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Right();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function Right

// Begin Class UEditPivotToolActionPropertySet Function Top
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_Top_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_Top_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "Top", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_Top_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_Top_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_Top()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_Top_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execTop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Top();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function Top

// Begin Class UEditPivotToolActionPropertySet Function WorldOrigin
struct Z_Construct_UFunction_UEditPivotToolActionPropertySet_WorldOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BoxPositions" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditPivotToolActionPropertySet_WorldOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditPivotToolActionPropertySet, nullptr, "WorldOrigin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditPivotToolActionPropertySet_WorldOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditPivotToolActionPropertySet_WorldOrigin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditPivotToolActionPropertySet_WorldOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditPivotToolActionPropertySet_WorldOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditPivotToolActionPropertySet::execWorldOrigin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WorldOrigin();
	P_NATIVE_END;
}
// End Class UEditPivotToolActionPropertySet Function WorldOrigin

// Begin Class UEditPivotToolActionPropertySet
void UEditPivotToolActionPropertySet::StaticRegisterNativesUEditPivotToolActionPropertySet()
{
	UClass* Class = UEditPivotToolActionPropertySet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Back", &UEditPivotToolActionPropertySet::execBack },
		{ "Bottom", &UEditPivotToolActionPropertySet::execBottom },
		{ "Center", &UEditPivotToolActionPropertySet::execCenter },
		{ "Front", &UEditPivotToolActionPropertySet::execFront },
		{ "Left", &UEditPivotToolActionPropertySet::execLeft },
		{ "Right", &UEditPivotToolActionPropertySet::execRight },
		{ "Top", &UEditPivotToolActionPropertySet::execTop },
		{ "WorldOrigin", &UEditPivotToolActionPropertySet::execWorldOrigin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditPivotToolActionPropertySet);
UClass* Z_Construct_UClass_UEditPivotToolActionPropertySet_NoRegister()
{
	return UEditPivotToolActionPropertySet::StaticClass();
}
struct Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditPivotTool.h" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldBox_MetaData[] = {
		{ "Category", "BoxPositions" },
		{ "Comment", "/** Use the World-Space Bounding Box of the target object, instead of the Object-space Bounding Box */" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
		{ "ToolTip", "Use the World-Space Bounding Box of the target object, instead of the Object-space Bounding Box" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseWorldBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_Back, "Back" }, // 3287539481
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_Bottom, "Bottom" }, // 34844146
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_Center, "Center" }, // 4175195978
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_Front, "Front" }, // 2924711253
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_Left, "Left" }, // 1784994414
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_Right, "Right" }, // 2230506471
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_Top, "Top" }, // 834856408
		{ &Z_Construct_UFunction_UEditPivotToolActionPropertySet_WorldOrigin, "WorldOrigin" }, // 3218830546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditPivotToolActionPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::NewProp_bUseWorldBox_SetBit(void* Obj)
{
	((UEditPivotToolActionPropertySet*)Obj)->bUseWorldBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::NewProp_bUseWorldBox = { "bUseWorldBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditPivotToolActionPropertySet), &Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::NewProp_bUseWorldBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldBox_MetaData), NewProp_bUseWorldBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::NewProp_bUseWorldBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::ClassParams = {
	&UEditPivotToolActionPropertySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditPivotToolActionPropertySet()
{
	if (!Z_Registration_Info_UClass_UEditPivotToolActionPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditPivotToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditPivotToolActionPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditPivotToolActionPropertySet>()
{
	return UEditPivotToolActionPropertySet::StaticClass();
}
UEditPivotToolActionPropertySet::UEditPivotToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditPivotToolActionPropertySet);
UEditPivotToolActionPropertySet::~UEditPivotToolActionPropertySet() {}
// End Class UEditPivotToolActionPropertySet

// Begin Class UEditPivotTool
void UEditPivotTool::StaticRegisterNativesUEditPivotTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditPivotTool);
UClass* Z_Construct_UClass_UEditPivotTool_NoRegister()
{
	return UEditPivotTool::StaticClass();
}
struct Z_Construct_UClass_UEditPivotTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EditPivotTool.h" },
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditPivotActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditPivotTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditPivotActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGizmos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragAlignmentMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditPivotTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditPivotTool_Statics::NewProp_TransformProps = { "TransformProps", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditPivotTool, TransformProps), Z_Construct_UClass_UEditPivotToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProps_MetaData), NewProp_TransformProps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditPivotTool_Statics::NewProp_EditPivotActions = { "EditPivotActions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditPivotTool, EditPivotActions), Z_Construct_UClass_UEditPivotToolActionPropertySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditPivotActions_MetaData), NewProp_EditPivotActions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditPivotTool_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditPivotTarget, METADATA_PARAMS(0, nullptr) }; // 2762190518
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditPivotTool_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditPivotTool, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGizmos_MetaData), NewProp_ActiveGizmos_MetaData) }; // 2762190518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditPivotTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditPivotTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragAlignmentMechanic_MetaData), NewProp_DragAlignmentMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditPivotTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotTool_Statics::NewProp_TransformProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotTool_Statics::NewProp_EditPivotActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotTool_Statics::NewProp_ActiveGizmos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotTool_Statics::NewProp_ActiveGizmos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditPivotTool_Statics::NewProp_DragAlignmentMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditPivotTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEditPivotTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UEditPivotTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditPivotTool_Statics::ClassParams = {
	&UEditPivotTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditPivotTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditPivotTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditPivotTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditPivotTool()
{
	if (!Z_Registration_Info_UClass_UEditPivotTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditPivotTool.OuterSingleton, Z_Construct_UClass_UEditPivotTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditPivotTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditPivotTool>()
{
	return UEditPivotTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditPivotTool);
UEditPivotTool::~UEditPivotTool() {}
// End Class UEditPivotTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEditPivotSnapDragRotationMode_StaticEnum, TEXT("EEditPivotSnapDragRotationMode"), &Z_Registration_Info_UEnum_EEditPivotSnapDragRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3383476747U) },
		{ EEditPivotToolActions_StaticEnum, TEXT("EEditPivotToolActions"), &Z_Registration_Info_UEnum_EEditPivotToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2227466705U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEditPivotTarget::StaticStruct, Z_Construct_UScriptStruct_FEditPivotTarget_Statics::NewStructOps, TEXT("EditPivotTarget"), &Z_Registration_Info_UScriptStruct_EditPivotTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditPivotTarget), 2762190518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditPivotToolBuilder, UEditPivotToolBuilder::StaticClass, TEXT("UEditPivotToolBuilder"), &Z_Registration_Info_UClass_UEditPivotToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditPivotToolBuilder), 304460115U) },
		{ Z_Construct_UClass_UEditPivotToolProperties, UEditPivotToolProperties::StaticClass, TEXT("UEditPivotToolProperties"), &Z_Registration_Info_UClass_UEditPivotToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditPivotToolProperties), 3727806048U) },
		{ Z_Construct_UClass_UEditPivotToolActionPropertySet, UEditPivotToolActionPropertySet::StaticClass, TEXT("UEditPivotToolActionPropertySet"), &Z_Registration_Info_UClass_UEditPivotToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditPivotToolActionPropertySet), 449389562U) },
		{ Z_Construct_UClass_UEditPivotTool, UEditPivotTool::StaticClass, TEXT("UEditPivotTool"), &Z_Registration_Info_UClass_UEditPivotTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditPivotTool), 1506839537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_870366036(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
