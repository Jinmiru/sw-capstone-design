// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneIntegerSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneIntegerSection
void UMovieSceneIntegerSection::StaticRegisterNativesUMovieSceneIntegerSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneIntegerSection);
UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister()
{
	return UMovieSceneIntegerSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneIntegerSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single integer section.\n */" },
		{ "IncludePath", "Sections/MovieSceneIntegerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
		{ "ToolTip", "A single integer section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerCurve_MetaData[] = {
		{ "Comment", "/** Ordered curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneIntegerSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve = { "IntegerCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneIntegerSection, IntegerCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerCurve_MetaData), NewProp_IntegerCurve_MetaData) }; // 1279923975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneIntegerSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneIntegerSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::ClassParams = {
	&UMovieSceneIntegerSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneIntegerSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneIntegerSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneIntegerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneIntegerSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneIntegerSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneIntegerSection>()
{
	return UMovieSceneIntegerSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneIntegerSection);
UMovieSceneIntegerSection::~UMovieSceneIntegerSection() {}
// End Class UMovieSceneIntegerSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneIntegerSection, UMovieSceneIntegerSection::StaticClass, TEXT("UMovieSceneIntegerSection"), &Z_Registration_Info_UClass_UMovieSceneIntegerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneIntegerSection), 3878228747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_943692052(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
