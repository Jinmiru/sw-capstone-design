// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h"
#include "Runtime/AnimationCore/Public/Constraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AimBone() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintParent();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_Target();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBoneMath();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem_Target();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_AimBone_Target
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target;
class UScriptStruct* FRigUnit_AimBone_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBone_Target"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBone_Target>()
{
	return FRigUnit_AimBone_Target::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The amount of aim rotation to apply on this target.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The amount of aim rotation to apply on this target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The axis to align with the aim on this target\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The axis to align with the aim on this target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The target to aim at - can be a direction or location based on the Kind setting\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The target to aim at - can be a direction or location based on the Kind setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The kind of target this is representing - can be a direction or a location\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The kind of target this is representing - can be a direction or a location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The space in which the target is expressed\n\x09 */" },
		{ "DisplayName", "Target Space" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The space in which the target is expressed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBone_Target>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Kind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kind_MetaData), NewProp_Kind_MetaData) }; // 3851874651
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_AimBone_Target",
	Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::PropPointers),
	sizeof(FRigUnit_AimBone_Target),
	alignof(FRigUnit_AimBone_Target),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_Target()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.InnerSingleton;
}
// End ScriptStruct FRigUnit_AimBone_Target

// Begin ScriptStruct FRigUnit_AimItem_Target
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target;
class UScriptStruct* FRigUnit_AimItem_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimItem_Target"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimItem_Target>()
{
	return FRigUnit_AimItem_Target::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The amount of aim rotation to apply on this target.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The amount of aim rotation to apply on this target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The axis to align with the aim on this target\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The axis to align with the aim on this target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The target to aim at - can be a direction or location based on the Kind setting\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The target to aim at - can be a direction or location based on the Kind setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The kind of target this is representing - can be a direction or a location\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The kind of target this is representing - can be a direction or a location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The space in which the target is expressed\n\x09 */" },
		{ "DisplayName", "Target Space" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The space in which the target is expressed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimItem_Target>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Kind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kind_MetaData), NewProp_Kind_MetaData) }; // 3851874651
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_AimItem_Target",
	Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::PropPointers),
	sizeof(FRigUnit_AimItem_Target),
	alignof(FRigUnit_AimItem_Target),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem_Target()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.InnerSingleton;
}
// End ScriptStruct FRigUnit_AimItem_Target

// Begin ScriptStruct FRigUnit_AimBone_DebugSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings;
class UScriptStruct* FRigUnit_AimBone_DebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBone_DebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBone_DebugSettings>()
{
	return FRigUnit_AimBone_DebugSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If enabled debug information will be drawn \n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "If enabled debug information will be drawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The size of the debug drawing information\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The offset at which to draw the debug information in the world\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The offset at which to draw the debug information in the world" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBone_DebugSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_AimBone_DebugSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AimBone_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone_DebugSettings, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone_DebugSettings, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_WorldOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_AimBone_DebugSettings",
	Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::PropPointers),
	sizeof(FRigUnit_AimBone_DebugSettings),
	alignof(FRigUnit_AimBone_DebugSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.InnerSingleton;
}
// End ScriptStruct FRigUnit_AimBone_DebugSettings

// Begin ScriptStruct FRigUnit_AimBoneMath
static_assert(std::is_polymorphic<FRigUnit_AimBoneMath>() == std::is_polymorphic<FRigUnit_HighlevelBase>(), "USTRUCT FRigUnit_AimBoneMath cannot be polymorphic unless super FRigUnit_HighlevelBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath;
class UScriptStruct* FRigUnit_AimBoneMath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBoneMath"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AimBoneMath_Execute;
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("InputTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("Primary"), TEXT("FRigUnit_AimItem_Target"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("Secondary"), TEXT("FRigUnit_AimItem_Target"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_AimBone_DebugSettings"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("PrimaryCachedSpace"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("SecondaryCachedSpace"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimBoneMath_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimBoneMath::Execute"), &FRigUnit_AimBoneMath::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton, Arguments_FRigUnit_AimBoneMath_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBoneMath>()
{
	return FRigUnit_AimBoneMath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Outputs an aligned transform of a primary and secondary axis of an input transform to a world target.\n * Note: This node operates in world space!\n */" },
		{ "DisplayName", "Aim Math" },
		{ "Keywords", "Lookat" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Outputs an aligned transform of a primary and secondary axis of an input transform to a world target.\nNote: This node operates in world space!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform (in global space) before the aim was applied (optional)\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The transform (in global space) before the aim was applied (optional)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The primary target for the aim\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The primary target for the aim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The secondary target for the aim - also referred to as PoleVector / UpVector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The secondary target for the aim - also referred to as PoleVector / UpVector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The resulting transform\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "Output", "" },
		{ "ToolTip", "The resulting transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The debug setting for the node */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The debug setting for the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Secondary;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryCachedSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryCachedSpace;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBoneMath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_InputTransform = { "InputTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, InputTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTransform_MetaData), NewProp_InputTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Primary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primary_MetaData), NewProp_Primary_MetaData) }; // 3973008005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Secondary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Secondary_MetaData), NewProp_Secondary_MetaData) }; // 3973008005
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 3550390151
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_PrimaryCachedSpace = { "PrimaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, PrimaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryCachedSpace_MetaData), NewProp_PrimaryCachedSpace_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_SecondaryCachedSpace = { "SecondaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, SecondaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryCachedSpace_MetaData), NewProp_SecondaryCachedSpace_MetaData) }; // 2782416853
void Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((FRigUnit_AimBoneMath*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AimBoneMath), &Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_InputTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Primary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Secondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_PrimaryCachedSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_SecondaryCachedSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_bIsInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBase,
	&NewStructOps,
	"RigUnit_AimBoneMath",
	Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::PropPointers),
	sizeof(FRigUnit_AimBoneMath),
	alignof(FRigUnit_AimBoneMath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBoneMath()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.InnerSingleton;
}
void FRigUnit_AimBoneMath::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_AimBoneMath::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		InputTransform,
		Primary,
		Secondary,
		Weight,
		Result,
		DebugSettings,
		PrimaryCachedSpace,
		SecondaryCachedSpace,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_AimBoneMath

