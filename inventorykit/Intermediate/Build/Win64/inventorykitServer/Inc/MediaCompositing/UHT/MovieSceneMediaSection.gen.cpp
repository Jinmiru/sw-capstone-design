// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Public/MovieSceneMediaSection.h"
#include "Runtime/MediaAssets/Public/MediaSource.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneBoolChannel.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaSourceCacheSettings();
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaSection();
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References

// Begin Class UMovieSceneMediaSection
void UMovieSceneMediaSection::StaticRegisterNativesUMovieSceneMediaSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMediaSection);
UClass* Z_Construct_UClass_UMovieSceneMediaSection_NoRegister()
{
	return UMovieSceneMediaSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMediaSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene section for media playback.\n */" },
		{ "IncludePath", "MovieSceneMediaSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene section for media playback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The source to play with this video track if MediaSourceProxy is not available. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The source to play with this video track if MediaSourceProxy is not available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceProxyIndex_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The index to pass to MediaSourceProxy to get the media source. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The index to pass to MediaSourceProxy to get the media source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Should the media player be set to loop? This can be helpful for media formats that can use this information (such as exr sequences) to pre-cache the starting data when nearing the end of playback. Does not cause the media to continue playing after the end of the section is reached. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "Should the media player be set to loop? This can be helpful for media formats that can use this information (such as exr sequences) to pre-cache the starting data when nearing the end of playback. Does not cause the media to continue playing after the end of the section is reached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Offset into the source media. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "Offset into the source media." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The media texture that receives the track's video output. */" },
		{ "EditCondition", "!bUseExternalMediaPlayer" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The media texture that receives the track's video output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSoundComponent_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The media sound component that receives the track's audio output. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The media sound component that receives the track's audio output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalMediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** If true, this track will control a previously created media player instead of automatically creating one. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "If true, this track will control a previously created media player instead of automatically creating one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalMediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The external media player this track should control. */" },
		{ "EditCondition", "bUseExternalMediaPlayer" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The external media player this track should control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheSettings_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Override the default cache settings. Not used if we have a player proxy as the settings come from the proxy instead. */" },
		{ "EditCondition", "!bHasMediaPlayerProxy" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "Override the default cache settings. Not used if we have a player proxy as the settings come from the proxy instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** If using an object like a MediaPlate, then this determines which texture to use for crossfading purposes. */" },
		{ "EditCondition", "bHasMediaPlayerProxy" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "If using an object like a MediaPlate, then this determines which texture to use for crossfading purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMediaPlayerProxy_MetaData[] = {
		{ "Comment", "/** True if the object bound to this track has a media player proxy. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "True if the object bound to this track has a media player proxy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelCanPlayerBeOpen_MetaData[] = {
		{ "Comment", "/** If true then the media player can be open. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "If true then the media player can be open." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "Comment", "/** The reference frame offset for single thumbnail rendering */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The reference frame offset for single thumbnail rendering" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceProxyBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The object to get the source to play from if you don't want to directly specify a media source. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The object to get the source to play from if you don't want to directly specify a media source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaSourceProxyIndex;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSoundComponent;
	static void NewProp_bUseExternalMediaPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalMediaPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalMediaPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static void NewProp_bHasMediaPlayerProxy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMediaPlayerProxy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelCanPlayerBeOpen;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediaSourceProxyBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSource_MetaData), NewProp_MediaSource_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSourceProxyIndex = { "MediaSourceProxyIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaSourceProxyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSourceProxyIndex_MetaData), NewProp_MediaSourceProxyIndex_MetaData) };
void Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UMovieSceneMediaSection*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneMediaSection), &Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTexture_MetaData), NewProp_MediaTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSoundComponent = { "MediaSoundComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaSoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSoundComponent_MetaData), NewProp_MediaSoundComponent_MetaData) };
void Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_SetBit(void* Obj)
{
	((UMovieSceneMediaSection*)Obj)->bUseExternalMediaPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer = { "bUseExternalMediaPlayer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneMediaSection), &Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExternalMediaPlayer_MetaData), NewProp_bUseExternalMediaPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ExternalMediaPlayer = { "ExternalMediaPlayer", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, ExternalMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalMediaPlayer_MetaData), NewProp_ExternalMediaPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_CacheSettings = { "CacheSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, CacheSettings), Z_Construct_UScriptStruct_FMediaSourceCacheSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheSettings_MetaData), NewProp_CacheSettings_MetaData) }; // 290552820
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, TextureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIndex_MetaData), NewProp_TextureIndex_MetaData) };
void Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bHasMediaPlayerProxy_SetBit(void* Obj)
{
	((UMovieSceneMediaSection*)Obj)->bHasMediaPlayerProxy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bHasMediaPlayerProxy = { "bHasMediaPlayerProxy", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneMediaSection), &Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bHasMediaPlayerProxy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMediaPlayerProxy_MetaData), NewProp_bHasMediaPlayerProxy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ChannelCanPlayerBeOpen = { "ChannelCanPlayerBeOpen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, ChannelCanPlayerBeOpen), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelCanPlayerBeOpen_MetaData), NewProp_ChannelCanPlayerBeOpen_MetaData) }; // 2663502824
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ThumbnailReferenceOffset = { "ThumbnailReferenceOffset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, ThumbnailReferenceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailReferenceOffset_MetaData), NewProp_ThumbnailReferenceOffset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSourceProxyBindingID = { "MediaSourceProxyBindingID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaSourceProxyBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSourceProxyBindingID_MetaData), NewProp_MediaSourceProxyBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMediaSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSourceProxyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ExternalMediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_CacheSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_TextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bHasMediaPlayerProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ChannelCanPlayerBeOpen,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSourceProxyBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneMediaSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::ClassParams = {
	&UMovieSceneMediaSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneMediaSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMediaSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMediaSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMediaSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMediaSection.OuterSingleton, Z_Construct_UClass_UMovieSceneMediaSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMediaSection.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaSection>()
{
	return UMovieSceneMediaSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaSection);
UMovieSceneMediaSection::~UMovieSceneMediaSection() {}
// End Class UMovieSceneMediaSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMediaSection, UMovieSceneMediaSection::StaticClass, TEXT("UMovieSceneMediaSection"), &Z_Registration_Info_UClass_UMovieSceneMediaSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMediaSection), 3311496390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_1855517919(TEXT("/Script/MediaCompositing"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
