// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/LatticeDeformerTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatticeDeformerTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class ULatticeDeformerToolBuilder
void ULatticeDeformerToolBuilder::StaticRegisterNativesULatticeDeformerToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerToolBuilder);
UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder_NoRegister()
{
	return ULatticeDeformerToolBuilder::StaticClass();
}
struct Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::ClassParams = {
	&ULatticeDeformerToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder()
{
	if (!Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.OuterSingleton, Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerToolBuilder>()
{
	return ULatticeDeformerToolBuilder::StaticClass();
}
ULatticeDeformerToolBuilder::ULatticeDeformerToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerToolBuilder);
ULatticeDeformerToolBuilder::~ULatticeDeformerToolBuilder() {}
// End Class ULatticeDeformerToolBuilder

// Begin Enum ELatticeInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELatticeInterpolationType;
static UEnum* ELatticeInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELatticeInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELatticeInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ELatticeInterpolationType"));
	}
	return Z_Registration_Info_UEnum_ELatticeInterpolationType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ELatticeInterpolationType>()
{
	return ELatticeInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cubic.Comment", "/** Use tricubic interpolation to get new mesh vertex positions from the lattice */" },
		{ "Cubic.DisplayName", "Cubic" },
		{ "Cubic.Name", "ELatticeInterpolationType::Cubic" },
		{ "Cubic.ToolTip", "Use tricubic interpolation to get new mesh vertex positions from the lattice" },
		{ "Linear.Comment", "/** Use trilinear interpolation to get new mesh vertex positions from the lattice */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "ELatticeInterpolationType::Linear" },
		{ "Linear.ToolTip", "Use trilinear interpolation to get new mesh vertex positions from the lattice" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELatticeInterpolationType::Linear", (int64)ELatticeInterpolationType::Linear },
		{ "ELatticeInterpolationType::Cubic", (int64)ELatticeInterpolationType::Cubic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ELatticeInterpolationType",
	"ELatticeInterpolationType",
	Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType()
{
	if (!Z_Registration_Info_UEnum_ELatticeInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELatticeInterpolationType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELatticeInterpolationType.InnerSingleton;
}
// End Enum ELatticeInterpolationType

// Begin Enum ELatticeDeformerToolAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELatticeDeformerToolAction;
static UEnum* ELatticeDeformerToolAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELatticeDeformerToolAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELatticeDeformerToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ELatticeDeformerToolAction"));
	}
	return Z_Registration_Info_UEnum_ELatticeDeformerToolAction.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ELatticeDeformerToolAction>()
{
	return ELatticeDeformerToolAction_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClearConstraints.Name", "ELatticeDeformerToolAction::ClearConstraints" },
		{ "Constrain.Name", "ELatticeDeformerToolAction::Constrain" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "NoAction.Name", "ELatticeDeformerToolAction::NoAction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELatticeDeformerToolAction::NoAction", (int64)ELatticeDeformerToolAction::NoAction },
		{ "ELatticeDeformerToolAction::Constrain", (int64)ELatticeDeformerToolAction::Constrain },
		{ "ELatticeDeformerToolAction::ClearConstraints", (int64)ELatticeDeformerToolAction::ClearConstraints },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ELatticeDeformerToolAction",
	"ELatticeDeformerToolAction",
	Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction()
{
	if (!Z_Registration_Info_UEnum_ELatticeDeformerToolAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELatticeDeformerToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELatticeDeformerToolAction.InnerSingleton;
}
// End Enum ELatticeDeformerToolAction

// Begin Class ULatticeDeformerToolProperties Function ClearConstraints
struct Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Deformation" },
		{ "Comment", "/** Clear all constrained lattice points */" },
		{ "DisplayName", "Clear Constraints" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Clear all constrained lattice points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatticeDeformerToolProperties, nullptr, "ClearConstraints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULatticeDeformerToolProperties::execClearConstraints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearConstraints();
	P_NATIVE_END;
}
// End Class ULatticeDeformerToolProperties Function ClearConstraints

// Begin Class ULatticeDeformerToolProperties Function Constrain
struct Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Deformation" },
		{ "Comment", "/** Constrain selected lattice points */" },
		{ "DisplayName", "Constrain" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Constrain selected lattice points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatticeDeformerToolProperties, nullptr, "Constrain", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULatticeDeformerToolProperties::execConstrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Constrain();
	P_NATIVE_END;
}
// End Class ULatticeDeformerToolProperties Function Constrain

// Begin Class ULatticeDeformerToolProperties
void ULatticeDeformerToolProperties::StaticRegisterNativesULatticeDeformerToolProperties()
{
	UClass* Class = ULatticeDeformerToolProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearConstraints", &ULatticeDeformerToolProperties::execClearConstraints },
		{ "Constrain", &ULatticeDeformerToolProperties::execConstrain },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerToolProperties);
UClass* Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister()
{
	return ULatticeDeformerToolProperties::StaticClass();
}
struct Z_Construct_UClass_ULatticeDeformerToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxisResolution_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "40" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of lattice vertices along the X axis */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Number of lattice vertices along the X axis" },
		{ "UIMax", "25" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisResolution_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "40" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of lattice vertices along the Y axis */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Number of lattice vertices along the Y axis" },
		{ "UIMax", "25" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisResolution_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "40" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of lattice vertices along the Z axis */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Number of lattice vertices along the Z axis" },
		{ "UIMax", "25" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Relative distance the lattice extends from the mesh */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Relative distance the lattice extends from the mesh" },
		{ "UIMax", "2" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Whether to use linear or cubic interpolation to get new mesh vertex positions from the lattice */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether to use linear or cubic interpolation to get new mesh vertex positions from the lattice" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeformNormals_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Whether to use approximate new vertex normals using the deformer */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether to use approximate new vertex normals using the deformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanChangeResolution_MetaData[] = {
		{ "Comment", "// Not user visible - used to disallow changing the lattice resolution after deformation\n" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Not user visible - used to disallow changing the lattice resolution after deformation" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoCoordinateSystem_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Whether the gizmo's axes remain aligned with world axes or rotate as the gizmo is transformed */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether the gizmo's axes remain aligned with world axes or rotate as the gizmo is transformed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetPivotMode_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** If Set Pivot Mode is active, the gizmo can be repositioned without moving the selected lattice points */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "If Set Pivot Mode is active, the gizmo can be repositioned without moving the selected lattice points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoftDeformation_MetaData[] = {
		{ "Category", "Deformation" },
		{ "Comment", "/** Whether to use soft deformation of the lattice */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether to use soft deformation of the lattice" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XAxisResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YAxisResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZAxisResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static void NewProp_bDeformNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformNormals;
	static void NewProp_bCanChangeResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChangeResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GizmoCoordinateSystem_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GizmoCoordinateSystem;
	static void NewProp_bSetPivotMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPivotMode;
	static void NewProp_bSoftDeformation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftDeformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints, "ClearConstraints" }, // 1139553911
		{ &Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain, "Constrain" }, // 3913753928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_XAxisResolution = { "XAxisResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerToolProperties, XAxisResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxisResolution_MetaData), NewProp_XAxisResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_YAxisResolution = { "YAxisResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerToolProperties, YAxisResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisResolution_MetaData), NewProp_YAxisResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_ZAxisResolution = { "ZAxisResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerToolProperties, ZAxisResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxisResolution_MetaData), NewProp_ZAxisResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerToolProperties, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerToolProperties, InterpolationType), Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 2961081855
void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals_SetBit(void* Obj)
{
	((ULatticeDeformerToolProperties*)Obj)->bDeformNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals = { "bDeformNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeformNormals_MetaData), NewProp_bDeformNormals_MetaData) };
void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution_SetBit(void* Obj)
{
	((ULatticeDeformerToolProperties*)Obj)->bCanChangeResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution = { "bCanChangeResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanChangeResolution_MetaData), NewProp_bCanChangeResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem = { "GizmoCoordinateSystem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerToolProperties, GizmoCoordinateSystem), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoCoordinateSystem_MetaData), NewProp_GizmoCoordinateSystem_MetaData) }; // 429883283
void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode_SetBit(void* Obj)
{
	((ULatticeDeformerToolProperties*)Obj)->bSetPivotMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode = { "bSetPivotMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetPivotMode_MetaData), NewProp_bSetPivotMode_MetaData) };
void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation_SetBit(void* Obj)
{
	((ULatticeDeformerToolProperties*)Obj)->bSoftDeformation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation = { "bSoftDeformation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoftDeformation_MetaData), NewProp_bSoftDeformation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_XAxisResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_YAxisResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_ZAxisResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::ClassParams = {
	&ULatticeDeformerToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULatticeDeformerToolProperties()
{
	if (!Z_Registration_Info_UClass_ULatticeDeformerToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerToolProperties.OuterSingleton, Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULatticeDeformerToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerToolProperties>()
{
	return ULatticeDeformerToolProperties::StaticClass();
}
ULatticeDeformerToolProperties::ULatticeDeformerToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerToolProperties);
ULatticeDeformerToolProperties::~ULatticeDeformerToolProperties() {}
// End Class ULatticeDeformerToolProperties

// Begin Class ULatticeDeformerOperatorFactory
void ULatticeDeformerOperatorFactory::StaticRegisterNativesULatticeDeformerOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerOperatorFactory);
UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory_NoRegister()
{
	return ULatticeDeformerOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatticeDeformerTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LatticeDeformerTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::NewProp_LatticeDeformerTool = { "LatticeDeformerTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerOperatorFactory, LatticeDeformerTool), Z_Construct_UClass_ULatticeDeformerTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatticeDeformerTool_MetaData), NewProp_LatticeDeformerTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::NewProp_LatticeDeformerTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::ClassParams = {
	&ULatticeDeformerOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory()
{
	if (!Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.OuterSingleton, Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerOperatorFactory>()
{
	return ULatticeDeformerOperatorFactory::StaticClass();
}
ULatticeDeformerOperatorFactory::ULatticeDeformerOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerOperatorFactory);
ULatticeDeformerOperatorFactory::~ULatticeDeformerOperatorFactory() {}
// End Class ULatticeDeformerOperatorFactory

// Begin Class ULatticeDeformerTool
void ULatticeDeformerTool::StaticRegisterNativesULatticeDeformerTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerTool);
UClass* Z_Construct_UClass_ULatticeDeformerTool_NoRegister()
{
	return ULatticeDeformerTool::StaticClass();
}
struct Z_Construct_UClass_ULatticeDeformerTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Deform a mesh using a regular hexahedral lattice */" },
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Deform a mesh using a regular hexahedral lattice" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointsMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLatticeDeformed_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlPointsMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static void NewProp_bLatticeDeformed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLatticeDeformed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_ControlPointsMechanic = { "ControlPointsMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerTool, ControlPointsMechanic), Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPointsMechanic_MetaData), NewProp_ControlPointsMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerTool, Settings), Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeDeformerTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
void Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed_SetBit(void* Obj)
{
	((ULatticeDeformerTool*)Obj)->bLatticeDeformed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed = { "bLatticeDeformed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULatticeDeformerTool), &Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLatticeDeformed_MetaData), NewProp_bLatticeDeformed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeDeformerTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_ControlPointsMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULatticeDeformerTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULatticeDeformerTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(ULatticeDeformerTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerTool_Statics::ClassParams = {
	&ULatticeDeformerTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULatticeDeformerTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::Class_MetaDataParams), Z_Construct_UClass_ULatticeDeformerTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULatticeDeformerTool()
{
	if (!Z_Registration_Info_UClass_ULatticeDeformerTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerTool.OuterSingleton, Z_Construct_UClass_ULatticeDeformerTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULatticeDeformerTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerTool>()
{
	return ULatticeDeformerTool::StaticClass();
}
ULatticeDeformerTool::ULatticeDeformerTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerTool);
// End Class ULatticeDeformerTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELatticeInterpolationType_StaticEnum, TEXT("ELatticeInterpolationType"), &Z_Registration_Info_UEnum_ELatticeInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2961081855U) },
		{ ELatticeDeformerToolAction_StaticEnum, TEXT("ELatticeDeformerToolAction"), &Z_Registration_Info_UEnum_ELatticeDeformerToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2075022993U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULatticeDeformerToolBuilder, ULatticeDeformerToolBuilder::StaticClass, TEXT("ULatticeDeformerToolBuilder"), &Z_Registration_Info_UClass_ULatticeDeformerToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerToolBuilder), 1686490403U) },
		{ Z_Construct_UClass_ULatticeDeformerToolProperties, ULatticeDeformerToolProperties::StaticClass, TEXT("ULatticeDeformerToolProperties"), &Z_Registration_Info_UClass_ULatticeDeformerToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerToolProperties), 2367453324U) },
		{ Z_Construct_UClass_ULatticeDeformerOperatorFactory, ULatticeDeformerOperatorFactory::StaticClass, TEXT("ULatticeDeformerOperatorFactory"), &Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerOperatorFactory), 2474605401U) },
		{ Z_Construct_UClass_ULatticeDeformerTool, ULatticeDeformerTool::StaticClass, TEXT("ULatticeDeformerTool"), &Z_Registration_Info_UClass_ULatticeDeformerTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerTool), 2956669204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_3392239785(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
