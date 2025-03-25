// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneVisibilityTrack.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilityTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVisibilityTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVisibilityTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneVisibilityTrack
void UMovieSceneVisibilityTrack::StaticRegisterNativesUMovieSceneVisibilityTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneVisibilityTrack);
UClass* Z_Construct_UClass_UMovieSceneVisibilityTrack_NoRegister()
{
	return UMovieSceneVisibilityTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of visibility properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneVisibilityTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVisibilityTrack.h" },
		{ "ToolTip", "Handles manipulation of visibility properties in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneVisibilityTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics::ClassParams = {
	&UMovieSceneVisibilityTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneVisibilityTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneVisibilityTrack>()
{
	return UMovieSceneVisibilityTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVisibilityTrack);
UMovieSceneVisibilityTrack::~UMovieSceneVisibilityTrack() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneVisibilityTrack)
// End Class UMovieSceneVisibilityTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneVisibilityTrack, UMovieSceneVisibilityTrack::StaticClass, TEXT("UMovieSceneVisibilityTrack"), &Z_Registration_Info_UClass_UMovieSceneVisibilityTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneVisibilityTrack), 3155663538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_2293661036(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
