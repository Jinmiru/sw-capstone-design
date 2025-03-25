// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneFloatPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatPropertySystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneFloatPropertySystem
void UMovieSceneFloatPropertySystem::StaticRegisterNativesUMovieSceneFloatPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneFloatPropertySystem_NoRegister()
{
	return UMovieSceneFloatPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneFloatPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneFloatPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneFloatPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneFloatPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatPropertySystem_Statics::ClassParams = {
	&UMovieSceneFloatPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneFloatPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneFloatPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneFloatPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneFloatPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFloatPropertySystem>()
{
	return UMovieSceneFloatPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatPropertySystem);
UMovieSceneFloatPropertySystem::~UMovieSceneFloatPropertySystem() {}
// End Class UMovieSceneFloatPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneFloatPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatPropertySystem, UMovieSceneFloatPropertySystem::StaticClass, TEXT("UMovieSceneFloatPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneFloatPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatPropertySystem), 3597004131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneFloatPropertySystem_h_2790392096(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneFloatPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneFloatPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
