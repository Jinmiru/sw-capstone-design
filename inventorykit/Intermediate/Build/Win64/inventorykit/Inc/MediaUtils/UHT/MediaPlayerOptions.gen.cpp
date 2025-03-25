// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaUtils/Public/MediaPlayerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerOptions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
MEDIAUTILS_API UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride();
MEDIAUTILS_API UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType();
MEDIAUTILS_API UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode();
MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions();
MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions();
UPackage* Z_Construct_UPackage__Script_MediaUtils();
// End Cross Module References

// Begin Enum EMediaPlayerOptionBooleanOverride
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride;
static UEnum* EMediaPlayerOptionBooleanOverride_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("EMediaPlayerOptionBooleanOverride"));
	}
	return Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton;
}
template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionBooleanOverride>()
{
	return EMediaPlayerOptionBooleanOverride_StaticEnum();
}
struct Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EMediaPlayerOptionBooleanOverride::Disabled" },
		{ "Enabled.Name", "EMediaPlayerOptionBooleanOverride::Enabled" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "UseMediaPlayerSetting.Name", "EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting", (int64)EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting },
		{ "EMediaPlayerOptionBooleanOverride::Enabled", (int64)EMediaPlayerOptionBooleanOverride::Enabled },
		{ "EMediaPlayerOptionBooleanOverride::Disabled", (int64)EMediaPlayerOptionBooleanOverride::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaUtils,
	nullptr,
	"EMediaPlayerOptionBooleanOverride",
	"EMediaPlayerOptionBooleanOverride",
	Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton, Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton;
}
// End Enum EMediaPlayerOptionBooleanOverride

// Begin Enum EMediaPlayerOptionSeekTimeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType;
static UEnum* EMediaPlayerOptionSeekTimeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("EMediaPlayerOptionSeekTimeType"));
	}
	return Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton;
}
template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionSeekTimeType>()
{
	return EMediaPlayerOptionSeekTimeType_StaticEnum();
}
struct Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ignored.Comment", "// Ignore the given value and lets the media player choose.\n" },
		{ "Ignored.Name", "EMediaPlayerOptionSeekTimeType::Ignored" },
		{ "Ignored.ToolTip", "Ignore the given value and lets the media player choose." },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "RelativeToStartTime.Comment", "// Given seek time is relative to the start of the media.\n" },
		{ "RelativeToStartTime.Name", "EMediaPlayerOptionSeekTimeType::RelativeToStartTime" },
		{ "RelativeToStartTime.ToolTip", "Given seek time is relative to the start of the media." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaPlayerOptionSeekTimeType::Ignored", (int64)EMediaPlayerOptionSeekTimeType::Ignored },
		{ "EMediaPlayerOptionSeekTimeType::RelativeToStartTime", (int64)EMediaPlayerOptionSeekTimeType::RelativeToStartTime },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaUtils,
	nullptr,
	"EMediaPlayerOptionSeekTimeType",
	"EMediaPlayerOptionSeekTimeType",
	Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.InnerSingleton, Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.InnerSingleton;
}
// End Enum EMediaPlayerOptionSeekTimeType

// Begin Enum EMediaPlayerOptionTrackSelectMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode;
static UEnum* EMediaPlayerOptionTrackSelectMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("EMediaPlayerOptionTrackSelectMode"));
	}
	return Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton;
}
template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionTrackSelectMode>()
{
	return EMediaPlayerOptionTrackSelectMode_StaticEnum();
}
struct Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "UseMediaPlayerDefaults.Comment", "// Let the media player choose defaults.\n" },
		{ "UseMediaPlayerDefaults.DisplayName", "Media player selects default tracks" },
		{ "UseMediaPlayerDefaults.Name", "EMediaPlayerOptionTrackSelectMode::UseMediaPlayerDefaults" },
		{ "UseMediaPlayerDefaults.ToolTip", "Let the media player choose defaults." },
		{ "UseTrackOptionIndices.Comment", "// Use fixed track indices as specified with MediaPlayerTrackOptions\n" },
		{ "UseTrackOptionIndices.DisplayName", "Uses provided track indices" },
		{ "UseTrackOptionIndices.Name", "EMediaPlayerOptionTrackSelectMode::UseTrackOptionIndices" },
		{ "UseTrackOptionIndices.ToolTip", "Use fixed track indices as specified with MediaPlayerTrackOptions" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaPlayerOptionTrackSelectMode::UseMediaPlayerDefaults", (int64)EMediaPlayerOptionTrackSelectMode::UseMediaPlayerDefaults },
		{ "EMediaPlayerOptionTrackSelectMode::UseTrackOptionIndices", (int64)EMediaPlayerOptionTrackSelectMode::UseTrackOptionIndices },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaUtils,
	nullptr,
	"EMediaPlayerOptionTrackSelectMode",
	"EMediaPlayerOptionTrackSelectMode",
	Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.InnerSingleton, Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.InnerSingleton;
}
// End Enum EMediaPlayerOptionTrackSelectMode

