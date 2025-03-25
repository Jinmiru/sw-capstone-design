// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharing/Public/AnimationSharingTypes.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingTypes() {}

// Begin Cross Module References
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister();
ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationSetup();
ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationSharingScalability();
ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateEntry();
ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
UPackage* Z_Construct_UPackage__Script_AnimationSharing();
// End Cross Module References

// Begin ScriptStruct FAnimationSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationSetup;
class UScriptStruct* FAnimationSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationSetup, (UObject*)Z_Construct_UPackage__Script_AnimationSharing(), TEXT("AnimationSetup"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationSetup.OuterSingleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FAnimationSetup>()
{
	return FAnimationSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation Sequence to play for this particular setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation Sequence to play for this particular setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprint_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation blueprint to use for playing back the Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation blueprint to use for playing back the Animation Sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRandomizedInstances_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of randomized instances created from this setup, it will create instance with different start time offsets (Length / Number of Instance) * InstanceIndex */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "The number of randomized instances created from this setup, it will create instance with different start time offsets (Length / Number of Instance) * InstanceIndex" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Whether or not this setup is enabled for specific platforms */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Whether or not this setup is enabled for specific platforms" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimBlueprint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumRandomizedInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSetup, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSetup, AnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimSharingStateInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimBlueprint_MetaData), NewProp_AnimBlueprint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_NumRandomizedInstances = { "NumRandomizedInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSetup, NumRandomizedInstances), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRandomizedInstances_MetaData), NewProp_NumRandomizedInstances_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSetup, Enabled), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) }; // 846681800
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_NumRandomizedInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	nullptr,
	&NewStructOps,
	"AnimationSetup",
	Z_Construct_UScriptStruct_FAnimationSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::PropPointers),
	sizeof(FAnimationSetup),
	alignof(FAnimationSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationSetup()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationSetup.InnerSingleton, Z_Construct_UScriptStruct_FAnimationSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationSetup.InnerSingleton;
}
// End ScriptStruct FAnimationSetup

