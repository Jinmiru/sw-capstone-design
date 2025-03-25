// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/MovieSceneMarginTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginTrack();
UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UMovieSceneMarginTrack
void UMovieSceneMarginTrack::StaticRegisterNativesUMovieSceneMarginTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMarginTrack);
UClass* Z_Construct_UClass_UMovieSceneMarginTrack_NoRegister()
{
	return UMovieSceneMarginTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMarginTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of FMargins in a movie scene\n */" },
		{ "IncludePath", "Animation/MovieSceneMarginTrack.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of FMargins in a movie scene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMarginTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginTrack_Statics::ClassParams = {
	&UMovieSceneMarginTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMarginTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMarginTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneMarginTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMovieSceneMarginTrack>()
{
	return UMovieSceneMarginTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginTrack);
UMovieSceneMarginTrack::~UMovieSceneMarginTrack() {}
// End Class UMovieSceneMarginTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMarginTrack, UMovieSceneMarginTrack::StaticClass, TEXT("UMovieSceneMarginTrack"), &Z_Registration_Info_UClass_UMovieSceneMarginTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMarginTrack), 3969968530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_3845666932(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
