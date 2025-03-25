// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/ChaosSolverConfiguration.h"
#include "Runtime/Experimental/Chaos/Public/SolverEventFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverConfiguration() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EClusterUnionMethod();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FChaosSolverConfiguration();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin Enum EClusterUnionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterUnionMethod;
static UEnum* EClusterUnionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EClusterUnionMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EClusterUnionMethod"));
	}
	return Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EClusterUnionMethod>()
{
	return EClusterUnionMethod_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BoundsOverlapFilteredDelaunayTriangulation.Name", "EClusterUnionMethod::BoundsOverlapFilteredDelaunayTriangulation" },
		{ "DelaunayTriangulation.Name", "EClusterUnionMethod::DelaunayTriangulation" },
		{ "MinimalSpanningSubsetDelaunayTriangulation.Name", "EClusterUnionMethod::MinimalSpanningSubsetDelaunayTriangulation" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "None.Name", "EClusterUnionMethod::None" },
		{ "PointImplicit.Name", "EClusterUnionMethod::PointImplicit" },
		{ "PointImplicitAugmentedWithMinimalDelaunay.Name", "EClusterUnionMethod::PointImplicitAugmentedWithMinimalDelaunay" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClusterUnionMethod::PointImplicit", (int64)EClusterUnionMethod::PointImplicit },
		{ "EClusterUnionMethod::DelaunayTriangulation", (int64)EClusterUnionMethod::DelaunayTriangulation },
		{ "EClusterUnionMethod::MinimalSpanningSubsetDelaunayTriangulation", (int64)EClusterUnionMethod::MinimalSpanningSubsetDelaunayTriangulation },
		{ "EClusterUnionMethod::PointImplicitAugmentedWithMinimalDelaunay", (int64)EClusterUnionMethod::PointImplicitAugmentedWithMinimalDelaunay },
		{ "EClusterUnionMethod::BoundsOverlapFilteredDelaunayTriangulation", (int64)EClusterUnionMethod::BoundsOverlapFilteredDelaunayTriangulation },
		{ "EClusterUnionMethod::None", (int64)EClusterUnionMethod::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EClusterUnionMethod",
	"EClusterUnionMethod",
	Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EClusterUnionMethod()
{
	if (!Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton;
}
// End Enum EClusterUnionMethod

// Begin ScriptStruct FChaosSolverConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration;
class UScriptStruct* FChaosSolverConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosSolverConfiguration, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ChaosSolverConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FChaosSolverConfiguration>()
{
	return FChaosSolverConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "ClampMin", "0" },
		{ "Comment", "// The number of position iterations to run during the constraint solver step\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The number of position iterations to run during the constraint solver step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "ClampMin", "0" },
		{ "Comment", "// The number of velocity iterations to run during the constraint solver step\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The number of velocity iterations to run during the constraint solver step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "ClampMin", "0" },
		{ "Comment", "// The number of projection iterations to run during the constraint solver step\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The number of projection iterations to run during the constraint solver step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMarginFraction_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A collision margin as a fraction of size used by some boxes and convex shapes to improve collision detection results.\n// The core geometry of shapes that support a margin are reduced in size by the margin, and the margin\n// is added back on during collision detection. The net result is a shape of the same size but with rounded corners.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "A collision margin as a fraction of size used by some boxes and convex shapes to improve collision detection results.\nThe core geometry of shapes that support a margin are reduced in size by the margin, and the margin\nis added back on during collision detection. The net result is a shape of the same size but with rounded corners." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMarginMax_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// An upper limit on the collision margin that will be subtracted from boxes and convex shapes. See CollisionMarginFraction\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "An upper limit on the collision margin that will be subtracted from boxes and convex shapes. See CollisionMarginFraction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCullDistance_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// During collision detection, if tweo shapes are at least this far apart we do not calculate their nearest features\n// during the collision detection step.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "During collision detection, if tweo shapes are at least this far apart we do not calculate their nearest features\nduring the collision detection step." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMaxPushOutVelocity_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The maximum speed at which two bodies can be extracted from each other when they start a frame inter-penetrating. This can\n// happen because they spawned on top of each other, or the solver failed to fully reolve collisions last frame. A value of\n// zero means \"no limit\". A non-zero value can be used to prevent explosive behaviour when bodies start deeply penetrating. \n// An alternative to using this approach is to increase the number of Velocity Iterations, which is more expensive but will \n// ensure the bodies are depenetrated in a single frame without explosive behaviour.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The maximum speed at which two bodies can be extracted from each other when they start a frame inter-penetrating. This can\nhappen because they spawned on top of each other, or the solver failed to fully reolve collisions last frame. A value of\nzero means \"no limit\". A non-zero value can be used to prevent explosive behaviour when bodies start deeply penetrating.\nAn alternative to using this approach is to increase the number of Velocity Iterations, which is more expensive but will\nensure the bodies are depenetrated in a single frame without explosive behaviour." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionInitialOverlapDepenetrationVelocity_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "Comment", "// If two bodies start off in overlapping each other, they will depentrate at this speed when they wake.\n// If set to a large value, initially-overlapping objects will tend to \"explode\" apart at a speed that depends on the\n// overlap amount and the timestep (this is the original, previously untunable behaviour). If set to zero, \n// initially-overlapping objects will remain stationary and go to sleep until acted on by some other object or force.\n// A negative value (-1) disables the feature and is equivalent to infinity.\n// This property can be overridden per Body (see FBodyInstance::MaxDepenetrationVelocity)\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "If two bodies start off in overlapping each other, they will depentrate at this speed when they wake.\nIf set to a large value, initially-overlapping objects will tend to \"explode\" apart at a speed that depends on the\noverlap amount and the timestep (this is the original, previously untunable behaviour). If set to zero,\ninitially-overlapping objects will remain stationary and go to sleep until acted on by some other object or force.\nA negative value (-1) disables the feature and is equivalent to infinity.\nThis property can be overridden per Body (see FBodyInstance::MaxDepenetrationVelocity)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionFactor_MetaData[] = {
		{ "Category", "SolverConfiguration|Clustering" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterUnionConnectionType_MetaData[] = {
		{ "Category", "SolverConfiguration|Clustering" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisionData_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFilterSettings_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "EditCondition", "bGenerateCollisionData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateBreakData_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakingFilterSettings_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "EditCondition", "bGenerateBreakData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateTrailingData_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingFilterSettings_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "EditCondition", "bGenerateTrailingData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Comment", "// Renamed to PositionIterations\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "Renamed to PositionIterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushOutIterations_MetaData[] = {
		{ "Comment", "// Renamed to VelocityIterations\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "Renamed to VelocityIterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateContactGraph_MetaData[] = {
		{ "Comment", "// No longer used\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "No longer used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VelocityIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectionIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMarginFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMarginMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionCullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMaxPushOutVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionInitialOverlapDepenetrationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterConnectionFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterUnionConnectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterUnionConnectionType;
	static void NewProp_bGenerateCollisionData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionFilterSettings;
	static void NewProp_bGenerateBreakData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateBreakData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingFilterSettings;
	static void NewProp_bGenerateTrailingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateTrailingData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingFilterSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PushOutIterations;
	static void NewProp_bGenerateContactGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateContactGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosSolverConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PositionIterations = { "PositionIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, PositionIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionIterations_MetaData), NewProp_PositionIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_VelocityIterations = { "VelocityIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, VelocityIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityIterations_MetaData), NewProp_VelocityIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ProjectionIterations = { "ProjectionIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, ProjectionIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionIterations_MetaData), NewProp_ProjectionIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginFraction = { "CollisionMarginFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionMarginFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMarginFraction_MetaData), NewProp_CollisionMarginFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginMax = { "CollisionMarginMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionMarginMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMarginMax_MetaData), NewProp_CollisionMarginMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionCullDistance = { "CollisionCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionCullDistance_MetaData), NewProp_CollisionCullDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMaxPushOutVelocity = { "CollisionMaxPushOutVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionMaxPushOutVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMaxPushOutVelocity_MetaData), NewProp_CollisionMaxPushOutVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionInitialOverlapDepenetrationVelocity = { "CollisionInitialOverlapDepenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionInitialOverlapDepenetrationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionInitialOverlapDepenetrationVelocity_MetaData), NewProp_CollisionInitialOverlapDepenetrationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterConnectionFactor = { "ClusterConnectionFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, ClusterConnectionFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterConnectionFactor_MetaData), NewProp_ClusterConnectionFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType = { "ClusterUnionConnectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, ClusterUnionConnectionType), Z_Construct_UEnum_Chaos_EClusterUnionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterUnionConnectionType_MetaData), NewProp_ClusterUnionConnectionType_MetaData) }; // 2024566547
void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_SetBit(void* Obj)
{
	((FChaosSolverConfiguration*)Obj)->bGenerateCollisionData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData = { "bGenerateCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateCollisionData_MetaData), NewProp_bGenerateCollisionData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionFilterSettings = { "CollisionFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionFilterSettings), Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionFilterSettings_MetaData), NewProp_CollisionFilterSettings_MetaData) }; // 2736936784
void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_SetBit(void* Obj)
{
	((FChaosSolverConfiguration*)Obj)->bGenerateBreakData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData = { "bGenerateBreakData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateBreakData_MetaData), NewProp_bGenerateBreakData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_BreakingFilterSettings = { "BreakingFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, BreakingFilterSettings), Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakingFilterSettings_MetaData), NewProp_BreakingFilterSettings_MetaData) }; // 1894804595
void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_SetBit(void* Obj)
{
	((FChaosSolverConfiguration*)Obj)->bGenerateTrailingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData = { "bGenerateTrailingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateTrailingData_MetaData), NewProp_bGenerateTrailingData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_TrailingFilterSettings = { "TrailingFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, TrailingFilterSettings), Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingFilterSettings_MetaData), NewProp_TrailingFilterSettings_MetaData) }; // 1270446885
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, Iterations_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PushOutIterations = { "PushOutIterations", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosSolverConfiguration, PushOutIterations_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushOutIterations_MetaData), NewProp_PushOutIterations_MetaData) };
void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_SetBit(void* Obj)
{
	((FChaosSolverConfiguration*)Obj)->bGenerateContactGraph_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph = { "bGenerateContactGraph", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateContactGraph_MetaData), NewProp_bGenerateContactGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PositionIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_VelocityIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ProjectionIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMaxPushOutVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionInitialOverlapDepenetrationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterConnectionFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionFilterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_BreakingFilterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_TrailingFilterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PushOutIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"ChaosSolverConfiguration",
	Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::PropPointers),
	sizeof(FChaosSolverConfiguration),
	alignof(FChaosSolverConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosSolverConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.InnerSingleton;
}
// End ScriptStruct FChaosSolverConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClusterUnionMethod_StaticEnum, TEXT("EClusterUnionMethod"), &Z_Registration_Info_UEnum_EClusterUnionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2024566547U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosSolverConfiguration::StaticStruct, Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewStructOps, TEXT("ChaosSolverConfiguration"), &Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosSolverConfiguration), 779114720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_1750593296(TEXT("/Script/Chaos"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
