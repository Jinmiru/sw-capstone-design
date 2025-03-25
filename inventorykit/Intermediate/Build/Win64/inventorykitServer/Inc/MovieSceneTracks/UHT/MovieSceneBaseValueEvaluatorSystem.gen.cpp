// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneBaseValueEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBaseValueEvaluatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneBaseValueEvaluatorSystem
void UMovieSceneBaseValueEvaluatorSystem::StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBaseValueEvaluatorSystem);
UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister()
{
	return UMovieSceneBaseValueEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating base values, for \"additive from base\" blending.\n */" },
		{ "IncludePath", "Systems/MovieSceneBaseValueEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneBaseValueEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating base values, for \"additive from base\" blending." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBaseValueEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::ClassParams = {
	&UMovieSceneBaseValueEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBaseValueEvaluatorSystem>()
{
	return UMovieSceneBaseValueEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBaseValueEvaluatorSystem);
UMovieSceneBaseValueEvaluatorSystem::~UMovieSceneBaseValueEvaluatorSystem() {}
// End Class UMovieSceneBaseValueEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem, UMovieSceneBaseValueEvaluatorSystem::StaticClass, TEXT("UMovieSceneBaseValueEvaluatorSystem"), &Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBaseValueEvaluatorSystem), 865117418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_1201653247(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
