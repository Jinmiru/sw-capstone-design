// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneDoublePropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoublePropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneDoublePropertySystem
void UMovieSceneDoublePropertySystem::StaticRegisterNativesUMovieSceneDoublePropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoublePropertySystem);
UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem_NoRegister()
{
	return UMovieSceneDoublePropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneDoublePropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneDoublePropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoublePropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::ClassParams = {
	&UMovieSceneDoublePropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoublePropertySystem>()
{
	return UMovieSceneDoublePropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoublePropertySystem);
UMovieSceneDoublePropertySystem::~UMovieSceneDoublePropertySystem() {}
// End Class UMovieSceneDoublePropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDoublePropertySystem, UMovieSceneDoublePropertySystem::StaticClass, TEXT("UMovieSceneDoublePropertySystem"), &Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoublePropertySystem), 4236984403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_108615017(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
