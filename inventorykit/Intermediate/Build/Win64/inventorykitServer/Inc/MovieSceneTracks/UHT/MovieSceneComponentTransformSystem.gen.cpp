// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneComponentTransformSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentTransformSystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneComponentTransformSystem
void UMovieSceneComponentTransformSystem::StaticRegisterNativesUMovieSceneComponentTransformSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentTransformSystem);
UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister()
{
	return UMovieSceneComponentTransformSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneComponentTransformSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentTransformSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentTransformSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::ClassParams = {
	&UMovieSceneComponentTransformSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentTransformSystem>()
{
	return UMovieSceneComponentTransformSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentTransformSystem);
UMovieSceneComponentTransformSystem::~UMovieSceneComponentTransformSystem() {}
// End Class UMovieSceneComponentTransformSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComponentTransformSystem, UMovieSceneComponentTransformSystem::StaticClass, TEXT("UMovieSceneComponentTransformSystem"), &Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentTransformSystem), 1262114730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_235035516(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
