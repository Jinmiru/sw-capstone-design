// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneFloatPerlinNoiseChannelContainer.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneFloatPerlinNoiseChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatPerlinNoiseChannelContainer() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneFloatPerlinNoiseChannelContainer
void UMovieSceneFloatPerlinNoiseChannelContainer::StaticRegisterNativesUMovieSceneFloatPerlinNoiseChannelContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatPerlinNoiseChannelContainer);
UClass* Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_NoRegister()
{
	return UMovieSceneFloatPerlinNoiseChannelContainer::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Float Perlin Noise" },
		{ "IncludePath", "Channels/MovieSceneFloatPerlinNoiseChannelContainer.h" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatPerlinNoiseChannelContainer.h" },
		{ "ToolTip", "Override a channel to use float perlin noise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerlinNoiseChannel_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatPerlinNoiseChannelContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinNoiseChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatPerlinNoiseChannelContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::NewProp_PerlinNoiseChannel = { "PerlinNoiseChannel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFloatPerlinNoiseChannelContainer, PerlinNoiseChannel), Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerlinNoiseChannel_MetaData), NewProp_PerlinNoiseChannel_MetaData) }; // 3261295556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::NewProp_PerlinNoiseChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneChannelOverrideContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::ClassParams = {
	&UMovieSceneFloatPerlinNoiseChannelContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer()
{
	if (!Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFloatPerlinNoiseChannelContainer>()
{
	return UMovieSceneFloatPerlinNoiseChannelContainer::StaticClass();
}
UMovieSceneFloatPerlinNoiseChannelContainer::UMovieSceneFloatPerlinNoiseChannelContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatPerlinNoiseChannelContainer);
UMovieSceneFloatPerlinNoiseChannelContainer::~UMovieSceneFloatPerlinNoiseChannelContainer() {}
// End Class UMovieSceneFloatPerlinNoiseChannelContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannelContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatPerlinNoiseChannelContainer, UMovieSceneFloatPerlinNoiseChannelContainer::StaticClass, TEXT("UMovieSceneFloatPerlinNoiseChannelContainer"), &Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatPerlinNoiseChannelContainer), 2433443005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannelContainer_h_3811282375(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannelContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannelContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
