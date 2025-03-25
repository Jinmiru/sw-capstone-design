// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieScenePrimitiveMaterialSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneObjectPathChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePrimitiveMaterialSection
void UMovieScenePrimitiveMaterialSection::StaticRegisterNativesUMovieScenePrimitiveMaterialSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePrimitiveMaterialSection);
UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister()
{
	return UMovieScenePrimitiveMaterialSection::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScenePrimitiveMaterialSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScenePrimitiveMaterialSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScenePrimitiveMaterialSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel = { "MaterialChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePrimitiveMaterialSection, MaterialChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialChannel_MetaData), NewProp_MaterialChannel_MetaData) }; // 1924608816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePrimitiveMaterialSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::ClassParams = {
	&UMovieScenePrimitiveMaterialSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection()
{
	if (!Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.OuterSingleton, Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePrimitiveMaterialSection>()
{
	return UMovieScenePrimitiveMaterialSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialSection);
UMovieScenePrimitiveMaterialSection::~UMovieScenePrimitiveMaterialSection() {}
// End Class UMovieScenePrimitiveMaterialSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePrimitiveMaterialSection, UMovieScenePrimitiveMaterialSection::StaticClass, TEXT("UMovieScenePrimitiveMaterialSection"), &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePrimitiveMaterialSection), 1790156919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_2966034565(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
