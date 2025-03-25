// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneColorTrack
void UMovieSceneColorTrack::StaticRegisterNativesUMovieSceneColorTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneColorTrack);
UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister()
{
	return UMovieSceneColorTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneColorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneColorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlateColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSlateColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlateColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneColorTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_SetBit(void* Obj)
{
	((UMovieSceneColorTrack*)Obj)->bIsSlateColor_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor = { "bIsSlateColor", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneColorTrack), &Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSlateColor_MetaData), NewProp_bIsSlateColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneColorTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneColorTrack_Statics::ClassParams = {
	&UMovieSceneColorTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneColorTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneColorTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneColorTrack>()
{
	return UMovieSceneColorTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneColorTrack);
UMovieSceneColorTrack::~UMovieSceneColorTrack() {}
// End Class UMovieSceneColorTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneColorTrack, UMovieSceneColorTrack::StaticClass, TEXT("UMovieSceneColorTrack"), &Z_Registration_Info_UClass_UMovieSceneColorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneColorTrack), 1906297439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_4250944742(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
