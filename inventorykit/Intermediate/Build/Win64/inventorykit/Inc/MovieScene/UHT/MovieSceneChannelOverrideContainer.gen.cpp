// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelOverrideContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChannelOverrideContainer() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneChannelOverrideContainer
void UMovieSceneChannelOverrideContainer::StaticRegisterNativesUMovieSceneChannelOverrideContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneChannelOverrideContainer);
UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister()
{
	return UMovieSceneChannelOverrideContainer::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper to implement polymorphism for FMovieSceneChannel.\n */" },
		{ "IncludePath", "Channels/MovieSceneChannelOverrideContainer.h" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneChannelOverrideContainer.h" },
		{ "ToolTip", "A wrapper to implement polymorphism for FMovieSceneChannel." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneChannelOverrideContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics::ClassParams = {
	&UMovieSceneChannelOverrideContainer::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer()
{
	if (!Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.OuterSingleton, Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneChannelOverrideContainer>()
{
	return UMovieSceneChannelOverrideContainer::StaticClass();
}
UMovieSceneChannelOverrideContainer::UMovieSceneChannelOverrideContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneChannelOverrideContainer);
UMovieSceneChannelOverrideContainer::~UMovieSceneChannelOverrideContainer() {}
// End Class UMovieSceneChannelOverrideContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneChannelOverrideContainer, UMovieSceneChannelOverrideContainer::StaticClass, TEXT("UMovieSceneChannelOverrideContainer"), &Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneChannelOverrideContainer), 278870896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_125496142(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
