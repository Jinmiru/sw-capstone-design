// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneSpawnablesSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnablesSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnablesSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneSpawnablesSystem
void UMovieSceneSpawnablesSystem::StaticRegisterNativesUMovieSceneSpawnablesSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnablesSystem);
UClass* Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister()
{
	return UMovieSceneSpawnablesSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneSpawnablesSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneSpawnablesSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnablesSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics::ClassParams = {
	&UMovieSceneSpawnablesSystem::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSpawnablesSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSpawnablesSystem>()
{
	return UMovieSceneSpawnablesSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnablesSystem);
UMovieSceneSpawnablesSystem::~UMovieSceneSpawnablesSystem() {}
// End Class UMovieSceneSpawnablesSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnablesSystem, UMovieSceneSpawnablesSystem::StaticClass, TEXT("UMovieSceneSpawnablesSystem"), &Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnablesSystem), 1667199851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_3502518698(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