// Begin ScriptStruct FRigUnit_AimBone
static_assert(std::is_polymorphic<FRigUnit_AimBone>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_AimBone cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBone;
class UScriptStruct* FRigUnit_AimBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBone"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AimBone_Execute;
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("Bone"), TEXT("FName"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("Primary"), TEXT("FRigUnit_AimBone_Target"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("Secondary"), TEXT("FRigUnit_AimBone_Target"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_AimBone_DebugSettings"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("CachedBoneIndex"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("PrimaryCachedSpace"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("SecondaryCachedSpace"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimBone_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimBone::Execute"), &FRigUnit_AimBone::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton, Arguments_FRigUnit_AimBone_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBone>()
{
	return FRigUnit_AimBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Aligns the rotation of a primary and secondary axis of a bone to a global target.\n * Note: This node operates in global space!\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Aim" },
		{ "Keywords", "Lookat" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Aligns the rotation of a primary and secondary axis of a bone to a global target.\nNote: This node operates in global space!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The name of the bone to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The primary target for the aim \n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The primary target for the aim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The secondary target for the aim - also referred to as PoleVector / UpVector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The secondary target for the aim - also referred to as PoleVector / UpVector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The debug setting for the node */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The debug setting for the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Secondary;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoneIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryCachedSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryCachedSpace;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, Primary), Z_Construct_UScriptStruct_FRigUnit_AimBone_Target, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primary_MetaData), NewProp_Primary_MetaData) }; // 1254817935
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, Secondary), Z_Construct_UScriptStruct_FRigUnit_AimBone_Target, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Secondary_MetaData), NewProp_Secondary_MetaData) }; // 1254817935
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_AimBone*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AimBone), &Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 3550390151
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_CachedBoneIndex = { "CachedBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, CachedBoneIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBoneIndex_MetaData), NewProp_CachedBoneIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_PrimaryCachedSpace = { "PrimaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, PrimaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryCachedSpace_MetaData), NewProp_PrimaryCachedSpace_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_SecondaryCachedSpace = { "SecondaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimBone, SecondaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryCachedSpace_MetaData), NewProp_SecondaryCachedSpace_MetaData) }; // 2782416853
void Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((FRigUnit_AimBone*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AimBone), &Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Primary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Secondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_CachedBoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_PrimaryCachedSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_SecondaryCachedSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bIsInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_AimBone",
	Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::PropPointers),
	sizeof(FRigUnit_AimBone),
	alignof(FRigUnit_AimBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBone.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone.InnerSingleton;
}
void FRigUnit_AimBone::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_AimBone::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bone,
		Primary,
		Secondary,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		CachedBoneIndex,
		PrimaryCachedSpace,
		SecondaryCachedSpace,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_AimBone

// Begin ScriptStruct FRigUnit_AimItem
static_assert(std::is_polymorphic<FRigUnit_AimItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_AimItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimItem;
class UScriptStruct* FRigUnit_AimItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AimItem_Execute;
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("Primary"), TEXT("FRigUnit_AimItem_Target"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("Secondary"), TEXT("FRigUnit_AimItem_Target"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_AimBone_DebugSettings"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("CachedItem"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("PrimaryCachedSpace"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("SecondaryCachedSpace"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimItem_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimItem::Execute"), &FRigUnit_AimItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton, Arguments_FRigUnit_AimItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimItem>()
{
	return FRigUnit_AimItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Aligns the rotation of a primary and secondary axis of a bone to a global target.\n * Note: This node operates in global space!\n */" },
		{ "DisplayName", "Aim" },
		{ "Keywords", "Lookat" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Aligns the rotation of a primary and secondary axis of a bone to a global target.\nNote: This node operates in global space!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the item to align\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The name of the item to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The primary target for the aim \n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The primary target for the aim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The secondary target for the aim - also referred to as PoleVector / UpVector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The secondary target for the aim - also referred to as PoleVector / UpVector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The debug setting for the node */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The debug setting for the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Secondary;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryCachedSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryCachedSpace;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, Primary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primary_MetaData), NewProp_Primary_MetaData) }; // 3973008005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, Secondary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Secondary_MetaData), NewProp_Secondary_MetaData) }; // 3973008005
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 3550390151
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_CachedItem = { "CachedItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, CachedItem), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItem_MetaData), NewProp_CachedItem_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_PrimaryCachedSpace = { "PrimaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, PrimaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryCachedSpace_MetaData), NewProp_PrimaryCachedSpace_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_SecondaryCachedSpace = { "SecondaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimItem, SecondaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryCachedSpace_MetaData), NewProp_SecondaryCachedSpace_MetaData) }; // 2782416853
void Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((FRigUnit_AimItem*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AimItem), &Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Primary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Secondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_CachedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_PrimaryCachedSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_SecondaryCachedSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_bIsInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_AimItem",
	Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::PropPointers),
	sizeof(FRigUnit_AimItem),
	alignof(FRigUnit_AimItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimItem.InnerSingleton;
}
void FRigUnit_AimItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_AimItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Primary,
		Secondary,
		Weight,
		DebugSettings,
		CachedItem,
		PrimaryCachedSpace,
		SecondaryCachedSpace,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_AimItem

// Begin ScriptStruct FRigUnit_AimConstraint_WorldUp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp;
class UScriptStruct* FRigUnit_AimConstraint_WorldUp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimConstraint_WorldUp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimConstraint_WorldUp>()
{
	return FRigUnit_AimConstraint_WorldUp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The target to aim at - can be a direction or location based on the Kind setting\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The target to aim at - can be a direction or location based on the Kind setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The kind of target this is representing - can be a direction or a location\n\x09 */" },
		{ "DisplayName", "Target is" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The kind of target this is representing - can be a direction or a location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The space in which the target is expressed, use None to indicate world space\n\x09 */" },
		{ "DisplayName", "Target Space" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The space in which the target is expressed, use None to indicate world space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimConstraint_WorldUp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraint_WorldUp, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraint_WorldUp, Kind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kind_MetaData), NewProp_Kind_MetaData) }; // 3851874651
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraint_WorldUp, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Kind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Kind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_AimConstraint_WorldUp",
	Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::PropPointers),
	sizeof(FRigUnit_AimConstraint_WorldUp),
	alignof(FRigUnit_AimConstraint_WorldUp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp.InnerSingleton;
}
// End ScriptStruct FRigUnit_AimConstraint_WorldUp

// Begin ScriptStruct FRigUnit_AimConstraint_AdvancedSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings;
class UScriptStruct* FRigUnit_AimConstraint_AdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimConstraint_AdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimConstraint_AdvancedSettings>()
{
	return FRigUnit_AimConstraint_AdvancedSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09*\x09Settings related to debug drawings\n\x09*/" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Settings related to debug drawings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrderForFilter_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09*\x09Rotation is converted to euler angles using the specified order such that individual axes can be filtered.\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Rotation is converted to euler angles using the specified order such that individual axes can be filtered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrderForFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrderForFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimConstraint_AdvancedSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraint_AdvancedSettings, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 3550390151
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter = { "RotationOrderForFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraint_AdvancedSettings, RotationOrderForFilter), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrderForFilter_MetaData), NewProp_RotationOrderForFilter_MetaData) }; // 1031303920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_AimConstraint_AdvancedSettings",
	Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::PropPointers),
	sizeof(FRigUnit_AimConstraint_AdvancedSettings),
	alignof(FRigUnit_AimConstraint_AdvancedSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings.InnerSingleton;
}
// End ScriptStruct FRigUnit_AimConstraint_AdvancedSettings

// Begin ScriptStruct FRigUnit_AimConstraintLocalSpaceOffset
static_assert(std::is_polymorphic<FRigUnit_AimConstraintLocalSpaceOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_AimConstraintLocalSpaceOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset;
class UScriptStruct* FRigUnit_AimConstraintLocalSpaceOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimConstraintLocalSpaceOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute;
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("AimAxis"), TEXT("FVector"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("UpAxis"), TEXT("FVector"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("WorldUp"), TEXT("FRigUnit_AimConstraint_WorldUp"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_AimConstraint_AdvancedSettings"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("WorldUpSpaceCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimConstraintLocalSpaceOffset::Execute"), &FRigUnit_AimConstraintLocalSpaceOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset.OuterSingleton, Arguments_FRigUnit_AimConstraintLocalSpaceOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimConstraintLocalSpaceOffset>()
{
	return FRigUnit_AimConstraintLocalSpaceOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n * Orients an item such that its aim axis points towards a global target.\n * Note: This node operates in global space!\n */" },
		{ "DisplayName", "Aim Constraint" },
		{ "Keywords", "Lookat, Aim" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Orients an item such that its aim axis points towards a global target.\nNote: This node operates in global space!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the item to apply aim\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The name of the item to apply aim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 *\x09Maintains the offset between child and weighted average of parents based on initial transforms\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Maintains the offset between child and weighted average of parents based on initial transforms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Filters the final rotation by axes based on the euler rotation order defined in the node's advanced settings\n\x09 * If flipping is observed, try adjusting the rotation order\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Filters the final rotation by axes based on the euler rotation order defined in the node's advanced settings\nIf flipping is observed, try adjusting the rotation order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Child is rotated so that its AimAxis points to the parents\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Child is rotated so that its AimAxis points to the parents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Child is rotated around the AimAxis so that its UpAxis points to/Aligns with the WorldUp target \n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Child is rotated around the AimAxis so that its UpAxis points to/Aligns with the WorldUp target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldUp_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines how Child should rotate around the AimAxis. This is the aim target for the UpAxis\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Defines how Child should rotate around the AimAxis. This is the aim target for the UpAxis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Pins" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldUpSpaceCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldUpSpaceCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimConstraintLocalSpaceOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FRigUnit_AimConstraintLocalSpaceOffset*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AimConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_AimAxis = { "AimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, AimAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAxis_MetaData), NewProp_AimAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, UpAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAxis_MetaData), NewProp_UpAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_WorldUp = { "WorldUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, WorldUp), Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldUp_MetaData), NewProp_WorldUp_MetaData) }; // 3866411001
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 327716568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 327716568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 4265537965
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_WorldUpSpaceCache = { "WorldUpSpaceCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, WorldUpSpaceCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldUpSpaceCache_MetaData), NewProp_WorldUpSpaceCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildCache_MetaData), NewProp_ChildCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AimConstraintLocalSpaceOffset, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCaches_MetaData), NewProp_ParentCaches_MetaData) }; // 2782416853
void Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((FRigUnit_AimConstraintLocalSpaceOffset*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AimConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_AimAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_UpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_WorldUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_WorldUpSpaceCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_ChildCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewProp_bIsInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_AimConstraintLocalSpaceOffset",
	Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::PropPointers),
	sizeof(FRigUnit_AimConstraintLocalSpaceOffset),
	alignof(FRigUnit_AimConstraintLocalSpaceOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset.InnerSingleton;
}
void FRigUnit_AimConstraintLocalSpaceOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_AimConstraintLocalSpaceOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_6_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		AimAxis,
		UpAxis,
		WorldUp,
		Parents_6_Array,
		AdvancedSettings,
		Weight,
		WorldUpSpaceCache,
		ChildCache,
		ParentCaches,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_AimConstraintLocalSpaceOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_AimBone_Target::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewStructOps, TEXT("RigUnit_AimBone_Target"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBone_Target), 1254817935U) },
		{ FRigUnit_AimItem_Target::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewStructOps, TEXT("RigUnit_AimItem_Target"), &Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimItem_Target), 3973008005U) },
		{ FRigUnit_AimBone_DebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewStructOps, TEXT("RigUnit_AimBone_DebugSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBone_DebugSettings), 3550390151U) },
		{ FRigUnit_AimBoneMath::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewStructOps, TEXT("RigUnit_AimBoneMath"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBoneMath), 2860654060U) },
		{ FRigUnit_AimBone::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewStructOps, TEXT("RigUnit_AimBone"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBone), 341724079U) },
		{ FRigUnit_AimItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewStructOps, TEXT("RigUnit_AimItem"), &Z_Registration_Info_UScriptStruct_RigUnit_AimItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimItem), 3505165811U) },
		{ FRigUnit_AimConstraint_WorldUp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics::NewStructOps, TEXT("RigUnit_AimConstraint_WorldUp"), &Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorldUp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimConstraint_WorldUp), 3866411001U) },
		{ FRigUnit_AimConstraint_AdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics::NewStructOps, TEXT("RigUnit_AimConstraint_AdvancedSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_AdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimConstraint_AdvancedSettings), 4265537965U) },
		{ FRigUnit_AimConstraintLocalSpaceOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics::NewStructOps, TEXT("RigUnit_AimConstraintLocalSpaceOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_AimConstraintLocalSpaceOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimConstraintLocalSpaceOffset), 4135373123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_407705757(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
