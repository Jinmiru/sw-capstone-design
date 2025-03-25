// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FullBodyIK/Private/RigUnit_FullbodyIK.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "FullBodyIK/Public/FBIKConstraintOption.h"
#include "FullBodyIK/Public/FBIKDebugOption.h"
#include "FullBodyIK/Public/FBIKShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_FullbodyIK() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKConstraintOption();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKDebugOption();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKEndEffector();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMotionProcessInput();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FSolverInput();
UPackage* Z_Construct_UPackage__Script_FullBodyIK();
// End Cross Module References

// Begin ScriptStruct FFBIKEndEffector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBIKEndEffector;
class UScriptStruct* FFBIKEndEffector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKEndEffector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBIKEndEffector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBIKEndEffector, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("FBIKEndEffector"));
	}
	return Z_Registration_Info_UScriptStruct_FBIKEndEffector.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FFBIKEndEffector>()
{
	return FFBIKEndEffector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFBIKEndEffector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The last item in the chain to solve - the effector\n\x09 */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "The last item in the chain to solve - the effector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionDepth_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationDepth_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pull_MetaData[] = {
		{ "Comment", "/*\n\x09 * Clamps the total length to target by this scale for each iteration \n\x09 * This helps to stabilize solver to reduce singularity by avoiding to try to reach target too far. \n\x09 */" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "* Clamps the total length to target by this scale for each iteration\n* This helps to stabilize solver to reduce singularity by avoiding to try to reach target too far." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pull;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBIKEndEffector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, PositionAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlpha_MetaData), NewProp_PositionAlpha_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionDepth = { "PositionDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, PositionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionDepth_MetaData), NewProp_PositionDepth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationDepth = { "RotationDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, RotationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationDepth_MetaData), NewProp_RotationDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Pull = { "Pull", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKEndEffector, Pull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pull_MetaData), NewProp_Pull_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Pull,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
	nullptr,
	&NewStructOps,
	"FBIKEndEffector",
	Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::PropPointers),
	sizeof(FFBIKEndEffector),
	alignof(FFBIKEndEffector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFBIKEndEffector()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKEndEffector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBIKEndEffector.InnerSingleton, Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBIKEndEffector.InnerSingleton;
}
// End ScriptStruct FFBIKEndEffector

// Begin ScriptStruct FRigUnit_FullbodyIK_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData;
class UScriptStruct* FRigUnit_FullbodyIK_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("RigUnit_FullbodyIK_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FRigUnit_FullbodyIK_WorkData>()
{
	return FRigUnit_FullbodyIK_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FullbodyIK_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
	nullptr,
	&NewStructOps,
	"RigUnit_FullbodyIK_WorkData",
	nullptr,
	0,
	sizeof(FRigUnit_FullbodyIK_WorkData),
	alignof(FRigUnit_FullbodyIK_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_FullbodyIK_WorkData

// Begin ScriptStruct FRigUnit_FullbodyIK
static_assert(std::is_polymorphic<FRigUnit_FullbodyIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FullbodyIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK;
class UScriptStruct* FRigUnit_FullbodyIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("RigUnit_FullbodyIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FullbodyIK_Execute;
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("Root"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("Effectors"), TEXT("TArray<FFBIKEndEffector>"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("Constraints"), TEXT("TArray<FFBIKConstraintOption>"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("SolverProperty"), TEXT("FSolverInput"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("MotionProperty"), TEXT("FMotionProcessInput"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("DebugOption"), TEXT("FFBIKDebugOption"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FullbodyIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FullbodyIK::Execute"), &FRigUnit_FullbodyIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton, Arguments_FRigUnit_FullbodyIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FRigUnit_FullbodyIK>()
{
	return FRigUnit_FullbodyIK::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Based on Jacobian solver at core, this can solve multi chains within a root using multi effectors\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fullbody IK" },
		{ "Keywords", "Multi, Effector, N-Chain, FB, IK" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "Based on Jacobian solver at core, this can solve multi chains within a root using multi effectors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The first bone in the chain to solve\n\x09 */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "The first bone in the chain to solve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "FRigUnit_Jacobian" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverProperty_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionProperty_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugOption_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolverProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MotionProperty;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FullbodyIK>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FullbodyIK, Root), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFBIKEndEffector, METADATA_PARAMS(0, nullptr) }; // 3440774812
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FullbodyIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effectors_MetaData), NewProp_Effectors_MetaData) }; // 3440774812
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFBIKConstraintOption, METADATA_PARAMS(0, nullptr) }; // 3337838231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FullbodyIK, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 3337838231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_SolverProperty = { "SolverProperty", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FullbodyIK, SolverProperty), Z_Construct_UScriptStruct_FSolverInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverProperty_MetaData), NewProp_SolverProperty_MetaData) }; // 970962843
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_MotionProperty = { "MotionProperty", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FullbodyIK, MotionProperty), Z_Construct_UScriptStruct_FMotionProcessInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionProperty_MetaData), NewProp_MotionProperty_MetaData) }; // 4185432749
void Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_FullbodyIK*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FullbodyIK), &Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_DebugOption = { "DebugOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FullbodyIK, DebugOption), Z_Construct_UScriptStruct_FFBIKDebugOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugOption_MetaData), NewProp_DebugOption_MetaData) }; // 2498960223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FullbodyIK, WorkData), Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 3036765308
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_SolverProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_MotionProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_DebugOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FullbodyIK",
	Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::PropPointers),
	sizeof(FRigUnit_FullbodyIK),
	alignof(FRigUnit_FullbodyIK),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.InnerSingleton;
}
void FRigUnit_FullbodyIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FullbodyIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FFBIKEndEffector> Effectors_1_Array(Effectors);
	TArrayView<const FFBIKConstraintOption> Constraints_2_Array(Constraints);
	StaticExecute(
		InExecuteContext,
		Root,
		Effectors_1_Array,
		Constraints_2_Array,
		SolverProperty,
		MotionProperty,
		bPropagateToChildren,
		DebugOption,
		WorkData
	);
}
// End ScriptStruct FRigUnit_FullbodyIK

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFBIKEndEffector::StaticStruct, Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewStructOps, TEXT("FBIKEndEffector"), &Z_Registration_Info_UScriptStruct_FBIKEndEffector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBIKEndEffector), 3440774812U) },
		{ FRigUnit_FullbodyIK_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::NewStructOps, TEXT("RigUnit_FullbodyIK_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FullbodyIK_WorkData), 3036765308U) },
		{ FRigUnit_FullbodyIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewStructOps, TEXT("RigUnit_FullbodyIK"), &Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FullbodyIK), 3879088474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_3053907276(TEXT("/Script/FullBodyIK"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
