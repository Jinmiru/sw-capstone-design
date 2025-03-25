// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeMovieScene/Public/MovieSceneTakeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSettings();
TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_TakeMovieScene();
// End Cross Module References

// Begin Class UMovieSceneTakeSettings
void UMovieSceneTakeSettings::StaticRegisterNativesUMovieSceneTakeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTakeSettings);
UClass* Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister()
{
	return UMovieSceneTakeSettings::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTakeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Universal take recorder settings that apply to a whole take\n */" },
		{ "IncludePath", "MovieSceneTakeSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Universal take recorder settings that apply to a whole take" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoursName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Hours Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Hours Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinutesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Minutes Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Minutes Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Seconds Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Seconds Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Frames Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Frames Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubFramesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** SubFrames Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "SubFrames Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlateName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Slate Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Slate Name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoursName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinutesName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecondsName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FramesName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubFramesName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlateName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTakeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName = { "HoursName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, HoursName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoursName_MetaData), NewProp_HoursName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName = { "MinutesName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, MinutesName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinutesName_MetaData), NewProp_MinutesName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName = { "SecondsName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, SecondsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsName_MetaData), NewProp_SecondsName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName = { "FramesName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, FramesName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesName_MetaData), NewProp_FramesName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName = { "SubFramesName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, SubFramesName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubFramesName_MetaData), NewProp_SubFramesName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName = { "SlateName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, SlateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlateName_MetaData), NewProp_SlateName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTakeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TakeMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::ClassParams = {
	&UMovieSceneTakeSettings::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTakeSettings()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneTakeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton;
}
template<> TAKEMOVIESCENE_API UClass* StaticClass<UMovieSceneTakeSettings>()
{
	return UMovieSceneTakeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTakeSettings);
UMovieSceneTakeSettings::~UMovieSceneTakeSettings() {}
// End Class UMovieSceneTakeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTakeSettings, UMovieSceneTakeSettings::StaticClass, TEXT("UMovieSceneTakeSettings"), &Z_Registration_Info_UClass_UMovieSceneTakeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTakeSettings), 3417883130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_734504499(TEXT("/Script/TakeMovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
