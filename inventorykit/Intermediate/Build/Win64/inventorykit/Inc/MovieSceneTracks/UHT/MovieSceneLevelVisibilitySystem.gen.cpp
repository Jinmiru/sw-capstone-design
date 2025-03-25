// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Systems/MovieSceneLevelVisibilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilitySystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneLevelVisibilitySystem
void UMovieSceneLevelVisibilitySystem::StaticRegisterNativesUMovieSceneLevelVisibilitySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLevelVisibilitySystem);
UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_NoRegister()
{
	return UMovieSceneLevelVisibilitySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneLevelVisibilitySystem.h" },
		{ "ModuleRelativePath", "Private/Systems/MovieSceneLevelVisibilitySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLevelVisibilitySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneLevelVisibilitySystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1017378651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::ClassParams = {
	&UMovieSceneLevelVisibilitySystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneLevelVisibilitySystem>()
{
	return UMovieSceneLevelVisibilitySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLevelVisibilitySystem);
UMovieSceneLevelVisibilitySystem::~UMovieSceneLevelVisibilitySystem() {}
// End Class UMovieSceneLevelVisibilitySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLevelVisibilitySystem, UMovieSceneLevelVisibilitySystem::StaticClass, TEXT("UMovieSceneLevelVisibilitySystem"), &Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLevelVisibilitySystem), 3873468663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_3624976504(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
