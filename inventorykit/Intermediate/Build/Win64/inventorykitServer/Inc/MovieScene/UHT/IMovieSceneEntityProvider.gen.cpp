// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/IMovieSceneEntityProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneEntityProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneEntityProvider
void UMovieSceneEntityProvider::StaticRegisterNativesUMovieSceneEntityProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEntityProvider);
UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister()
{
	return UMovieSceneEntityProvider::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEntityProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/IMovieSceneEntityProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneEntityProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEntityProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntityProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEntityProvider_Statics::ClassParams = {
	&UMovieSceneEntityProvider::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntityProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEntityProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEntityProvider()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEntityProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEntityProvider.OuterSingleton, Z_Construct_UClass_UMovieSceneEntityProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEntityProvider.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEntityProvider>()
{
	return UMovieSceneEntityProvider::StaticClass();
}
UMovieSceneEntityProvider::UMovieSceneEntityProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEntityProvider);
UMovieSceneEntityProvider::~UMovieSceneEntityProvider() {}
// End Interface UMovieSceneEntityProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEntityProvider, UMovieSceneEntityProvider::StaticClass, TEXT("UMovieSceneEntityProvider"), &Z_Registration_Info_UClass_UMovieSceneEntityProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEntityProvider), 1280352339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_2853493942(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
