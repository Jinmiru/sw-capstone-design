// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/SolverEventFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolverEventFilters() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverRemovalFilterSettings();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin ScriptStruct FSolverTrailingFilterSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings;
class UScriptStruct* FSolverTrailingFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverTrailingFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverTrailingFilterSettings>()
{
	return FSolverTrailingFilterSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_FilterEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverTrailingFilterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
{
	((FSolverTrailingFilterSettings*)Obj)->FilterEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSolverTrailingFilterSettings), &Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterEnabled_MetaData), NewProp_FilterEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMass_MetaData), NewProp_MinMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVolume_MetaData), NewProp_MinVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"SolverTrailingFilterSettings",
	Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers),
	sizeof(FSolverTrailingFilterSettings),
	alignof(FSolverTrailingFilterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.InnerSingleton;
}
// End ScriptStruct FSolverTrailingFilterSettings

// Begin ScriptStruct FSolverCollisionFilterSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings;
class UScriptStruct* FSolverCollisionFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverCollisionFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverCollisionFilterSettings>()
{
	return FSolverCollisionFilterSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinImpulse_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The minimum impulse threshold for the results. */" },
		{ "DisplayName", "Min Impulse Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum impulse threshold for the results." },
	};
#endif // WITH_METADATA
	static void NewProp_FilterEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinImpulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverCollisionFilterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
{
	((FSolverCollisionFilterSettings*)Obj)->FilterEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSolverCollisionFilterSettings), &Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterEnabled_MetaData), NewProp_FilterEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMass_MetaData), NewProp_MinMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse = { "MinImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinImpulse_MetaData), NewProp_MinImpulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"SolverCollisionFilterSettings",
	Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers),
	sizeof(FSolverCollisionFilterSettings),
	alignof(FSolverCollisionFilterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.InnerSingleton;
}
// End ScriptStruct FSolverCollisionFilterSettings

// Begin ScriptStruct FSolverBreakingFilterSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings;
class UScriptStruct* FSolverBreakingFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverBreakingFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverBreakingFilterSettings>()
{
	return FSolverBreakingFilterSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_FilterEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverBreakingFilterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
{
	((FSolverBreakingFilterSettings*)Obj)->FilterEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSolverBreakingFilterSettings), &Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterEnabled_MetaData), NewProp_FilterEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMass_MetaData), NewProp_MinMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVolume_MetaData), NewProp_MinVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"SolverBreakingFilterSettings",
	Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers),
	sizeof(FSolverBreakingFilterSettings),
	alignof(FSolverBreakingFilterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.InnerSingleton;
}
// End ScriptStruct FSolverBreakingFilterSettings

// Begin ScriptStruct FSolverRemovalFilterSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings;
class UScriptStruct* FSolverRemovalFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverRemovalFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverRemovalFilterSettings>()
{
	return FSolverRemovalFilterSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_FilterEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverRemovalFilterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
{
	((FSolverRemovalFilterSettings*)Obj)->FilterEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSolverRemovalFilterSettings), &Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterEnabled_MetaData), NewProp_FilterEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverRemovalFilterSettings, MinMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMass_MetaData), NewProp_MinMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverRemovalFilterSettings, MinVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVolume_MetaData), NewProp_MinVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"SolverRemovalFilterSettings",
	Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::PropPointers),
	sizeof(FSolverRemovalFilterSettings),
	alignof(FSolverRemovalFilterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverRemovalFilterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.InnerSingleton;
}
// End ScriptStruct FSolverRemovalFilterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSolverTrailingFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewStructOps, TEXT("SolverTrailingFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverTrailingFilterSettings), 1270446885U) },
		{ FSolverCollisionFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewStructOps, TEXT("SolverCollisionFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverCollisionFilterSettings), 2736936784U) },
		{ FSolverBreakingFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewStructOps, TEXT("SolverBreakingFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverBreakingFilterSettings), 1894804595U) },
		{ FSolverRemovalFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewStructOps, TEXT("SolverRemovalFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverRemovalFilterSettings), 2874668196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_2989938373(TEXT("/Script/Chaos"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
