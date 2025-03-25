// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneCapture/Public/MovieSceneCaptureSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureResolution();
MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings();
UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References

// Begin ScriptStruct FCaptureResolution
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CaptureResolution;
class UScriptStruct* FCaptureResolution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CaptureResolution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CaptureResolution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaptureResolution, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CaptureResolution"));
	}
	return Z_Registration_Info_UScriptStruct_CaptureResolution.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCaptureResolution>()
{
	return FCaptureResolution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCaptureResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure representing a capture resolution */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Structure representing a capture resolution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResX_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "7680" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResY_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "7680" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaptureResolution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCaptureResolution, ResX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResX_MetaData), NewProp_ResX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCaptureResolution, ResY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResY_MetaData), NewProp_ResY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCaptureResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCaptureResolution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	&NewStructOps,
	"CaptureResolution",
	Z_Construct_UScriptStruct_FCaptureResolution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureResolution_Statics::PropPointers),
	sizeof(FCaptureResolution),
	alignof(FCaptureResolution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureResolution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCaptureResolution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCaptureResolution()
{
	if (!Z_Registration_Info_UScriptStruct_CaptureResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CaptureResolution.InnerSingleton, Z_Construct_UScriptStruct_FCaptureResolution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CaptureResolution.InnerSingleton;
}
// End ScriptStruct FCaptureResolution

// Begin ScriptStruct FMovieSceneCaptureSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings;
class UScriptStruct* FMovieSceneCaptureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("MovieSceneCaptureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FMovieSceneCaptureSettings>()
{
	return FMovieSceneCaptureSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Common movie-scene capture settings */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Common movie-scene capture settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The directory to output the captured file(s) in */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The directory to output the captured file(s) in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameModeOverride_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Optional game mode to override the map's default game mode with.  This can be useful if the game's normal mode displays UI elements or loading screens that you don't want captured. */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Optional game mode to override the map's default game mode with.  This can be useful if the game's normal mode displays UI elements or loading screens that you don't want captured." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n\x09 * {fps}\x09\x09- The captured framerate\n\x09 * {frame}\x09\x09- The current frame number (only relevant for image sequences)\n\x09 * {width}\x09\x09- The width of the captured frames\n\x09 * {height}\x09\x09- The height of the captured frames\n\x09 * {world}\x09\x09- The name of the current world\n\x09 * {quality}\x09- The image compression quality setting\n\x09 * {material}   - The material/render pass\n\x09 * {shot}       - The name of the level sequence asset shot being played\n\x09 * {sequence}   - The name of the level sequence asset being played\n\x09 * {camera}     - The name of the current camera\n\x09 * {date}       - The date in the format of {year}.{month}.{day}\n\x09 * {year}       - The current year\n\x09 * {month}      - The current month\n\x09 * {day}        - The current day\n\x09 * {time}       - The current time in the format of hours.minutes.seconds\n\x09 */" },
		{ "DisplayName", "Filename Format" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n{fps}                - The captured framerate\n{frame}              - The current frame number (only relevant for image sequences)\n{width}              - The width of the captured frames\n{height}             - The height of the captured frames\n{world}              - The name of the current world\n{quality}    - The image compression quality setting\n{material}   - The material/render pass\n{shot}       - The name of the level sequence asset shot being played\n{sequence}   - The name of the level sequence asset being played\n{camera}     - The name of the current camera\n{date}       - The date in the format of {year}.{month}.{day}\n{year}       - The current year\n{month}      - The current month\n{day}        - The current day\n{time}       - The current time in the format of hours.minutes.seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteExisting_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to overwrite existing files or not */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to overwrite existing files or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeFrameNumbers_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** True if frame numbers in the output files should be relative to zero, rather than the actual frame numbers in the originating animation content. */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "True if frame numbers in the output files should be relative to zero, rather than the actual frame numbers in the originating animation content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleFrames_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of frame handles to include for each shot */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Number of frame handles to include for each shot" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieExtension_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Filename extension for movies referenced in the XMLs/EDLs */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Filename extension for movies referenced in the XMLs/EDLs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZeroPadFrameNumbers_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to zero-pad frame numbers on filenames */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "How much to zero-pad frame numbers on filenames" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The sequence's frame rate at which to capture if \"Use Custom Frame Rate\" is not enabled */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "The sequence's frame rate at which to capture if \"Use Custom Frame Rate\" is not enabled" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFrameRate_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "/** Specify using the custom frame rate as opposed to the sequence's display rate */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Specify using the custom frame rate as opposed to the sequence's display rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomFrameRate_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The custom frame rate at which to capture if \"Use Custom Frame Rate\" is enabled */" },
		{ "EditCondition", "bUseCustomFrameRate" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "The custom frame rate at which to capture if \"Use Custom Frame Rate\" is enabled" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "/** The resolution at which to capture */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The resolution at which to capture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTextureStreaming_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "/** Whether to texture streaming should be enabled while capturing.  Turning off texture streaming may cause much more memory to be used, but also reduces the chance of blurry textures in your captured video. */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to texture streaming should be enabled while capturing.  Turning off texture streaming may cause much more memory to be used, but also reduces the chance of blurry textures in your captured video." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCinematicEngineScalability_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Whether to enable cinematic engine scalability settings */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to enable cinematic engine scalability settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCinematicMode_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Whether to enable cinematic mode whilst capturing */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to enable cinematic mode whilst capturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMovement_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Whether to allow player movement whilst capturing */" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to allow player movement whilst capturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTurning_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Whether to allow player rotation whilst capturing */" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to allow player rotation whilst capturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPlayer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Whether to show the local player whilst capturing */" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to show the local player whilst capturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Whether to show the in-game HUD whilst capturing */" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to show the in-game HUD whilst capturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathTracer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Whether to use the path tracer (if supported) to render the scene */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to use the path tracer (if supported) to render the scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracerSamplePerPixel_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of sampler per pixel to be used when rendering the scene with the path tracer (if supported) */" },
		{ "EditCondition", "bUsePathTracer" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Number of sampler per pixel to be used when rendering the scene with the path tracer (if supported)" },
		{ "UIMax", "4096" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameModeOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFormat;
	static void NewProp_bOverwriteExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExisting;
	static void NewProp_bUseRelativeFrameNumbers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeFrameNumbers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandleFrames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MovieExtension;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZeroPadFrameNumbers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static void NewProp_bUseCustomFrameRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomFrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static void NewProp_bEnableTextureStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTextureStreaming;
	static void NewProp_bCinematicEngineScalability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCinematicEngineScalability;
	static void NewProp_bCinematicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCinematicMode;
	static void NewProp_bAllowMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMovement;
	static void NewProp_bAllowTurning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTurning;
	static void NewProp_bShowPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPlayer;
	static void NewProp_bShowHUD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHUD;
	static void NewProp_bUsePathTracer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathTracer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathTracerSamplePerPixel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCaptureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputDirectory_MetaData), NewProp_OutputDirectory_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_GameModeOverride = { "GameModeOverride", nullptr, (EPropertyFlags)0x0014040000004005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, GameModeOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameModeOverride_MetaData), NewProp_GameModeOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, OutputFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFormat_MetaData), NewProp_OutputFormat_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bOverwriteExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting = { "bOverwriteExisting", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverwriteExisting_MetaData), NewProp_bOverwriteExisting_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bUseRelativeFrameNumbers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers = { "bUseRelativeFrameNumbers", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRelativeFrameNumbers_MetaData), NewProp_bUseRelativeFrameNumbers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_HandleFrames = { "HandleFrames", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, HandleFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleFrames_MetaData), NewProp_HandleFrames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_MovieExtension = { "MovieExtension", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, MovieExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieExtension_MetaData), NewProp_MovieExtension_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_ZeroPadFrameNumbers = { "ZeroPadFrameNumbers", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, ZeroPadFrameNumbers), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZeroPadFrameNumbers_MetaData), NewProp_ZeroPadFrameNumbers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseCustomFrameRate_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bUseCustomFrameRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseCustomFrameRate = { "bUseCustomFrameRate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseCustomFrameRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomFrameRate_MetaData), NewProp_bUseCustomFrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_CustomFrameRate = { "CustomFrameRate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, CustomFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomFrameRate_MetaData), NewProp_CustomFrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, Resolution), Z_Construct_UScriptStruct_FCaptureResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) }; // 1667090962
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bEnableTextureStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming = { "bEnableTextureStreaming", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTextureStreaming_MetaData), NewProp_bEnableTextureStreaming_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bCinematicEngineScalability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability = { "bCinematicEngineScalability", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCinematicEngineScalability_MetaData), NewProp_bCinematicEngineScalability_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bCinematicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode = { "bCinematicMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCinematicMode_MetaData), NewProp_bCinematicMode_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bAllowMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement = { "bAllowMovement", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMovement_MetaData), NewProp_bAllowMovement_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bAllowTurning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning = { "bAllowTurning", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTurning_MetaData), NewProp_bAllowTurning_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bShowPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer = { "bShowPlayer", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPlayer_MetaData), NewProp_bShowPlayer_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bShowHUD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD = { "bShowHUD", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHUD_MetaData), NewProp_bShowHUD_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_SetBit(void* Obj)
{
	((FMovieSceneCaptureSettings*)Obj)->bUsePathTracer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer = { "bUsePathTracer", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePathTracer_MetaData), NewProp_bUsePathTracer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_PathTracerSamplePerPixel = { "PathTracerSamplePerPixel", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, PathTracerSamplePerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracerSamplePerPixel_MetaData), NewProp_PathTracerSamplePerPixel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_GameModeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_HandleFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_MovieExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_ZeroPadFrameNumbers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseCustomFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_CustomFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_PathTracerSamplePerPixel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	&NewStructOps,
	"MovieSceneCaptureSettings",
	Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::PropPointers),
	sizeof(FMovieSceneCaptureSettings),
	alignof(FMovieSceneCaptureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings.InnerSingleton;
}
// End ScriptStruct FMovieSceneCaptureSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCaptureResolution::StaticStruct, Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewStructOps, TEXT("CaptureResolution"), &Z_Registration_Info_UScriptStruct_CaptureResolution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCaptureResolution), 1667090962U) },
		{ FMovieSceneCaptureSettings::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewStructOps, TEXT("MovieSceneCaptureSettings"), &Z_Registration_Info_UScriptStruct_MovieSceneCaptureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCaptureSettings), 632301529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureSettings_h_1686505302(TEXT("/Script/MovieSceneCapture"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
