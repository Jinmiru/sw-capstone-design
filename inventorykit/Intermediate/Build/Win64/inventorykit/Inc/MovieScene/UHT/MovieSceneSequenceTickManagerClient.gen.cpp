// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceTickManagerClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickManagerClient() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManagerClient();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneSequenceTickManagerClient
void UMovieSceneSequenceTickManagerClient::StaticRegisterNativesUMovieSceneSequenceTickManagerClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequenceTickManagerClient);
UClass* Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_NoRegister()
{
	return UMovieSceneSequenceTickManagerClient::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManagerClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneSequenceTickManagerClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics::ClassParams = {
	&UMovieSceneSequenceTickManagerClient::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSequenceTickManagerClient()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.OuterSingleton, Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequenceTickManagerClient>()
{
	return UMovieSceneSequenceTickManagerClient::StaticClass();
}
UMovieSceneSequenceTickManagerClient::UMovieSceneSequenceTickManagerClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceTickManagerClient);
UMovieSceneSequenceTickManagerClient::~UMovieSceneSequenceTickManagerClient() {}
// End Interface UMovieSceneSequenceTickManagerClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequenceTickManagerClient, UMovieSceneSequenceTickManagerClient::StaticClass, TEXT("UMovieSceneSequenceTickManagerClient"), &Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequenceTickManagerClient), 4208931107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_3033588137(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
