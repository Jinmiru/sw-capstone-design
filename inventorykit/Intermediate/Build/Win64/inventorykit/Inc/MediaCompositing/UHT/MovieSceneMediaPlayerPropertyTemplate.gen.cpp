// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References

// Begin ScriptStruct FMovieSceneMediaPlayerPropertySectionTemplate
static_assert(std::is_polymorphic<FMovieSceneMediaPlayerPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneMediaPlayerPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate;
class UScriptStruct* FMovieSceneMediaPlayerPropertySectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate, (UObject*)Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaPlayerPropertySectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaPlayerPropertySectionTemplate>()
{
	return FMovieSceneMediaPlayerPropertySectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaPlayerPropertySectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaPlayerPropertySectionTemplate, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSource_MetaData), NewProp_MediaSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaPlayerPropertySectionTemplate, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartFrame_MetaData), NewProp_SectionStartFrame_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((FMovieSceneMediaPlayerPropertySectionTemplate*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneMediaPlayerPropertySectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_SectionStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
	&NewStructOps,
	"MovieSceneMediaPlayerPropertySectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneMediaPlayerPropertySectionTemplate),
	alignof(FMovieSceneMediaPlayerPropertySectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneMediaPlayerPropertySectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneMediaPlayerPropertySectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewStructOps, TEXT("MovieSceneMediaPlayerPropertySectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneMediaPlayerPropertySectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMediaPlayerPropertySectionTemplate), 4094082703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h_2892267634(TEXT("/Script/MediaCompositing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
