// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Public/MovieSceneMediaPlayerPropertyTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTrack() {}

// Begin Cross Module References
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack();
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References

// Begin Class UMovieSceneMediaPlayerPropertyTrack
void UMovieSceneMediaPlayerPropertyTrack::StaticRegisterNativesUMovieSceneMediaPlayerPropertyTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMediaPlayerPropertyTrack);
UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_NoRegister()
{
	return UMovieSceneMediaPlayerPropertyTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneMediaPlayerPropertyTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertyTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaPlayerPropertyTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMediaPlayerPropertyTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::ClassParams = {
	&UMovieSceneMediaPlayerPropertyTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaPlayerPropertyTrack>()
{
	return UMovieSceneMediaPlayerPropertyTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaPlayerPropertyTrack);
UMovieSceneMediaPlayerPropertyTrack::~UMovieSceneMediaPlayerPropertyTrack() {}
// End Class UMovieSceneMediaPlayerPropertyTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertyTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack, UMovieSceneMediaPlayerPropertyTrack::StaticClass, TEXT("UMovieSceneMediaPlayerPropertyTrack"), &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMediaPlayerPropertyTrack), 1322134941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertyTrack_h_3266571622(TEXT("/Script/MediaCompositing"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertyTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertyTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
