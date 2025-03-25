// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneMotionVectorSimulationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMotionVectorSimulationSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneMotionVectorSimulationSystem
void UMovieSceneMotionVectorSimulationSystem::StaticRegisterNativesUMovieSceneMotionVectorSimulationSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMotionVectorSimulationSystem);
UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister()
{
	return UMovieSceneMotionVectorSimulationSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieSceneMotionVectorSimulationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMotionVectorSimulationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMotionVectorSimulationSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::ClassParams = {
	&UMovieSceneMotionVectorSimulationSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMotionVectorSimulationSystem>()
{
	return UMovieSceneMotionVectorSimulationSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMotionVectorSimulationSystem);
UMovieSceneMotionVectorSimulationSystem::~UMovieSceneMotionVectorSimulationSystem() {}
// End Class UMovieSceneMotionVectorSimulationSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem, UMovieSceneMotionVectorSimulationSystem::StaticClass, TEXT("UMovieSceneMotionVectorSimulationSystem"), &Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMotionVectorSimulationSystem), 3165665203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_1750809934(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
