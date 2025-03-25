// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayStaticsTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathPointData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESuggestProjVelocityTraceOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption;
static UEnum* ESuggestProjVelocityTraceOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESuggestProjVelocityTraceOption"));
	}
	return Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESuggestProjVelocityTraceOption::Type>()
{
	return ESuggestProjVelocityTraceOption_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Trace option to SuggestProjectileVelocity functions.\n" },
		{ "DoNotTrace.Name", "ESuggestProjVelocityTraceOption::DoNotTrace" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "OnlyTraceWhileAscending.Name", "ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending" },
		{ "ToolTip", "Trace option to SuggestProjectileVelocity functions." },
		{ "TraceFullPath.Name", "ESuggestProjVelocityTraceOption::TraceFullPath" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESuggestProjVelocityTraceOption::DoNotTrace", (int64)ESuggestProjVelocityTraceOption::DoNotTrace },
		{ "ESuggestProjVelocityTraceOption::TraceFullPath", (int64)ESuggestProjVelocityTraceOption::TraceFullPath },
		{ "ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending", (int64)ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESuggestProjVelocityTraceOption",
	"ESuggestProjVelocityTraceOption::Type",
	Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption()
{
	if (!Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.InnerSingleton, Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.InnerSingleton;
}
// End Enum ESuggestProjVelocityTraceOption

// Begin ScriptStruct FPredictProjectilePathParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictProjectilePathParams;
class UScriptStruct* FPredictProjectilePathParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathParams"));
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPredictProjectilePathParams>()
{
	return FPredictProjectilePathParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters to PredictProjectilePath functions.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Input parameters to PredictProjectilePath functions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Location of the start of the trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Location of the start of the trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Initial launch velocity at the start of the trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Initial launch velocity at the start of the trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceWithCollision_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Whether to trace along the path looking for blocking collision and stopping at the first hit.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Whether to trace along the path looking for blocking collision and stopping at the first hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileRadius_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Projectile radius, used when tracing for collision. If <= 0, a line trace is used instead.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Projectile radius, used when tracing for collision. If <= 0, a line trace is used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimTime_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Maximum simulation time for the virtual projectile.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Maximum simulation time for the virtual projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceWithChannel_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Whether or not to use TraceChannel, if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Whether or not to use TraceChannel, if tracing with collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Trace channel to use, if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Trace channel to use, if tracing with collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Object type to use, if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Object type to use, if tracing with collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Actors to ignore when tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Actors to ignore when tracing with collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimFrequency_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Determines size of each sub-step in the simulation (chopping up MaxSimTime). Recommended between 10 to 30 depending on desired quality versus performance.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Determines size of each sub-step in the simulation (chopping up MaxSimTime). Recommended between 10 to 30 depending on desired quality versus performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGravityZ_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Optional override of Gravity (if 0, uses WorldGravityZ).\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Optional override of Gravity (if 0, uses WorldGravityZ)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Debug drawing duration option.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Debug drawing duration option." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugTime_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Duration of debug lines (only relevant for DrawDebugType::Duration)\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Duration of debug lines (only relevant for DrawDebugType::Duration)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Trace against complex collision (triangles rather than simple primitives) if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Trace against complex collision (triangles rather than simple primitives) if tracing with collision." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
	static void NewProp_bTraceWithCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceWithCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimTime;
	static void NewProp_bTraceWithChannel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceWithChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDebugTime;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchVelocity_MetaData), NewProp_LaunchVelocity_MetaData) };
void Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision_SetBit(void* Obj)
{
	((FPredictProjectilePathParams*)Obj)->bTraceWithCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision = { "bTraceWithCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPredictProjectilePathParams), &Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceWithCollision_MetaData), NewProp_bTraceWithCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ProjectileRadius = { "ProjectileRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, ProjectileRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileRadius_MetaData), NewProp_ProjectileRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_MaxSimTime = { "MaxSimTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, MaxSimTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimTime_MetaData), NewProp_MaxSimTime_MetaData) };
void Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel_SetBit(void* Obj)
{
	((FPredictProjectilePathParams*)Obj)->bTraceWithChannel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel = { "bTraceWithChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPredictProjectilePathParams), &Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceWithChannel_MetaData), NewProp_bTraceWithChannel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_SimFrequency = { "SimFrequency", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, SimFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimFrequency_MetaData), NewProp_SimFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, OverrideGravityZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideGravityZ_MetaData), NewProp_OverrideGravityZ_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugType_MetaData), NewProp_DrawDebugType_MetaData) }; // 2070357899
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugTime = { "DrawDebugTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathParams, DrawDebugTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugTime_MetaData), NewProp_DrawDebugTime_MetaData) };
void Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((FPredictProjectilePathParams*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPredictProjectilePathParams), &Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_LaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ProjectileRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_MaxSimTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_SimFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_OverrideGravityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PredictProjectilePathParams",
	Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::PropPointers),
	sizeof(FPredictProjectilePathParams),
	alignof(FPredictProjectilePathParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.InnerSingleton, Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.InnerSingleton;
}
// End ScriptStruct FPredictProjectilePathParams

// Begin ScriptStruct FPredictProjectilePathPointData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData;
class UScriptStruct* FPredictProjectilePathPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathPointData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathPointData"));
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPredictProjectilePathPointData>()
{
	return FPredictProjectilePathPointData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data about a single point in a projectile path trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Data about a single point in a projectile path trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "PredictProjectilePathPointData" },
		{ "Comment", "// Location of this point\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Location of this point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "PredictProjectilePathPointData" },
		{ "Comment", "// Velocity at this point\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Velocity at this point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "PredictProjectilePathPointData" },
		{ "Comment", "// Elapsed time at this point from the start of the trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Elapsed time at this point from the start of the trace." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathPointData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathPointData, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PredictProjectilePathPointData",
	Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::PropPointers),
	sizeof(FPredictProjectilePathPointData),
	alignof(FPredictProjectilePathPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathPointData()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.InnerSingleton, Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.InnerSingleton;
}
// End ScriptStruct FPredictProjectilePathPointData

// Begin ScriptStruct FPredictProjectilePathResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictProjectilePathResult;
class UScriptStruct* FPredictProjectilePathResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathResult"));
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPredictProjectilePathResult>()
{
	return FPredictProjectilePathResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Container for the result of a projectile path trace (using PredictProjectilePath).\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Container for the result of a projectile path trace (using PredictProjectilePath)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathData_MetaData[] = {
		{ "Category", "PredictProjectilePathResult" },
		{ "Comment", "// Info for each point on the path.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Info for each point on the path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTraceDestination_MetaData[] = {
		{ "Category", "PredictProjectilePathResult" },
		{ "Comment", "// Info on the last point we tried to trace to, which may have been beyond the final hit.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Info on the last point we tried to trace to, which may have been beyond the final hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "PredictProjectilePathResult" },
		{ "Comment", "// Hit along the trace, if tracing with collision was enabled.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Hit along the trace, if tracing with collision was enabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastTraceDestination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData_Inner = { "PathData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPredictProjectilePathPointData, METADATA_PARAMS(0, nullptr) }; // 1990045592
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData = { "PathData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathResult, PathData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathData_MetaData), NewProp_PathData_MetaData) }; // 1990045592
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_LastTraceDestination = { "LastTraceDestination", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathResult, LastTraceDestination), Z_Construct_UScriptStruct_FPredictProjectilePathPointData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTraceDestination_MetaData), NewProp_LastTraceDestination_MetaData) }; // 1990045592
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPredictProjectilePathResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_LastTraceDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PredictProjectilePathResult",
	Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::PropPointers),
	sizeof(FPredictProjectilePathResult),
	alignof(FPredictProjectilePathResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.InnerSingleton, Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.InnerSingleton;
}
// End ScriptStruct FPredictProjectilePathResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESuggestProjVelocityTraceOption_StaticEnum, TEXT("ESuggestProjVelocityTraceOption"), &Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3390033290U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPredictProjectilePathParams::StaticStruct, Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewStructOps, TEXT("PredictProjectilePathParams"), &Z_Registration_Info_UScriptStruct_PredictProjectilePathParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictProjectilePathParams), 254985675U) },
		{ FPredictProjectilePathPointData::StaticStruct, Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewStructOps, TEXT("PredictProjectilePathPointData"), &Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictProjectilePathPointData), 1990045592U) },
		{ FPredictProjectilePathResult::StaticStruct, Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewStructOps, TEXT("PredictProjectilePathResult"), &Z_Registration_Info_UScriptStruct_PredictProjectilePathResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictProjectilePathResult), 2812203186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_4091252934(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
