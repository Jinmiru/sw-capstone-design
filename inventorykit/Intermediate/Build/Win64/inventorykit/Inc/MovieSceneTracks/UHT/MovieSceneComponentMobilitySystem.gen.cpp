// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneComponentMobilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentMobilitySystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMobilitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMobilitySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneComponentMobilitySystem
void UMovieSceneComponentMobilitySystem::StaticRegisterNativesUMovieSceneComponentMobilitySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentMobilitySystem);
UClass* Z_Construct_UClass_UMovieSceneComponentMobilitySystem_NoRegister()
{
	return UMovieSceneComponentMobilitySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneComponentMobilitySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentMobilitySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentMobilitySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentMobilitySystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1017378651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics::ClassParams = {
	&UMovieSceneComponentMobilitySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneComponentMobilitySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentMobilitySystem>()
{
	return UMovieSceneComponentMobilitySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentMobilitySystem);
UMovieSceneComponentMobilitySystem::~UMovieSceneComponentMobilitySystem() {}
// End Class UMovieSceneComponentMobilitySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComponentMobilitySystem, UMovieSceneComponentMobilitySystem::StaticClass, TEXT("UMovieSceneComponentMobilitySystem"), &Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentMobilitySystem), 2945868560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_1866368991(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
