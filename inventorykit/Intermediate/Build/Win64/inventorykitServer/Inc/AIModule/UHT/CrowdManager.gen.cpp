// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdManager() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager();
AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FCrowdAvoidanceConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig;
class UScriptStruct* FCrowdAvoidanceConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("CrowdAvoidanceConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FCrowdAvoidanceConfig>()
{
	return FCrowdAvoidanceConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Crowd manager is responsible for handling crowds using Detour (Recast library)\n *\n *  Agents will respect navmesh for all steering and avoidance updates, \n *  but it's slower than AvoidanceManager solution (RVO, cares only about agents)\n *\n *  All agents will operate on the same navmesh data, which will be picked from\n *  navigation system defaults (UNavigationSystemV1::SupportedAgents[0])\n *\n *  To use it, you have to add CrowdFollowingComponent to your agent\n *  (usually: replace class of PathFollowingComponent in AIController by adding \n *   those lines in controller's constructor\n *\n *   ACrowdAIController::ACrowdAIController(const FObjectInitializer& ObjectInitializer)\n *       : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT(\"PathFollowingComponent\")))\n *\n *   or simply add both components and switch move requests between them)\n *\n *  Actors that should be avoided, but are not being simulated by crowd (like players)\n *  should implement CrowdAgentInterface AND register/unregister themselves with crowd manager:\n *  \n *   UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);\n *   if (CrowdManager)\n *   {\n *      CrowdManager->RegisterAgent(this);\n *   }\n *\n *   Check flags in CrowdDebugDrawing namespace (CrowdManager.cpp) for debugging options.\n */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "Crowd manager is responsible for handling crowds using Detour (Recast library)\n\nAgents will respect navmesh for all steering and avoidance updates,\nbut it's slower than AvoidanceManager solution (RVO, cares only about agents)\n\nAll agents will operate on the same navmesh data, which will be picked from\nnavigation system defaults (UNavigationSystemV1::SupportedAgents[0])\n\nTo use it, you have to add CrowdFollowingComponent to your agent\n(usually: replace class of PathFollowingComponent in AIController by adding\n those lines in controller's constructor\n\n ACrowdAIController::ACrowdAIController(const FObjectInitializer& ObjectInitializer)\n     : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT(\"PathFollowingComponent\")))\n\n or simply add both components and switch move requests between them)\n\nActors that should be avoided, but are not being simulated by crowd (like players)\nshould implement CrowdAgentInterface AND register/unregister themselves with crowd manager:\n\n UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);\n if (CrowdManager)\n {\n    CrowdManager->RegisterAgent(this);\n }\n\n Check flags in CrowdDebugDrawing namespace (CrowdManager.cpp) for debugging options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBias_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredVelocityWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocityWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideBiasWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactTimeWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactTimeRange_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPatternIdx_MetaData[] = {
		{ "Category", "Crowd" },
		{ "Comment", "// index in SamplingPatterns array or 0xff for adaptive sampling\n" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "index in SamplingPatterns array or 0xff for adaptive sampling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDivisions_MetaData[] = {
		{ "Category", "Crowd" },
		{ "Comment", "// adaptive sampling: number of divisions per ring\n" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "adaptive sampling: number of divisions per ring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveRings_MetaData[] = {
		{ "Category", "Crowd" },
		{ "Comment", "// adaptive sampling: number of rings\n" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "adaptive sampling: number of rings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDepth_MetaData[] = {
		{ "Category", "Crowd" },
		{ "Comment", "// adaptive sampling: number of iterations at best velocity\n" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "adaptive sampling: number of iterations at best velocity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredVelocityWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentVelocityWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SideBiasWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactTimeWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactTimeRange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomPatternIdx;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdaptiveDivisions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdaptiveRings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdaptiveDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAvoidanceConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_VelocityBias = { "VelocityBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, VelocityBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityBias_MetaData), NewProp_VelocityBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_DesiredVelocityWeight = { "DesiredVelocityWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, DesiredVelocityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredVelocityWeight_MetaData), NewProp_DesiredVelocityWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CurrentVelocityWeight = { "CurrentVelocityWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, CurrentVelocityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentVelocityWeight_MetaData), NewProp_CurrentVelocityWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_SideBiasWeight = { "SideBiasWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, SideBiasWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideBiasWeight_MetaData), NewProp_SideBiasWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeWeight = { "ImpactTimeWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, ImpactTimeWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactTimeWeight_MetaData), NewProp_ImpactTimeWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeRange = { "ImpactTimeRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, ImpactTimeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactTimeRange_MetaData), NewProp_ImpactTimeRange_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CustomPatternIdx = { "CustomPatternIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, CustomPatternIdx), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPatternIdx_MetaData), NewProp_CustomPatternIdx_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDivisions = { "AdaptiveDivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveDivisions), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptiveDivisions_MetaData), NewProp_AdaptiveDivisions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveRings = { "AdaptiveRings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveRings), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptiveRings_MetaData), NewProp_AdaptiveRings_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDepth = { "AdaptiveDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveDepth), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptiveDepth_MetaData), NewProp_AdaptiveDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_VelocityBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_DesiredVelocityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CurrentVelocityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_SideBiasWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CustomPatternIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveRings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"CrowdAvoidanceConfig",
	Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::PropPointers),
	sizeof(FCrowdAvoidanceConfig),
	alignof(FCrowdAvoidanceConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig.InnerSingleton, Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig.InnerSingleton;
}
// End ScriptStruct FCrowdAvoidanceConfig

// Begin ScriptStruct FCrowdAvoidanceSamplingPattern
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern;
class UScriptStruct* FCrowdAvoidanceSamplingPattern::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("CrowdAvoidanceSamplingPattern"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FCrowdAvoidanceSamplingPattern>()
{
	return FCrowdAvoidanceSamplingPattern::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angles_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radii_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Angles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radii_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Radii;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAvoidanceSamplingPattern>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles_Inner = { "Angles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles = { "Angles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceSamplingPattern, Angles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angles_MetaData), NewProp_Angles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii_Inner = { "Radii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii = { "Radii", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAvoidanceSamplingPattern, Radii), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radii_MetaData), NewProp_Radii_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"CrowdAvoidanceSamplingPattern",
	Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::PropPointers),
	sizeof(FCrowdAvoidanceSamplingPattern),
	alignof(FCrowdAvoidanceSamplingPattern),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern.InnerSingleton, Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern.InnerSingleton;
}
// End ScriptStruct FCrowdAvoidanceSamplingPattern

// Begin Class UCrowdManager
void UCrowdManager::StaticRegisterNativesUCrowdManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdManager);
UClass* Z_Construct_UClass_UCrowdManager_NoRegister()
{
	return UCrowdManager::StaticClass();
}
struct Z_Construct_UClass_UCrowdManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/CrowdManager.h" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** obstacle avoidance params */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "obstacle avoidance params" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPatterns_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** obstacle avoidance params */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "obstacle avoidance params" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAgents_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** max number of agents supported by crowd */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max number of agents supported by crowd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAgentRadius_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** max radius of agent that can be added to crowd */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max radius of agent that can be added to crowd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAvoidedAgents_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** max number of neighbor agents for velocity avoidance */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max number of neighbor agents for velocity avoidance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAvoidedWalls_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** max number of wall segments for velocity avoidance */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max number of wall segments for velocity avoidance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavmeshCheckInterval_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** how often should agents check their position after moving off navmesh? */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "how often should agents check their position after moving off navmesh?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOptimizationInterval_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** how often should agents try to optimize their paths? */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "how often should agents try to optimize their paths?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeparationDirClamp_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** clamp separation force to left/right when neighbor is behind (dot between forward and dirToNei, -1 = disabled) */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "clamp separation force to left/right when neighbor is behind (dot between forward and dirToNei, -1 = disabled)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetRadiusMultiplier_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** agent radius multiplier for offsetting path around corners */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "agent radius multiplier for offsetting path around corners" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResolveCollisions_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** should crowd simulation resolve collisions between agents? if not, this will be handled by their movement components */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "should crowd simulation resolve collisions between agents? if not, this will be handled by their movement components" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyNavData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvoidanceConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvoidanceConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingPatterns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplingPatterns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAgents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAgentRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAvoidedAgents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAvoidedWalls;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavmeshCheckInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PathOptimizationInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeparationDirClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PathOffsetRadiusMultiplier;
	static void NewProp_bResolveCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolveCollisions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyNavData_MetaData), NewProp_MyNavData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig_Inner = { "AvoidanceConfig", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdAvoidanceConfig, METADATA_PARAMS(0, nullptr) }; // 2205810505
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig = { "AvoidanceConfig", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, AvoidanceConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceConfig_MetaData), NewProp_AvoidanceConfig_MetaData) }; // 2205810505
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns_Inner = { "SamplingPatterns", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern, METADATA_PARAMS(0, nullptr) }; // 2418108553
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns = { "SamplingPatterns", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, SamplingPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingPatterns_MetaData), NewProp_SamplingPatterns_MetaData) }; // 2418108553
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgents = { "MaxAgents", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, MaxAgents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAgents_MetaData), NewProp_MaxAgents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgentRadius = { "MaxAgentRadius", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, MaxAgentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAgentRadius_MetaData), NewProp_MaxAgentRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedAgents = { "MaxAvoidedAgents", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, MaxAvoidedAgents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAvoidedAgents_MetaData), NewProp_MaxAvoidedAgents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedWalls = { "MaxAvoidedWalls", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, MaxAvoidedWalls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAvoidedWalls_MetaData), NewProp_MaxAvoidedWalls_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_NavmeshCheckInterval = { "NavmeshCheckInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, NavmeshCheckInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavmeshCheckInterval_MetaData), NewProp_NavmeshCheckInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOptimizationInterval = { "PathOptimizationInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, PathOptimizationInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOptimizationInterval_MetaData), NewProp_PathOptimizationInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_SeparationDirClamp = { "SeparationDirClamp", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, SeparationDirClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeparationDirClamp_MetaData), NewProp_SeparationDirClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOffsetRadiusMultiplier = { "PathOffsetRadiusMultiplier", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdManager, PathOffsetRadiusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOffsetRadiusMultiplier_MetaData), NewProp_PathOffsetRadiusMultiplier_MetaData) };
void Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_SetBit(void* Obj)
{
	((UCrowdManager*)Obj)->bResolveCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions = { "bResolveCollisions", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCrowdManager), &Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResolveCollisions_MetaData), NewProp_bResolveCollisions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MyNavData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedAgents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedWalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_NavmeshCheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOptimizationInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_SeparationDirClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOffsetRadiusMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrowdManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCrowdManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdManager_Statics::ClassParams = {
	&UCrowdManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCrowdManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::PropPointers),
	0,
	0x000800AEu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrowdManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrowdManager()
{
	if (!Z_Registration_Info_UClass_UCrowdManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdManager.OuterSingleton, Z_Construct_UClass_UCrowdManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrowdManager.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UCrowdManager>()
{
	return UCrowdManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdManager);
UCrowdManager::~UCrowdManager() {}
// End Class UCrowdManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCrowdAvoidanceConfig::StaticStruct, Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewStructOps, TEXT("CrowdAvoidanceConfig"), &Z_Registration_Info_UScriptStruct_CrowdAvoidanceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdAvoidanceConfig), 2205810505U) },
		{ FCrowdAvoidanceSamplingPattern::StaticStruct, Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewStructOps, TEXT("CrowdAvoidanceSamplingPattern"), &Z_Registration_Info_UScriptStruct_CrowdAvoidanceSamplingPattern, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdAvoidanceSamplingPattern), 2418108553U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdManager, UCrowdManager::StaticClass, TEXT("UCrowdManager"), &Z_Registration_Info_UClass_UCrowdManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdManager), 3491009274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_1613014945(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
