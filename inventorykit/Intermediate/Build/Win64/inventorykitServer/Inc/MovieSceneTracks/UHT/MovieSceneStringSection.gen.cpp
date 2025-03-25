// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneStringSection.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneStringChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneStringSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneStringSection
void UMovieSceneStringSection::StaticRegisterNativesUMovieSceneStringSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneStringSection);
UClass* Z_Construct_UClass_UMovieSceneStringSection_NoRegister()
{
	return UMovieSceneStringSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneStringSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single string section\n */" },
		{ "IncludePath", "Sections/MovieSceneStringSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneStringSection.h" },
		{ "ToolTip", "A single string section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[] = {
		{ "Comment", "/** Curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneStringSection.h" },
		{ "ToolTip", "Curve data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StringCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneStringSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneStringSection_Statics::NewProp_StringCurve = { "StringCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneStringSection, StringCurve), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringCurve_MetaData), NewProp_StringCurve_MetaData) }; // 377388920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneStringSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneStringSection_Statics::NewProp_StringCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneStringSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneStringSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneStringSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneStringSection_Statics::ClassParams = {
	&UMovieSceneStringSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneStringSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneStringSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneStringSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneStringSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneStringSection.OuterSingleton, Z_Construct_UClass_UMovieSceneStringSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneStringSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneStringSection>()
{
	return UMovieSceneStringSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneStringSection);
UMovieSceneStringSection::~UMovieSceneStringSection() {}
// End Class UMovieSceneStringSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneStringSection, UMovieSceneStringSection::StaticClass, TEXT("UMovieSceneStringSection"), &Z_Registration_Info_UClass_UMovieSceneStringSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneStringSection), 3919803906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_3748696623(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
