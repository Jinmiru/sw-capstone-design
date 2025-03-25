// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneCameraShakeSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCameraShakeInstantiatorSystem
void UMovieSceneCameraShakeInstantiatorSystem::StaticRegisterNativesUMovieSceneCameraShakeInstantiatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraShakeInstantiatorSystem);
UClass* Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_NoRegister()
{
	return UMovieSceneCameraShakeInstantiatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The instantiator system for camera shakes.\n *\n * This system will create and initialize camera shakes as they come in, and save pre-animated state.\n */" },
		{ "IncludePath", "Systems/MovieSceneCameraShakeSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneCameraShakeSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The instantiator system for camera shakes.\n\nThis system will create and initialize camera shakes as they come in, and save pre-animated state." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeInstantiatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_Statics::ClassParams = {
	&UMovieSceneCameraShakeInstantiatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeInstantiatorSystem>()
{
	return UMovieSceneCameraShakeInstantiatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeInstantiatorSystem);
UMovieSceneCameraShakeInstantiatorSystem::~UMovieSceneCameraShakeInstantiatorSystem() {}
// End Class UMovieSceneCameraShakeInstantiatorSystem

// Begin Class UMovieSceneCameraShakeEvaluatorSystem
void UMovieSceneCameraShakeEvaluatorSystem::StaticRegisterNativesUMovieSceneCameraShakeEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraShakeEvaluatorSystem);
UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_NoRegister()
{
	return UMovieSceneCameraShakeEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The evaluator system for camera shakes.\n *\n * This system takes care of updating ongoing camera shakes according to the evaluation range.\n */" },
		{ "IncludePath", "Systems/MovieSceneCameraShakeSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneCameraShakeSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The evaluator system for camera shakes.\n\nThis system takes care of updating ongoing camera shakes according to the evaluation range." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_Statics::ClassParams = {
	&UMovieSceneCameraShakeEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeEvaluatorSystem>()
{
	return UMovieSceneCameraShakeEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeEvaluatorSystem);
UMovieSceneCameraShakeEvaluatorSystem::~UMovieSceneCameraShakeEvaluatorSystem() {}
// End Class UMovieSceneCameraShakeEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCameraShakeSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraShakeInstantiatorSystem, UMovieSceneCameraShakeInstantiatorSystem::StaticClass, TEXT("UMovieSceneCameraShakeInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraShakeInstantiatorSystem), 3105602438U) },
		{ Z_Construct_UClass_UMovieSceneCameraShakeEvaluatorSystem, UMovieSceneCameraShakeEvaluatorSystem::StaticClass, TEXT("UMovieSceneCameraShakeEvaluatorSystem"), &Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraShakeEvaluatorSystem), 2891377210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCameraShakeSystem_h_54916250(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCameraShakeSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCameraShakeSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
