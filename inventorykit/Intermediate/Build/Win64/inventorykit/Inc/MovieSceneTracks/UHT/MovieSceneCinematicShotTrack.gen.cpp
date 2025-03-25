// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneCinematicShotTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCinematicShotTrack
void UMovieSceneCinematicShotTrack::StaticRegisterNativesUMovieSceneCinematicShotTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCinematicShotTrack);
UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister()
{
	return UMovieSceneCinematicShotTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A track that holds consecutive sub sequences.\n*/" },
		{ "IncludePath", "Tracks/MovieSceneCinematicShotTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCinematicShotTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track that holds consecutive sub sequences." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinematicShotTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::ClassParams = {
	&UMovieSceneCinematicShotTrack::StaticClass,
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
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCinematicShotTrack>()
{
	return UMovieSceneCinematicShotTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinematicShotTrack);
UMovieSceneCinematicShotTrack::~UMovieSceneCinematicShotTrack() {}
// End Class UMovieSceneCinematicShotTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCinematicShotTrack, UMovieSceneCinematicShotTrack::StaticClass, TEXT("UMovieSceneCinematicShotTrack"), &Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCinematicShotTrack), 3753955783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_816508808(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
