// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntityInstantiatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntityInstantiatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneEntityInstantiatorSystem
void UMovieSceneEntityInstantiatorSystem::StaticRegisterNativesUMovieSceneEntityInstantiatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEntityInstantiatorSystem);
UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_NoRegister()
{
	return UMovieSceneEntityInstantiatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneEntityInstantiatorSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntityInstantiatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEntityInstantiatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::ClassParams = {
	&UMovieSceneEntityInstantiatorSystem::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEntityInstantiatorSystem>()
{
	return UMovieSceneEntityInstantiatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEntityInstantiatorSystem);
UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem() {}
// End Class UMovieSceneEntityInstantiatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem, UMovieSceneEntityInstantiatorSystem::StaticClass, TEXT("UMovieSceneEntityInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEntityInstantiatorSystem), 1936514525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_496514120(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
