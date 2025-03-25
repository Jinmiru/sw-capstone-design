// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventSendToGame() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleEventSendToGame
void UParticleModuleEventSendToGame::StaticRegisterNativesUParticleModuleEventSendToGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventSendToGame);
UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister()
{
	return UParticleModuleEventSendToGame::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleEventSendToGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventSendToGame.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventSendToGame.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventSendToGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::ClassParams = {
	&UParticleModuleEventSendToGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleEventSendToGame()
{
	if (!Z_Registration_Info_UClass_UParticleModuleEventSendToGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventSendToGame.OuterSingleton, Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleEventSendToGame.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleEventSendToGame>()
{
	return UParticleModuleEventSendToGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventSendToGame);
UParticleModuleEventSendToGame::~UParticleModuleEventSendToGame() {}
// End Class UParticleModuleEventSendToGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventSendToGame, UParticleModuleEventSendToGame::StaticClass, TEXT("UParticleModuleEventSendToGame"), &Z_Registration_Info_UClass_UParticleModuleEventSendToGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventSendToGame), 2977900301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_431394975(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
