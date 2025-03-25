// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawnPerUnit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSpawnPerUnit
void UParticleModuleSpawnPerUnit::StaticRegisterNativesUParticleModuleSpawnPerUnit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSpawnPerUnit);
UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister()
{
	return UParticleModuleSpawnPerUnit::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn PerUnit" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitScalar_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** \n\x09 *\x09The scalar to apply to the distance traveled.\n\x09 *\x09The value from SpawnPerUnit is divided by this value to give the actual\n\x09 *\x09number of particles per unit. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The scalar to apply to the distance traveled.\nThe value from SpawnPerUnit is divided by this value to give the actual\nnumber of particles per unit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementTolerance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\n\x09 *\x09The tolerance for moving vs. not moving w.r.t. the bIgnoreSpawnRateWhenMoving flag.\n\x09 *\x09Ie, if (DistanceMoved < (UnitScalar x MovementTolerance)) then consider it not moving.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The tolerance for moving vs. not moving w.r.t. the bIgnoreSpawnRateWhenMoving flag.\nIe, if (DistanceMoved < (UnitScalar x MovementTolerance)) then consider it not moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPerUnit_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** \n\x09 *\x09The amount to spawn per meter distribution.\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The amount to spawn per meter distribution.\nThe value is retrieved using the EmitterTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDistance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\n\x09 *\x09The maximum valid movement for a single frame.\n\x09 *\x09If 0.0, then the check is not performed.\n\x09 *\x09""Currently, if the distance moved between frames is greater than this\n\x09 *\x09then NO particles will be spawned.\n\x09 *\x09This is primiarily intended to cover cases where the PSystem is\n\x09 *\x09""attached to teleporting objects.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The maximum valid movement for a single frame.\nIf 0.0, then the check is not performed.\nCurrently, if the distance moved between frames is greater than this\nthen NO particles will be spawned.\nThis is primiarily intended to cover cases where the PSystem is\nattached to teleporting objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSpawnRateWhenMoving_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\n\x09 *\x09If true, process the default spawn rate when not moving...\n\x09 *\x09When not moving, skip the default spawn rate.\n\x09 *\x09If false, return the bProcessSpawnRate setting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, process the default spawn rate when not moving...\nWhen not moving, skip the default spawn rate.\nIf false, return the bProcessSpawnRate setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongX_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** If true, ignore the X-component of the movement */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, ignore the X-component of the movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongY_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** If true, ignore the Y-component of the movement */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, ignore the Y-component of the movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongZ_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** If true, ignore the Z-component of the movement */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, ignore the Z-component of the movement" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementTolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPerUnit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFrameDistance;
	static void NewProp_bIgnoreSpawnRateWhenMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSpawnRateWhenMoving;
	static void NewProp_bIgnoreMovementAlongX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongX;
	static void NewProp_bIgnoreMovementAlongY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongY;
	static void NewProp_bIgnoreMovementAlongZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawnPerUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_UnitScalar = { "UnitScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, UnitScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitScalar_MetaData), NewProp_UnitScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MovementTolerance = { "MovementTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, MovementTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementTolerance_MetaData), NewProp_MovementTolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_SpawnPerUnit = { "SpawnPerUnit", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, SpawnPerUnit), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPerUnit_MetaData), NewProp_SpawnPerUnit_MetaData) }; // 3711494764
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MaxFrameDistance = { "MaxFrameDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, MaxFrameDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFrameDistance_MetaData), NewProp_MaxFrameDistance_MetaData) };
void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving_SetBit(void* Obj)
{
	((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreSpawnRateWhenMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving = { "bIgnoreSpawnRateWhenMoving", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSpawnRateWhenMoving_MetaData), NewProp_bIgnoreSpawnRateWhenMoving_MetaData) };
void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX_SetBit(void* Obj)
{
	((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX = { "bIgnoreMovementAlongX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreMovementAlongX_MetaData), NewProp_bIgnoreMovementAlongX_MetaData) };
void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY_SetBit(void* Obj)
{
	((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY = { "bIgnoreMovementAlongY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreMovementAlongY_MetaData), NewProp_bIgnoreMovementAlongY_MetaData) };
void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ_SetBit(void* Obj)
{
	((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ = { "bIgnoreMovementAlongZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreMovementAlongZ_MetaData), NewProp_bIgnoreMovementAlongZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_UnitScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MovementTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_SpawnPerUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MaxFrameDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSpawnBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::ClassParams = {
	&UParticleModuleSpawnPerUnit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.OuterSingleton, Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSpawnPerUnit>()
{
	return UParticleModuleSpawnPerUnit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawnPerUnit);
UParticleModuleSpawnPerUnit::~UParticleModuleSpawnPerUnit() {}
// End Class UParticleModuleSpawnPerUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSpawnPerUnit, UParticleModuleSpawnPerUnit::StaticClass, TEXT("UParticleModuleSpawnPerUnit"), &Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSpawnPerUnit), 149683731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_1420313078(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
