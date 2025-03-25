// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneActorReferenceTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneActorReferenceTrack
void UMovieSceneActorReferenceTrack::StaticRegisterNativesUMovieSceneActorReferenceTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneActorReferenceTrack);
UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack_NoRegister()
{
	return UMovieSceneActorReferenceTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of actor reference properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneActorReferenceTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneActorReferenceTrack.h" },
		{ "ToolTip", "Handles manipulation of actor reference properties in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneActorReferenceTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneActorReferenceTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::ClassParams = {
	&UMovieSceneActorReferenceTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneActorReferenceTrack>()
{
	return UMovieSceneActorReferenceTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneActorReferenceTrack);
UMovieSceneActorReferenceTrack::~UMovieSceneActorReferenceTrack() {}
// End Class UMovieSceneActorReferenceTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneActorReferenceTrack, UMovieSceneActorReferenceTrack::StaticClass, TEXT("UMovieSceneActorReferenceTrack"), &Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneActorReferenceTrack), 2911638262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_1185086820(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
