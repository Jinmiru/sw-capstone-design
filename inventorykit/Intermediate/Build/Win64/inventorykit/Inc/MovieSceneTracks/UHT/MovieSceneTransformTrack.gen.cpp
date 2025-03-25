// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneTransformTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTransformTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneTransformTrack
void UMovieSceneTransformTrack::StaticRegisterNativesUMovieSceneTransformTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTransformTrack);
UClass* Z_Construct_UClass_UMovieSceneTransformTrack_NoRegister()
{
	return UMovieSceneTransformTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTransformTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of 3D transform properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneTransformTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneTransformTrack.h" },
		{ "ToolTip", "Handles manipulation of 3D transform properties in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTransformTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneTransformTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformTrack_Statics::ClassParams = {
	&UMovieSceneTransformTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTransformTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTransformTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTransformTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTransformTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneTransformTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTransformTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformTrack>()
{
	return UMovieSceneTransformTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformTrack);
UMovieSceneTransformTrack::~UMovieSceneTransformTrack() {}
// End Class UMovieSceneTransformTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTransformTrack, UMovieSceneTransformTrack::StaticClass, TEXT("UMovieSceneTransformTrack"), &Z_Registration_Info_UClass_UMovieSceneTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTransformTrack), 1359763458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_3614533089(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
