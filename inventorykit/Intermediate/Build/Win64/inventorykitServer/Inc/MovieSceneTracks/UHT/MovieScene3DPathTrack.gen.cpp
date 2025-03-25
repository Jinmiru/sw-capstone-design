// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieScene3DPathTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScene3DPathTrack
void UMovieScene3DPathTrack::StaticRegisterNativesUMovieScene3DPathTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DPathTrack);
UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister()
{
	return UMovieScene3DPathTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieScene3DPathTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of path tracks in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieScene3DPathTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DPathTrack.h" },
		{ "ToolTip", "Handles manipulation of path tracks in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DPathTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScene3DPathTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene3DPathTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DPathTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DPathTrack_Statics::ClassParams = {
	&UMovieScene3DPathTrack::StaticClass,
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
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene3DPathTrack()
{
	if (!Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton, Z_Construct_UClass_UMovieScene3DPathTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DPathTrack>()
{
	return UMovieScene3DPathTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DPathTrack);
UMovieScene3DPathTrack::~UMovieScene3DPathTrack() {}
// End Class UMovieScene3DPathTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DPathTrack, UMovieScene3DPathTrack::StaticClass, TEXT("UMovieScene3DPathTrack"), &Z_Registration_Info_UClass_UMovieScene3DPathTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DPathTrack), 2509193992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_1209359730(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
