// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneDoubleTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneDoubleTrack
void UMovieSceneDoubleTrack::StaticRegisterNativesUMovieSceneDoubleTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleTrack);
UClass* Z_Construct_UClass_UMovieSceneDoubleTrack_NoRegister()
{
	return UMovieSceneDoubleTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDoubleTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of double properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneDoubleTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneDoubleTrack.h" },
		{ "ToolTip", "Handles manipulation of double properties in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::ClassParams = {
	&UMovieSceneDoubleTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDoubleTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleTrack>()
{
	return UMovieSceneDoubleTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleTrack);
UMovieSceneDoubleTrack::~UMovieSceneDoubleTrack() {}
// End Class UMovieSceneDoubleTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDoubleTrack, UMovieSceneDoubleTrack::StaticClass, TEXT("UMovieSceneDoubleTrack"), &Z_Registration_Info_UClass_UMovieSceneDoubleTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleTrack), 2339449264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_2559922125(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
