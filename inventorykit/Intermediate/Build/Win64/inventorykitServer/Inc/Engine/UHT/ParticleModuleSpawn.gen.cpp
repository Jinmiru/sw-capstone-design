// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSpawn
void UParticleModuleSpawn::StaticRegisterNativesUParticleModuleSpawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSpawn);
UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister()
{
	return UParticleModuleSpawn::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn" },
		{ "HideCategories", "Object ParticleModuleSpawnBase Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The rate at which to spawn particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The rate at which to spawn particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The scalar to apply to the rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The scalar to apply to the rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[] = {
		{ "Category", "Burst" },
		{ "Comment", "/** The array of burst entries. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The array of burst entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstScale_MetaData[] = {
		{ "Category", "Burst" },
		{ "Comment", "/** Scale all burst entries by this amount. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "Scale all burst entries by this amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[] = {
		{ "Category", "Burst" },
		{ "Comment", "/** The method to utilize when burst-emitting particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The method to utilize when burst-emitting particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGlobalSpawnRateScale_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\x09If true, the SpawnRate will be scaled by the global CVar r.EmitterSpawnRateScale */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "If true, the SpawnRate will be scaled by the global CVar r.EmitterSpawnRateScale" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RateScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BurstList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod;
	static void NewProp_bApplyGlobalSpawnRateScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGlobalSpawnRateScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawn, Rate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rate_MetaData), NewProp_Rate_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawn, RateScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateScale_MetaData), NewProp_RateScale_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_Inner = { "BurstList", nullptr, (EPropertyFlags)0x0000000000000008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(0, nullptr) }; // 3170484274
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList = { "BurstList", nullptr, (EPropertyFlags)0x0010000002000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawn, BurstList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstList_MetaData), NewProp_BurstList_MetaData) }; // 3170484274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale = { "BurstScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawn, BurstScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstScale_MetaData), NewProp_BurstScale_MetaData) }; // 3711494764
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod = { "ParticleBurstMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSpawn, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleBurstMethod_MetaData), NewProp_ParticleBurstMethod_MetaData) }; // 2458200404
void Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_SetBit(void* Obj)
{
	((UParticleModuleSpawn*)Obj)->bApplyGlobalSpawnRateScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale = { "bApplyGlobalSpawnRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSpawn), &Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyGlobalSpawnRateScale_MetaData), NewProp_bApplyGlobalSpawnRateScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSpawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSpawnBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawn_Statics::ClassParams = {
	&UParticleModuleSpawn::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSpawn()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSpawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSpawn.OuterSingleton, Z_Construct_UClass_UParticleModuleSpawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSpawn.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSpawn>()
{
	return UParticleModuleSpawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawn);
UParticleModuleSpawn::~UParticleModuleSpawn() {}
// End Class UParticleModuleSpawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSpawn, UParticleModuleSpawn::StaticClass, TEXT("UParticleModuleSpawn"), &Z_Registration_Info_UClass_UParticleModuleSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSpawn), 4036267954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_2379194416(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
