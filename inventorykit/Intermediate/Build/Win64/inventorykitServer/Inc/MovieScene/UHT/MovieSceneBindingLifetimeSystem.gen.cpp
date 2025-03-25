// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneBindingLifetimeSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingLifetimeSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneBindingLifetimeSystem
void UMovieSceneBindingLifetimeSystem::StaticRegisterNativesUMovieSceneBindingLifetimeSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBindingLifetimeSystem);
UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister()
{
	return UMovieSceneBindingLifetimeSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Systems that (optionally) controls the lifetime of bindings by communicating with the MovieSceneObjectCache.\n */" },
		{ "IncludePath", "EntitySystem/MovieSceneBindingLifetimeSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBindingLifetimeSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Systems that (optionally) controls the lifetime of bindings by communicating with the MovieSceneObjectCache." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBindingLifetimeSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics::ClassParams = {
	&UMovieSceneBindingLifetimeSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBindingLifetimeSystem>()
{
	return UMovieSceneBindingLifetimeSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingLifetimeSystem);
UMovieSceneBindingLifetimeSystem::~UMovieSceneBindingLifetimeSystem() {}
// End Class UMovieSceneBindingLifetimeSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBindingLifetimeSystem, UMovieSceneBindingLifetimeSystem::StaticClass, TEXT("UMovieSceneBindingLifetimeSystem"), &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBindingLifetimeSystem), 1867372534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_1748436684(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
