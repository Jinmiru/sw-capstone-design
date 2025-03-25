// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "Runtime/AnimationCore/Public/Constraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_TransformConstraint() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintData();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EConstraintInterpType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintParent();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintTarget();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FConstraintTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintTarget;
class UScriptStruct* FConstraintTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ConstraintTarget"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FConstraintTarget>()
{
	return FConstraintTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "Constant", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintTarget, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FConstraintTarget*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConstraintTarget), &Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintTarget, Filter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 2061705217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Filter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ConstraintTarget",
	Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers),
	sizeof(FConstraintTarget),
	alignof(FConstraintTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintTarget()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintTarget.InnerSingleton, Z_Construct_UScriptStruct_FConstraintTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintTarget.InnerSingleton;
}
// End ScriptStruct FConstraintTarget

// Begin ScriptStruct FRigUnit_TransformConstraint_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData;
class UScriptStruct* FRigUnit_TransformConstraint_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TransformConstraint_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TransformConstraint_WorkData>()
{
	return FRigUnit_TransformConstraint_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintData_MetaData[] = {
		{ "Comment", "// note that Targets.Num () != ConstraintData.Num()\n" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "note that Targets.Num () != ConstraintData.Num()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintDataToTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintDataToTargets_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintDataToTargets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ConstraintDataToTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformConstraint_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData_Inner = { "ConstraintData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintData, METADATA_PARAMS(0, nullptr) }; // 1952377732
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData = { "ConstraintData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint_WorkData, ConstraintData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintData_MetaData), NewProp_ConstraintData_MetaData) }; // 1952377732
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_ValueProp = { "ConstraintDataToTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_Key_KeyProp = { "ConstraintDataToTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets = { "ConstraintDataToTargets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint_WorkData, ConstraintDataToTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintDataToTargets_MetaData), NewProp_ConstraintDataToTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_TransformConstraint_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_TransformConstraint_WorkData),
	alignof(FRigUnit_TransformConstraint_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_TransformConstraint_WorkData

// Begin ScriptStruct FRigUnit_TransformConstraint
static_assert(std::is_polymorphic<FRigUnit_TransformConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TransformConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint;
class UScriptStruct* FRigUnit_TransformConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TransformConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TransformConstraint_Execute;
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("Bone"), TEXT("FName"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("BaseTransformSpace"), TEXT("ETransformSpaceMode"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("BaseTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("BaseBone"), TEXT("FName"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FConstraintTarget>"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("bUseInitialTransforms"), TEXT("bool"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_TransformConstraint_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TransformConstraint::Execute"), &FRigUnit_TransformConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton, Arguments_FRigUnit_TransformConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TransformConstraint>()
{
	return FRigUnit_TransformConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransformSpace_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseTransform\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseTransform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseBone_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseJoint\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseJoint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInitialTransforms_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// If checked the initial transform will be used for the constraint data\n" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "If checked the initial transform will be used for the constraint data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BaseTransformSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseTransformSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BaseBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static void NewProp_bUseInitialTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInitialTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace = { "BaseTransformSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, BaseTransformSpace), Z_Construct_UEnum_ControlRig_ETransformSpaceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTransformSpace_MetaData), NewProp_BaseTransformSpace_MetaData) }; // 3718440355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTransform_MetaData), NewProp_BaseTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseBone = { "BaseBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, BaseBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseBone_MetaData), NewProp_BaseBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintTarget, METADATA_PARAMS(0, nullptr) }; // 3399455846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) }; // 3399455846
void Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms_SetBit(void* Obj)
{
	((FRigUnit_TransformConstraint*)Obj)->bUseInitialTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms = { "bUseInitialTransforms", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_TransformConstraint), &Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInitialTransforms_MetaData), NewProp_bUseInitialTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, WorkData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 337420075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_TransformConstraint",
	Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers),
	sizeof(FRigUnit_TransformConstraint),
	alignof(FRigUnit_TransformConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.InnerSingleton;
}
void FRigUnit_TransformConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_TransformConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintTarget> Targets_4_Array(Targets);
	StaticExecute(
		InExecuteContext,
		Bone,
		BaseTransformSpace,
		BaseTransform,
		BaseBone,
		Targets_4_Array,
		bUseInitialTransforms,
		WorkData
	);
}
// End ScriptStruct FRigUnit_TransformConstraint

// Begin ScriptStruct FRigUnit_TransformConstraintPerItem
static_assert(std::is_polymorphic<FRigUnit_TransformConstraintPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TransformConstraintPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem;
class UScriptStruct* FRigUnit_TransformConstraintPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TransformConstraintPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TransformConstraintPerItem_Execute;
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("BaseTransformSpace"), TEXT("ETransformSpaceMode"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("BaseTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("BaseItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FConstraintTarget>"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("bUseInitialTransforms"), TEXT("bool"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_TransformConstraint_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TransformConstraintPerItem::Execute"), &FRigUnit_TransformConstraintPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton, Arguments_FRigUnit_TransformConstraintPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TransformConstraintPerItem>()
{
	return FRigUnit_TransformConstraintPerItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * Constrains an item's transform to multiple items' transforms\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Transform Constraint" },
		{ "Keywords", "Parent,Orient,Scale" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's transform to multiple items' transforms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransformSpace_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseTransform\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseTransform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseItem_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseJoint\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseJoint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInitialTransforms_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// If checked the initial transform will be used for the constraint data\n" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "If checked the initial transform will be used for the constraint data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BaseTransformSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseTransformSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static void NewProp_bUseInitialTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInitialTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformConstraintPerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace = { "BaseTransformSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, BaseTransformSpace), Z_Construct_UEnum_ControlRig_ETransformSpaceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTransformSpace_MetaData), NewProp_BaseTransformSpace_MetaData) }; // 3718440355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTransform_MetaData), NewProp_BaseTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseItem = { "BaseItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, BaseItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseItem_MetaData), NewProp_BaseItem_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintTarget, METADATA_PARAMS(0, nullptr) }; // 3399455846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) }; // 3399455846
void Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms_SetBit(void* Obj)
{
	((FRigUnit_TransformConstraintPerItem*)Obj)->bUseInitialTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms = { "bUseInitialTransforms", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_TransformConstraintPerItem), &Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInitialTransforms_MetaData), NewProp_bUseInitialTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 337420075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_TransformConstraintPerItem",
	Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers),
	sizeof(FRigUnit_TransformConstraintPerItem),
	alignof(FRigUnit_TransformConstraintPerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.InnerSingleton;
}
void FRigUnit_TransformConstraintPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_TransformConstraintPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintTarget> Targets_4_Array(Targets);
	StaticExecute(
		InExecuteContext,
		Item,
		BaseTransformSpace,
		BaseTransform,
		BaseItem,
		Targets_4_Array,
		bUseInitialTransforms,
		WorkData
	);
}
// End ScriptStruct FRigUnit_TransformConstraintPerItem

// Begin ScriptStruct FConstraintParent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintParent;
class UScriptStruct* FConstraintParent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintParent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintParent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintParent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ConstraintParent"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintParent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FConstraintParent>()
{
	return FConstraintParent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "FConstraintParent" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "FConstraintParent" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintParent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintParent, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintParent, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintParent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ConstraintParent",
	Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers),
	sizeof(FConstraintParent),
	alignof(FConstraintParent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintParent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintParent()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintParent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintParent.InnerSingleton, Z_Construct_UScriptStruct_FConstraintParent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintParent.InnerSingleton;
}
// End ScriptStruct FConstraintParent

// Begin Enum EConstraintInterpType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstraintInterpType;
static UEnum* EConstraintInterpType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConstraintInterpType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConstraintInterpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EConstraintInterpType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EConstraintInterpType"));
	}
	return Z_Registration_Info_UEnum_EConstraintInterpType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EConstraintInterpType>()
{
	return EConstraintInterpType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.Comment", "/** Weighted Average of Quaternions by their X,Y,Z,W values, The Shortest Route is Respected. The Order of Parents Doesn't Matter */" },
		{ "Average.DisplayName", "Average(Order Independent)" },
		{ "Average.Name", "EConstraintInterpType::Average" },
		{ "Average.ToolTip", "Weighted Average of Quaternions by their X,Y,Z,W values, The Shortest Route is Respected. The Order of Parents Doesn't Matter" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Options for interpolating rotations\n*/" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EConstraintInterpType::Max" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "Shortest.Comment", "/** Perform Quaternion Slerp in Sequence, Different Orders of Parents can Produce Different Results */" },
		{ "Shortest.DisplayName", "Shortest(Order Dependent)" },
		{ "Shortest.Name", "EConstraintInterpType::Shortest" },
		{ "Shortest.ToolTip", "Perform Quaternion Slerp in Sequence, Different Orders of Parents can Produce Different Results" },
		{ "ToolTip", "Options for interpolating rotations" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConstraintInterpType::Average", (int64)EConstraintInterpType::Average },
		{ "EConstraintInterpType::Shortest", (int64)EConstraintInterpType::Shortest },
		{ "EConstraintInterpType::Max", (int64)EConstraintInterpType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EConstraintInterpType",
	"EConstraintInterpType",
	Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EConstraintInterpType()
{
	if (!Z_Registration_Info_UEnum_EConstraintInterpType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstraintInterpType.InnerSingleton, Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConstraintInterpType.InnerSingleton;
}
// End Enum EConstraintInterpType

// Begin ScriptStruct FRigUnit_ParentConstraint_AdvancedSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings;
class UScriptStruct* FRigUnit_ParentConstraint_AdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentConstraint_AdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentConstraint_AdvancedSettings>()
{
	return FRigUnit_ParentConstraint_AdvancedSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Options for interpolating rotations\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Options for interpolating rotations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrderForFilter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Rotation is converted to euler angles using the specified order such that individual axes can be filtered.\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Rotation is converted to euler angles using the specified order such that individual axes can be filtered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrderForFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrderForFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentConstraint_AdvancedSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint_AdvancedSettings, InterpolationType), Z_Construct_UEnum_ControlRig_EConstraintInterpType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 1145129132
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter = { "RotationOrderForFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint_AdvancedSettings, RotationOrderForFilter), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrderForFilter_MetaData), NewProp_RotationOrderForFilter_MetaData) }; // 1031303920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_ParentConstraint_AdvancedSettings",
	Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers),
	sizeof(FRigUnit_ParentConstraint_AdvancedSettings),
	alignof(FRigUnit_ParentConstraint_AdvancedSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.InnerSingleton;
}
// End ScriptStruct FRigUnit_ParentConstraint_AdvancedSettings

// Begin ScriptStruct FRigUnit_ParentConstraint
static_assert(std::is_polymorphic<FRigUnit_ParentConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ParentConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint;
class UScriptStruct* FRigUnit_ParentConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParentConstraint_Execute;
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FTransformFilter"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_ParentConstraint_AdvancedSettings"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParentConstraint::Execute"), &FRigUnit_ParentConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton, Arguments_FRigUnit_ParentConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentConstraint>()
{
	return FRigUnit_ParentConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's transform to multiple items' transforms\n*/" },
		{ "DisplayName", "Parent Constraint" },
		{ "Keywords", "Parent,Orient,Scale" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's transform to multiple items' transforms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_ParentConstraint*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ParentConstraint), &Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Filter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 2061705217
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 2571479710
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildCache_MetaData), NewProp_ChildCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCaches_MetaData), NewProp_ParentCaches_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_AdvancedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ChildCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_ParentConstraint",
	Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers),
	sizeof(FRigUnit_ParentConstraint),
	alignof(FRigUnit_ParentConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.InnerSingleton;
}
void FRigUnit_ParentConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ParentConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		AdvancedSettings,
		Weight,
		ChildCache,
		ParentCaches
	);
}
// End ScriptStruct FRigUnit_ParentConstraint

// Begin ScriptStruct FRigUnit_ParentConstraintMath_AdvancedSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings;
class UScriptStruct* FRigUnit_ParentConstraintMath_AdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentConstraintMath_AdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentConstraintMath_AdvancedSettings>()
{
	return FRigUnit_ParentConstraintMath_AdvancedSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Options for interpolating rotations\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Options for interpolating rotations" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentConstraintMath_AdvancedSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraintMath_AdvancedSettings, InterpolationType), Z_Construct_UEnum_ControlRig_EConstraintInterpType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 1145129132
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::NewProp_InterpolationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_ParentConstraintMath_AdvancedSettings",
	Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::PropPointers),
	sizeof(FRigUnit_ParentConstraintMath_AdvancedSettings),
	alignof(FRigUnit_ParentConstraintMath_AdvancedSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings.InnerSingleton;
}
// End ScriptStruct FRigUnit_ParentConstraintMath_AdvancedSettings

// Begin ScriptStruct FRigUnit_ParentConstraintMath
static_assert(std::is_polymorphic<FRigUnit_ParentConstraintMath>() == std::is_polymorphic<FRigUnit_HighlevelBase>(), "USTRUCT FRigUnit_ParentConstraintMath cannot be polymorphic unless super FRigUnit_HighlevelBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath;
class UScriptStruct* FRigUnit_ParentConstraintMath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentConstraintMath"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParentConstraintMath_Execute;
		Arguments_FRigUnit_ParentConstraintMath_Execute.Emplace(TEXT("Input"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentConstraintMath_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_ParentConstraintMath_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_ParentConstraintMath_AdvancedSettings"));
		Arguments_FRigUnit_ParentConstraintMath_Execute.Emplace(TEXT("Output"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentConstraintMath_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParentConstraintMath::Execute"), &FRigUnit_ParentConstraintMath::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath.OuterSingleton, Arguments_FRigUnit_ParentConstraintMath_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentConstraintMath>()
{
	return FRigUnit_ParentConstraintMath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Computes the output transform by constraining the input transform to multiple parents \n*/" },
		{ "DisplayName", "Parent Constraint Math" },
		{ "Keywords", "Parent,Orient,Scale" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Computes the output transform by constraining the input transform to multiple parents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Input is used to calculate offsets from parents' initial transform\n\x09*/" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Input is used to calculate offsets from parents' initial transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentConstraintMath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraintMath, Input), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraintMath, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraintMath, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 3117262082
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraintMath, Output), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraintMath, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCaches_MetaData), NewProp_ParentCaches_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_AdvancedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_ParentCaches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewProp_ParentCaches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBase,
	&NewStructOps,
	"RigUnit_ParentConstraintMath",
	Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::PropPointers),
	sizeof(FRigUnit_ParentConstraintMath),
	alignof(FRigUnit_ParentConstraintMath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath.InnerSingleton;
}
void FRigUnit_ParentConstraintMath::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ParentConstraintMath::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_1_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Input,
		Parents_1_Array,
		AdvancedSettings,
		Output,
		ParentCaches
	);
}
// End ScriptStruct FRigUnit_ParentConstraintMath

// Begin ScriptStruct FRigUnit_PositionConstraint
static_assert(std::is_polymorphic<FRigUnit_PositionConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_PositionConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint;
class UScriptStruct* FRigUnit_PositionConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PositionConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PositionConstraint_Execute;
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PositionConstraint::Execute"), &FRigUnit_PositionConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton, Arguments_FRigUnit_PositionConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PositionConstraint>()
{
	return FRigUnit_PositionConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's position to multiple items' positions \n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Position Constraint" },
		{ "Keywords", "Parent,Translation" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's position to multiple items' positions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PositionConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_PositionConstraint*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PositionConstraint), &Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_PositionConstraint",
	Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers),
	sizeof(FRigUnit_PositionConstraint),
	alignof(FRigUnit_PositionConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.InnerSingleton;
}
void FRigUnit_PositionConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PositionConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight
	);
}
// End ScriptStruct FRigUnit_PositionConstraint

// Begin ScriptStruct FRigUnit_PositionConstraintLocalSpaceOffset
static_assert(std::is_polymorphic<FRigUnit_PositionConstraintLocalSpaceOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_PositionConstraintLocalSpaceOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset;
class UScriptStruct* FRigUnit_PositionConstraintLocalSpaceOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PositionConstraintLocalSpaceOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute;
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PositionConstraintLocalSpaceOffset::Execute"), &FRigUnit_PositionConstraintLocalSpaceOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton, Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PositionConstraintLocalSpaceOffset>()
{
	return FRigUnit_PositionConstraintLocalSpaceOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's position to multiple items' positions \n*/" },
		{ "DisplayName", "Position Constraint" },
		{ "Keywords", "Parent,Translation" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's position to multiple items' positions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PositionConstraintLocalSpaceOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_PositionConstraintLocalSpaceOffset*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PositionConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildCache_MetaData), NewProp_ChildCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCaches_MetaData), NewProp_ParentCaches_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ChildCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_PositionConstraintLocalSpaceOffset",
	Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers),
	sizeof(FRigUnit_PositionConstraintLocalSpaceOffset),
	alignof(FRigUnit_PositionConstraintLocalSpaceOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.InnerSingleton;
}
void FRigUnit_PositionConstraintLocalSpaceOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PositionConstraintLocalSpaceOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight,
		ChildCache,
		ParentCaches
	);
}
// End ScriptStruct FRigUnit_PositionConstraintLocalSpaceOffset

// Begin ScriptStruct FRigUnit_RotationConstraint_AdvancedSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings;
class UScriptStruct* FRigUnit_RotationConstraint_AdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RotationConstraint_AdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RotationConstraint_AdvancedSettings>()
{
	return FRigUnit_RotationConstraint_AdvancedSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Options for interpolating rotations\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Options for interpolating rotations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrderForFilter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Rotation is converted to euler angles using the specified order such that individual axes can be filtered.\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Rotation is converted to euler angles using the specified order such that individual axes can be filtered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrderForFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrderForFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RotationConstraint_AdvancedSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint_AdvancedSettings, InterpolationType), Z_Construct_UEnum_ControlRig_EConstraintInterpType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 1145129132
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter = { "RotationOrderForFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint_AdvancedSettings, RotationOrderForFilter), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrderForFilter_MetaData), NewProp_RotationOrderForFilter_MetaData) }; // 1031303920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_RotationConstraint_AdvancedSettings",
	Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers),
	sizeof(FRigUnit_RotationConstraint_AdvancedSettings),
	alignof(FRigUnit_RotationConstraint_AdvancedSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.InnerSingleton;
}
// End ScriptStruct FRigUnit_RotationConstraint_AdvancedSettings

// Begin ScriptStruct FRigUnit_RotationConstraint
static_assert(std::is_polymorphic<FRigUnit_RotationConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_RotationConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint;
class UScriptStruct* FRigUnit_RotationConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RotationConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RotationConstraint_Execute;
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_RotationConstraint_AdvancedSettings"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RotationConstraint::Execute"), &FRigUnit_RotationConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton, Arguments_FRigUnit_RotationConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RotationConstraint>()
{
	return FRigUnit_RotationConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's rotation to multiple items' rotations \n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Rotation Constraint" },
		{ "Keywords", "Parent,Orientation,Orient,Rotate" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's rotation to multiple items' rotations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RotationConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_RotationConstraint*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RotationConstraint), &Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 3229503179
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_AdvancedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_RotationConstraint",
	Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers),
	sizeof(FRigUnit_RotationConstraint),
	alignof(FRigUnit_RotationConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.InnerSingleton;
}
void FRigUnit_RotationConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_RotationConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		AdvancedSettings,
		Weight
	);
}
// End ScriptStruct FRigUnit_RotationConstraint

// Begin ScriptStruct FRigUnit_RotationConstraintLocalSpaceOffset
static_assert(std::is_polymorphic<FRigUnit_RotationConstraintLocalSpaceOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_RotationConstraintLocalSpaceOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset;
class UScriptStruct* FRigUnit_RotationConstraintLocalSpaceOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RotationConstraintLocalSpaceOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute;
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_RotationConstraint_AdvancedSettings"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RotationConstraintLocalSpaceOffset::Execute"), &FRigUnit_RotationConstraintLocalSpaceOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton, Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RotationConstraintLocalSpaceOffset>()
{
	return FRigUnit_RotationConstraintLocalSpaceOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's rotation to multiple items' rotations \n*/" },
		{ "DisplayName", "Rotation Constraint" },
		{ "Keywords", "Parent,Orientation,Orient,Rotate" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's rotation to multiple items' rotations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RotationConstraintLocalSpaceOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_RotationConstraintLocalSpaceOffset*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RotationConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 3229503179
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildCache_MetaData), NewProp_ChildCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCaches_MetaData), NewProp_ParentCaches_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ChildCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_RotationConstraintLocalSpaceOffset",
	Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers),
	sizeof(FRigUnit_RotationConstraintLocalSpaceOffset),
	alignof(FRigUnit_RotationConstraintLocalSpaceOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.InnerSingleton;
}
void FRigUnit_RotationConstraintLocalSpaceOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_RotationConstraintLocalSpaceOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		AdvancedSettings,
		Weight,
		ChildCache,
		ParentCaches
	);
}
// End ScriptStruct FRigUnit_RotationConstraintLocalSpaceOffset

// Begin ScriptStruct FRigUnit_ScaleConstraint
static_assert(std::is_polymorphic<FRigUnit_ScaleConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ScaleConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint;
class UScriptStruct* FRigUnit_ScaleConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ScaleConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ScaleConstraint_Execute;
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ScaleConstraint::Execute"), &FRigUnit_ScaleConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton, Arguments_FRigUnit_ScaleConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ScaleConstraint>()
{
	return FRigUnit_ScaleConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's scale to multiple items' scales\n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Scale Constraint" },
		{ "Keywords", "Parent, Size" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's scale to multiple items' scales" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ScaleConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_ScaleConstraint*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ScaleConstraint), &Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_ScaleConstraint",
	Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers),
	sizeof(FRigUnit_ScaleConstraint),
	alignof(FRigUnit_ScaleConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.InnerSingleton;
}
void FRigUnit_ScaleConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ScaleConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight
	);
}
// End ScriptStruct FRigUnit_ScaleConstraint

// Begin ScriptStruct FRigUnit_ScaleConstraintLocalSpaceOffset
static_assert(std::is_polymorphic<FRigUnit_ScaleConstraintLocalSpaceOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ScaleConstraintLocalSpaceOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset;
class UScriptStruct* FRigUnit_ScaleConstraintLocalSpaceOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ScaleConstraintLocalSpaceOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute;
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ScaleConstraintLocalSpaceOffset::Execute"), &FRigUnit_ScaleConstraintLocalSpaceOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton, Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ScaleConstraintLocalSpaceOffset>()
{
	return FRigUnit_ScaleConstraintLocalSpaceOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's scale to multiple items' scales\n*/" },
		{ "DisplayName", "Scale Constraint" },
		{ "Keywords", "Parent, Size" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's scale to multiple items' scales" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ScaleConstraintLocalSpaceOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_ScaleConstraintLocalSpaceOffset*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ScaleConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildCache_MetaData), NewProp_ChildCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCaches_MetaData), NewProp_ParentCaches_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ChildCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_ScaleConstraintLocalSpaceOffset",
	Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers),
	sizeof(FRigUnit_ScaleConstraintLocalSpaceOffset),
	alignof(FRigUnit_ScaleConstraintLocalSpaceOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.InnerSingleton;
}
void FRigUnit_ScaleConstraintLocalSpaceOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight,
		ChildCache,
		ParentCaches
	);
}
// End ScriptStruct FRigUnit_ScaleConstraintLocalSpaceOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConstraintInterpType_StaticEnum, TEXT("EConstraintInterpType"), &Z_Registration_Info_UEnum_EConstraintInterpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1145129132U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstraintTarget::StaticStruct, Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewStructOps, TEXT("ConstraintTarget"), &Z_Registration_Info_UScriptStruct_ConstraintTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintTarget), 3399455846U) },
		{ FRigUnit_TransformConstraint_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewStructOps, TEXT("RigUnit_TransformConstraint_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformConstraint_WorkData), 337420075U) },
		{ FRigUnit_TransformConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewStructOps, TEXT("RigUnit_TransformConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformConstraint), 995313129U) },
		{ FRigUnit_TransformConstraintPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewStructOps, TEXT("RigUnit_TransformConstraintPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformConstraintPerItem), 780621352U) },
		{ FConstraintParent::StaticStruct, Z_Construct_UScriptStruct_FConstraintParent_Statics::NewStructOps, TEXT("ConstraintParent"), &Z_Registration_Info_UScriptStruct_ConstraintParent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintParent), 327716568U) },
		{ FRigUnit_ParentConstraint_AdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewStructOps, TEXT("RigUnit_ParentConstraint_AdvancedSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentConstraint_AdvancedSettings), 2571479710U) },
		{ FRigUnit_ParentConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewStructOps, TEXT("RigUnit_ParentConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentConstraint), 786456620U) },
		{ FRigUnit_ParentConstraintMath_AdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_AdvancedSettings_Statics::NewStructOps, TEXT("RigUnit_ParentConstraintMath_AdvancedSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath_AdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentConstraintMath_AdvancedSettings), 3117262082U) },
		{ FRigUnit_ParentConstraintMath::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentConstraintMath_Statics::NewStructOps, TEXT("RigUnit_ParentConstraintMath"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraintMath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentConstraintMath), 2282602091U) },
		{ FRigUnit_PositionConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewStructOps, TEXT("RigUnit_PositionConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PositionConstraint), 3694026380U) },
		{ FRigUnit_PositionConstraintLocalSpaceOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewStructOps, TEXT("RigUnit_PositionConstraintLocalSpaceOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PositionConstraintLocalSpaceOffset), 2316132605U) },
		{ FRigUnit_RotationConstraint_AdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewStructOps, TEXT("RigUnit_RotationConstraint_AdvancedSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RotationConstraint_AdvancedSettings), 3229503179U) },
		{ FRigUnit_RotationConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewStructOps, TEXT("RigUnit_RotationConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RotationConstraint), 151465349U) },
		{ FRigUnit_RotationConstraintLocalSpaceOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewStructOps, TEXT("RigUnit_RotationConstraintLocalSpaceOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RotationConstraintLocalSpaceOffset), 342569891U) },
		{ FRigUnit_ScaleConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewStructOps, TEXT("RigUnit_ScaleConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ScaleConstraint), 365582174U) },
		{ FRigUnit_ScaleConstraintLocalSpaceOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewStructOps, TEXT("RigUnit_ScaleConstraintLocalSpaceOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ScaleConstraintLocalSpaceOffset), 3710392152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_1812087689(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
