// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LegIK() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChain();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FIKChainLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKChainLink;
class UScriptStruct* FIKChainLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKChainLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKChainLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChainLink, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChainLink"));
	}
	return Z_Registration_Info_UScriptStruct_IKChainLink.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FIKChainLink>()
{
	return FIKChainLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIKChainLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChainLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChainLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"IKChainLink",
	nullptr,
	0,
	sizeof(FIKChainLink),
	alignof(FIKChainLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink()
{
	if (!Z_Registration_Info_UScriptStruct_IKChainLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKChainLink.InnerSingleton, Z_Construct_UScriptStruct_FIKChainLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IKChainLink.InnerSingleton;
}
// End ScriptStruct FIKChainLink

// Begin ScriptStruct FIKChain
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKChain;
class UScriptStruct* FIKChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChain, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChain"));
	}
	return Z_Registration_Info_UScriptStruct_IKChain.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FIKChain>()
{
	return FIKChain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIKChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"IKChain",
	nullptr,
	0,
	sizeof(FIKChain),
	alignof(FIKChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIKChain()
{
	if (!Z_Registration_Info_UScriptStruct_IKChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKChain.InnerSingleton, Z_Construct_UScriptStruct_FIKChain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IKChain.InnerSingleton;
}
// End ScriptStruct FIKChain

// Begin ScriptStruct FAnimLegIKDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimLegIKDefinition;
class UScriptStruct* FAnimLegIKDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKDefinition, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimLegIKDefinition>()
{
	return FAnimLegIKDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Per foot definitions */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Per foot definitions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\n\x09* and forces at least this angle between Parent and Child bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootBoneForwardAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Forward Axis for Foot bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot). */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, we prevent the leg from bending backwards and enforce a min compression angle */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "If enabled, we prevent the leg from bending backwards and enforce a min compression angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableKneeTwistCorrection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistOffsetCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the curve to use as the twist offset angle(in degrees).\n\x09* This is useful for injecting knee motion, while keeping the IK chain's goal/hand and root/hip locked in place. \n\x09* Reasonable values are usually between -+15 degrees, although this is depends on how far in/out the knee is in the original pose. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Name of the curve to use as the twist offset angle(in degrees).\nThis is useful for injecting knee motion, while keeping the IK chain's goal/hand and root/hip locked in place.\nReasonable values are usually between -+15 degrees, although this is depends on how far in/out the knee is in the original pose." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FKFootBone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBonesInLimb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootBoneForwardAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HingeRotationAxis;
	static void NewProp_bEnableRotationLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimit;
	static void NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableKneeTwistCorrection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TwistOffsetCurveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimLegIKDefinition, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKFootBone_MetaData), NewProp_IKFootBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone = { "FKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimLegIKDefinition, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FKFootBone_MetaData), NewProp_FKFootBone_MetaData) }; // 4218265988
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb = { "NumBonesInLimb", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimLegIKDefinition, NumBonesInLimb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBonesInLimb_MetaData), NewProp_NumBonesInLimb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle = { "MinRotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimLegIKDefinition, MinRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRotationAngle_MetaData), NewProp_MinRotationAngle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis = { "FootBoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimLegIKDefinition, FootBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootBoneForwardAxis_MetaData), NewProp_FootBoneForwardAxis_MetaData) }; // 342925220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis = { "HingeRotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimLegIKDefinition, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HingeRotationAxis_MetaData), NewProp_HingeRotationAxis_MetaData) }; // 342925220
void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit(void* Obj)
{
	((FAnimLegIKDefinition*)Obj)->bEnableRotationLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit = { "bEnableRotationLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRotationLimit_MetaData), NewProp_bEnableRotationLimit_MetaData) };
void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj)
{
	((FAnimLegIKDefinition*)Obj)->bEnableKneeTwistCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection = { "bEnableKneeTwistCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableKneeTwistCorrection_MetaData), NewProp_bEnableKneeTwistCorrection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_TwistOffsetCurveName = { "TwistOffsetCurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimLegIKDefinition, TwistOffsetCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistOffsetCurveName_MetaData), NewProp_TwistOffsetCurveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_TwistOffsetCurveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"AnimLegIKDefinition",
	Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers),
	sizeof(FAnimLegIKDefinition),
	alignof(FAnimLegIKDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.InnerSingleton, Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.InnerSingleton;
}
// End ScriptStruct FAnimLegIKDefinition

// Begin ScriptStruct FAnimLegIKData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimLegIKData;
class UScriptStruct* FAnimLegIKData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLegIKData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimLegIKData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKData, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimLegIKData.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimLegIKData>()
{
	return FAnimLegIKData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimLegIKData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime foot data after validation, we guarantee these bones to exist */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Runtime foot data after validation, we guarantee these bones to exist" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"AnimLegIKData",
	nullptr,
	0,
	sizeof(FAnimLegIKData),
	alignof(FAnimLegIKData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLegIKData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimLegIKData.InnerSingleton, Z_Construct_UScriptStruct_FAnimLegIKData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimLegIKData.InnerSingleton;
}
// End ScriptStruct FAnimLegIKData

// Begin ScriptStruct FAnimNode_LegIK
static_assert(std::is_polymorphic<FAnimNode_LegIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_LegIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LegIK;
class UScriptStruct* FAnimNode_LegIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LegIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LegIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LegIK, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LegIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LegIK.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LegIK>()
{
	return FAnimNode_LegIK::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tolerance for reaching IK Target, in unreal units. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Tolerance for reaching IK Target, in unreal units." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max Number of Iterations. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Max Number of Iterations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftPercentLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Default is 1.0 (off). Range is 0.1 to 1.0. When set to a value less than 1, will \"softly\" approach full extension starting when the effector\n\x09 * distance from the root of the chain is greater than this percent length of the bone chain. Typical values are around 0.97.\n\x09 * This is useful for preventing the knee from \"popping\" when approaching full extension. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Default is 1.0 (off). Range is 0.1 to 1.0. When set to a value less than 1, will \"softly\" approach full extension starting when the effector\ndistance from the root of the chain is greater than this percent length of the bone chain. Typical values are around 0.97.\nThis is useful for preventing the knee from \"popping\" when approaching full extension." },
		{ "UIMax", "1" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Default is 1.0 (full). Range is 0 to 1. Blends the effect of the \"softness\" on/off. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Default is 1.0 (full). Range is 0 to 1. Blends the effect of the \"softness\" on/off." },
		{ "UIMax", "1" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegsDefinition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftPercentLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LegsDefinition_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LegsDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LegIK>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision = { "ReachPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LegIK, ReachPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachPrecision_MetaData), NewProp_ReachPrecision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LegIK, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_SoftPercentLength = { "SoftPercentLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LegIK, SoftPercentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftPercentLength_MetaData), NewProp_SoftPercentLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_SoftAlpha = { "SoftAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LegIK, SoftAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAlpha_MetaData), NewProp_SoftAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner = { "LegsDefinition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimLegIKDefinition, METADATA_PARAMS(0, nullptr) }; // 4086668041
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition = { "LegsDefinition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LegIK, LegsDefinition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegsDefinition_MetaData), NewProp_LegsDefinition_MetaData) }; // 4086668041
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_SoftPercentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_SoftAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_LegIK",
	Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers),
	sizeof(FAnimNode_LegIK),
	alignof(FAnimNode_LegIK),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LegIK.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LegIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LegIK.InnerSingleton;
}
// End ScriptStruct FAnimNode_LegIK

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIKChainLink::StaticStruct, Z_Construct_UScriptStruct_FIKChainLink_Statics::NewStructOps, TEXT("IKChainLink"), &Z_Registration_Info_UScriptStruct_IKChainLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKChainLink), 3795116361U) },
		{ FIKChain::StaticStruct, Z_Construct_UScriptStruct_FIKChain_Statics::NewStructOps, TEXT("IKChain"), &Z_Registration_Info_UScriptStruct_IKChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKChain), 1229344513U) },
		{ FAnimLegIKDefinition::StaticStruct, Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewStructOps, TEXT("AnimLegIKDefinition"), &Z_Registration_Info_UScriptStruct_AnimLegIKDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimLegIKDefinition), 4086668041U) },
		{ FAnimLegIKData::StaticStruct, Z_Construct_UScriptStruct_FAnimLegIKData_Statics::NewStructOps, TEXT("AnimLegIKData"), &Z_Registration_Info_UScriptStruct_AnimLegIKData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimLegIKData), 3936206307U) },
		{ FAnimNode_LegIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewStructOps, TEXT("AnimNode_LegIK"), &Z_Registration_Info_UScriptStruct_AnimNode_LegIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LegIK), 951774787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_661802041(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
