// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneVisibilitySection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilitySection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoolSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneVisibilitySection
void UMovieSceneVisibilitySection::StaticRegisterNativesUMovieSceneVisibilitySection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneVisibilitySection);
UClass* Z_Construct_UClass_UMovieSceneVisibilitySection_NoRegister()
{
	return UMovieSceneVisibilitySection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneVisibilitySection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A spawn section.\n */" },
		{ "IncludePath", "Sections/MovieSceneVisibilitySection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVisibilitySection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A spawn section." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneVisibilitySection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneVisibilitySection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBoolSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneVisibilitySection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneVisibilitySection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneVisibilitySection_Statics::ClassParams = {
	&UMovieSceneVisibilitySection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneVisibilitySection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneVisibilitySection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneVisibilitySection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneVisibilitySection.OuterSingleton, Z_Construct_UClass_UMovieSceneVisibilitySection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneVisibilitySection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneVisibilitySection>()
{
	return UMovieSceneVisibilitySection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVisibilitySection);
UMovieSceneVisibilitySection::~UMovieSceneVisibilitySection() {}
// End Class UMovieSceneVisibilitySection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneVisibilitySection, UMovieSceneVisibilitySection::StaticClass, TEXT("UMovieSceneVisibilitySection"), &Z_Registration_Info_UClass_UMovieSceneVisibilitySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneVisibilitySection), 3361450606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_936757750(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
