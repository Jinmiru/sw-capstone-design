// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneBoolTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoolTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneBoolTrack
void UMovieSceneBoolTrack::StaticRegisterNativesUMovieSceneBoolTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoolTrack);
UClass* Z_Construct_UClass_UMovieSceneBoolTrack_NoRegister()
{
	return UMovieSceneBoolTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBoolTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneBoolTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneBoolTrack.h" },
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoolTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBoolTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneBoolTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneBoolTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoolTrack_Statics::ClassParams = {
	&UMovieSceneBoolTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBoolTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBoolTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneBoolTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBoolTrack>()
{
	return UMovieSceneBoolTrack::StaticClass();
}
UMovieSceneBoolTrack::UMovieSceneBoolTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoolTrack);
UMovieSceneBoolTrack::~UMovieSceneBoolTrack() {}
// End Class UMovieSceneBoolTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoolTrack, UMovieSceneBoolTrack::StaticClass, TEXT("UMovieSceneBoolTrack"), &Z_Registration_Info_UClass_UMovieSceneBoolTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoolTrack), 2210452102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_2964892717(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
