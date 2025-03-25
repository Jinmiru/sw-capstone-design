// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverSpawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleEventReceiverSpawn
void UParticleModuleEventReceiverSpawn::StaticRegisterNativesUParticleModuleEventReceiverSpawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventReceiverSpawn);
UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister()
{
	return UParticleModuleEventReceiverSpawn::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "EventReceiver Spawn" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The number of particles to spawn. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "The number of particles to spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseParticleTime_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** \n\x09 *\x09""For Death-based event receiving, if this is true, it indicates that the \n\x09 *\x09ParticleTime of the event should be used to look-up the SpawnCount.\n\x09 *\x09Otherwise (and in all other events received), use the emitter time of \n\x09 *\x09the event.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "For Death-based event receiving, if this is true, it indicates that the\nParticleTime of the event should be used to look-up the SpawnCount.\nOtherwise (and in all other events received), use the emitter time of\nthe event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePSysLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *\x09If true, use the location of the particle system component for spawning.\n\x09 *\x09if false (default), use the location of the particle event.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If true, use the location of the particle system component for spawning.\nif false (default), use the location of the particle event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09If true, use the velocity of the dying particle as the start velocity of \n\x09 *\x09the spawned particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If true, use the velocity of the dying particle as the start velocity of\nthe spawned particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09If bInheritVelocity is true, scale the velocity with this.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If bInheritVelocity is true, scale the velocity with this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09*\x09""Array of physical materials that can be used to allow or ban a specific set of materials when receiving collision events.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "Array of physical materials that can be used to allow or ban a specific set of materials when receiving collision events." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBanPhysicalMaterials_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09*\x09When true, the PhysicalMaterials list is used to ban specified materials for collision events but allow all others.\n\x09*\x09When false, the PhysicalMaterials list is used to allow only specified materials for collision events and ban all others.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "When true, the PhysicalMaterials list is used to ban specified materials for collision events but allow all others.\nWhen false, the PhysicalMaterials list is used to allow only specified materials for collision events and ban all others." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCount;
	static void NewProp_bUseParticleTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParticleTime;
	static void NewProp_bUsePSysLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePSysLocation;
	static void NewProp_bInheritVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InheritVelocityScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials;
	static void NewProp_bBanPhysicalMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanPhysicalMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverSpawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, SpawnCount), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_SetBit(void* Obj)
{
	((UParticleModuleEventReceiverSpawn*)Obj)->bUseParticleTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime = { "bUseParticleTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseParticleTime_MetaData), NewProp_bUseParticleTime_MetaData) };
void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_SetBit(void* Obj)
{
	((UParticleModuleEventReceiverSpawn*)Obj)->bUsePSysLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation = { "bUsePSysLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePSysLocation_MetaData), NewProp_bUsePSysLocation_MetaData) };
void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_SetBit(void* Obj)
{
	((UParticleModuleEventReceiverSpawn*)Obj)->bInheritVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity = { "bInheritVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritVelocity_MetaData), NewProp_bInheritVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale = { "InheritVelocityScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, InheritVelocityScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritVelocityScale_MetaData), NewProp_InheritVelocityScale_MetaData) }; // 1238237137
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_Inner = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, PhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterials_MetaData), NewProp_PhysicalMaterials_MetaData) };
void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_SetBit(void* Obj)
{
	((UParticleModuleEventReceiverSpawn*)Obj)->bBanPhysicalMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials = { "bBanPhysicalMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBanPhysicalMaterials_MetaData), NewProp_bBanPhysicalMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleEventReceiverBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::ClassParams = {
	&UParticleModuleEventReceiverSpawn::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn()
{
	if (!Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.OuterSingleton, Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverSpawn>()
{
	return UParticleModuleEventReceiverSpawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverSpawn);
UParticleModuleEventReceiverSpawn::~UParticleModuleEventReceiverSpawn() {}
// End Class UParticleModuleEventReceiverSpawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventReceiverSpawn, UParticleModuleEventReceiverSpawn::StaticClass, TEXT("UParticleModuleEventReceiverSpawn"), &Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventReceiverSpawn), 1238562424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_862591564(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
