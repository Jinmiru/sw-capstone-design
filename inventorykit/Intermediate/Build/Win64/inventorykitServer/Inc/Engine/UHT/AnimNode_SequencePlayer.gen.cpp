// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SequencePlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampConstants();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampState();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_SequencePlayerBase
static_assert(std::is_polymorphic<FAnimNode_SequencePlayerBase>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_SequencePlayerBase cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase;
class UScriptStruct* FAnimNode_SequencePlayerBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayerBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SequencePlayerBase>()
{
	return FAnimNode_SequencePlayerBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence player node. Not instantiated directly, use FAnimNode_SequencePlayer or FAnimNode_SequencePlayer_Standalone\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Sequence player node. Not instantiated directly, use FAnimNode_SequencePlayer or FAnimNode_SequencePlayer_Standalone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClampState_MetaData[] = {
		{ "Comment", "// Corresponding state for PlayRateScaleBiasClampConstants\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Corresponding state for PlayRateScaleBiasClampConstants" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClampState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayerBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewProp_PlayRateScaleBiasClampState = { "PlayRateScaleBiasClampState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayerBase, PlayRateScaleBiasClampState), Z_Construct_UScriptStruct_FInputScaleBiasClampState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateScaleBiasClampState_MetaData), NewProp_PlayRateScaleBiasClampState_MetaData) }; // 3419953940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewProp_PlayRateScaleBiasClampState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
	&NewStructOps,
	"AnimNode_SequencePlayerBase",
	Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::PropPointers),
	sizeof(FAnimNode_SequencePlayerBase),
	alignof(FAnimNode_SequencePlayerBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.InnerSingleton;
}
// End ScriptStruct FAnimNode_SequencePlayerBase

// Begin ScriptStruct FAnimNode_SequencePlayer
static_assert(std::is_polymorphic<FAnimNode_SequencePlayer>() == std::is_polymorphic<FAnimNode_SequencePlayerBase>(), "USTRUCT FAnimNode_SequencePlayer cannot be polymorphic unless super FAnimNode_SequencePlayerBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer;
class UScriptStruct* FAnimNode_SequencePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SequencePlayer>()
{
	return FAnimNode_SequencePlayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence player node that can be used with constant folding\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Sequence player node that can be used with constant folding" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name that we synchronize with (NAME_None if it is not part of any group). \n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The group name that we synchronize with (NAME_None if it is not part of any group)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this node can assume within the group (ignored if GroupName is not set)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The role this node can assume within the group (ignored if GroupName is not set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How this node will synchronize with other animations.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "How this node will synchronize with other animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to play\n" },
		{ "DisallowedClasses", "/Script/Engine.AnimMontage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to play" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateBasis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\n// For example a Basis of 100 means that the PlayRate input will be divided by 100.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\nFor example a Basis of 100 means that the PlayRate input will be divided by 100." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The play rate multiplier. Can be negative, which will cause the animation to play in reverse.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClampConstants_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional scaling, offsetting and clamping of PlayRate input.\n// Performed after PlayRateBasis.\n" },
		{ "DisplayName", "PlayRateScaleBiasClamp" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Additional scaling, offsetting and clamping of PlayRate input.\nPerformed after PlayRateBasis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the animation loop back to the start when it reaches the end?\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation loop back to the start when it reaches the end?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromMatchingPose_MetaData[] = {
		{ "Category", "PoseMatching" },
		{ "Comment", "// Use pose matching to choose the start position. Requires experimental PoseSearch plugin.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Use pose matching to choose the start position. Requires experimental PoseSearch plugin." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateBasis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClampConstants;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static void NewProp_bLoopAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation;
	static void NewProp_bStartFromMatchingPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromMatchingPose;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupRole_MetaData), NewProp_GroupRole_MetaData) }; // 2417928914
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 2737461860
void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
{
	((FAnimNode_SequencePlayer*)Obj)->bIgnoreForRelevancyTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequencePlayer), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreForRelevancyTest_MetaData), NewProp_bIgnoreForRelevancyTest_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis = { "PlayRateBasis", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateBasis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateBasis_MetaData), NewProp_PlayRateBasis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClampConstants = { "PlayRateScaleBiasClampConstants", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateScaleBiasClampConstants), Z_Construct_UScriptStruct_FInputScaleBiasClampConstants, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateScaleBiasClampConstants_MetaData), NewProp_PlayRateScaleBiasClampConstants_MetaData) }; // 4085056744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp = { "PlayRateScaleBiasClamp", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateScaleBiasClamp_DEPRECATED), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateScaleBiasClamp_MetaData), NewProp_PlayRateScaleBiasClamp_MetaData) }; // 1905782755
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_SetBit(void* Obj)
{
	((FAnimNode_SequencePlayer*)Obj)->bLoopAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation = { "bLoopAnimation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequencePlayer), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopAnimation_MetaData), NewProp_bLoopAnimation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose_SetBit(void* Obj)
{
	((FAnimNode_SequencePlayer*)Obj)->bStartFromMatchingPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose = { "bStartFromMatchingPose", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequencePlayer), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFromMatchingPose_MetaData), NewProp_bStartFromMatchingPose_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClampConstants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase,
	&NewStructOps,
	"AnimNode_SequencePlayer",
	Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers),
	sizeof(FAnimNode_SequencePlayer),
	alignof(FAnimNode_SequencePlayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.InnerSingleton;
}
// End ScriptStruct FAnimNode_SequencePlayer

// Begin ScriptStruct FAnimNode_SequencePlayer_Standalone
static_assert(std::is_polymorphic<FAnimNode_SequencePlayer_Standalone>() == std::is_polymorphic<FAnimNode_SequencePlayerBase>(), "USTRUCT FAnimNode_SequencePlayer_Standalone cannot be polymorphic unless super FAnimNode_SequencePlayerBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone;
class UScriptStruct* FAnimNode_SequencePlayer_Standalone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayer_Standalone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SequencePlayer_Standalone>()
{
	return FAnimNode_SequencePlayer_Standalone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence player node that can be used standalone (without constant folding)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Sequence player node that can be used standalone (without constant folding)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name that we synchronize with (NAME_None if it is not part of any group). \n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The group name that we synchronize with (NAME_None if it is not part of any group)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this node can assume within the group (ignored if GroupName is not set)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The role this node can assume within the group (ignored if GroupName is not set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How this node will synchronize with other animations.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "How this node will synchronize with other animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to play\n" },
		{ "DisallowedClasses", "/Script/Engine.AnimMontage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateBasis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\n// For example a Basis of 100 means that the PlayRate input will be divided by 100.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\nFor example a Basis of 100 means that the PlayRate input will be divided by 100." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The play rate multiplier. Can be negative, which will cause the animation to play in reverse.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClampConstants_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional scaling, offsetting and clamping of PlayRate input.\n// Performed after PlayRateBasis.\n" },
		{ "DisplayName", "PlayRateScaleBiasClamp" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Additional scaling, offsetting and clamping of PlayRate input.\nPerformed after PlayRateBasis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the animation loop back to the start when it reaches the end?\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation loop back to the start when it reaches the end?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromMatchingPose_MetaData[] = {
		{ "Category", "PoseMatching" },
		{ "Comment", "// Use pose matching to choose the start position. Requires experimental PoseSearch plugin.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Use pose matching to choose the start position. Requires experimental PoseSearch plugin." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateBasis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClampConstants;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static void NewProp_bLoopAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation;
	static void NewProp_bStartFromMatchingPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromMatchingPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer_Standalone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupRole_MetaData), NewProp_GroupRole_MetaData) }; // 2417928914
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 2737461860
void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
{
	((FAnimNode_SequencePlayer_Standalone*)Obj)->bIgnoreForRelevancyTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequencePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreForRelevancyTest_MetaData), NewProp_bIgnoreForRelevancyTest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateBasis = { "PlayRateBasis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, PlayRateBasis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateBasis_MetaData), NewProp_PlayRateBasis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateScaleBiasClampConstants = { "PlayRateScaleBiasClampConstants", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, PlayRateScaleBiasClampConstants), Z_Construct_UScriptStruct_FInputScaleBiasClampConstants, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRateScaleBiasClampConstants_MetaData), NewProp_PlayRateScaleBiasClampConstants_MetaData) }; // 4085056744
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_SetBit(void* Obj)
{
	((FAnimNode_SequencePlayer_Standalone*)Obj)->bLoopAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation = { "bLoopAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequencePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopAnimation_MetaData), NewProp_bLoopAnimation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose_SetBit(void* Obj)
{
	((FAnimNode_SequencePlayer_Standalone*)Obj)->bStartFromMatchingPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose = { "bStartFromMatchingPose", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequencePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFromMatchingPose_MetaData), NewProp_bStartFromMatchingPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateBasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateScaleBiasClampConstants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase,
	&NewStructOps,
	"AnimNode_SequencePlayer_Standalone",
	Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::PropPointers),
	sizeof(FAnimNode_SequencePlayer_Standalone),
	alignof(FAnimNode_SequencePlayer_Standalone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.InnerSingleton;
}
// End ScriptStruct FAnimNode_SequencePlayer_Standalone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_SequencePlayerBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewStructOps, TEXT("AnimNode_SequencePlayerBase"), &Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequencePlayerBase), 211739726U) },
		{ FAnimNode_SequencePlayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewStructOps, TEXT("AnimNode_SequencePlayer"), &Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequencePlayer), 4245320185U) },
		{ FAnimNode_SequencePlayer_Standalone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewStructOps, TEXT("AnimNode_SequencePlayer_Standalone"), &Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequencePlayer_Standalone), 3356949397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_903763413(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
