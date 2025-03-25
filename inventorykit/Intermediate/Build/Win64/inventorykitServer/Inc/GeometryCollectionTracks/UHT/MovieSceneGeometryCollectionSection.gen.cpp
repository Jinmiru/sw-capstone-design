// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionTracks/Public/MovieSceneGeometryCollectionSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCollectionSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection();
GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection_NoRegister();
GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneGeometryCollectionParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams;
class UScriptStruct* FMovieSceneGeometryCollectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionTracks(), TEXT("MovieSceneGeometryCollectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCollectionParams>()
{
	return FMovieSceneGeometryCollectionParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionCache_MetaData[] = {
		{ "AllowedClasses", "/Script/GeometryCollectionEngine.GeometryCollectionCache" },
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCollectionCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache = { "GeometryCollectionCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, GeometryCollectionCache), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionCache_MetaData), NewProp_GeometryCollectionCache_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameOffset_MetaData), NewProp_EndFrameOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneGeometryCollectionParams",
	Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers),
	sizeof(FMovieSceneGeometryCollectionParams),
	alignof(FMovieSceneGeometryCollectionParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneGeometryCollectionParams

// Begin Class UMovieSceneGeometryCollectionSection
void UMovieSceneGeometryCollectionSection::StaticRegisterNativesUMovieSceneGeometryCollectionSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGeometryCollectionSection);
UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection_NoRegister()
{
	return UMovieSceneGeometryCollectionSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control geometry cache playback\n */" },
		{ "IncludePath", "MovieSceneGeometryCollectionSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "Movie scene section that control geometry cache playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGeometryCollectionSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneGeometryCollectionSection, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 262760997
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::ClassParams = {
	&UMovieSceneGeometryCollectionSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UClass* StaticClass<UMovieSceneGeometryCollectionSection>()
{
	return UMovieSceneGeometryCollectionSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGeometryCollectionSection);
UMovieSceneGeometryCollectionSection::~UMovieSceneGeometryCollectionSection() {}
// End Class UMovieSceneGeometryCollectionSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneGeometryCollectionParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewStructOps, TEXT("MovieSceneGeometryCollectionParams"), &Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGeometryCollectionParams), 262760997U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGeometryCollectionSection, UMovieSceneGeometryCollectionSection::StaticClass, TEXT("UMovieSceneGeometryCollectionSection"), &Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGeometryCollectionSection), 653013716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_3484404649(TEXT("/Script/GeometryCollectionTracks"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
