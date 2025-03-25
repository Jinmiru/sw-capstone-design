// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneTransformOriginSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTransformOriginSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneTransformOriginInstantiatorSystem
void UMovieSceneTransformOriginInstantiatorSystem::StaticRegisterNativesUMovieSceneTransformOriginInstantiatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTransformOriginInstantiatorSystem);
UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_NoRegister()
{
	return UMovieSceneTransformOriginInstantiatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneTransformOriginSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneTransformOriginSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTransformOriginInstantiatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::ClassParams = {
	&UMovieSceneTransformOriginInstantiatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformOriginInstantiatorSystem>()
{
	return UMovieSceneTransformOriginInstantiatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOriginInstantiatorSystem);
UMovieSceneTransformOriginInstantiatorSystem::~UMovieSceneTransformOriginInstantiatorSystem() {}
// End Class UMovieSceneTransformOriginInstantiatorSystem

// Begin Class UMovieSceneTransformOriginSystem
void UMovieSceneTransformOriginSystem::StaticRegisterNativesUMovieSceneTransformOriginSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTransformOriginSystem);
UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem_NoRegister()
{
	return UMovieSceneTransformOriginSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneTransformOriginSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneTransformOriginSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTransformOriginSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::ClassParams = {
	&UMovieSceneTransformOriginSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformOriginSystem>()
{
	return UMovieSceneTransformOriginSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOriginSystem);
UMovieSceneTransformOriginSystem::~UMovieSceneTransformOriginSystem() {}
// End Class UMovieSceneTransformOriginSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem, UMovieSceneTransformOriginInstantiatorSystem::StaticClass, TEXT("UMovieSceneTransformOriginInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTransformOriginInstantiatorSystem), 3191663855U) },
		{ Z_Construct_UClass_UMovieSceneTransformOriginSystem, UMovieSceneTransformOriginSystem::StaticClass, TEXT("UMovieSceneTransformOriginSystem"), &Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTransformOriginSystem), 2761544316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_166656051(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
