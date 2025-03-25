// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/MeshSpaceDeformerTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSpaceDeformerTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UIntervalGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMeshSpaceDeformerToolBuilder
void UMeshSpaceDeformerToolBuilder::StaticRegisterNativesUMeshSpaceDeformerToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerToolBuilder);
UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_NoRegister()
{
	return UMeshSpaceDeformerToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::ClassParams = {
	&UMeshSpaceDeformerToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerToolBuilder>()
{
	return UMeshSpaceDeformerToolBuilder::StaticClass();
}
UMeshSpaceDeformerToolBuilder::UMeshSpaceDeformerToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerToolBuilder);
UMeshSpaceDeformerToolBuilder::~UMeshSpaceDeformerToolBuilder() {}
// End Class UMeshSpaceDeformerToolBuilder

// Begin Enum ENonlinearOperationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENonlinearOperationType;
static UEnum* ENonlinearOperationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENonlinearOperationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENonlinearOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ENonlinearOperationType"));
	}
	return Z_Registration_Info_UEnum_ENonlinearOperationType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ENonlinearOperationType>()
{
	return ENonlinearOperationType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bend.Comment", "/** \n\x09 * Will bend the mesh in the direction of the gizmo Y axis along the Z axis. A line along the Z\n\x09 * axis from the lower bound to the upper bound would not change length as it bends.\n\x09 */" },
		{ "Bend.Name", "ENonlinearOperationType::Bend" },
		{ "Bend.ToolTip", "Will bend the mesh in the direction of the gizmo Y axis along the Z axis. A line along the Z\naxis from the lower bound to the upper bound would not change length as it bends." },
		{ "Comment", "/** ENonlinearOperation determines which type of nonlinear deformation will be applied*/" },
		{ "Flare.Comment", "/**\n\x09 * Depening on 'Flare Percent\", will either flare or squish the mesh along the Gizmo Z axis,\n\x09 * from lower bound to upper bound.\n\x09 */" },
		{ "Flare.DisplayName", "Flare/Squish" },
		{ "Flare.Name", "ENonlinearOperationType::Flare" },
		{ "Flare.ToolTip", "Depening on 'Flare Percent\", will either flare or squish the mesh along the Gizmo Z axis,\nfrom lower bound to upper bound." },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "ENonlinearOperation determines which type of nonlinear deformation will be applied" },
		{ "Twist.Comment", "/** Twists the mesh along the gizmo Z axis, from lower bound to upper bound. */" },
		{ "Twist.Name", "ENonlinearOperationType::Twist" },
		{ "Twist.ToolTip", "Twists the mesh along the gizmo Z axis, from lower bound to upper bound." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENonlinearOperationType::Bend", (int64)ENonlinearOperationType::Bend },
		{ "ENonlinearOperationType::Flare", (int64)ENonlinearOperationType::Flare },
		{ "ENonlinearOperationType::Twist", (int64)ENonlinearOperationType::Twist },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ENonlinearOperationType",
	"ENonlinearOperationType",
	Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType()
{
	if (!Z_Registration_Info_UEnum_ENonlinearOperationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENonlinearOperationType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENonlinearOperationType.InnerSingleton;
}
// End Enum ENonlinearOperationType

// Begin Enum EFlareProfileType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlareProfileType;
static UEnum* EFlareProfileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlareProfileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlareProfileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EFlareProfileType"));
	}
	return Z_Registration_Info_UEnum_EFlareProfileType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EFlareProfileType>()
{
	return EFlareProfileType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "SinMode.Comment", "//Displaced by sin(pi x) with x in 0 to 1\n" },
		{ "SinMode.Name", "EFlareProfileType::SinMode" },
		{ "SinMode.ToolTip", "Displaced by sin(pi x) with x in 0 to 1" },
		{ "SinSquaredMode.Comment", "//Displaced by sin(pi x)*sin(pi x) with x in 0 to 1. This provides a smooth normal transition.\n" },
		{ "SinSquaredMode.Name", "EFlareProfileType::SinSquaredMode" },
		{ "SinSquaredMode.ToolTip", "Displaced by sin(pi x)*sin(pi x) with x in 0 to 1. This provides a smooth normal transition." },
		{ "TriangleMode.Comment", "// Displaced by piecewise-linear trianglular mode\n" },
		{ "TriangleMode.Name", "EFlareProfileType::TriangleMode" },
		{ "TriangleMode.ToolTip", "Displaced by piecewise-linear trianglular mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlareProfileType::SinMode", (int64)EFlareProfileType::SinMode },
		{ "EFlareProfileType::SinSquaredMode", (int64)EFlareProfileType::SinSquaredMode },
		{ "EFlareProfileType::TriangleMode", (int64)EFlareProfileType::TriangleMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EFlareProfileType",
	"EFlareProfileType",
	Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType()
{
	if (!Z_Registration_Info_UEnum_EFlareProfileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlareProfileType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlareProfileType.InnerSingleton;
}
// End Enum EFlareProfileType

// Begin Class UMeshSpaceDeformerToolProperties
void UMeshSpaceDeformerToolProperties::StaticRegisterNativesUMeshSpaceDeformerToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerToolProperties);
UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties_NoRegister()
{
	return UMeshSpaceDeformerToolProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOperationType_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Operation Type" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBoundsInterval_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The upper bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center. */" },
		{ "DisplayName", "Upper Bound" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "The upper bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBoundsInterval_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "0" },
		{ "Comment", "/** The lower bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center. */" },
		{ "DisplayName", "Lower Bound" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "The lower bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center." },
		{ "UIMax", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDegrees_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "3600" },
		{ "ClampMin", "-3600" },
		{ "Comment", "/** \n\x09 * A line along the Z axis of the gizmo from lower bound to upper bound will be bent into a perfect arc of this\n\x09 * many degrees in the direction of the Y axis without changing length.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Bend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "A line along the Z axis of the gizmo from lower bound to upper bound will be bent into a perfect arc of this\nmany degrees in the direction of the Y axis without changing length." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistDegrees_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "3600" },
		{ "ClampMin", "-3600" },
		{ "Comment", "/** Degrees of twist to from the lower bound to the upper bound along the gizmo Z axis. */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Twist" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Degrees of twist to from the lower bound to the upper bound along the gizmo Z axis." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlareProfileType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09* Determines the profile used as a displacement\n\x09*/" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Determines the profile used as a displacement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlarePercentY_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/**\n\x09 * Determines how much to flare perpendicular to the Z axis. When set to 100%, points are moved double the distance\n\x09 * away from the gizmo Z axis at the most extreme flare point. 0% does not flare at all, whereas -100% pinches all\n\x09 * the way to the gizmo Z axis at the most extreme flare point.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Determines how much to flare perpendicular to the Z axis. When set to 100%, points are moved double the distance\naway from the gizmo Z axis at the most extreme flare point. 0% does not flare at all, whereas -100% pinches all\nthe way to the gizmo Z axis at the most extreme flare point." },
		{ "UIMax", "200" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockXAndYFlaring_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09 * If true, flaring is applied along the gizmo X and Y axis the same amount.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "If true, flaring is applied along the gizmo X and Y axis the same amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlarePercentX_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/**\n\x09 * Determines how much to flare perpendicular to the Z axis in the X direction if the flaring is not locked\n\x09 * to be the same in the X and Y directions.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare && !bLockXAndYFlaring" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Determines how much to flare perpendicular to the Z axis in the X direction if the flaring is not locked\nto be the same in the X and Y directions." },
		{ "UIMax", "200" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockBottom_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09 * If true, the \"bottom\" of the mesh relative to the gizmo Z axis will stay in place while the rest bends or twists. If false, the bend\n\x09 * or twist will happen around the gizmo location.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Bend || SelectedOperationType == ENonlinearOperationType::Twist" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "If true, the \"bottom\" of the mesh relative to the gizmo Z axis will stay in place while the rest bends or twists. If false, the bend\nor twist will happen around the gizmo location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOriginalMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawVisualization_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Bend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToNormalOnCtrlClick_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** When true, Ctrl+click not only moves the gizmo to the clicked location, but also aligns the Z axis with the normal at that point. */" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "When true, Ctrl+click not only moves the gizmo to the clicked location, but also aligns the Z axis with the normal at that point." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_SelectedOperationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedOperationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperBoundsInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerBoundsInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BendDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistDegrees;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_FlareProfileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FlareProfileType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlarePercentY;
	static void NewProp_bLockXAndYFlaring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockXAndYFlaring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlarePercentX;
	static void NewProp_bLockBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockBottom;
	static void NewProp_bShowOriginalMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOriginalMesh;
	static void NewProp_bDrawVisualization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawVisualization;
	static void NewProp_bAlignToNormalOnCtrlClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToNormalOnCtrlClick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType = { "SelectedOperationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, SelectedOperationType), Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedOperationType_MetaData), NewProp_SelectedOperationType_MetaData) }; // 2527716747
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_UpperBoundsInterval = { "UpperBoundsInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, UpperBoundsInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBoundsInterval_MetaData), NewProp_UpperBoundsInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_LowerBoundsInterval = { "LowerBoundsInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, LowerBoundsInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBoundsInterval_MetaData), NewProp_LowerBoundsInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_BendDegrees = { "BendDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, BendDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDegrees_MetaData), NewProp_BendDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_TwistDegrees = { "TwistDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, TwistDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistDegrees_MetaData), NewProp_TwistDegrees_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType = { "FlareProfileType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, FlareProfileType), Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlareProfileType_MetaData), NewProp_FlareProfileType_MetaData) }; // 2653353570
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentY = { "FlarePercentY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, FlarePercentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlarePercentY_MetaData), NewProp_FlarePercentY_MetaData) };
void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring_SetBit(void* Obj)
{
	((UMeshSpaceDeformerToolProperties*)Obj)->bLockXAndYFlaring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring = { "bLockXAndYFlaring", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockXAndYFlaring_MetaData), NewProp_bLockXAndYFlaring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentX = { "FlarePercentX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, FlarePercentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlarePercentX_MetaData), NewProp_FlarePercentX_MetaData) };
void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom_SetBit(void* Obj)
{
	((UMeshSpaceDeformerToolProperties*)Obj)->bLockBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom = { "bLockBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockBottom_MetaData), NewProp_bLockBottom_MetaData) };
void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh_SetBit(void* Obj)
{
	((UMeshSpaceDeformerToolProperties*)Obj)->bShowOriginalMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh = { "bShowOriginalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOriginalMesh_MetaData), NewProp_bShowOriginalMesh_MetaData) };
void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization_SetBit(void* Obj)
{
	((UMeshSpaceDeformerToolProperties*)Obj)->bDrawVisualization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization = { "bDrawVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawVisualization_MetaData), NewProp_bDrawVisualization_MetaData) };
void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick_SetBit(void* Obj)
{
	((UMeshSpaceDeformerToolProperties*)Obj)->bAlignToNormalOnCtrlClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick = { "bAlignToNormalOnCtrlClick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToNormalOnCtrlClick_MetaData), NewProp_bAlignToNormalOnCtrlClick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_UpperBoundsInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_LowerBoundsInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_BendDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_TwistDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::ClassParams = {
	&UMeshSpaceDeformerToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties()
{
	if (!Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerToolProperties>()
{
	return UMeshSpaceDeformerToolProperties::StaticClass();
}
UMeshSpaceDeformerToolProperties::UMeshSpaceDeformerToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerToolProperties);
UMeshSpaceDeformerToolProperties::~UMeshSpaceDeformerToolProperties() {}
// End Class UMeshSpaceDeformerToolProperties

// Begin Enum EMeshSpaceDeformerToolAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction;
static UEnum* EMeshSpaceDeformerToolAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshSpaceDeformerToolAction"));
	}
	return Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshSpaceDeformerToolAction>()
{
	return EMeshSpaceDeformerToolAction_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "NoAction.Name", "EMeshSpaceDeformerToolAction::NoAction" },
		{ "ShiftToCenter.Name", "EMeshSpaceDeformerToolAction::ShiftToCenter" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshSpaceDeformerToolAction::NoAction", (int64)EMeshSpaceDeformerToolAction::NoAction },
		{ "EMeshSpaceDeformerToolAction::ShiftToCenter", (int64)EMeshSpaceDeformerToolAction::ShiftToCenter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshSpaceDeformerToolAction",
	"EMeshSpaceDeformerToolAction",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction()
{
	if (!Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.InnerSingleton;
}
// End Enum EMeshSpaceDeformerToolAction

// Begin Class UMeshSpaceDeformerToolActionPropertySet Function ShiftToCenter
struct Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Gizmo" },
		{ "Comment", "/** Move the gizmo to the center of the object without changing the orientation. */" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Move the gizmo to the center of the object without changing the orientation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet, nullptr, "ShiftToCenter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSpaceDeformerToolActionPropertySet::execShiftToCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShiftToCenter();
	P_NATIVE_END;
}
// End Class UMeshSpaceDeformerToolActionPropertySet Function ShiftToCenter

// Begin Class UMeshSpaceDeformerToolActionPropertySet
void UMeshSpaceDeformerToolActionPropertySet::StaticRegisterNativesUMeshSpaceDeformerToolActionPropertySet()
{
	UClass* Class = UMeshSpaceDeformerToolActionPropertySet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShiftToCenter", &UMeshSpaceDeformerToolActionPropertySet::execShiftToCenter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerToolActionPropertySet);
UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_NoRegister()
{
	return UMeshSpaceDeformerToolActionPropertySet::StaticClass();
}
struct Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter, "ShiftToCenter" }, // 2785649892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerToolActionPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::ClassParams = {
	&UMeshSpaceDeformerToolActionPropertySet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet()
{
	if (!Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerToolActionPropertySet>()
{
	return UMeshSpaceDeformerToolActionPropertySet::StaticClass();
}
UMeshSpaceDeformerToolActionPropertySet::UMeshSpaceDeformerToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerToolActionPropertySet);
UMeshSpaceDeformerToolActionPropertySet::~UMeshSpaceDeformerToolActionPropertySet() {}
// End Class UMeshSpaceDeformerToolActionPropertySet

// Begin Class USpaceDeformerOperatorFactory
void USpaceDeformerOperatorFactory::StaticRegisterNativesUSpaceDeformerOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpaceDeformerOperatorFactory);
UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory_NoRegister()
{
	return USpaceDeformerOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceDeformerTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpaceDeformerTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpaceDeformerOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::NewProp_SpaceDeformerTool = { "SpaceDeformerTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpaceDeformerOperatorFactory, SpaceDeformerTool), Z_Construct_UClass_UMeshSpaceDeformerTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceDeformerTool_MetaData), NewProp_SpaceDeformerTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::NewProp_SpaceDeformerTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::ClassParams = {
	&USpaceDeformerOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory()
{
	if (!Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.OuterSingleton, Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USpaceDeformerOperatorFactory>()
{
	return USpaceDeformerOperatorFactory::StaticClass();
}
USpaceDeformerOperatorFactory::USpaceDeformerOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpaceDeformerOperatorFactory);
USpaceDeformerOperatorFactory::~USpaceDeformerOperatorFactory() {}
// End Class USpaceDeformerOperatorFactory

// Begin Class UMeshSpaceDeformerTool
void UMeshSpaceDeformerTool::StaticRegisterNativesUMeshSpaceDeformerTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerTool);
UClass* Z_Construct_UClass_UMeshSpaceDeformerTool_NoRegister()
{
	return UMeshSpaceDeformerTool::StaticClass();
}
struct Z_Construct_UClass_UMeshSpaceDeformerTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies non-linear deformations to a mesh \n */" },
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Applies non-linear deformations to a mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMeshPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntervalGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpIntervalSource_MetaData[] = {
		{ "Comment", "/** Interval Parameter sources that reflect UI settings. */" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Interval Parameter sources that reflect UI settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownIntervalSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardIntervalSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragAlignmentMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMeshPreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntervalGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpIntervalSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownIntervalSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardIntervalSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, Settings), Z_Construct_UClass_UMeshSpaceDeformerToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, ToolActions), Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolActions_MetaData), NewProp_ToolActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, StateTarget), Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTarget_MetaData), NewProp_StateTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragAlignmentMechanic_MetaData), NewProp_DragAlignmentMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_OriginalMeshPreview = { "OriginalMeshPreview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, OriginalMeshPreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMeshPreview_MetaData), NewProp_OriginalMeshPreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_IntervalGizmo = { "IntervalGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, IntervalGizmo), Z_Construct_UClass_UIntervalGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntervalGizmo_MetaData), NewProp_IntervalGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformGizmo_MetaData), NewProp_TransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProxy_MetaData), NewProp_TransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_UpIntervalSource = { "UpIntervalSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, UpIntervalSource), Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpIntervalSource_MetaData), NewProp_UpIntervalSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DownIntervalSource = { "DownIntervalSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, DownIntervalSource), Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownIntervalSource_MetaData), NewProp_DownIntervalSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ForwardIntervalSource = { "ForwardIntervalSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSpaceDeformerTool, ForwardIntervalSource), Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardIntervalSource_MetaData), NewProp_ForwardIntervalSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ToolActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_StateTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DragAlignmentMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_OriginalMeshPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_IntervalGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_UpIntervalSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DownIntervalSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ForwardIntervalSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UMeshSpaceDeformerTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::ClassParams = {
	&UMeshSpaceDeformerTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSpaceDeformerTool()
{
	if (!Z_Registration_Info_UClass_UMeshSpaceDeformerTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerTool.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSpaceDeformerTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerTool>()
{
	return UMeshSpaceDeformerTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerTool);
UMeshSpaceDeformerTool::~UMeshSpaceDeformerTool() {}
// End Class UMeshSpaceDeformerTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENonlinearOperationType_StaticEnum, TEXT("ENonlinearOperationType"), &Z_Registration_Info_UEnum_ENonlinearOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2527716747U) },
		{ EFlareProfileType_StaticEnum, TEXT("EFlareProfileType"), &Z_Registration_Info_UEnum_EFlareProfileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2653353570U) },
		{ EMeshSpaceDeformerToolAction_StaticEnum, TEXT("EMeshSpaceDeformerToolAction"), &Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1859541445U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSpaceDeformerToolBuilder, UMeshSpaceDeformerToolBuilder::StaticClass, TEXT("UMeshSpaceDeformerToolBuilder"), &Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerToolBuilder), 4181192566U) },
		{ Z_Construct_UClass_UMeshSpaceDeformerToolProperties, UMeshSpaceDeformerToolProperties::StaticClass, TEXT("UMeshSpaceDeformerToolProperties"), &Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerToolProperties), 3246543962U) },
		{ Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet, UMeshSpaceDeformerToolActionPropertySet::StaticClass, TEXT("UMeshSpaceDeformerToolActionPropertySet"), &Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerToolActionPropertySet), 2520775758U) },
		{ Z_Construct_UClass_USpaceDeformerOperatorFactory, USpaceDeformerOperatorFactory::StaticClass, TEXT("USpaceDeformerOperatorFactory"), &Z_Registration_Info_UClass_USpaceDeformerOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpaceDeformerOperatorFactory), 994858880U) },
		{ Z_Construct_UClass_UMeshSpaceDeformerTool, UMeshSpaceDeformerTool::StaticClass, TEXT("UMeshSpaceDeformerTool"), &Z_Registration_Info_UClass_UMeshSpaceDeformerTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerTool), 1356378517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_3708370361(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
