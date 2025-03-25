// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_MoveTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveTo() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_MoveTo
void UBTTask_MoveTo::StaticRegisterNativesUBTTask_MoveTo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MoveTo);
UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister()
{
	return UBTTask_MoveTo::StaticClass();
}
struct Z_Construct_UClass_UBTTask_MoveTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Move To task node.\n * Moves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "Move To task node.\nMoves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** fixed distance added to threshold between AI and goal location in destination reach test */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "fixed distance added to threshold between AI and goal location in destination reach test" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedBlackboardValueTolerance_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ClampMin", "1" },
		{ "Comment", "/** if task is expected to react to changes to location represented by BB key \n\x09 *\x09this property can be used to tweak sensitivity of the mechanism. Value is \n\x09 *\x09recommended to be less than AcceptableRadius */" },
		{ "DisplayAfter", "bObserveBlackboardValue" },
		{ "EditCondition", "bObserveBlackboardValue" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if task is expected to react to changes to location represented by BB key\n    this property can be used to tweak sensitivity of the mechanism. Value is\n    recommended to be less than AcceptableRadius" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bObserveBlackboardValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** if move goal in BB changes the move will be redirected to new location */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if move goal in BB changes the move will be redirected to new location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, use incomplete path when goal can't be reached */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackMovingGoal_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, path to goal actor will update itself when actor moves */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, path to goal actor will update itself when actor moves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNavigableEndLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, the goal location will need to be navigable */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, the goal location will need to be navigable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, goal location will be projected on navigation data (navmesh) before using */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, goal location will be projected on navigation data (navmesh) before using" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesAgentRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesGoalRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlap_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** DEPRECATED, please use combination of bReachTestIncludes*Radius instead */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "DEPRECATED, please use combination of bReachTestIncludes*Radius instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlapNeedsUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObservedBlackboardValueTolerance;
	static void NewProp_bObserveBlackboardValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bObserveBlackboardValue;
	static void NewProp_bAllowStrafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
	static void NewProp_bAllowPartialPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
	static void NewProp_bTrackMovingGoal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackMovingGoal;
	static void NewProp_bRequireNavigableEndLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNavigableEndLocation;
	static void NewProp_bProjectGoalLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalLocation;
	static void NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesAgentRadius;
	static void NewProp_bReachTestIncludesGoalRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesGoalRadius;
	static void NewProp_bStopOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
	static void NewProp_bStopOnOverlapNeedsUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlapNeedsUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveTo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterClass_MetaData), NewProp_FilterClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance = { "ObservedBlackboardValueTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, ObservedBlackboardValueTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedBlackboardValueTolerance_MetaData), NewProp_ObservedBlackboardValueTolerance_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bObserveBlackboardValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue = { "bObserveBlackboardValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bObserveBlackboardValue_MetaData), NewProp_bObserveBlackboardValue_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bAllowStrafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStrafe_MetaData), NewProp_bAllowStrafe_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bAllowPartialPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPartialPath_MetaData), NewProp_bAllowPartialPath_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bTrackMovingGoal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal = { "bTrackMovingGoal", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackMovingGoal_MetaData), NewProp_bTrackMovingGoal_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bRequireNavigableEndLocation_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bRequireNavigableEndLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bRequireNavigableEndLocation = { "bRequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bRequireNavigableEndLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireNavigableEndLocation_MetaData), NewProp_bRequireNavigableEndLocation_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bProjectGoalLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation = { "bProjectGoalLocation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectGoalLocation_MetaData), NewProp_bProjectGoalLocation_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bReachTestIncludesAgentRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius = { "bReachTestIncludesAgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReachTestIncludesAgentRadius_MetaData), NewProp_bReachTestIncludesAgentRadius_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bReachTestIncludesGoalRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius = { "bReachTestIncludesGoalRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReachTestIncludesGoalRadius_MetaData), NewProp_bReachTestIncludesGoalRadius_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bStopOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopOnOverlap_MetaData), NewProp_bStopOnOverlap_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bStopOnOverlapNeedsUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate = { "bStopOnOverlapNeedsUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopOnOverlapNeedsUpdate_MetaData), NewProp_bStopOnOverlapNeedsUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bRequireNavigableEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_MoveTo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveTo_Statics::ClassParams = {
	&UBTTask_MoveTo::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_MoveTo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_MoveTo()
{
	if (!Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton, Z_Construct_UClass_UBTTask_MoveTo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_MoveTo>()
{
	return UBTTask_MoveTo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveTo);
UBTTask_MoveTo::~UBTTask_MoveTo() {}
// End Class UBTTask_MoveTo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MoveTo, UBTTask_MoveTo::StaticClass, TEXT("UBTTask_MoveTo"), &Z_Registration_Info_UClass_UBTTask_MoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MoveTo), 3533895424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_611539409(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
