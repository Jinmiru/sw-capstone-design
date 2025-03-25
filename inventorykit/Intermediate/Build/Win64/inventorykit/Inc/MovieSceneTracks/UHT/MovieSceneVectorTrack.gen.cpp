// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneVectorTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneFloatVectorTrack
void UMovieSceneFloatVectorTrack::StaticRegisterNativesUMovieSceneFloatVectorTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatVectorTrack);
UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister()
{
	return UMovieSceneFloatVectorTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of float vectors in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneVectorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "Handles manipulation of float vectors in a movie scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChannelsUsed_MetaData[] = {
		{ "Comment", "/** The number of channels used by the vector (2,3, or 4) */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "The number of channels used by the vector (2,3, or 4)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannelsUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatVectorTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::NewProp_NumChannelsUsed = { "NumChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFloatVectorTrack, NumChannelsUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChannelsUsed_MetaData), NewProp_NumChannelsUsed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::NewProp_NumChannelsUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::ClassParams = {
	&UMovieSceneFloatVectorTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFloatVectorTrack>()
{
	return UMovieSceneFloatVectorTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatVectorTrack);
UMovieSceneFloatVectorTrack::~UMovieSceneFloatVectorTrack() {}
// End Class UMovieSceneFloatVectorTrack

// Begin Class UMovieSceneDoubleVectorTrack
void UMovieSceneDoubleVectorTrack::StaticRegisterNativesUMovieSceneDoubleVectorTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleVectorTrack);
UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister()
{
	return UMovieSceneDoubleVectorTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of double vectors in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneVectorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "Handles manipulation of double vectors in a movie scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChannelsUsed_MetaData[] = {
		{ "Comment", "/** The number of channels used by the vector (2,3, or 4) */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "The number of channels used by the vector (2,3, or 4)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannelsUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleVectorTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::NewProp_NumChannelsUsed = { "NumChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDoubleVectorTrack, NumChannelsUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChannelsUsed_MetaData), NewProp_NumChannelsUsed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::NewProp_NumChannelsUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::ClassParams = {
	&UMovieSceneDoubleVectorTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleVectorTrack>()
{
	return UMovieSceneDoubleVectorTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleVectorTrack);
UMovieSceneDoubleVectorTrack::~UMovieSceneDoubleVectorTrack() {}
// End Class UMovieSceneDoubleVectorTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatVectorTrack, UMovieSceneFloatVectorTrack::StaticClass, TEXT("UMovieSceneFloatVectorTrack"), &Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatVectorTrack), 1439779127U) },
		{ Z_Construct_UClass_UMovieSceneDoubleVectorTrack, UMovieSceneDoubleVectorTrack::StaticClass, TEXT("UMovieSceneDoubleVectorTrack"), &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleVectorTrack), 1009957446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_2122200837(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
