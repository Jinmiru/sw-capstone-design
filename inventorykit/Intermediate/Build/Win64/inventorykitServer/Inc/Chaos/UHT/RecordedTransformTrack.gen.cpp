// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/RecordedTransformTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordedTransformTrack() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedFrame();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedTransformTrack();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingData();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionData();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin ScriptStruct FSolverCollisionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverCollisionData;
class UScriptStruct* FSolverCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverCollisionData, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_SolverCollisionData.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverCollisionData>()
{
	return FSolverCollisionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverCollisionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass1_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass2_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelsetIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndexMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelsetIndexMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelsetIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndexMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelsetIndexMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverCollisionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedImpulse_MetaData), NewProp_AccumulatedImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Velocity1 = { "Velocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, Velocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity1_MetaData), NewProp_Velocity1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Velocity2 = { "Velocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, Velocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity2_MetaData), NewProp_Velocity2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_AngularVelocity1 = { "AngularVelocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, AngularVelocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity1_MetaData), NewProp_AngularVelocity1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_AngularVelocity2 = { "AngularVelocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, AngularVelocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity2_MetaData), NewProp_AngularVelocity2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Mass1 = { "Mass1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, Mass1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass1_MetaData), NewProp_Mass1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Mass2 = { "Mass2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, Mass2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass2_MetaData), NewProp_Mass2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_LevelsetIndex = { "LevelsetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, LevelsetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelsetIndex_MetaData), NewProp_LevelsetIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_ParticleIndexMesh = { "ParticleIndexMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, ParticleIndexMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndexMesh_MetaData), NewProp_ParticleIndexMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_LevelsetIndexMesh = { "LevelsetIndexMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionData, LevelsetIndexMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelsetIndexMesh_MetaData), NewProp_LevelsetIndexMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_AccumulatedImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Velocity1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Velocity2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_AngularVelocity1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_AngularVelocity2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Mass1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_Mass2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_LevelsetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_ParticleIndexMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewProp_LevelsetIndexMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"SolverCollisionData",
	Z_Construct_UScriptStruct_FSolverCollisionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionData_Statics::PropPointers),
	sizeof(FSolverCollisionData),
	alignof(FSolverCollisionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverCollisionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionData()
{
	if (!Z_Registration_Info_UScriptStruct_SolverCollisionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FSolverCollisionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverCollisionData.InnerSingleton;
}
// End ScriptStruct FSolverCollisionData

// Begin ScriptStruct FSolverBreakingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverBreakingData;
class UScriptStruct* FSolverBreakingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverBreakingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverBreakingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverBreakingData, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverBreakingData"));
	}
	return Z_Registration_Info_UScriptStruct_SolverBreakingData.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverBreakingData>()
{
	return FSolverBreakingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverBreakingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndexMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndexMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverBreakingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingData, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingData, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_ParticleIndexMesh = { "ParticleIndexMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingData, ParticleIndexMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndexMesh_MetaData), NewProp_ParticleIndexMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverBreakingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewProp_ParticleIndexMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverBreakingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"SolverBreakingData",
	Z_Construct_UScriptStruct_FSolverBreakingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingData_Statics::PropPointers),
	sizeof(FSolverBreakingData),
	alignof(FSolverBreakingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverBreakingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingData()
{
	if (!Z_Registration_Info_UScriptStruct_SolverBreakingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverBreakingData.InnerSingleton, Z_Construct_UScriptStruct_FSolverBreakingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverBreakingData.InnerSingleton;
}
// End ScriptStruct FSolverBreakingData

// Begin ScriptStruct FSolverTrailingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverTrailingData;
class UScriptStruct* FSolverTrailingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverTrailingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverTrailingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverTrailingData, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverTrailingData"));
	}
	return Z_Registration_Info_UScriptStruct_SolverTrailingData.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverTrailingData>()
{
	return FSolverTrailingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverTrailingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndexMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndexMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverTrailingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingData, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingData, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_ParticleIndexMesh = { "ParticleIndexMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingData, ParticleIndexMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndexMesh_MetaData), NewProp_ParticleIndexMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverTrailingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewProp_ParticleIndexMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"SolverTrailingData",
	Z_Construct_UScriptStruct_FSolverTrailingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingData_Statics::PropPointers),
	sizeof(FSolverTrailingData),
	alignof(FSolverTrailingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverTrailingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingData()
{
	if (!Z_Registration_Info_UScriptStruct_SolverTrailingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverTrailingData.InnerSingleton, Z_Construct_UScriptStruct_FSolverTrailingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverTrailingData.InnerSingleton;
}
// End ScriptStruct FSolverTrailingData

// Begin Enum EGeometryCollectionCacheType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryCollectionCacheType;
static UEnum* EGeometryCollectionCacheType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGeometryCollectionCacheType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGeometryCollectionCacheType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EGeometryCollectionCacheType"));
	}
	return Z_Registration_Info_UEnum_EGeometryCollectionCacheType.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EGeometryCollectionCacheType>()
{
	return EGeometryCollectionCacheType_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "None.Name", "EGeometryCollectionCacheType::None" },
		{ "Play.Name", "EGeometryCollectionCacheType::Play" },
		{ "Record.Name", "EGeometryCollectionCacheType::Record" },
		{ "RecordAndPlay.Name", "EGeometryCollectionCacheType::RecordAndPlay" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGeometryCollectionCacheType::None", (int64)EGeometryCollectionCacheType::None },
		{ "EGeometryCollectionCacheType::Record", (int64)EGeometryCollectionCacheType::Record },
		{ "EGeometryCollectionCacheType::Play", (int64)EGeometryCollectionCacheType::Play },
		{ "EGeometryCollectionCacheType::RecordAndPlay", (int64)EGeometryCollectionCacheType::RecordAndPlay },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EGeometryCollectionCacheType",
	"EGeometryCollectionCacheType",
	Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType()
{
	if (!Z_Registration_Info_UEnum_EGeometryCollectionCacheType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryCollectionCacheType.InnerSingleton, Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGeometryCollectionCacheType.InnerSingleton;
}
// End Enum EGeometryCollectionCacheType

// Begin ScriptStruct FRecordedFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordedFrame;
class UScriptStruct* FRecordedFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordedFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordedFrame, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("RecordedFrame"));
	}
	return Z_Registration_Info_UScriptStruct_RecordedFrame.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FRecordedFrame>()
{
	return FRecordedFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecordedFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure describing necessary data to record the results of a physics simulation for rigids.\n * Primarily for recording the results of a geometry collection simulation for later playback\n */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "Structure describing necessary data to record the results of a physics simulation for rigids.\nPrimarily for recording the results of a geometry collection simulation for later playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Comment", "/**\n\x09 * List of transforms recorded for this frame.\n\x09 * During execution maps one-to-one with the number of particles. This is handed off for processing when written back to the collection.\n\x09 * This processing will remove redundant transforms and populate the indices in FRecordedFrame to handle the remapping\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "List of transforms recorded for this frame.\nDuring execution maps one-to-one with the number of particles. This is handed off for processing when written back to the collection.\nThis processing will remove redundant transforms and populate the indices in FRecordedFrame to handle the remapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformIndices_MetaData[] = {
		{ "Comment", "/**\n\x09 * After processing, this will map a transform index within this frame out to a body/particle index for the component.\n\x09 * This will map back to where the transform was before processing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "After processing, this will map a transform index within this frame out to a body/particle index for the component.\nThis will map back to where the transform was before processing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTransformIndices_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maps to the position in the Transforms array of the *previous* frame that this entry existed. They can move around as particles\n\x09 * either become disabled/enabled or if a particle didn't move since the last frame. This allows us to pick up previous positions\n\x09 * for velocities etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "Maps to the position in the Transforms array of the *previous* frame that this entry existed. They can move around as particles\neither become disabled/enabled or if a particle didn't move since the last frame. This allows us to pick up previous positions\nfor velocities etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledFlags_MetaData[] = {
		{ "Comment", "/**\n\x09 * Per-particle list of whether or not they were disabled on this frame.\n\x09 * #BGallagher change this to be event based - expensive on memory and beginframe iterations\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "Per-particle list of whether or not they were disabled on this frame.\n#BGallagher change this to be event based - expensive on memory and beginframe iterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collisions_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Breakings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trailings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransformIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousTransformIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousTransformIndices;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisabledFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledFlags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collisions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Collisions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Breakings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Breakings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trailings_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Trailings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordedFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices_Inner = { "TransformIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices = { "TransformIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, TransformIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformIndices_MetaData), NewProp_TransformIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices_Inner = { "PreviousTransformIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices = { "PreviousTransformIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, PreviousTransformIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTransformIndices_MetaData), NewProp_PreviousTransformIndices_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags_Inner = { "DisabledFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags = { "DisabledFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, DisabledFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledFlags_MetaData), NewProp_DisabledFlags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions_Inner = { "Collisions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSolverCollisionData, METADATA_PARAMS(0, nullptr) }; // 1529567832
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions = { "Collisions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, Collisions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collisions_MetaData), NewProp_Collisions_MetaData) }; // 1529567832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Breakings_Inner = { "Breakings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSolverBreakingData, METADATA_PARAMS(0, nullptr) }; // 2199107228
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Breakings = { "Breakings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, Breakings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Breakings_MetaData), NewProp_Breakings_MetaData) }; // 2199107228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings_ElementProp = { "Trailings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSolverTrailingData, METADATA_PARAMS(0, nullptr) }; // 2577750984
static_assert(TModels_V<CGetTypeHashable, FSolverTrailingData>, "The structure 'FSolverTrailingData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings = { "Trailings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, Trailings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trailings_MetaData), NewProp_Trailings_MetaData) }; // 2577750984
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedFrame, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordedFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Breakings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Breakings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"RecordedFrame",
	Z_Construct_UScriptStruct_FRecordedFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::PropPointers),
	sizeof(FRecordedFrame),
	alignof(FRecordedFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordedFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordedFrame()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordedFrame.InnerSingleton, Z_Construct_UScriptStruct_FRecordedFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecordedFrame.InnerSingleton;
}
// End ScriptStruct FRecordedFrame

// Begin ScriptStruct FRecordedTransformTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordedTransformTrack;
class UScriptStruct* FRecordedTransformTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedTransformTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordedTransformTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordedTransformTrack, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("RecordedTransformTrack"));
	}
	return Z_Registration_Info_UScriptStruct_RecordedTransformTrack.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FRecordedTransformTrack>()
{
	return FRecordedTransformTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Records;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordedTransformTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordedFrame, METADATA_PARAMS(0, nullptr) }; // 1140781433
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedTransformTrack, Records), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Records_MetaData), NewProp_Records_MetaData) }; // 1140781433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"RecordedTransformTrack",
	Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::PropPointers),
	sizeof(FRecordedTransformTrack),
	alignof(FRecordedTransformTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordedTransformTrack()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedTransformTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordedTransformTrack.InnerSingleton, Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecordedTransformTrack.InnerSingleton;
}
// End ScriptStruct FRecordedTransformTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGeometryCollectionCacheType_StaticEnum, TEXT("EGeometryCollectionCacheType"), &Z_Registration_Info_UEnum_EGeometryCollectionCacheType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2980722996U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSolverCollisionData::StaticStruct, Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewStructOps, TEXT("SolverCollisionData"), &Z_Registration_Info_UScriptStruct_SolverCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverCollisionData), 1529567832U) },
		{ FSolverBreakingData::StaticStruct, Z_Construct_UScriptStruct_FSolverBreakingData_Statics::NewStructOps, TEXT("SolverBreakingData"), &Z_Registration_Info_UScriptStruct_SolverBreakingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverBreakingData), 2199107228U) },
		{ FSolverTrailingData::StaticStruct, Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewStructOps, TEXT("SolverTrailingData"), &Z_Registration_Info_UScriptStruct_SolverTrailingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverTrailingData), 2577750984U) },
		{ FRecordedFrame::StaticStruct, Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewStructOps, TEXT("RecordedFrame"), &Z_Registration_Info_UScriptStruct_RecordedFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordedFrame), 1140781433U) },
		{ FRecordedTransformTrack::StaticStruct, Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewStructOps, TEXT("RecordedTransformTrack"), &Z_Registration_Info_UScriptStruct_RecordedTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordedTransformTrack), 1165620290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_543376759(TEXT("/Script/Chaos"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
