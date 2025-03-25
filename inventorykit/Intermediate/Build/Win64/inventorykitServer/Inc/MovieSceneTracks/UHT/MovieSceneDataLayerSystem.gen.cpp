// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Systems/MovieSceneDataLayerSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDataLayerSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneDataLayerSystem
void UMovieSceneDataLayerSystem::StaticRegisterNativesUMovieSceneDataLayerSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDataLayerSystem);
UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem_NoRegister()
{
	return UMovieSceneDataLayerSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that applies all data layer changes to the world\n */" },
		{ "IncludePath", "Systems/MovieSceneDataLayerSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/MovieSceneDataLayerSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that applies all data layer changes to the world" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDataLayerSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::ClassParams = {
	&UMovieSceneDataLayerSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDataLayerSystem>()
{
	return UMovieSceneDataLayerSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDataLayerSystem);
UMovieSceneDataLayerSystem::~UMovieSceneDataLayerSystem() {}
// End Class UMovieSceneDataLayerSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDataLayerSystem, UMovieSceneDataLayerSystem::StaticClass, TEXT("UMovieSceneDataLayerSystem"), &Z_Registration_Info_UClass_UMovieSceneDataLayerSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDataLayerSystem), 1114273910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_3538106702(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
