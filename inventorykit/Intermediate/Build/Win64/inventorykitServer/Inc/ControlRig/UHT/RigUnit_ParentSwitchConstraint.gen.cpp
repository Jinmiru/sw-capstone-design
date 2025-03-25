// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ParentSwitchConstraint() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_ParentSwitchConstraint
static_assert(std::is_polymorphic<FRigUnit_ParentSwitchConstraint>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ParentSwitchConstraint cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint;
class UScriptStruct* FRigUnit_ParentSwitchConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentSwitchConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParentSwitchConstraint_Execute;
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Subject"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("ParentIndex"), TEXT("int32"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Parents"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("InitialGlobalTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Switched"), TEXT("bool"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("CachedSubject"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("RelativeOffset"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParentSwitchConstraint::Execute"), &FRigUnit_ParentSwitchConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton, Arguments_FRigUnit_ParentSwitchConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentSwitchConstraint>()
{
	return FRigUnit_ParentSwitchConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The Parent Switch Constraint is used to have an item follow one of multiple parents,\n * and allowing to switch between the parent in question.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Parent Switch Constraint" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SpaceSwitch" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The Parent Switch Constraint is used to have an item follow one of multiple parents,\nand allowing to switch between the parent in question." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The subject to constrain\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The subject to constrain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent index to use for constraining the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The parent index to use for constraining the subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The list of parents to constrain to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The list of parents to constrain to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialGlobalTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The initial global transform for the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The initial global transform for the subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform result (full without weighting)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform result (full without weighting)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switched_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Returns true if the parent has changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if the parent has changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSubject_MetaData[] = {
		{ "Comment", "// Used to cache the internally used subject\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parent\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[] = {
		{ "Comment", "// The cached relative offset between subject and parent\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The cached relative offset between subject and parent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialGlobalTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_Switched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Switched;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSubject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentSwitchConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Subject), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subject_MetaData), NewProp_Subject_MetaData) }; // 1447557315
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, ParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Parents), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_InitialGlobalTransform = { "InitialGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, InitialGlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialGlobalTransform_MetaData), NewProp_InitialGlobalTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched_SetBit(void* Obj)
{
	((FRigUnit_ParentSwitchConstraint*)Obj)->Switched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched = { "Switched", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ParentSwitchConstraint), &Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switched_MetaData), NewProp_Switched_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedSubject = { "CachedSubject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, CachedSubject), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSubject_MetaData), NewProp_CachedSubject_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedParent_MetaData), NewProp_CachedParent_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeOffset_MetaData), NewProp_RelativeOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Subject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_ParentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_InitialGlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedSubject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_RelativeOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_ParentSwitchConstraint",
	Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::PropPointers),
	sizeof(FRigUnit_ParentSwitchConstraint),
	alignof(FRigUnit_ParentSwitchConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.InnerSingleton;
}
void FRigUnit_ParentSwitchConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ParentSwitchConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Subject,
		ParentIndex,
		Parents,
		InitialGlobalTransform,
		Weight,
		Transform,
		Switched,
		CachedSubject,
		CachedParent,
		RelativeOffset
	);
}
// End ScriptStruct FRigUnit_ParentSwitchConstraint

// Begin ScriptStruct FRigUnit_ParentSwitchConstraintArray
static_assert(std::is_polymorphic<FRigUnit_ParentSwitchConstraintArray>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ParentSwitchConstraintArray cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray;
class UScriptStruct* FRigUnit_ParentSwitchConstraintArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentSwitchConstraintArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParentSwitchConstraintArray_Execute;
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Subject"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("ParentIndex"), TEXT("int32"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("InitialGlobalTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Switched"), TEXT("bool"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("CachedSubject"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("RelativeOffset"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParentSwitchConstraintArray::Execute"), &FRigUnit_ParentSwitchConstraintArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton, Arguments_FRigUnit_ParentSwitchConstraintArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentSwitchConstraintArray>()
{
	return FRigUnit_ParentSwitchConstraintArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n * The Parent Switch Constraint is used to have an item follow one of multiple parents,\n * and allowing to switch between the parent in question.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Parent Switch Constraint" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SpaceSwitch" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The Parent Switch Constraint is used to have an item follow one of multiple parents,\nand allowing to switch between the parent in question." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The subject to constrain\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The subject to constrain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent index to use for constraining the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The parent index to use for constraining the subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The list of parents to constrain to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The list of parents to constrain to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialGlobalTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The initial global transform for the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The initial global transform for the subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform result (full without weighting)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform result (full without weighting)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switched_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Returns true if the parent has changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if the parent has changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSubject_MetaData[] = {
		{ "Comment", "// Used to cache the internally used subject\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parent\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[] = {
		{ "Comment", "// The cached relative offset between subject and parent\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The cached relative offset between subject and parent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialGlobalTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_Switched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Switched;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSubject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentSwitchConstraintArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Subject), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subject_MetaData), NewProp_Subject_MetaData) }; // 1447557315
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, ParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_InitialGlobalTransform = { "InitialGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, InitialGlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialGlobalTransform_MetaData), NewProp_InitialGlobalTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched_SetBit(void* Obj)
{
	((FRigUnit_ParentSwitchConstraintArray*)Obj)->Switched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched = { "Switched", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ParentSwitchConstraintArray), &Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switched_MetaData), NewProp_Switched_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedSubject = { "CachedSubject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, CachedSubject), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSubject_MetaData), NewProp_CachedSubject_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedParent_MetaData), NewProp_CachedParent_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeOffset_MetaData), NewProp_RelativeOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Subject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_ParentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_InitialGlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedSubject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_RelativeOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_ParentSwitchConstraintArray",
	Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::PropPointers),
	sizeof(FRigUnit_ParentSwitchConstraintArray),
	alignof(FRigUnit_ParentSwitchConstraintArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.InnerSingleton;
}
void FRigUnit_ParentSwitchConstraintArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ParentSwitchConstraintArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Parents_2_Array(Parents);
	StaticExecute(
		InExecuteContext,
		Subject,
		ParentIndex,
		Parents_2_Array,
		InitialGlobalTransform,
		Weight,
		Transform,
		Switched,
		CachedSubject,
		CachedParent,
		RelativeOffset
	);
}
// End ScriptStruct FRigUnit_ParentSwitchConstraintArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_ParentSwitchConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewStructOps, TEXT("RigUnit_ParentSwitchConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentSwitchConstraint), 1399709111U) },
		{ FRigUnit_ParentSwitchConstraintArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewStructOps, TEXT("RigUnit_ParentSwitchConstraintArray"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentSwitchConstraintArray), 3632710707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_117902437(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