// Begin ScriptStruct FAnimationStateEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationStateEntry;
class UScriptStruct* FAnimationStateEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationStateEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateEntry, (UObject*)Z_Construct_UPackage__Script_AnimationSharing(), TEXT("AnimationStateEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateEntry.OuterSingleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FAnimationStateEntry>()
{
	return FAnimationStateEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationStateEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Enum value linked to this state */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Enum value linked to this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSetups_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Per state animation setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Per state animation setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnDemand_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Flag whether or not this state is an on-demand state, this means that we kick off a unique animation when needed */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Flag whether or not this state is an on-demand state, this means that we kick off a unique animation when needed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdditive_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Whether or not this state is an additive state */" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Whether or not this state is an additive state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration of blending when blending to this state */" },
		{ "EditCondition", "!bAdditive" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Duration of blending when blending to this state" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnToPreviousState_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Flag whether or not we should return to the previous state, only used when this state is an on-demand one*/" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Flag whether or not we should return to the previous state, only used when this state is an on-demand one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetNextState_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** State value to which the actors part of an on demand state should be set to when its animation has finished */" },
		{ "EditCondition", "bSetNextState" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "State value to which the actors part of an on demand state should be set to when its animation has finished" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfConcurrentInstances_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of instances that will be created for this state (platform-specific) */" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Number of instances that will be created for this state (platform-specific)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WiggleTimePercentage_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Percentage of 'wiggle' frames, this is used when we run out of available entries in Components, if one of the on-demand animations has started SequenceLength * WiggleFramePercentage ago or earlier,\n\x09it is used instead of a brand new one */" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Percentage of 'wiggle' frames, this is used when we run out of available entries in Components, if one of the on-demand animations has started SequenceLength * WiggleFramePercentage ago or earlier,\n      it is used instead of a brand new one" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresCurves_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Whether or not this animation requires curves or morphtargets to function correctly for follower components */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Whether or not this animation requires curves or morphtargets to function correctly for follower components" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationSetups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationSetups;
	static void NewProp_bOnDemand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnDemand;
	static void NewProp_bAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static void NewProp_bReturnToPreviousState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnToPreviousState;
	static void NewProp_bSetNextState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetNextState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NextState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumNumberOfConcurrentInstances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WiggleTimePercentage;
	static void NewProp_bRequiresCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStateEntry, State), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups_Inner = { "AnimationSetups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimationSetup, METADATA_PARAMS(0, nullptr) }; // 630498058
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups = { "AnimationSetups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStateEntry, AnimationSetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSetups_MetaData), NewProp_AnimationSetups_MetaData) }; // 630498058
void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_SetBit(void* Obj)
{
	((FAnimationStateEntry*)Obj)->bOnDemand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand = { "bOnDemand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnDemand_MetaData), NewProp_bOnDemand_MetaData) };
void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_SetBit(void* Obj)
{
	((FAnimationStateEntry*)Obj)->bAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdditive_MetaData), NewProp_bAdditive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStateEntry, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_SetBit(void* Obj)
{
	((FAnimationStateEntry*)Obj)->bReturnToPreviousState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState = { "bReturnToPreviousState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnToPreviousState_MetaData), NewProp_bReturnToPreviousState_MetaData) };
void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_SetBit(void* Obj)
{
	((FAnimationStateEntry*)Obj)->bSetNextState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState = { "bSetNextState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetNextState_MetaData), NewProp_bSetNextState_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_NextState = { "NextState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStateEntry, NextState), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextState_MetaData), NewProp_NextState_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_MaximumNumberOfConcurrentInstances = { "MaximumNumberOfConcurrentInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStateEntry, MaximumNumberOfConcurrentInstances), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumNumberOfConcurrentInstances_MetaData), NewProp_MaximumNumberOfConcurrentInstances_MetaData) }; // 1262733314
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_WiggleTimePercentage = { "WiggleTimePercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStateEntry, WiggleTimePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WiggleTimePercentage_MetaData), NewProp_WiggleTimePercentage_MetaData) };
void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_SetBit(void* Obj)
{
	((FAnimationStateEntry*)Obj)->bRequiresCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves = { "bRequiresCurves", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresCurves_MetaData), NewProp_bRequiresCurves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_NextState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_MaximumNumberOfConcurrentInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_WiggleTimePercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	nullptr,
	&NewStructOps,
	"AnimationStateEntry",
	Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::PropPointers),
	sizeof(FAnimationStateEntry),
	alignof(FAnimationStateEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateEntry()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationStateEntry.InnerSingleton, Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateEntry.InnerSingleton;
}
// End ScriptStruct FAnimationStateEntry

// Begin Class UAnimationSharingStateProcessor Function GetAnimationStateEnum
struct AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms
{
	UEnum* ReturnValue;

	/** Constructor, initializes return property only **/
	AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum = FName(TEXT("GetAnimationStateEnum"));
UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms, ReturnValue), Z_Construct_UClass_UEnum, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingStateProcessor, nullptr, "GetAnimationStateEnum", nullptr, nullptr, Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::PropPointers), sizeof(AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationSharingStateProcessor::execGetAnimationStateEnum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnum**)Z_Param__Result=P_THIS->GetAnimationStateEnum_Implementation();
	P_NATIVE_END;
}
// End Class UAnimationSharingStateProcessor Function GetAnimationStateEnum

// Begin Class UAnimationSharingStateProcessor Function ProcessActorState
struct AnimationSharingStateProcessor_eventProcessActorState_Parms
{
	int32 OutState;
	AActor* InActor;
	uint8 CurrentState;
	uint8 OnDemandState;
	bool bShouldProcess;
};
static FName NAME_UAnimationSharingStateProcessor_ProcessActorState = FName(TEXT("ProcessActorState"));
void UAnimationSharingStateProcessor::ProcessActorState(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess)
{
	AnimationSharingStateProcessor_eventProcessActorState_Parms Parms;
	Parms.OutState=OutState;
	Parms.InActor=InActor;
	Parms.CurrentState=CurrentState;
	Parms.OnDemandState=OnDemandState;
	Parms.bShouldProcess=bShouldProcess ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationSharingStateProcessor_ProcessActorState),&Parms);
	OutState=Parms.OutState;
	bShouldProcess=Parms.bShouldProcess;
}
struct Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OnDemandState;
	static void NewProp_bShouldProcess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldProcess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, OutState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, CurrentState), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OnDemandState = { "OnDemandState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, OnDemandState), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess_SetBit(void* Obj)
{
	((AnimationSharingStateProcessor_eventProcessActorState_Parms*)Obj)->bShouldProcess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess = { "bShouldProcess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationSharingStateProcessor_eventProcessActorState_Parms), &Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OutState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OnDemandState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingStateProcessor, nullptr, "ProcessActorState", nullptr, nullptr, Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::PropPointers), sizeof(AnimationSharingStateProcessor_eventProcessActorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationSharingStateProcessor_eventProcessActorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationSharingStateProcessor::execProcessActorState)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutState);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_PROPERTY(FByteProperty,Z_Param_CurrentState);
	P_GET_PROPERTY(FByteProperty,Z_Param_OnDemandState);
	P_GET_UBOOL_REF(Z_Param_Out_bShouldProcess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessActorState_Implementation(Z_Param_Out_OutState,Z_Param_InActor,Z_Param_CurrentState,Z_Param_OnDemandState,Z_Param_Out_bShouldProcess);
	P_NATIVE_END;
}
// End Class UAnimationSharingStateProcessor Function ProcessActorState

// Begin Class UAnimationSharingStateProcessor
void UAnimationSharingStateProcessor::StaticRegisterNativesUAnimationSharingStateProcessor()
{
	UClass* Class = UAnimationSharingStateProcessor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnimationStateEnum", &UAnimationSharingStateProcessor::execGetAnimationStateEnum },
		{ "ProcessActorState", &UAnimationSharingStateProcessor::execProcessActorState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSharingStateProcessor);
UClass* Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister()
{
	return UAnimationSharingStateProcessor::StaticClass();
}
struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationSharingTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStateEnum_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationStateEnum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum, "GetAnimationStateEnum" }, // 1066701409
		{ &Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState, "ProcessActorState" }, // 2642676458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingStateProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::NewProp_AnimationStateEnum = { "AnimationStateEnum", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSharingStateProcessor, AnimationStateEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationStateEnum_MetaData), NewProp_AnimationStateEnum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::NewProp_AnimationStateEnum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::ClassParams = {
	&UAnimationSharingStateProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationSharingStateProcessor()
{
	if (!Z_Registration_Info_UClass_UAnimationSharingStateProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSharingStateProcessor.OuterSingleton, Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationSharingStateProcessor.OuterSingleton;
}
template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimationSharingStateProcessor>()
{
	return UAnimationSharingStateProcessor::StaticClass();
}
UAnimationSharingStateProcessor::UAnimationSharingStateProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingStateProcessor);
UAnimationSharingStateProcessor::~UAnimationSharingStateProcessor() {}
// End Class UAnimationSharingStateProcessor

// Begin ScriptStruct FPerSkeletonAnimationSharingSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup;
class UScriptStruct* FPerSkeletonAnimationSharingSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup, (UObject*)Z_Construct_UPackage__Script_AnimationSharing(), TEXT("PerSkeletonAnimationSharingSetup"));
	}
	return Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup.OuterSingleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FPerSkeletonAnimationSharingSetup>()
{
	return FPerSkeletonAnimationSharingSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Skeleton compatible with the animation sharing setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Skeleton compatible with the animation sharing setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Skeletal mesh used to setup skeletal mesh components */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Skeletal mesh used to setup skeletal mesh components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendAnimBlueprint_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation blueprint used to perform the blending between states */" },
		{ "DisplayName", "Animation Blueprint for Blending" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation blueprint used to perform the blending between states" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimBlueprint_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation blueprint used to apply additive animation on top of other states */" },
		{ "DisplayName", "Animation Blueprint for Additive Animation" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation blueprint used to apply additive animation on top of other states" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateProcessorClass_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Interface class used when determining which state an actor is in */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Interface class used when determining which state an actor is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStates_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Definition of different animation states */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Definition of different animation states" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlendAnimBlueprint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AdditiveAnimBlueprint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StateProcessorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerSkeletonAnimationSharingSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_BlendAnimBlueprint = { "BlendAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendAnimBlueprint_MetaData), NewProp_BlendAnimBlueprint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AdditiveAnimBlueprint = { "AdditiveAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditiveAnimBlueprint_MetaData), NewProp_AdditiveAnimBlueprint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_StateProcessorClass = { "StateProcessorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, StateProcessorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateProcessorClass_MetaData), NewProp_StateProcessorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates_Inner = { "AnimationStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimationStateEntry, METADATA_PARAMS(0, nullptr) }; // 2766620653
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates = { "AnimationStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, AnimationStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationStates_MetaData), NewProp_AnimationStates_MetaData) }; // 2766620653
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_BlendAnimBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AdditiveAnimBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_StateProcessorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	nullptr,
	&NewStructOps,
	"PerSkeletonAnimationSharingSetup",
	Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::PropPointers),
	sizeof(FPerSkeletonAnimationSharingSetup),
	alignof(FPerSkeletonAnimationSharingSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup()
{
	if (!Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup.InnerSingleton, Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup.InnerSingleton;
}
// End ScriptStruct FPerSkeletonAnimationSharingSetup

// Begin ScriptStruct FAnimationSharingScalability
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationSharingScalability;
class UScriptStruct* FAnimationSharingScalability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationSharingScalability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationSharingScalability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationSharingScalability, (UObject*)Z_Construct_UPackage__Script_AnimationSharing(), TEXT("AnimationSharingScalability"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationSharingScalability.OuterSingleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FAnimationSharingScalability>()
{
	return FAnimationSharingScalability::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBlendTransitions_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Flag whether or not to use blend transitions between states */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Flag whether or not to use blend transitions between states" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSignificanceValue_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Significance value tied to whether or not a transition should be blended */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Significance value tied to whether or not a transition should be blended" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberConcurrentBlends_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of blends which can be running concurrently */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Maximum number of blends which can be running concurrently" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickSignificanceValue_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Significance value tied to whether or not the leader pose components should be ticking */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Significance value tied to whether or not the leader pose components should be ticking" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UseBlendTransitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSignificanceValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumNumberConcurrentBlends;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickSignificanceValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationSharingScalability>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_UseBlendTransitions = { "UseBlendTransitions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSharingScalability, UseBlendTransitions), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBlendTransitions_MetaData), NewProp_UseBlendTransitions_MetaData) }; // 846681800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_BlendSignificanceValue = { "BlendSignificanceValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSharingScalability, BlendSignificanceValue), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSignificanceValue_MetaData), NewProp_BlendSignificanceValue_MetaData) }; // 50753708
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_MaximumNumberConcurrentBlends = { "MaximumNumberConcurrentBlends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSharingScalability, MaximumNumberConcurrentBlends), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumNumberConcurrentBlends_MetaData), NewProp_MaximumNumberConcurrentBlends_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_TickSignificanceValue = { "TickSignificanceValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSharingScalability, TickSignificanceValue), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickSignificanceValue_MetaData), NewProp_TickSignificanceValue_MetaData) }; // 50753708
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_UseBlendTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_BlendSignificanceValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_MaximumNumberConcurrentBlends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_TickSignificanceValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	nullptr,
	&NewStructOps,
	"AnimationSharingScalability",
	Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::PropPointers),
	sizeof(FAnimationSharingScalability),
	alignof(FAnimationSharingScalability),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationSharingScalability()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationSharingScalability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationSharingScalability.InnerSingleton, Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationSharingScalability.InnerSingleton;
}
// End ScriptStruct FAnimationSharingScalability

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationSetup::StaticStruct, Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewStructOps, TEXT("AnimationSetup"), &Z_Registration_Info_UScriptStruct_AnimationSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationSetup), 630498058U) },
		{ FAnimationStateEntry::StaticStruct, Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewStructOps, TEXT("AnimationStateEntry"), &Z_Registration_Info_UScriptStruct_AnimationStateEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationStateEntry), 2766620653U) },
		{ FPerSkeletonAnimationSharingSetup::StaticStruct, Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewStructOps, TEXT("PerSkeletonAnimationSharingSetup"), &Z_Registration_Info_UScriptStruct_PerSkeletonAnimationSharingSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerSkeletonAnimationSharingSetup), 3877520483U) },
		{ FAnimationSharingScalability::StaticStruct, Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewStructOps, TEXT("AnimationSharingScalability"), &Z_Registration_Info_UScriptStruct_AnimationSharingScalability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationSharingScalability), 1405597277U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSharingStateProcessor, UAnimationSharingStateProcessor::StaticClass, TEXT("UAnimationSharingStateProcessor"), &Z_Registration_Info_UClass_UAnimationSharingStateProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSharingStateProcessor), 944087867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_1022644608(TEXT("/Script/AnimationSharing"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
