// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Private/MovieScene/MovieSceneMediaTemplate.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaSection_NoRegister();
MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams();
MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References

// Begin ScriptStruct FMovieSceneMediaSectionParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams;
class UScriptStruct* FMovieSceneMediaSectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams, (UObject*)Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaSectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaSectionParams>()
{
	return FMovieSceneMediaSectionParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSoundComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceProxyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyTextureBlend_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSoundComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediaSourceProxy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaSourceProxyIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndFrame;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyTextureBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent = { "MediaSoundComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSoundComponent_MetaData), NewProp_MediaSoundComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSource_MetaData), NewProp_MediaSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxy = { "MediaSourceProxy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSourceProxy), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSourceProxy_MetaData), NewProp_MediaSourceProxy_MetaData) }; // 2701874266
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxyIndex = { "MediaSourceProxyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSourceProxyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSourceProxyIndex_MetaData), NewProp_MediaSourceProxyIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTexture_MetaData), NewProp_MediaTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartFrame_MetaData), NewProp_SectionStartFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame = { "SectionEndFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, SectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionEndFrame_MetaData), NewProp_SectionEndFrame_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FMovieSceneMediaSectionParams*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneMediaSectionParams), &Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_ProxyTextureBlend = { "ProxyTextureBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, ProxyTextureBlend), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyTextureBlend_MetaData), NewProp_ProxyTextureBlend_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_ProxyTextureBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	nullptr,
	&NewStructOps,
	"MovieSceneMediaSectionParams",
	Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers),
	sizeof(FMovieSceneMediaSectionParams),
	alignof(FMovieSceneMediaSectionParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneMediaSectionParams

// Begin ScriptStruct FMovieSceneMediaSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneMediaSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneMediaSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate;
class UScriptStruct* FMovieSceneMediaSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaSectionTemplate>()
{
	return FMovieSceneMediaSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 4271955676
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_MediaSection = { "MediaSection", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMediaSectionTemplate, MediaSection), Z_Construct_UClass_UMovieSceneMediaSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSection_MetaData), NewProp_MediaSection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_MediaSection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneMediaSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneMediaSectionTemplate),
	alignof(FMovieSceneMediaSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneMediaSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneMediaSectionParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewStructOps, TEXT("MovieSceneMediaSectionParams"), &Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMediaSectionParams), 4271955676U) },
		{ FMovieSceneMediaSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneMediaSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMediaSectionTemplate), 3279282683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_2769902025(TEXT("/Script/MediaCompositing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
