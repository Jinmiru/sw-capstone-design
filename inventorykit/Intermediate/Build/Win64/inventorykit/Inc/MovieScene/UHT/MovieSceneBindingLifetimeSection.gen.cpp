// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Sections/MovieSceneBindingLifetimeSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingLifetimeSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneBindingLifetimeSection
void UMovieSceneBindingLifetimeSection::StaticRegisterNativesUMovieSceneBindingLifetimeSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBindingLifetimeSection);
UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister()
{
	return UMovieSceneBindingLifetimeSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Binding lifetime section that will connect an object binding while active, and disconnect it afterwards.\n */" },
		{ "IncludePath", "Sections/MovieSceneBindingLifetimeSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBindingLifetimeSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Binding lifetime section that will connect an object binding while active, and disconnect it afterwards." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBindingLifetimeSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneBindingLifetimeSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::ClassParams = {
	&UMovieSceneBindingLifetimeSection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.OuterSingleton, Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBindingLifetimeSection>()
{
	return UMovieSceneBindingLifetimeSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingLifetimeSection);
UMovieSceneBindingLifetimeSection::~UMovieSceneBindingLifetimeSection() {}
// End Class UMovieSceneBindingLifetimeSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBindingLifetimeSection, UMovieSceneBindingLifetimeSection::StaticClass, TEXT("UMovieSceneBindingLifetimeSection"), &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBindingLifetimeSection), 3753903956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_583213752(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
