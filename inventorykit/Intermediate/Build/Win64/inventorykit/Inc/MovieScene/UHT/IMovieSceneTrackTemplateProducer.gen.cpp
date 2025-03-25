// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Compilation/IMovieSceneTrackTemplateProducer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneTrackTemplateProducer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneTrackTemplateProducer
void UMovieSceneTrackTemplateProducer::StaticRegisterNativesUMovieSceneTrackTemplateProducer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackTemplateProducer);
UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister()
{
	return UMovieSceneTrackTemplateProducer::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneTrackTemplateProducer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneTrackTemplateProducer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::ClassParams = {
	&UMovieSceneTrackTemplateProducer::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackTemplateProducer>()
{
	return UMovieSceneTrackTemplateProducer::StaticClass();
}
UMovieSceneTrackTemplateProducer::UMovieSceneTrackTemplateProducer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackTemplateProducer);
UMovieSceneTrackTemplateProducer::~UMovieSceneTrackTemplateProducer() {}
// End Interface UMovieSceneTrackTemplateProducer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer, UMovieSceneTrackTemplateProducer::StaticClass, TEXT("UMovieSceneTrackTemplateProducer"), &Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackTemplateProducer), 2607263461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_1942131190(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
