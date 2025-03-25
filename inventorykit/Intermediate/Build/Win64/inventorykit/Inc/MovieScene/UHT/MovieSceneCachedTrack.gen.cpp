// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Tracks/MovieSceneCachedTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCachedTrack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachedTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneCachedTrack
void UMovieSceneCachedTrack::StaticRegisterNativesUMovieSceneCachedTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCachedTrack);
UClass* Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister()
{
	return UMovieSceneCachedTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCachedTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCachedTrack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneCachedTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCachedTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCachedTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCachedTrack_Statics::ClassParams = {
	&UMovieSceneCachedTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCachedTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCachedTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCachedTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCachedTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCachedTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCachedTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCachedTrack.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCachedTrack>()
{
	return UMovieSceneCachedTrack::StaticClass();
}
UMovieSceneCachedTrack::UMovieSceneCachedTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCachedTrack);
UMovieSceneCachedTrack::~UMovieSceneCachedTrack() {}
// End Interface UMovieSceneCachedTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCachedTrack, UMovieSceneCachedTrack::StaticClass, TEXT("UMovieSceneCachedTrack"), &Z_Registration_Info_UClass_UMovieSceneCachedTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCachedTrack), 2561759662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_1069998257(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
