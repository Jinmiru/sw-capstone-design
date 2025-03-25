// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/AISystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISystem() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISystem();
AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
ENGINE_API UClass* Z_Construct_UClass_UAISystemBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISystem Function AIIgnorePlayers
struct Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------------------------------//\n// cheats\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "cheats" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, nullptr, "AIIgnorePlayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAISystem_AIIgnorePlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISystem::execAIIgnorePlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AIIgnorePlayers();
	P_NATIVE_END;
}
// End Class UAISystem Function AIIgnorePlayers

// Begin Class UAISystem Function AILoggingVerbose
struct Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, nullptr, "AILoggingVerbose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAISystem_AILoggingVerbose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISystem::execAILoggingVerbose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AILoggingVerbose();
	P_NATIVE_END;
}
// End Class UAISystem Function AILoggingVerbose

// Begin Class UAISystem
void UAISystem::StaticRegisterNativesUAISystem()
{
	UClass* Class = UAISystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AIIgnorePlayers", &UAISystem::execAIIgnorePlayers },
		{ "AILoggingVerbose", &UAISystem::execAILoggingVerbose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISystem);
UClass* Z_Construct_UClass_UAISystem_NoRegister()
{
	return UAISystem::StaticClass();
}
struct Z_Construct_UClass_UAISystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AISystem.h" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystemClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** Class that will be used to spawn the perception system, can be game-specific */" },
		{ "DisplayName", "Perception System Class" },
		{ "MetaClass", "/Script/AIModule.AIPerceptionSystem" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Class that will be used to spawn the perception system, can be game-specific" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HotSpotManagerClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** Class that will be used to spawn the hot spot manager, can be game-specific */" },
		{ "DisplayName", "AIHotSpotManager Class" },
		{ "MetaClass", "/Script/AIModule.AIHotSpotManager" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Class that will be used to spawn the hot spot manager, can be game-specific" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvQueryManagerClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** Class that will be used to spawn the env query manager, can be game-specific */" },
		{ "DisplayName", "EnvQueryManager Class" },
		{ "MetaClass", "/Script/AIModule.EnvQueryManager" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Class that will be used to spawn the env query manager, can be game-specific" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Default AI movement's acceptance radius used to determine whether \n \x09 * AI reached path's end */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Default AI movement's acceptance radius used to determine whether\nAI reached path's end" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Value used for pathfollowing's internal code to determine whether AI reached path's point. \n\x09 *\x09@note this value is not used for path's last point. @see AcceptanceRadius*/" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Value used for pathfollowing's internal code to determine whether AI reached path's point.\n    @note this value is not used for path's last point. @see AcceptanceRadius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Similarly to PathfollowingRegularPathPointAcceptanceRadius used by pathfollowing's internals\n\x09 *\x09""but gets applied only when next point on a path represents a begining of navigation link */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Similarly to PathfollowingRegularPathPointAcceptanceRadius used by pathfollowing's internals\n    but gets applied only when next point on a path represents a begining of navigation link" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinishMoveOnGoalOverlap_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** If true, overlapping the goal will be counted by default as finishing a move */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If true, overlapping the goal will be counted by default as finishing a move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAcceptPartialPaths_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets default value for rather move tasks accept partial paths or not */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Sets default value for rather move tasks accept partial paths or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafing_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets default value for rather move tasks allow strafing or not */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Sets default value for rather move tasks allow strafing or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowControllersAsEQSQuerier_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** if enable will make EQS not complaint about using Controllers as queriers. Default behavior (false) will \n\x09 *\x09in places automatically convert controllers to pawns, and complain if code user bypasses the conversion or uses\n\x09 *\x09pawn-less controller */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "if enable will make EQS not complaint about using Controllers as queriers. Default behavior (false) will\n    in places automatically convert controllers to pawns, and complain if code user bypasses the conversion or uses\n    pawn-less controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebuggerPlugin_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** if set, GameplayDebuggerPlugin will be loaded on module's startup */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "if set, GameplayDebuggerPlugin will be loaded on module's startup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForgetStaleActors_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** If set, actors will be forgotten by the perception system when their stimulus has expired.\n\x09 *\x09If not set, the perception system will remember the actor even if they are no longer perceived and their\n\x09 *\x09stimuli has exceeded its max age */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If set, actors will be forgotten by the perception system when their stimulus has expired.\n    If not set, the perception system will remember the actor even if they are no longer perceived and their\n    stimuli has exceeded its max age" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddBlackboardSelfKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** If set to true will result in automatically adding the SelfActor key to new Blackboard assets. It will \n\x09 *\x09""also result in making sure all the BB assets loaded do have the SelfKey entry, via PostLoad */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If set to true will result in automatically adding the SelfActor key to new Blackboard assets. It will\n    also result in making sure all the BB assets loaded do have the SelfKey entry, via PostLoad" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearBBEntryOnBTEQSFail_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "Comment", "/** If enabled, blackboard based decorators will set key to 'Invalid' on creation or when selected key no longer exists (instead of using the first key of the blackboard). */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If enabled, blackboard based decorators will set key to 'Invalid' on creation or when selected key no longer exists (instead of using the first key of the blackboard)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlackboard_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "Comment", "/** If set, new BTs will use this BB as default. */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If set, new BTs will use this BB as default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSightCollisionChannel_MetaData[] = {
		{ "Category", "PerceptionSystem" },
		{ "Comment", "/** Which collision channel to use for sight checks by default */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Which collision channel to use for sight checks by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeManager_MetaData[] = {
		{ "Comment", "/** Behavior tree manager used by game */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Behavior tree manager used by game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentQueryManager_MetaData[] = {
		{ "Comment", "/** Environment query manager used by game */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Environment query manager used by game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllProxyObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HotSpotManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavLocalGrids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerceptionSystemClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HotSpotManagerClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvQueryManagerClassName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfollowingRegularPathPointAcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfollowingNavLinkAcceptanceRadius;
	static void NewProp_bFinishMoveOnGoalOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishMoveOnGoalOverlap;
	static void NewProp_bAcceptPartialPaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAcceptPartialPaths;
	static void NewProp_bAllowStrafing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafing;
	static void NewProp_bAllowControllersAsEQSQuerier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowControllersAsEQSQuerier;
	static void NewProp_bEnableDebuggerPlugin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebuggerPlugin;
	static void NewProp_bForgetStaleActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForgetStaleActors;
	static void NewProp_bAddBlackboardSelfKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddBlackboardSelfKey;
	static void NewProp_bClearBBEntryOnBTEQSFail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBBEntryOnBTEQSFail;
	static void NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBlackboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSightCollisionChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvironmentQueryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllProxyObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllProxyObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HotSpotManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavLocalGrids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISystem_AIIgnorePlayers, "AIIgnorePlayers" }, // 4040847759
		{ &Z_Construct_UFunction_UAISystem_AILoggingVerbose, "AILoggingVerbose" }, // 811865392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName = { "PerceptionSystemClassName", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, PerceptionSystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionSystemClassName_MetaData), NewProp_PerceptionSystemClassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName = { "HotSpotManagerClassName", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, HotSpotManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HotSpotManagerClassName_MetaData), NewProp_HotSpotManagerClassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_EnvQueryManagerClassName = { "EnvQueryManagerClassName", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, EnvQueryManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvQueryManagerClassName_MetaData), NewProp_EnvQueryManagerClassName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius = { "PathfollowingRegularPathPointAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, PathfollowingRegularPathPointAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData), NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius = { "PathfollowingNavLinkAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, PathfollowingNavLinkAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData), NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bFinishMoveOnGoalOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap = { "bFinishMoveOnGoalOverlap", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinishMoveOnGoalOverlap_MetaData), NewProp_bFinishMoveOnGoalOverlap_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bAcceptPartialPaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths = { "bAcceptPartialPaths", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAcceptPartialPaths_MetaData), NewProp_bAcceptPartialPaths_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bAllowStrafing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing = { "bAllowStrafing", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStrafing_MetaData), NewProp_bAllowStrafing_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bAllowControllersAsEQSQuerier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier = { "bAllowControllersAsEQSQuerier", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowControllersAsEQSQuerier_MetaData), NewProp_bAllowControllersAsEQSQuerier_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bEnableDebuggerPlugin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin = { "bEnableDebuggerPlugin", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebuggerPlugin_MetaData), NewProp_bEnableDebuggerPlugin_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bForgetStaleActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors = { "bForgetStaleActors", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForgetStaleActors_MetaData), NewProp_bForgetStaleActors_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bAddBlackboardSelfKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey = { "bAddBlackboardSelfKey", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddBlackboardSelfKey_MetaData), NewProp_bAddBlackboardSelfKey_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bClearBBEntryOnBTEQSFail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail = { "bClearBBEntryOnBTEQSFail", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearBBEntryOnBTEQSFail_MetaData), NewProp_bClearBBEntryOnBTEQSFail_MetaData) };
void Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit(void* Obj)
{
	((UAISystem*)Obj)->bBlackboardKeyDecoratorAllowsNoneAsValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue = { "bBlackboardKeyDecoratorAllowsNoneAsValue", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_MetaData), NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultBlackboard = { "DefaultBlackboard", nullptr, (EPropertyFlags)0x0014000000054001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, DefaultBlackboard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlackboard_MetaData), NewProp_DefaultBlackboard_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel = { "DefaultSightCollisionChannel", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, DefaultSightCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSightCollisionChannel_MetaData), NewProp_DefaultSightCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager = { "BehaviorTreeManager", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, BehaviorTreeManager), Z_Construct_UClass_UBehaviorTreeManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeManager_MetaData), NewProp_BehaviorTreeManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager = { "EnvironmentQueryManager", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, EnvironmentQueryManager), Z_Construct_UClass_UEnvQueryManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentQueryManager_MetaData), NewProp_EnvironmentQueryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem = { "PerceptionSystem", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, PerceptionSystem), Z_Construct_UClass_UAIPerceptionSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionSystem_MetaData), NewProp_PerceptionSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_Inner = { "AllProxyObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects = { "AllProxyObjects", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, AllProxyObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllProxyObjects_MetaData), NewProp_AllProxyObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager = { "HotSpotManager", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, HotSpotManager), Z_Construct_UClass_UAIHotSpotManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HotSpotManager_MetaData), NewProp_HotSpotManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids = { "NavLocalGrids", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISystem, NavLocalGrids), Z_Construct_UClass_UNavLocalGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavLocalGrids_MetaData), NewProp_NavLocalGrids_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_EnvQueryManagerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISystem_Statics::ClassParams = {
	&UAISystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAISystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISystem()
{
	if (!Z_Registration_Info_UClass_UAISystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISystem.OuterSingleton, Z_Construct_UClass_UAISystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISystem.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISystem>()
{
	return UAISystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISystem);
UAISystem::~UAISystem() {}
// End Class UAISystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISystem, UAISystem::StaticClass, TEXT("UAISystem"), &Z_Registration_Info_UClass_UAISystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISystem), 644281319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_1907537569(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
