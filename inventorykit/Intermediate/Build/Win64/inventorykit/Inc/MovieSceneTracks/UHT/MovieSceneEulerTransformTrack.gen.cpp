// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneEulerTransformTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEulerTransformTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneEulerTransformTrack
void UMovieSceneEulerTransformTrack::StaticRegisterNativesUMovieSceneEulerTransformTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEulerTransformTrack);
UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister()
{
	return UMovieSceneEulerTransformTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of 3D euler transform properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneEulerTransformTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEulerTransformTrack.h" },
		{ "ToolTip", "Handles manipulation of 3D euler transform properties in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEulerTransformTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::ClassParams = {
	&UMovieSceneEulerTransformTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEulerTransformTrack>()
{
	return UMovieSceneEulerTransformTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEulerTransformTrack);
UMovieSceneEulerTransformTrack::~UMovieSceneEulerTransformTrack() {}
// End Class UMovieSceneEulerTransformTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEulerTransformTrack, UMovieSceneEulerTransformTrack::StaticClass, TEXT("UMovieSceneEulerTransformTrack"), &Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEulerTransformTrack), 3714558343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_81016810(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
