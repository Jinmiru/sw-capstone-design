// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneVisibilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilitySystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneVisibilitySystem
void UMovieSceneVisibilitySystem::StaticRegisterNativesUMovieSceneVisibilitySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneVisibilitySystem);
UClass* Z_Construct_UClass_UMovieSceneVisibilitySystem_NoRegister()
{
	return UMovieSceneVisibilitySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "Systems/MovieSceneVisibilitySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneVisibilitySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneVisibilitySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics::ClassParams = {
	&UMovieSceneVisibilitySystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneVisibilitySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneVisibilitySystem>()
{
	return UMovieSceneVisibilitySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVisibilitySystem);
UMovieSceneVisibilitySystem::~UMovieSceneVisibilitySystem() {}
// End Class UMovieSceneVisibilitySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneVisibilitySystem, UMovieSceneVisibilitySystem::StaticClass, TEXT("UMovieSceneVisibilitySystem"), &Z_Registration_Info_UClass_UMovieSceneVisibilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneVisibilitySystem), 290758815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_12476391(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
