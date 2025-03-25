// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneSlomoTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSlomoTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneSlomoTrack
void UMovieSceneSlomoTrack::StaticRegisterNativesUMovieSceneSlomoTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSlomoTrack);
UClass* Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister()
{
	return UMovieSceneSlomoTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSlomoTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track that controls a movie scene's world time dilation.\n */" },
		{ "IncludePath", "Tracks/MovieSceneSlomoTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSlomoTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene track that controls a movie scene's world time dilation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSlomoTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneFloatTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::ClassParams = {
	&UMovieSceneSlomoTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSlomoTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSlomoTrack>()
{
	return UMovieSceneSlomoTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSlomoTrack);
UMovieSceneSlomoTrack::~UMovieSceneSlomoTrack() {}
// End Class UMovieSceneSlomoTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSlomoTrack, UMovieSceneSlomoTrack::StaticClass, TEXT("UMovieSceneSlomoTrack"), &Z_Registration_Info_UClass_UMovieSceneSlomoTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSlomoTrack), 1062547970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_99589686(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