// Begin ScriptStruct FMediaPlayerTrackOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions;
class UScriptStruct* FMediaPlayerTrackOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerTrackOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.OuterSingleton;
}
template<> MEDIAUTILS_API UScriptStruct* StaticStruct<FMediaPlayerTrackOptions>()
{
	return FMediaPlayerTrackOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Caption;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Script;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Text;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Video;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerTrackOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Audio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Caption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caption_MetaData), NewProp_Caption_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Metadata), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Script), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Script_MetaData), NewProp_Script_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Subtitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subtitle_MetaData), NewProp_Subtitle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Video), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Video_MetaData), NewProp_Video_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
	nullptr,
	&NewStructOps,
	"MediaPlayerTrackOptions",
	Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers),
	sizeof(FMediaPlayerTrackOptions),
	alignof(FMediaPlayerTrackOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.InnerSingleton, Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.InnerSingleton;
}
// End ScriptStruct FMediaPlayerTrackOptions

// Begin ScriptStruct FMediaPlayerOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaPlayerOptions;
class UScriptStruct* FMediaPlayerOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlayerOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaPlayerOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerOptions, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MediaPlayerOptions.OuterSingleton;
}
template<> MEDIAUTILS_API UScriptStruct* StaticStruct<FMediaPlayerOptions>()
{
	return FMediaPlayerOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "Category", "Tracks" },
		{ "DisplayName", "Initial track indices" },
		{ "EditCondition", "TrackSelection==EMediaPlayerOptionTrackSelectMode::UseTrackOptionIndices" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "ToolTip", "Indices of the media tracks to select for playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackSelection_MetaData[] = {
		{ "Category", "Tracks" },
		{ "DisplayName", "Initial track selection mode" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "ToolTip", "How the initial media tracks for playback are selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeekTime_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Initial media time to start playback at. */" },
		{ "EditCondition", "SeekTimeType!=EMediaPlayerOptionSeekTimeType::Ignored" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "ToolTip", "Initial media time to start playback at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeekTimeType_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** How to interpret the initial seek time. */" },
		{ "DisplayName", "Seek time interpretation" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "ToolTip", "How to interpret the initial seek time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** How to handle automatic playback when media opens. */" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "ToolTip", "How to handle automatic playback when media opens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** How to initially select looping of the media. */" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "ToolTip", "How to initially select looping of the media." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeekTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeekTimeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeekTimeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayOnOpen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayOnOpen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Loop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Loop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerOptions, Tracks), Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) }; // 3117218996
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_TrackSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_TrackSelection = { "TrackSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerOptions, TrackSelection), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackSelection_MetaData), NewProp_TrackSelection_MetaData) }; // 2329986774
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime = { "SeekTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerOptions, SeekTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeekTime_MetaData), NewProp_SeekTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTimeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTimeType = { "SeekTimeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerOptions, SeekTimeType), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeekTimeType_MetaData), NewProp_SeekTimeType_MetaData) }; // 273484550
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerOptions, PlayOnOpen), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayOnOpen_MetaData), NewProp_PlayOnOpen_MetaData) }; // 3129191488
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlayerOptions, Loop), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loop_MetaData), NewProp_Loop_MetaData) }; // 3129191488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_TrackSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_TrackSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTimeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTimeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
	nullptr,
	&NewStructOps,
	"MediaPlayerOptions",
	Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers),
	sizeof(FMediaPlayerOptions),
	alignof(FMediaPlayerOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlayerOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaPlayerOptions.InnerSingleton, Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaPlayerOptions.InnerSingleton;
}
// End ScriptStruct FMediaPlayerOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMediaPlayerOptionBooleanOverride_StaticEnum, TEXT("EMediaPlayerOptionBooleanOverride"), &Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3129191488U) },
		{ EMediaPlayerOptionSeekTimeType_StaticEnum, TEXT("EMediaPlayerOptionSeekTimeType"), &Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 273484550U) },
		{ EMediaPlayerOptionTrackSelectMode_StaticEnum, TEXT("EMediaPlayerOptionTrackSelectMode"), &Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2329986774U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMediaPlayerTrackOptions::StaticStruct, Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewStructOps, TEXT("MediaPlayerTrackOptions"), &Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaPlayerTrackOptions), 3117218996U) },
		{ FMediaPlayerOptions::StaticStruct, Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewStructOps, TEXT("MediaPlayerOptions"), &Z_Registration_Info_UScriptStruct_MediaPlayerOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaPlayerOptions), 4094434988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_858527895(TEXT("/Script/MediaUtils"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
