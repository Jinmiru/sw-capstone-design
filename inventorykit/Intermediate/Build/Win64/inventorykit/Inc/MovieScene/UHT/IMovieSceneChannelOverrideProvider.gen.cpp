// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/IMovieSceneChannelOverrideProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneChannelOverrideProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideProvider();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneChannelOverrideProvider
void UMovieSceneChannelOverrideProvider::StaticRegisterNativesUMovieSceneChannelOverrideProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneChannelOverrideProvider);
UClass* Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister()
{
	return UMovieSceneChannelOverrideProvider::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/IMovieSceneChannelOverrideProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneChannelOverrideProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics::ClassParams = {
	&UMovieSceneChannelOverrideProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneChannelOverrideProvider()
{
	if (!Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.OuterSingleton, Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneChannelOverrideProvider>()
{
	return UMovieSceneChannelOverrideProvider::StaticClass();
}
UMovieSceneChannelOverrideProvider::UMovieSceneChannelOverrideProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneChannelOverrideProvider);
UMovieSceneChannelOverrideProvider::~UMovieSceneChannelOverrideProvider() {}
// End Interface UMovieSceneChannelOverrideProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneChannelOverrideProvider, UMovieSceneChannelOverrideProvider::StaticClass, TEXT("UMovieSceneChannelOverrideProvider"), &Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneChannelOverrideProvider), 1206691279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_4253792121(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
