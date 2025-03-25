// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/MovieSceneWidgetMaterialTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack();
UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UMovieSceneWidgetMaterialTrack
void UMovieSceneWidgetMaterialTrack::StaticRegisterNativesUMovieSceneWidgetMaterialTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneWidgetMaterialTrack);
UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister()
{
	return UMovieSceneWidgetMaterialTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material track which is specialized for materials which are owned by widget brushes.\n */" },
		{ "IncludePath", "Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "A material track which is specialized for materials which are owned by widget brushes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushPropertyNamePath_MetaData[] = {
		{ "Comment", "/** The name of the brush property which will be animated by this track. */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "The name of the brush property which will be animated by this track." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** The name of this track, generated from the property name path. */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "The name of this track, generated from the property name path." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BrushPropertyNamePath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushPropertyNamePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWidgetMaterialTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_Inner = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, BrushPropertyNamePath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushPropertyNamePath_MetaData), NewProp_BrushPropertyNamePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWidgetMaterialTrack, IMovieSceneEntityProvider), false },  // 1280352339
	{ Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWidgetMaterialTrack, IMovieSceneParameterSectionExtender), false },  // 2306681948
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::ClassParams = {
	&UMovieSceneWidgetMaterialTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMovieSceneWidgetMaterialTrack>()
{
	return UMovieSceneWidgetMaterialTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWidgetMaterialTrack);
UMovieSceneWidgetMaterialTrack::~UMovieSceneWidgetMaterialTrack() {}
// End Class UMovieSceneWidgetMaterialTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWidgetMaterialTrack, UMovieSceneWidgetMaterialTrack::StaticClass, TEXT("UMovieSceneWidgetMaterialTrack"), &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWidgetMaterialTrack), 854473322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_2608491006(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
