// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_StateMachine() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimationActiveTransitionEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry;
class UScriptStruct* FAnimationActiveTransitionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationActiveTransitionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationActiveTransitionEntry>()
{
	return FAnimationActiveTransitionEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Information about an active transition on the transition stack\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Information about an active transition on the transition stack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
		{ "Comment", "// Blend profile to use for this transition. Specifying this will make the transition evaluate per-bone\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Blend profile to use for this transition. Specifying this will make the transition evaluate per-bone" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationActiveTransitionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationActiveTransitionEntry, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfile_MetaData), NewProp_BlendProfile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimationActiveTransitionEntry",
	Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers),
	sizeof(FAnimationActiveTransitionEntry),
	alignof(FAnimationActiveTransitionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.InnerSingleton, Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.InnerSingleton;
}
// End ScriptStruct FAnimationActiveTransitionEntry

// Begin ScriptStruct FAnimationPotentialTransition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationPotentialTransition;
class UScriptStruct* FAnimationPotentialTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationPotentialTransition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationPotentialTransition"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationPotentialTransition>()
{
	return FAnimationPotentialTransition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationPotentialTransition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimationPotentialTransition",
	nullptr,
	0,
	sizeof(FAnimationPotentialTransition),
	alignof(FAnimationPotentialTransition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.InnerSingleton, Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.InnerSingleton;
}
// End ScriptStruct FAnimationPotentialTransition

// Begin ScriptStruct FAnimNode_StateMachine
static_assert(std::is_polymorphic<FAnimNode_StateMachine>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_StateMachine cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_StateMachine;
class UScriptStruct* FAnimNode_StateMachine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateMachine, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_StateMachine"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_StateMachine>()
{
	return FAnimNode_StateMachine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// State machine node\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "State machine node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineIndexInClass_MetaData[] = {
		{ "Comment", "// Index into the BakedStateMachines array in the owning UAnimBlueprintGeneratedClass\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Index into the BakedStateMachines array in the owning UAnimBlueprintGeneratedClass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionsPerFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The maximum number of transitions that can be taken by this machine 'simultaneously' in a single frame\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "The maximum number of transitions that can be taken by this machine 'simultaneously' in a single frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionsRequests_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// The maximum number of transition requests that can be buffered at any time.\n// The oldest transition requests are dropped to accommodate for newly created requests.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "The maximum number of transition requests that can be buffered at any time.\nThe oldest transition requests are dropped to accommodate for newly created requests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipFirstUpdateTransition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When the state machine becomes relevant, it is initialized into the Entry state.\n// It then tries to take any valid transitions to possibly end up in a different state on that same frame.\n// - if true, that new state starts full weight.\n// - if false, a blend is created between the entry state and that new state.\n// In either case all visited State notifications (Begin/End) will be triggered.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "When the state machine becomes relevant, it is initialized into the Entry state.\nIt then tries to take any valid transitions to possibly end up in a different state on that same frame.\n- if true, that new state starts full weight.\n- if false, a blend is created between the entry state and that new state.\nIn either case all visited State notifications (Begin/End) will be triggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializeOnBecomingRelevant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Reinitialize the state machine if we have become relevant to the graph\n// after not being ticked on the previous frame(s)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Reinitialize the state machine if we have become relevant to the graph\nafter not being ticked on the previous frame(s)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateNotifyMetaData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Tag Notifies with meta data such as the active state and mirroring state.  Producing this\n// data has a  slight performance cost.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Tag Notifies with meta data such as the active state and mirroring state.  Producing this\ndata has a  slight performance cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowConduitEntryStates_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Allows a conduit to be used as this state machine's entry state\n// If a valid entry state cannot be found at runtime then this will generate a reference pose!\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Allows a conduit to be used as this state machine's entry state\nIf a valid entry state cannot be found at runtime then this will generate a reference pose!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StateMachineIndexInClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTransitionsPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTransitionsRequests;
	static void NewProp_bSkipFirstUpdateTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipFirstUpdateTransition;
	static void NewProp_bReinitializeOnBecomingRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializeOnBecomingRelevant;
	static void NewProp_bCreateNotifyMetaData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateNotifyMetaData;
	static void NewProp_bAllowConduitEntryStates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowConduitEntryStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_StateMachine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass = { "StateMachineIndexInClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateMachine, StateMachineIndexInClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineIndexInClass_MetaData), NewProp_StateMachineIndexInClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame = { "MaxTransitionsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateMachine, MaxTransitionsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTransitionsPerFrame_MetaData), NewProp_MaxTransitionsPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsRequests = { "MaxTransitionsRequests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateMachine, MaxTransitionsRequests), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTransitionsRequests_MetaData), NewProp_MaxTransitionsRequests_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_SetBit(void* Obj)
{
	((FAnimNode_StateMachine*)Obj)->bSkipFirstUpdateTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition = { "bSkipFirstUpdateTransition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipFirstUpdateTransition_MetaData), NewProp_bSkipFirstUpdateTransition_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_SetBit(void* Obj)
{
	((FAnimNode_StateMachine*)Obj)->bReinitializeOnBecomingRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant = { "bReinitializeOnBecomingRelevant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReinitializeOnBecomingRelevant_MetaData), NewProp_bReinitializeOnBecomingRelevant_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_SetBit(void* Obj)
{
	((FAnimNode_StateMachine*)Obj)->bCreateNotifyMetaData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData = { "bCreateNotifyMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateNotifyMetaData_MetaData), NewProp_bCreateNotifyMetaData_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_SetBit(void* Obj)
{
	((FAnimNode_StateMachine*)Obj)->bAllowConduitEntryStates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates = { "bAllowConduitEntryStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowConduitEntryStates_MetaData), NewProp_bAllowConduitEntryStates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_StateMachine",
	Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers),
	sizeof(FAnimNode_StateMachine),
	alignof(FAnimNode_StateMachine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.InnerSingleton;
}
// End ScriptStruct FAnimNode_StateMachine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationActiveTransitionEntry::StaticStruct, Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewStructOps, TEXT("AnimationActiveTransitionEntry"), &Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationActiveTransitionEntry), 2385839821U) },
		{ FAnimationPotentialTransition::StaticStruct, Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::NewStructOps, TEXT("AnimationPotentialTransition"), &Z_Registration_Info_UScriptStruct_AnimationPotentialTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationPotentialTransition), 2439560921U) },
		{ FAnimNode_StateMachine::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewStructOps, TEXT("AnimNode_StateMachine"), &Z_Registration_Info_UScriptStruct_AnimNode_StateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_StateMachine), 4215717463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_4026527905(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
