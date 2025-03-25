// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneCustomPrimitiveDataSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCustomPrimitiveDataSection() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCustomPrimitiveDataSection
void UMovieSceneCustomPrimitiveDataSection::StaticRegisterNativesUMovieSceneCustomPrimitiveDataSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCustomPrimitiveDataSection);
UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister()
{
	return UMovieSceneCustomPrimitiveDataSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that animates custom primitive data scalars, vector2s, vector3s, and colors\n */" },
		{ "IncludePath", "Sections/MovieSceneCustomPrimitiveDataSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCustomPrimitiveDataSection.h" },
		{ "ToolTip", "Movie scene section that animates custom primitive data scalars, vector2s, vector3s, and colors" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsedBitmap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCustomPrimitiveDataSection.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_ChannelsUsedBitmap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCustomPrimitiveDataSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::NewProp_ChannelsUsedBitmap = { "ChannelsUsedBitmap", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCustomPrimitiveDataSection, ChannelsUsedBitmap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelsUsedBitmap_MetaData), NewProp_ChannelsUsedBitmap_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::NewProp_ChannelsUsedBitmap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneParameterSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::ClassParams = {
	&UMovieSceneCustomPrimitiveDataSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::PropPointers), 0),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCustomPrimitiveDataSection>()
{
	return UMovieSceneCustomPrimitiveDataSection::StaticClass();
}
UMovieSceneCustomPrimitiveDataSection::UMovieSceneCustomPrimitiveDataSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCustomPrimitiveDataSection);
UMovieSceneCustomPrimitiveDataSection::~UMovieSceneCustomPrimitiveDataSection() {}
// End Class UMovieSceneCustomPrimitiveDataSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCustomPrimitiveDataSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection, UMovieSceneCustomPrimitiveDataSection::StaticClass, TEXT("UMovieSceneCustomPrimitiveDataSection"), &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCustomPrimitiveDataSection), 3447958025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCustomPrimitiveDataSection_h_865954604(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCustomPrimitiveDataSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCustomPrimitiveDataSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
