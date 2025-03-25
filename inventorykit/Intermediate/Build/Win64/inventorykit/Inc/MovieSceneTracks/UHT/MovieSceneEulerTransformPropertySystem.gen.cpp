// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneEulerTransformPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEulerTransformPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneEulerTransformPropertySystem
void UMovieSceneEulerTransformPropertySystem::StaticRegisterNativesUMovieSceneEulerTransformPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEulerTransformPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_NoRegister()
{
	return UMovieSceneEulerTransformPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneEulerTransformPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEulerTransformPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEulerTransformPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_Statics::ClassParams = {
	&UMovieSceneEulerTransformPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEulerTransformPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEulerTransformPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEulerTransformPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEulerTransformPropertySystem>()
{
	return UMovieSceneEulerTransformPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEulerTransformPropertySystem);
UMovieSceneEulerTransformPropertySystem::~UMovieSceneEulerTransformPropertySystem() {}
// End Class UMovieSceneEulerTransformPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEulerTransformPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEulerTransformPropertySystem, UMovieSceneEulerTransformPropertySystem::StaticClass, TEXT("UMovieSceneEulerTransformPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneEulerTransformPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEulerTransformPropertySystem), 3487751371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEulerTransformPropertySystem_h_4196881737(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEulerTransformPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEulerTransformPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
