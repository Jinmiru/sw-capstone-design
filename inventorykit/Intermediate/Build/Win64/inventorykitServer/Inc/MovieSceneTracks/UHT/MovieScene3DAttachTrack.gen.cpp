// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieScene3DAttachTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScene3DAttachTrack
void UMovieScene3DAttachTrack::StaticRegisterNativesUMovieScene3DAttachTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DAttachTrack);
UClass* Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister()
{
	return UMovieScene3DAttachTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieScene3DAttachTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of path tracks in a movie scene.\n */" },
		{ "IncludePath", "Tracks/MovieScene3DAttachTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DAttachTrack.h" },
		{ "ToolTip", "Handles manipulation of path tracks in a movie scene." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DAttachTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::ClassParams = {
	&UMovieScene3DAttachTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene3DAttachTrack()
{
	if (!Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton, Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DAttachTrack>()
{
	return UMovieScene3DAttachTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DAttachTrack);
UMovieScene3DAttachTrack::~UMovieScene3DAttachTrack() {}
// End Class UMovieScene3DAttachTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DAttachTrack, UMovieScene3DAttachTrack::StaticClass, TEXT("UMovieScene3DAttachTrack"), &Z_Registration_Info_UClass_UMovieScene3DAttachTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DAttachTrack), 1100651543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_455966264(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
