// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/IMovieSceneSequencePlayerObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneSequencePlayerObserver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayerObserver();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneSequencePlayerObserver
void UMovieSceneSequencePlayerObserver::StaticRegisterNativesUMovieSceneSequencePlayerObserver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequencePlayerObserver);
UClass* Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister()
{
	return UMovieSceneSequencePlayerObserver::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IMovieSceneSequencePlayerObserver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneSequencePlayerObserver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics::ClassParams = {
	&UMovieSceneSequencePlayerObserver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSequencePlayerObserver()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.OuterSingleton, Z_Construct_UClass_UMovieSceneSequencePlayerObserver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequencePlayerObserver>()
{
	return UMovieSceneSequencePlayerObserver::StaticClass();
}
UMovieSceneSequencePlayerObserver::UMovieSceneSequencePlayerObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequencePlayerObserver);
UMovieSceneSequencePlayerObserver::~UMovieSceneSequencePlayerObserver() {}
// End Interface UMovieSceneSequencePlayerObserver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequencePlayerObserver, UMovieSceneSequencePlayerObserver::StaticClass, TEXT("UMovieSceneSequencePlayerObserver"), &Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequencePlayerObserver), 3419298978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_4083851575(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneSequencePlayerObserver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
