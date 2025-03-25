// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SequenceEvaluator() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum ESequenceEvalReinit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequenceEvalReinit;
static UEnum* ESequenceEvalReinit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESequenceEvalReinit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESequenceEvalReinit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESequenceEvalReinit"));
	}
	return Z_Registration_Info_UEnum_ESequenceEvalReinit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESequenceEvalReinit::Type>()
{
	return ESequenceEvalReinit_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExplicitTime.Comment", "/** Reset InternalTimeAccumulator to ExplicitTime */" },
		{ "ExplicitTime.Name", "ESequenceEvalReinit::ExplicitTime" },
		{ "ExplicitTime.ToolTip", "Reset InternalTimeAccumulator to ExplicitTime" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "NoReset.Comment", "/** Do not reset InternalTimeAccumulator */" },
		{ "NoReset.Name", "ESequenceEvalReinit::NoReset" },
		{ "NoReset.ToolTip", "Do not reset InternalTimeAccumulator" },
		{ "StartPosition.Comment", "/** Reset InternalTimeAccumulator to StartPosition */" },
		{ "StartPosition.Name", "ESequenceEvalReinit::StartPosition" },
		{ "StartPosition.ToolTip", "Reset InternalTimeAccumulator to StartPosition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESequenceEvalReinit::NoReset", (int64)ESequenceEvalReinit::NoReset },
		{ "ESequenceEvalReinit::StartPosition", (int64)ESequenceEvalReinit::StartPosition },
		{ "ESequenceEvalReinit::ExplicitTime", (int64)ESequenceEvalReinit::ExplicitTime },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ESequenceEvalReinit",
	"ESequenceEvalReinit::Type",
	Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit()
{
	if (!Z_Registration_Info_UEnum_ESequenceEvalReinit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequenceEvalReinit.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESequenceEvalReinit.InnerSingleton;
}
// End Enum ESequenceEvalReinit

// Begin ScriptStruct FAnimNode_SequenceEvaluatorBase
static_assert(std::is_polymorphic<FAnimNode_SequenceEvaluatorBase>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_SequenceEvaluatorBase cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase;
class UScriptStruct* FAnimNode_SequenceEvaluatorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SequenceEvaluatorBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SequenceEvaluatorBase>()
{
	return FAnimNode_SequenceEvaluatorBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class. Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\n// Typically the playback position of the animation for this node will represent something other than time, like jump height.\n// This node will not trigger any notifies present in the associated sequence.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "Abstract base class. Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequenceEvaluatorBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
	&NewStructOps,
	"AnimNode_SequenceEvaluatorBase",
	nullptr,
	0,
	sizeof(FAnimNode_SequenceEvaluatorBase),
	alignof(FAnimNode_SequenceEvaluatorBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase.InnerSingleton;
}
// End ScriptStruct FAnimNode_SequenceEvaluatorBase

// Begin ScriptStruct FAnimNode_SequenceEvaluator
static_assert(std::is_polymorphic<FAnimNode_SequenceEvaluator>() == std::is_polymorphic<FAnimNode_SequenceEvaluatorBase>(), "USTRUCT FAnimNode_SequenceEvaluator cannot be polymorphic unless super FAnimNode_SequenceEvaluatorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator;
class UScriptStruct* FAnimNode_SequenceEvaluator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SequenceEvaluator"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SequenceEvaluator>()
{
	return FAnimNode_SequenceEvaluator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence evaluator node that can be used with constant folding\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "Sequence evaluator node that can be used with constant folding" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name that we synchronize with (NAME_None if it is not part of any group). \n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "The group name that we synchronize with (NAME_None if it is not part of any group)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this node can assume within the group (ignored if GroupName is not set)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "The role this node can assume within the group (ignored if GroupName is not set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How this node will synchronize with other animations.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "How this node will synchronize with other animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to evaluate\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to evaluate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The time at which to evaluate the associated sequence\n" },
		{ "EditCondition", "!bUseExplicitFrame" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The time at which to evaluate the associated sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExplicitFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to use ExplicitFrame (true) or ExplicitTime (false) when evaluating the associated sequence\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Whether to use ExplicitFrame (true) or ExplicitTime (false) when evaluating the associated sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The frame at which to evaluate the associated sequence\n" },
		{ "EditCondition", "bUseExplicitFrame" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The frame at which to evaluate the associated sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportToExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n\x09If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n\x09Note: using a sync group forces advancing time regardless of what this option is set to. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n      If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n      Note: using a sync group forces advancing time regardless of what this option is set to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReinitializationBehavior_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What to do when SequenceEvaluator is reinitialized */" },
		{ "DisplayAfter", "StartPosition" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "What to do when SequenceEvaluator is reinitialized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false." },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplicitTime;
	static void NewProp_bUseExplicitFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExplicitFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExplicitFrame;
	static void NewProp_bShouldLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
	static void NewProp_bTeleportToExplicitTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportToExplicitTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReinitializationBehavior;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequenceEvaluator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupRole_MetaData), NewProp_GroupRole_MetaData) }; // 2417928914
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 2737461860
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator*)Obj)->bIgnoreForRelevancyTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreForRelevancyTest_MetaData), NewProp_bIgnoreForRelevancyTest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0144000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitTime = { "ExplicitTime", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, ExplicitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitTime_MetaData), NewProp_ExplicitTime_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bUseExplicitFrame_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator*)Obj)->bUseExplicitFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bUseExplicitFrame = { "bUseExplicitFrame", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bUseExplicitFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExplicitFrame_MetaData), NewProp_bUseExplicitFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitFrame = { "ExplicitFrame", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, ExplicitFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitFrame_MetaData), NewProp_ExplicitFrame_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator*)Obj)->bShouldLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLoop_MetaData), NewProp_bShouldLoop_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator*)Obj)->bTeleportToExplicitTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime = { "bTeleportToExplicitTime", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeleportToExplicitTime_MetaData), NewProp_bTeleportToExplicitTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ReinitializationBehavior = { "ReinitializationBehavior", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, ReinitializationBehavior), Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReinitializationBehavior_MetaData), NewProp_ReinitializationBehavior_MetaData) }; // 379541009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_GroupRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bIgnoreForRelevancyTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bUseExplicitFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ReinitializationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_StartPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase,
	&NewStructOps,
	"AnimNode_SequenceEvaluator",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::PropPointers), 0),
	sizeof(FAnimNode_SequenceEvaluator),
	alignof(FAnimNode_SequenceEvaluator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator.InnerSingleton;
}
// End ScriptStruct FAnimNode_SequenceEvaluator

