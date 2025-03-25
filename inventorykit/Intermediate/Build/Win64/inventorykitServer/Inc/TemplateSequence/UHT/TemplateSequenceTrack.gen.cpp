// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/Tracks/TemplateSequenceTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceTrack();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References

// Begin Class UTemplateSequenceTrack
void UTemplateSequenceTrack::StaticRegisterNativesUTemplateSequenceTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequenceTrack);
UClass* Z_Construct_UClass_UTemplateSequenceTrack_NoRegister()
{
	return UTemplateSequenceTrack::StaticClass();
}
struct Z_Construct_UClass_UTemplateSequenceTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/TemplateSequenceTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/TemplateSequenceTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTemplateSequenceTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceTrack_Statics::ClassParams = {
	&UTemplateSequenceTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemplateSequenceTrack()
{
	if (!Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton, Z_Construct_UClass_UTemplateSequenceTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceTrack>()
{
	return UTemplateSequenceTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceTrack);
UTemplateSequenceTrack::~UTemplateSequenceTrack() {}
// End Class UTemplateSequenceTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequenceTrack, UTemplateSequenceTrack::StaticClass, TEXT("UTemplateSequenceTrack"), &Z_Registration_Info_UClass_UTemplateSequenceTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequenceTrack), 2854266376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_2571912476(TEXT("/Script/TemplateSequence"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
