// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/IMovieScenePlaybackClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieScenePlaybackClient() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieScenePlaybackClient
void UMovieScenePlaybackClient::StaticRegisterNativesUMovieScenePlaybackClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePlaybackClient);
UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister()
{
	return UMovieScenePlaybackClient::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePlaybackClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IMovieScenePlaybackClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieScenePlaybackClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePlaybackClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlaybackClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePlaybackClient_Statics::ClassParams = {
	&UMovieScenePlaybackClient::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePlaybackClient()
{
	if (!Z_Registration_Info_UClass_UMovieScenePlaybackClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePlaybackClient.OuterSingleton, Z_Construct_UClass_UMovieScenePlaybackClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePlaybackClient.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieScenePlaybackClient>()
{
	return UMovieScenePlaybackClient::StaticClass();
}
UMovieScenePlaybackClient::UMovieScenePlaybackClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePlaybackClient);
UMovieScenePlaybackClient::~UMovieScenePlaybackClient() {}
// End Interface UMovieScenePlaybackClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePlaybackClient, UMovieScenePlaybackClient::StaticClass, TEXT("UMovieScenePlaybackClient"), &Z_Registration_Info_UClass_UMovieScenePlaybackClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePlaybackClient), 401751226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_2726511650(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