// Begin ScriptStruct FAnimNode_SequenceEvaluator_Standalone
static_assert(std::is_polymorphic<FAnimNode_SequenceEvaluator_Standalone>() == std::is_polymorphic<FAnimNode_SequenceEvaluatorBase>(), "USTRUCT FAnimNode_SequenceEvaluator_Standalone cannot be polymorphic unless super FAnimNode_SequenceEvaluatorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone;
class UScriptStruct* FAnimNode_SequenceEvaluator_Standalone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SequenceEvaluator_Standalone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SequenceEvaluator_Standalone>()
{
	return FAnimNode_SequenceEvaluator_Standalone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence evaluator node that can be used standalone (without constant folding)\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "Sequence evaluator node that can be used standalone (without constant folding)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name that we synchronize with (NAME_None if it is not part of any group). \n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "The group name that we synchronize with (NAME_None if it is not part of any group)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this node can assume within the group (ignored if GroupName is not set)\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "The role this node can assume within the group (ignored if GroupName is not set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How this node will synchronize with other animations.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "How this node will synchronize with other animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to evaluate\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to evaluate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The time at which to evaluate the associated sequence\n" },
		{ "EditCondition", "!bUseFrame" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The time at which to evaluate the associated sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExplicitFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "NeverAsPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bUseFrame" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportToExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n\x09If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n\x09Note: using a sync group forces advancing time regardless of what this option is set to. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n      If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n      Note: using a sync group forces advancing time regardless of what this option is set to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReinitializationBehavior_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What to do when SequenceEvaluator is reinitialized */" },
		{ "DisplayAfter", "StartPosition" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "What to do when SequenceEvaluator is reinitialized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplicitTime;
	static void NewProp_bUseExplicitFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExplicitFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExplicitFrame;
	static void NewProp_bShouldLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
	static void NewProp_bTeleportToExplicitTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportToExplicitTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReinitializationBehavior;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequenceEvaluator_Standalone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupRole_MetaData), NewProp_GroupRole_MetaData) }; // 2417928914
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 2737461860
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator_Standalone*)Obj)->bIgnoreForRelevancyTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreForRelevancyTest_MetaData), NewProp_bIgnoreForRelevancyTest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_ExplicitTime = { "ExplicitTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, ExplicitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitTime_MetaData), NewProp_ExplicitTime_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bUseExplicitFrame_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator_Standalone*)Obj)->bUseExplicitFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bUseExplicitFrame = { "bUseExplicitFrame", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bUseExplicitFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExplicitFrame_MetaData), NewProp_bUseExplicitFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_ExplicitFrame = { "ExplicitFrame", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, ExplicitFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitFrame_MetaData), NewProp_ExplicitFrame_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator_Standalone*)Obj)->bShouldLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLoop_MetaData), NewProp_bShouldLoop_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bTeleportToExplicitTime_SetBit(void* Obj)
{
	((FAnimNode_SequenceEvaluator_Standalone*)Obj)->bTeleportToExplicitTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bTeleportToExplicitTime = { "bTeleportToExplicitTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bTeleportToExplicitTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeleportToExplicitTime_MetaData), NewProp_bTeleportToExplicitTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_ReinitializationBehavior = { "ReinitializationBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, ReinitializationBehavior), Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReinitializationBehavior_MetaData), NewProp_ReinitializationBehavior_MetaData) }; // 379541009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_Standalone, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_GroupRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bIgnoreForRelevancyTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_ExplicitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bUseExplicitFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_ExplicitFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bShouldLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_bTeleportToExplicitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_ReinitializationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewProp_StartPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase,
	&NewStructOps,
	"AnimNode_SequenceEvaluator_Standalone",
	Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::PropPointers),
	sizeof(FAnimNode_SequenceEvaluator_Standalone),
	alignof(FAnimNode_SequenceEvaluator_Standalone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone.InnerSingleton;
}
// End ScriptStruct FAnimNode_SequenceEvaluator_Standalone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESequenceEvalReinit_StaticEnum, TEXT("ESequenceEvalReinit"), &Z_Registration_Info_UEnum_ESequenceEvalReinit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 379541009U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_SequenceEvaluatorBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics::NewStructOps, TEXT("AnimNode_SequenceEvaluatorBase"), &Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequenceEvaluatorBase), 1519458120U) },
		{ FAnimNode_SequenceEvaluator::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewStructOps, TEXT("AnimNode_SequenceEvaluator"), &Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequenceEvaluator), 1823904242U) },
		{ FAnimNode_SequenceEvaluator_Standalone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics::NewStructOps, TEXT("AnimNode_SequenceEvaluator_Standalone"), &Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_Standalone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequenceEvaluator_Standalone), 2598337038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_4074279988(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
