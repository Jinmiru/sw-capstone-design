// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneEnumSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneByteChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEnumSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneEnumSection
void UMovieSceneEnumSection::StaticRegisterNativesUMovieSceneEnumSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEnumSection);
UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister()
{
	return UMovieSceneEnumSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEnumSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single enum section.\n */" },
		{ "IncludePath", "Sections/MovieSceneEnumSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
		{ "ToolTip", "A single enum section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumCurve_MetaData[] = {
		{ "Comment", "/** Ordered curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnumCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEnumSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve = { "EnumCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneEnumSection, EnumCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumCurve_MetaData), NewProp_EnumCurve_MetaData) }; // 2019839941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneEnumSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEnumSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::ClassParams = {
	&UMovieSceneEnumSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEnumSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEnumSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEnumSection.OuterSingleton, Z_Construct_UClass_UMovieSceneEnumSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEnumSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEnumSection>()
{
	return UMovieSceneEnumSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEnumSection);
UMovieSceneEnumSection::~UMovieSceneEnumSection() {}
// End Class UMovieSceneEnumSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEnumSection, UMovieSceneEnumSection::StaticClass, TEXT("UMovieSceneEnumSection"), &Z_Registration_Info_UClass_UMovieSceneEnumSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEnumSection), 2976510803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_185929736(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
