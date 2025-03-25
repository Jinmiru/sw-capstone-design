// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DistributeRotation() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_DistributeRotation_Rotation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation;
class UScriptStruct* FRigUnit_DistributeRotation_Rotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotation_Rotation"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotation_Rotation>()
{
	return FRigUnit_DistributeRotation_Rotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The rotation to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The rotation to be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio of where this rotation sits along the chain\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The ratio of where this rotation sits along the chain" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotation_Rotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation_Rotation, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation_Rotation, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_DistributeRotation_Rotation",
	Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::PropPointers),
	sizeof(FRigUnit_DistributeRotation_Rotation),
	alignof(FRigUnit_DistributeRotation_Rotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.InnerSingleton;
}
// End ScriptStruct FRigUnit_DistributeRotation_Rotation

// Begin ScriptStruct FRigUnit_DistributeRotation_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData;
class UScriptStruct* FRigUnit_DistributeRotation_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotation_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotation_WorkData>()
{
	return FRigUnit_DistributeRotation_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemLocalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemRotationA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemRotationB_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemRotationT_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemLocalTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemLocalTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotation_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItems_MetaData), NewProp_CachedItems_MetaData) }; // 2782416853
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA_Inner = { "ItemRotationA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA = { "ItemRotationA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemRotationA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRotationA_MetaData), NewProp_ItemRotationA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB_Inner = { "ItemRotationB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB = { "ItemRotationB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemRotationB), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRotationB_MetaData), NewProp_ItemRotationB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT_Inner = { "ItemRotationT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT = { "ItemRotationT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemRotationT), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRotationT_MetaData), NewProp_ItemRotationT_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms_Inner = { "ItemLocalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms = { "ItemLocalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemLocalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemLocalTransforms_MetaData), NewProp_ItemLocalTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_DistributeRotation_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_DistributeRotation_WorkData),
	alignof(FRigUnit_DistributeRotation_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_DistributeRotation_WorkData

// Begin ScriptStruct FRigUnit_DistributeRotation
static_assert(std::is_polymorphic<FRigUnit_DistributeRotation>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_DistributeRotation cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation;
class UScriptStruct* FRigUnit_DistributeRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DistributeRotation_Execute;
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("EndBone"), TEXT("FName"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_DistributeRotation_Rotation>"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_DistributeRotation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DistributeRotation::Execute"), &FRigUnit_DistributeRotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton, Arguments_FRigUnit_DistributeRotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotation>()
{
	return FRigUnit_DistributeRotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Distributes rotations provided along a chain.\n * Each rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\n * Note: This node adds rotation in local space of each bone!\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Distribute Rotation" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "Distributes rotations provided along a chain.\nEach rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\nNote: This node adds rotation in local space of each bone!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the first bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The name of the first bone to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the last bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The name of the last bone to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The list of rotations to be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation, StartBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBone_MetaData), NewProp_StartBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation, EndBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndBone_MetaData), NewProp_EndBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, METADATA_PARAMS(0, nullptr) }; // 4199986030
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 4199986030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_DistributeRotation*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_DistributeRotation), &Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotation, WorkData), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 1774646428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_StartBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_EndBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_DistributeRotation",
	Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::PropPointers),
	sizeof(FRigUnit_DistributeRotation),
	alignof(FRigUnit_DistributeRotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.InnerSingleton;
}
void FRigUnit_DistributeRotation::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DistributeRotation::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_DistributeRotation_Rotation> Rotations_2_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		StartBone,
		EndBone,
		Rotations_2_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_DistributeRotation

// Begin ScriptStruct FRigUnit_DistributeRotationForCollection
static_assert(std::is_polymorphic<FRigUnit_DistributeRotationForCollection>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_DistributeRotationForCollection cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection;
class UScriptStruct* FRigUnit_DistributeRotationForCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotationForCollection"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DistributeRotationForCollection_Execute;
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_DistributeRotation_Rotation>"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_DistributeRotation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DistributeRotationForCollection::Execute"), &FRigUnit_DistributeRotationForCollection::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton, Arguments_FRigUnit_DistributeRotationForCollection_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotationForCollection>()
{
	return FRigUnit_DistributeRotationForCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Distributes rotations provided across a collection of items.\n * Each rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\n * Note: This node adds rotation in local space of each item!\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Distribute Rotation" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "Distributes rotations provided across a collection of items.\nEach rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\nNote: This node adds rotation in local space of each item!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to use to distribute the rotation\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The items to use to distribute the rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The list of rotations to be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotationForCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, METADATA_PARAMS(0, nullptr) }; // 4199986030
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 4199986030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, WorkData), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 1774646428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_DistributeRotationForCollection",
	Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::PropPointers),
	sizeof(FRigUnit_DistributeRotationForCollection),
	alignof(FRigUnit_DistributeRotationForCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.InnerSingleton;
}
void FRigUnit_DistributeRotationForCollection::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DistributeRotationForCollection::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_DistributeRotation_Rotation> Rotations_1_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		Items,
		Rotations_1_Array,
		RotationEaseType,
		Weight,
		WorkData
	);
}
// End ScriptStruct FRigUnit_DistributeRotationForCollection

// Begin ScriptStruct FRigUnit_DistributeRotationForItemArray
static_assert(std::is_polymorphic<FRigUnit_DistributeRotationForItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_DistributeRotationForItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray;
class UScriptStruct* FRigUnit_DistributeRotationForItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotationForItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DistributeRotationForItemArray_Execute;
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_DistributeRotation_Rotation>"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_DistributeRotation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DistributeRotationForItemArray::Execute"), &FRigUnit_DistributeRotationForItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton, Arguments_FRigUnit_DistributeRotationForItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotationForItemArray>()
{
	return FRigUnit_DistributeRotationForItemArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Distributes rotations provided across a array of items.\n * Each rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\n * Note: This node adds rotation in local space of each item!\n */" },
		{ "DisplayName", "Distribute Rotation" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "Distributes rotations provided across a array of items.\nEach rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\nNote: This node adds rotation in local space of each item!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to use to distribute the rotation\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The items to use to distribute the rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The list of rotations to be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotationForItemArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, METADATA_PARAMS(0, nullptr) }; // 4199986030
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 4199986030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 1774646428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_DistributeRotationForItemArray",
	Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::PropPointers),
	sizeof(FRigUnit_DistributeRotationForItemArray),
	alignof(FRigUnit_DistributeRotationForItemArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.InnerSingleton;
}
void FRigUnit_DistributeRotationForItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DistributeRotationForItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FRigUnit_DistributeRotation_Rotation> Rotations_1_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Rotations_1_Array,
		RotationEaseType,
		Weight,
		WorkData
	);
}
// End ScriptStruct FRigUnit_DistributeRotationForItemArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_DistributeRotation_Rotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewStructOps, TEXT("RigUnit_DistributeRotation_Rotation"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotation_Rotation), 4199986030U) },
		{ FRigUnit_DistributeRotation_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewStructOps, TEXT("RigUnit_DistributeRotation_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotation_WorkData), 1774646428U) },
		{ FRigUnit_DistributeRotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewStructOps, TEXT("RigUnit_DistributeRotation"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotation), 3106683041U) },
		{ FRigUnit_DistributeRotationForCollection::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewStructOps, TEXT("RigUnit_DistributeRotationForCollection"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotationForCollection), 2798088363U) },
		{ FRigUnit_DistributeRotationForItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewStructOps, TEXT("RigUnit_DistributeRotationForItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotationForItemArray), 3883690945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_2536017148(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
