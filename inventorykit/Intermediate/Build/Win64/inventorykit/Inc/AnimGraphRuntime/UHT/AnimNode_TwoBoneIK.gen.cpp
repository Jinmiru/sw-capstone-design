// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_TwoBoneIK.h"
#include "Runtime/AnimationCore/Public/CommonAnimTypes.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Runtime/Engine/Public/Animation/BoneSocketReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TwoBoneIK() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_TwoBoneIK
static_assert(std::is_polymorphic<FAnimNode_TwoBoneIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_TwoBoneIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK;
class UScriptStruct* FAnimNode_TwoBoneIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_TwoBoneIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_TwoBoneIK>()
{
	return FAnimNode_TwoBoneIK::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Simple 2 Bone IK Controller.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Simple 2 Bone IK Controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStretchRatio_MetaData[] = {
		{ "Category", "IK" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Limits to use if stretching is allowed. This value determines when to start stretch. For example, 0.9 means once it reaches 90% of the whole length of the limb, it will start apply. */" },
		{ "editcondition", "bAllowStretching" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Limits to use if stretching is allowed. This value determines when to start stretch. For example, 0.9 means once it reaches 90% of the whole length of the limb, it will start apply." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStretchScale_MetaData[] = {
		{ "Category", "IK" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Limits to use if stretching is allowed. This value determins what is the max stretch scale. For example, 1.5 means it will stretch until 150 % of the whole length of the limb.*/" },
		{ "editcondition", "bAllowStretching" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Limits to use if stretching is allowed. This value determins what is the max stretch scale. For example, 1.5 means it will stretch until 150 % of the whole length of the limb." },
		{ "UIMin", "0.0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchLimits_MetaData[] = {
		{ "Comment", "/** Limits to use if stretching is allowed - old property DEPRECATED */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Limits to use if stretching is allowed - old property DEPRECATED" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoTwist_MetaData[] = {
		{ "Comment", "/** Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointTargetSpaceBoneName_MetaData[] = {
		{ "Comment", "/** If JointTargetSpaceBoneName is a bone, this is the bone to use. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "If JointTargetSpaceBoneName is a bone, this is the bone to use. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorSpaceBoneName_MetaData[] = {
		{ "Comment", "/** If EffectorLocationSpace is a bone, this is the bone to use. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "If EffectorLocationSpace is a bone, this is the bone to use. *" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorLocation_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Effector Location. Target Location to reach. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Effector Location. Target Location to reach." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "Effector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocation_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "Comment", "/** Joint Target Location. Location used to orient Joint bone. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Joint Target Location. Location used to orient Joint bone. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Specify which axis it's aligned. Used when removing twist */" },
		{ "editcondition", "!bAllowTwist" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Specify which axis it's aligned. Used when removing twist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorLocationSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Reference frame of Effector Location. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Reference frame of Effector Location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocationSpace_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "Comment", "/** Reference frame of Joint Target Location. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Reference frame of Joint Target Location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStretching_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Should stretching be allowed, to be prevent over extension */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Should stretching be allowed, to be prevent over extension" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTakeRotationFromEffectorSpace_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Set end bone to use End Effector rotation */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Set end bone to use End Effector rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainEffectorRelRot_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Keep local rotation of end bone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Keep local rotation of end bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTwist_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IKBone;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartStretchRatio;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxStretchScale;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StretchLimits;
	static void NewProp_bNoTwist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoTwist;
	static const UECodeGen_Private::FNamePropertyParams NewProp_JointTargetSpaceBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EffectorSpaceBoneName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointTargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectorLocationSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_JointTargetLocationSpace;
	static void NewProp_bAllowStretching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching;
	static void NewProp_bTakeRotationFromEffectorSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTakeRotationFromEffectorSpace;
	static void NewProp_bMaintainEffectorRelRot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainEffectorRelRot;
	static void NewProp_bAllowTwist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTwist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TwoBoneIK>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_IKBone = { "IKBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKBone_MetaData), NewProp_IKBone_MetaData) }; // 4218265988
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StartStretchRatio = { "StartStretchRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, StartStretchRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStretchRatio_MetaData), NewProp_StartStretchRatio_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_MaxStretchScale = { "MaxStretchScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, MaxStretchScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStretchScale_MetaData), NewProp_MaxStretchScale_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StretchLimits = { "StretchLimits", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, StretchLimits_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchLimits_MetaData), NewProp_StretchLimits_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist_SetBit(void* Obj)
{
	((FAnimNode_TwoBoneIK*)Obj)->bNoTwist_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist = { "bNoTwist", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoTwist_MetaData), NewProp_bNoTwist_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetSpaceBoneName = { "JointTargetSpaceBoneName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetSpaceBoneName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointTargetSpaceBoneName_MetaData), NewProp_JointTargetSpaceBoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorSpaceBoneName = { "EffectorSpaceBoneName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorSpaceBoneName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorSpaceBoneName_MetaData), NewProp_EffectorSpaceBoneName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocation = { "EffectorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorLocation_MetaData), NewProp_EffectorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTarget_MetaData), NewProp_EffectorTarget_MetaData) }; // 2425971742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocation = { "JointTargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointTargetLocation_MetaData), NewProp_JointTargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTarget = { "JointTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointTarget_MetaData), NewProp_JointTarget_MetaData) }; // 2425971742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, TwistAxis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistAxis_MetaData), NewProp_TwistAxis_MetaData) }; // 330961940
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocationSpace = { "EffectorLocationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorLocationSpace_MetaData), NewProp_EffectorLocationSpace_MetaData) }; // 385354733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocationSpace = { "JointTargetLocationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointTargetLocationSpace_MetaData), NewProp_JointTargetLocationSpace_MetaData) }; // 385354733
void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit(void* Obj)
{
	((FAnimNode_TwoBoneIK*)Obj)->bAllowStretching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching = { "bAllowStretching", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStretching_MetaData), NewProp_bAllowStretching_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace_SetBit(void* Obj)
{
	((FAnimNode_TwoBoneIK*)Obj)->bTakeRotationFromEffectorSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace = { "bTakeRotationFromEffectorSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTakeRotationFromEffectorSpace_MetaData), NewProp_bTakeRotationFromEffectorSpace_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot_SetBit(void* Obj)
{
	((FAnimNode_TwoBoneIK*)Obj)->bMaintainEffectorRelRot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot = { "bMaintainEffectorRelRot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainEffectorRelRot_MetaData), NewProp_bMaintainEffectorRelRot_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist_SetBit(void* Obj)
{
	((FAnimNode_TwoBoneIK*)Obj)->bAllowTwist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist = { "bAllowTwist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTwist_MetaData), NewProp_bAllowTwist_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_IKBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StartStretchRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_MaxStretchScale,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StretchLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetSpaceBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorSpaceBoneName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_TwistAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_TwoBoneIK",
	Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::PropPointers),
	sizeof(FAnimNode_TwoBoneIK),
	alignof(FAnimNode_TwoBoneIK),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK.InnerSingleton;
}
// End ScriptStruct FAnimNode_TwoBoneIK

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwoBoneIK_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_TwoBoneIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewStructOps, TEXT("AnimNode_TwoBoneIK"), &Z_Registration_Info_UScriptStruct_AnimNode_TwoBoneIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TwoBoneIK), 1655824619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwoBoneIK_h_3603278964(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwoBoneIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwoBoneIK_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
