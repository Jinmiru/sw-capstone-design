// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneNameableTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNameableTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneNameableTrack
void UMovieSceneNameableTrack::StaticRegisterNativesUMovieSceneNameableTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNameableTrack);
UClass* Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister()
{
	return UMovieSceneNameableTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNameableTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for movie scene tracks that can be renamed by the user.\n */" },
		{ "IncludePath", "MovieSceneNameableTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "Base class for movie scene tracks that can be renamed by the user." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Track" },
		{ "Comment", "/** The track's human readable display name. */" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "The track's human readable display name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackRowDisplayNames_MetaData[] = {
		{ "Category", "Track" },
		{ "Comment", "/** The track display name per row. */" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "The track display name per row." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TrackRowDisplayNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackRowDisplayNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNameableTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNameableTrack, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames_Inner = { "TrackRowDisplayNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames = { "TrackRowDisplayNames", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNameableTrack, TrackRowDisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackRowDisplayNames_MetaData), NewProp_TrackRowDisplayNames_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UMovieSceneNameableTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::ClassParams = {
	&UMovieSceneNameableTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers), 0),
	0,
	0x00A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNameableTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNameableTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneNameableTrack>()
{
	return UMovieSceneNameableTrack::StaticClass();
}
UMovieSceneNameableTrack::UMovieSceneNameableTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNameableTrack);
UMovieSceneNameableTrack::~UMovieSceneNameableTrack() {}
// End Class UMovieSceneNameableTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNameableTrack, UMovieSceneNameableTrack::StaticClass, TEXT("UMovieSceneNameableTrack"), &Z_Registration_Info_UClass_UMovieSceneNameableTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNameableTrack), 3572593741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_4041716329(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
