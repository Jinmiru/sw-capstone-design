// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverKillParticles() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleEventReceiverKillParticles
void UParticleModuleEventReceiverKillParticles::StaticRegisterNativesUParticleModuleEventReceiverKillParticles()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventReceiverKillParticles);
UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister()
{
	return UParticleModuleEventReceiverKillParticles::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "EventReceiver Kill All" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopSpawning_MetaData[] = {
		{ "Category", "ParticleModuleEventReceiverKillParticles" },
		{ "Comment", "/** If true, stop this emitter from spawning as well. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
		{ "ToolTip", "If true, stop this emitter from spawning as well." },
	};
#endif // WITH_METADATA
	static void NewProp_bStopSpawning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopSpawning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverKillParticles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning_SetBit(void* Obj)
{
	((UParticleModuleEventReceiverKillParticles*)Obj)->bStopSpawning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning = { "bStopSpawning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverKillParticles), &Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopSpawning_MetaData), NewProp_bStopSpawning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleEventReceiverBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::ClassParams = {
	&UParticleModuleEventReceiverKillParticles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles()
{
	if (!Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.OuterSingleton, Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverKillParticles>()
{
	return UParticleModuleEventReceiverKillParticles::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverKillParticles);
UParticleModuleEventReceiverKillParticles::~UParticleModuleEventReceiverKillParticles() {}
// End Class UParticleModuleEventReceiverKillParticles

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventReceiverKillParticles, UParticleModuleEventReceiverKillParticles::StaticClass, TEXT("UParticleModuleEventReceiverKillParticles"), &Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventReceiverKillParticles), 4231447657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_735172497(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
