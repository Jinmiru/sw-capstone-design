// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneStringPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneStringPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringPropertySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneStringPropertySystem
void UMovieSceneStringPropertySystem::StaticRegisterNativesUMovieSceneStringPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneStringPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneStringPropertySystem_NoRegister()
{
	return UMovieSceneStringPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneStringPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneStringPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneStringPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneStringPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneStringPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneStringPropertySystem_Statics::ClassParams = {
	&UMovieSceneStringPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneStringPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneStringPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneStringPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneStringPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneStringPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneStringPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneStringPropertySystem>()
{
	return UMovieSceneStringPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneStringPropertySystem);
UMovieSceneStringPropertySystem::~UMovieSceneStringPropertySystem() {}
// End Class UMovieSceneStringPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneStringPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneStringPropertySystem, UMovieSceneStringPropertySystem::StaticClass, TEXT("UMovieSceneStringPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneStringPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneStringPropertySystem), 862622955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneStringPropertySystem_h_2307149578(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneStringPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneStringPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
