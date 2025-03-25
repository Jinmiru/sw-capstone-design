// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeMovieScene/Public/MovieSceneTakeSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneStringChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSection();
TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_TakeMovieScene();
// End Cross Module References

// Begin Class UMovieSceneTakeSection
void UMovieSceneTakeSection::StaticRegisterNativesUMovieSceneTakeSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTakeSection);
UClass* Z_Construct_UClass_UMovieSceneTakeSection_NoRegister()
{
	return UMovieSceneTakeSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTakeSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A section in a Take track\n */" },
		{ "IncludePath", "MovieSceneTakeSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "A section in a Take track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoursCurve_MetaData[] = {
		{ "Comment", "/** Hours curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Hours curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinutesCurve_MetaData[] = {
		{ "Comment", "/** Minutes curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Minutes curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsCurve_MetaData[] = {
		{ "Comment", "/** Seconds curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Seconds curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesCurve_MetaData[] = {
		{ "Comment", "/** Frames curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Frames curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubFramesCurve_MetaData[] = {
		{ "Comment", "/** Subframes curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Subframes curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slate_MetaData[] = {
		{ "Comment", "/** Slate data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Slate data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoursCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinutesCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondsCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FramesCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubFramesCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTakeSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve = { "HoursCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSection, HoursCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoursCurve_MetaData), NewProp_HoursCurve_MetaData) }; // 1279923975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve = { "MinutesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSection, MinutesCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinutesCurve_MetaData), NewProp_MinutesCurve_MetaData) }; // 1279923975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve = { "SecondsCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSection, SecondsCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsCurve_MetaData), NewProp_SecondsCurve_MetaData) }; // 1279923975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve = { "FramesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSection, FramesCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesCurve_MetaData), NewProp_FramesCurve_MetaData) }; // 1279923975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve = { "SubFramesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSection, SubFramesCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubFramesCurve_MetaData), NewProp_SubFramesCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate = { "Slate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSection, Slate), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slate_MetaData), NewProp_Slate_MetaData) }; // 377388920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTakeSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_TakeMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::ClassParams = {
	&UMovieSceneTakeSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTakeSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton, Z_Construct_UClass_UMovieSceneTakeSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton;
}
template<> TAKEMOVIESCENE_API UClass* StaticClass<UMovieSceneTakeSection>()
{
	return UMovieSceneTakeSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTakeSection);
UMovieSceneTakeSection::~UMovieSceneTakeSection() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTakeSection)
#endif // WITH_EDITORONLY_DATA
// End Class UMovieSceneTakeSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTakeSection, UMovieSceneTakeSection::StaticClass, TEXT("UMovieSceneTakeSection"), &Z_Registration_Info_UClass_UMovieSceneTakeSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTakeSection), 3591971069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_2968803549(TEXT("/Script/TakeMovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
