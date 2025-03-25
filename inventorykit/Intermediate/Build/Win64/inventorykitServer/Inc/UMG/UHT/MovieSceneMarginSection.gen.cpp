// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/MovieSceneMarginSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection();
UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UMovieSceneMarginSection
void UMovieSceneMarginSection::StaticRegisterNativesUMovieSceneMarginSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMarginSection);
UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister()
{
	return UMovieSceneMarginSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMarginSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A section in a Margin track\n */" },
		{ "IncludePath", "Animation/MovieSceneMarginSection.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "A section in a Margin track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopCurve_MetaData[] = {
		{ "Comment", "/** Red curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Red curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftCurve_MetaData[] = {
		{ "Comment", "/** Green curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Green curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightCurve_MetaData[] = {
		{ "Comment", "/** Blue curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Blue curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomCurve_MetaData[] = {
		{ "Comment", "/** Alpha curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Alpha curve data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve = { "TopCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMarginSection, TopCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopCurve_MetaData), NewProp_TopCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve = { "LeftCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMarginSection, LeftCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftCurve_MetaData), NewProp_LeftCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve = { "RightCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMarginSection, RightCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightCurve_MetaData), NewProp_RightCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve = { "BottomCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMarginSection, BottomCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomCurve_MetaData), NewProp_BottomCurve_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneMarginSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMarginSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::ClassParams = {
	&UMovieSceneMarginSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMarginSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton, Z_Construct_UClass_UMovieSceneMarginSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMovieSceneMarginSection>()
{
	return UMovieSceneMarginSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginSection);
UMovieSceneMarginSection::~UMovieSceneMarginSection() {}
// End Class UMovieSceneMarginSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMarginSection, UMovieSceneMarginSection::StaticClass, TEXT("UMovieSceneMarginSection"), &Z_Registration_Info_UClass_UMovieSceneMarginSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMarginSection), 1324629059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_3260795556(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
