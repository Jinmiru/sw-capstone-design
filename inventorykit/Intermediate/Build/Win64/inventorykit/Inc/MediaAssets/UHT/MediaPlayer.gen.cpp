// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaPlayer.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/MediaUtils/Public/MediaPlayerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTimeStampInfo();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTimeStampInfo_NoRegister();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType();
MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature();
MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature();
MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature();
MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaMetadataItemBPT();
MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaMetadataItemsBPT();
MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Delegate FOnMediaPlayerMediaEvent
struct Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a media event occurred in the player. */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a media event occurred in the player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MediaAssets, nullptr, "OnMediaPlayerMediaEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaEvent)
{
	OnMediaPlayerMediaEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMediaPlayerMediaEvent

// Begin Delegate FOnMediaPlayerMediaOpened
struct Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics
{
	struct _Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms
	{
		FString OpenedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has been opened. */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has been opened." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms, OpenedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::NewProp_OpenedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MediaAssets, nullptr, "OnMediaPlayerMediaOpened__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpened, const FString& OpenedUrl)
{
	struct _Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms
	{
		FString OpenedUrl;
	};
	_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms Parms;
	Parms.OpenedUrl=OpenedUrl;
	OnMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMediaPlayerMediaOpened

// Begin Delegate FOnMediaPlayerMediaOpenFailed
struct Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics
{
	struct _Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms
	{
		FString FailedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has failed to open. */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has failed to open." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::NewProp_FailedUrl = { "FailedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms, FailedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::NewProp_FailedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MediaAssets, nullptr, "OnMediaPlayerMediaOpenFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMediaPlayerMediaOpenFailed_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpenFailed, const FString& FailedUrl)
{
	struct _Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms
	{
		FString FailedUrl;
	};
	_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms Parms;
	Parms.FailedUrl=FailedUrl;
	OnMediaPlayerMediaOpenFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMediaPlayerMediaOpenFailed

// Begin Enum EMediaPlayerTrack
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerTrack;
static UEnum* EMediaPlayerTrack_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaPlayerTrack"));
	}
	return Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaPlayerTrack>()
{
	return EMediaPlayerTrack_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Audio.Comment", "/** Audio track. */" },
		{ "Audio.Name", "EMediaPlayerTrack::Audio" },
		{ "Audio.ToolTip", "Audio track." },
		{ "BlueprintType", "true" },
		{ "Caption.Comment", "/** Caption track. */" },
		{ "Caption.Name", "EMediaPlayerTrack::Caption" },
		{ "Caption.ToolTip", "Caption track." },
		{ "Comment", "/**\n * Media track types.\n *\n * Note: Keep this in sync with EMediaTrackType\n */" },
		{ "Metadata.Comment", "/** Metadata track. */" },
		{ "Metadata.Name", "EMediaPlayerTrack::Metadata" },
		{ "Metadata.ToolTip", "Metadata track." },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "Script.Comment", "/** Script track. */" },
		{ "Script.Name", "EMediaPlayerTrack::Script" },
		{ "Script.ToolTip", "Script track." },
		{ "Subtitle.Comment", "/** Subtitle track. */" },
		{ "Subtitle.Name", "EMediaPlayerTrack::Subtitle" },
		{ "Subtitle.ToolTip", "Subtitle track." },
		{ "Text.Comment", "/** Text track. */" },
		{ "Text.Name", "EMediaPlayerTrack::Text" },
		{ "Text.ToolTip", "Text track." },
		{ "ToolTip", "Media track types.\n\nNote: Keep this in sync with EMediaTrackType" },
		{ "Video.Comment", "/** Video track. */" },
		{ "Video.Name", "EMediaPlayerTrack::Video" },
		{ "Video.ToolTip", "Video track." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaPlayerTrack::Audio", (int64)EMediaPlayerTrack::Audio },
		{ "EMediaPlayerTrack::Caption", (int64)EMediaPlayerTrack::Caption },
		{ "EMediaPlayerTrack::Metadata", (int64)EMediaPlayerTrack::Metadata },
		{ "EMediaPlayerTrack::Script", (int64)EMediaPlayerTrack::Script },
		{ "EMediaPlayerTrack::Subtitle", (int64)EMediaPlayerTrack::Subtitle },
		{ "EMediaPlayerTrack::Text", (int64)EMediaPlayerTrack::Text },
		{ "EMediaPlayerTrack::Video", (int64)EMediaPlayerTrack::Video },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaPlayerTrack",
	"EMediaPlayerTrack",
	Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack()
{
	if (!Z_Registration_Info_UEnum_EMediaPlayerTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerTrack.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaPlayerTrack.InnerSingleton;
}
// End Enum EMediaPlayerTrack

// Begin Enum EMediaTimeRangeBPType
static_assert(!int64(EMediaTimeRangeBPType::Absolute)||!int64(EMediaTimeRangeBPType::Current), "'EMediaTimeRangeBPType' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaTimeRangeBPType;
static UEnum* EMediaTimeRangeBPType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaTimeRangeBPType"));
	}
	return Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaTimeRangeBPType>()
{
	return EMediaTimeRangeBPType_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "/** Total absolute time range as defined by the media. */" },
		{ "Absolute.Name", "EMediaTimeRangeBPType::Absolute" },
		{ "Absolute.ToolTip", "Total absolute time range as defined by the media." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint usable enum of EMediaTimeRangeType\n */" },
		{ "Current.Comment", "/** Current time range of the media, set by media internal means or through API calls. */" },
		{ "Current.Name", "EMediaTimeRangeBPType::Current" },
		{ "Current.ToolTip", "Current time range of the media, set by media internal means or through API calls." },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Blueprint usable enum of EMediaTimeRangeType" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaTimeRangeBPType::Absolute", (int64)EMediaTimeRangeBPType::Absolute },
		{ "EMediaTimeRangeBPType::Current", (int64)EMediaTimeRangeBPType::Current },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaTimeRangeBPType",
	"EMediaTimeRangeBPType",
	Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType()
{
	if (!Z_Registration_Info_UEnum_EMediaTimeRangeBPType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaTimeRangeBPType.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaTimeRangeBPType.InnerSingleton;
}
// End Enum EMediaTimeRangeBPType

// Begin Class UMediaTimeStampInfo
void UMediaTimeStampInfo::StaticRegisterNativesUMediaTimeStampInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaTimeStampInfo);
UClass* Z_Construct_UClass_UMediaTimeStampInfo_NoRegister()
{
	return UMediaTimeStampInfo::StaticClass();
}
struct Z_Construct_UClass_UMediaTimeStampInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaPlayer.h" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Media|Time" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceIndex_MetaData[] = {
		{ "Category", "Media|Time" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTimeStampInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaTimeStampInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTimeStampInfo, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UMediaTimeStampInfo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTimeStampInfo, SequenceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceIndex_MetaData), NewProp_SequenceIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaTimeStampInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTimeStampInfo_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTimeStampInfo_Statics::NewProp_SequenceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTimeStampInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMediaTimeStampInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTimeStampInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaTimeStampInfo_Statics::ClassParams = {
	&UMediaTimeStampInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMediaTimeStampInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTimeStampInfo_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTimeStampInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaTimeStampInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaTimeStampInfo()
{
	if (!Z_Registration_Info_UClass_UMediaTimeStampInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaTimeStampInfo.OuterSingleton, Z_Construct_UClass_UMediaTimeStampInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaTimeStampInfo.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaTimeStampInfo>()
{
	return UMediaTimeStampInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTimeStampInfo);
UMediaTimeStampInfo::~UMediaTimeStampInfo() {}
// End Class UMediaTimeStampInfo

// Begin ScriptStruct FMediaMetadataItemBPT
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT;
class UScriptStruct* FMediaMetadataItemBPT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaMetadataItemBPT, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaMetadataItemBPT"));
	}
	return Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT.OuterSingleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaMetadataItemBPT>()
{
	return FMediaMetadataItemBPT::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[] = {
		{ "Category", "Media|Metadata" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MimeType_MetaData[] = {
		{ "Category", "Media|Metadata" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringData_MetaData[] = {
		{ "Category", "Media|Metadata" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinaryData_MetaData[] = {
		{ "Category", "Media|Metadata" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MimeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BinaryData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BinaryData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaMetadataItemBPT>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaMetadataItemBPT, LanguageCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageCode_MetaData), NewProp_LanguageCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_MimeType = { "MimeType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaMetadataItemBPT, MimeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MimeType_MetaData), NewProp_MimeType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_StringData = { "StringData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaMetadataItemBPT, StringData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringData_MetaData), NewProp_StringData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_BinaryData_Inner = { "BinaryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_BinaryData = { "BinaryData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaMetadataItemBPT, BinaryData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinaryData_MetaData), NewProp_BinaryData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_LanguageCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_MimeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_StringData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_BinaryData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewProp_BinaryData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	&NewStructOps,
	"MediaMetadataItemBPT",
	Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::PropPointers),
	sizeof(FMediaMetadataItemBPT),
	alignof(FMediaMetadataItemBPT),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaMetadataItemBPT()
{
	if (!Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT.InnerSingleton, Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT.InnerSingleton;
}
// End ScriptStruct FMediaMetadataItemBPT

// Begin ScriptStruct FMediaMetadataItemsBPT
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT;
class UScriptStruct* FMediaMetadataItemsBPT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaMetadataItemsBPT, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaMetadataItemsBPT"));
	}
	return Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT.OuterSingleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaMetadataItemsBPT>()
{
	return FMediaMetadataItemsBPT::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Media|Metadata" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaMetadataItemsBPT>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMediaMetadataItemBPT, METADATA_PARAMS(0, nullptr) }; // 30198402
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaMetadataItemsBPT, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 30198402
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	&NewStructOps,
	"MediaMetadataItemsBPT",
	Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::PropPointers),
	sizeof(FMediaMetadataItemsBPT),
	alignof(FMediaMetadataItemsBPT),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaMetadataItemsBPT()
{
	if (!Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT.InnerSingleton, Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT.InnerSingleton;
}
// End ScriptStruct FMediaMetadataItemsBPT

// Begin Class UMediaPlayer Function CanPause
struct Z_Construct_UFunction_UMediaPlayer_CanPause_Statics
{
	struct MediaPlayer_eventCanPause_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether media playback can be paused right now.\n\x09 *\n\x09 * Playback can be paused if the media supports pausing and if it is currently playing.\n\x09 *\n\x09 * @return true if pausing playback can be paused, false otherwise.\n\x09 * @see CanPlay, Pause\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether media playback can be paused right now.\n\nPlayback can be paused if the media supports pausing and if it is currently playing.\n\n@return true if pausing playback can be paused, false otherwise.\n@see CanPlay, Pause" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventCanPause_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventCanPause_Parms), &Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "CanPause", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::MediaPlayer_eventCanPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::MediaPlayer_eventCanPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_CanPause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execCanPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPause();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function CanPause

// Begin Class UMediaPlayer Function CanPlaySource
struct Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics
{
	struct MediaPlayer_eventCanPlaySource_Parms
	{
		UMediaSource* MediaSource;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the specified media source can be played by this player.\n\x09 *\n\x09 * If a desired player name is set for this player, it will only check\n\x09 * whether that particular player type can play the specified source.\n\x09 *\n\x09 * @param MediaSource The media source to check.\n\x09 * @return true if the media source can be opened, false otherwise.\n\x09 * @see CanPlayUrl, SetDesiredPlayerName\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the specified media source can be played by this player.\n\nIf a desired player name is set for this player, it will only check\nwhether that particular player type can play the specified source.\n\n@param MediaSource The media source to check.\n@return true if the media source can be opened, false otherwise.\n@see CanPlayUrl, SetDesiredPlayerName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventCanPlaySource_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventCanPlaySource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventCanPlaySource_Parms), &Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "CanPlaySource", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::MediaPlayer_eventCanPlaySource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::MediaPlayer_eventCanPlaySource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_CanPlaySource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execCanPlaySource)
{
	P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlaySource(Z_Param_MediaSource);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function CanPlaySource

// Begin Class UMediaPlayer Function CanPlayUrl
struct Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics
{
	struct MediaPlayer_eventCanPlayUrl_Parms
	{
		FString Url;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the specified URL can be played by this player.\n\x09 *\n\x09 * If a desired player name is set for this player, it will only check\n\x09 * whether that particular player type can play the specified URL.\n\x09 *\n\x09 * @param Url The URL to check.\n\x09 * @see CanPlaySource, SetDesiredPlayerName\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the specified URL can be played by this player.\n\nIf a desired player name is set for this player, it will only check\nwhether that particular player type can play the specified URL.\n\n@param Url The URL to check.\n@see CanPlaySource, SetDesiredPlayerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventCanPlayUrl_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
void Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventCanPlayUrl_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventCanPlayUrl_Parms), &Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "CanPlayUrl", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::MediaPlayer_eventCanPlayUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::MediaPlayer_eventCanPlayUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_CanPlayUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execCanPlayUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlayUrl(Z_Param_Url);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function CanPlayUrl

// Begin Class UMediaPlayer Function Close
struct Z_Construct_UFunction_UMediaPlayer_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Close the currently open media, if any.\n\x09 *\n\x09 * @see OnMediaClosed, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl, Pause, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Close the currently open media, if any.\n\n@see OnMediaClosed, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl, Pause, Play" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlayer_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Close

// Begin Class UMediaPlayer Function GetAudioTrackChannels
struct Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics
{
	struct MediaPlayer_eventGetAudioTrackChannels_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the number of channels in the specified audio track.\n\x09 *\n\x09 * @param TrackIndex Index of the audio track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Number of channels.\n\x09 * @see GetAudioTrackSampleRate, GetAudioTrackType\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the number of channels in the specified audio track.\n\n@param TrackIndex Index of the audio track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Number of channels.\n@see GetAudioTrackSampleRate, GetAudioTrackType" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackChannels_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackChannels_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackChannels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetAudioTrackChannels", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::MediaPlayer_eventGetAudioTrackChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::MediaPlayer_eventGetAudioTrackChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetAudioTrackChannels)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAudioTrackChannels(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetAudioTrackChannels

// Begin Class UMediaPlayer Function GetAudioTrackSampleRate
struct Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics
{
	struct MediaPlayer_eventGetAudioTrackSampleRate_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the sample rate of the specified audio track.\n\x09 *\n\x09 * @param TrackIndex Index of the audio track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Samples per second.\n\x09 * @see GetAudioTrackChannels, GetAudioTrackType\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the sample rate of the specified audio track.\n\n@param TrackIndex Index of the audio track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Samples per second.\n@see GetAudioTrackChannels, GetAudioTrackType" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackSampleRate_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackSampleRate_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackSampleRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetAudioTrackSampleRate", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::MediaPlayer_eventGetAudioTrackSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::MediaPlayer_eventGetAudioTrackSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetAudioTrackSampleRate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAudioTrackSampleRate(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetAudioTrackSampleRate

// Begin Class UMediaPlayer Function GetAudioTrackType
struct Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics
{
	struct MediaPlayer_eventGetAudioTrackType_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the type of the specified audio track format.\n\x09 *\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Audio format type string.\n\x09 * @see GetAudioTrackSampleRate, GetAudioTrackSampleRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the type of the specified audio track format.\n\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Audio format type string.\n@see GetAudioTrackSampleRate, GetAudioTrackSampleRate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackType_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackType_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetAudioTrackType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetAudioTrackType", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::MediaPlayer_eventGetAudioTrackType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::MediaPlayer_eventGetAudioTrackType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetAudioTrackType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAudioTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetAudioTrackType

// Begin Class UMediaPlayer Function GetDesiredPlayerName
struct Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics
{
	struct MediaPlayer_eventGetDesiredPlayerName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the name of the current desired native player.\n\x09 *\n\x09 * @return The name of the desired player, or NAME_None if not set.\n\x09 * @see SetDesiredPlayerName\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the name of the current desired native player.\n\n@return The name of the desired player, or NAME_None if not set.\n@see SetDesiredPlayerName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetDesiredPlayerName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetDesiredPlayerName", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::MediaPlayer_eventGetDesiredPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::MediaPlayer_eventGetDesiredPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetDesiredPlayerName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDesiredPlayerName();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetDesiredPlayerName

// Begin Class UMediaPlayer Function GetDisplayTime
struct Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics
{
	struct MediaPlayer_eventGetDisplayTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the media's current playback time as appropriate for display.\n\x09 *\n\x09 * @return Playback time.\n\x09 * @see GetDuration, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the media's current playback time as appropriate for display.\n\n@return Playback time.\n@see GetDuration, Seek" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetDisplayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetDisplayTime", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::MediaPlayer_eventGetDisplayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::MediaPlayer_eventGetDisplayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetDisplayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetDisplayTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetDisplayTime();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetDisplayTime

// Begin Class UMediaPlayer Function GetDisplayTimeStamp
struct Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics
{
	struct MediaPlayer_eventGetDisplayTimeStamp_Parms
	{
		UMediaTimeStampInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the media's current playback timestamp as appropriate for display.\n\x09 *\n\x09 * @return Playback timestamp.\n\x09 * @see GetDuration, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the media's current playback timestamp as appropriate for display.\n\n@return Playback timestamp.\n@see GetDuration, Seek" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetDisplayTimeStamp_Parms, ReturnValue), Z_Construct_UClass_UMediaTimeStampInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetDisplayTimeStamp", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::MediaPlayer_eventGetDisplayTimeStamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::MediaPlayer_eventGetDisplayTimeStamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetDisplayTimeStamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaTimeStampInfo**)Z_Param__Result=P_THIS->GetDisplayTimeStamp();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetDisplayTimeStamp

// Begin Class UMediaPlayer Function GetDuration
struct Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics
{
	struct MediaPlayer_eventGetDuration_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the media's duration.\n\x09 *\n\x09 * @return A time span representing the duration.\n\x09 * @see GetTime, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the media's duration.\n\n@return A time span representing the duration.\n@see GetTime, Seek" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::MediaPlayer_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::MediaPlayer_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetDuration();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetDuration

// Begin Class UMediaPlayer Function GetHorizontalFieldOfView
struct Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics
{
	struct MediaPlayer_eventGetHorizontalFieldOfView_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the current horizontal field of view (only for 360 videos).\n\x09 *\n\x09 * @return Horizontal field of view (in Euler degrees).\n\x09 * @see GetVerticalFieldOfView, GetViewRotation, SetHorizontalFieldOfView\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the current horizontal field of view (only for 360 videos).\n\n@return Horizontal field of view (in Euler degrees).\n@see GetVerticalFieldOfView, GetViewRotation, SetHorizontalFieldOfView" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetHorizontalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetHorizontalFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::MediaPlayer_eventGetHorizontalFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::MediaPlayer_eventGetHorizontalFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetHorizontalFieldOfView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetHorizontalFieldOfView

// Begin Class UMediaPlayer Function GetMediaMetadataItems
struct Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics
{
	struct MediaPlayer_eventGetMediaMetadataItems_Parms
	{
		TMap<FString,FMediaMetadataItemsBPT> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|Metadata" },
		{ "Comment", "/**\n\x09 * This is the blueprint accessible version of the GetMediaMetadata.\n\x09 * @return Map with arrays of FMediaMetaDataItem entries describing any metadata found in the current stream\n\x09 * @note Listen to EMediaEvent::MetadataChanged to catch updates to this data\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "This is the blueprint accessible version of the GetMediaMetadata.\n@return Map with arrays of FMediaMetaDataItem entries describing any metadata found in the current stream\n@note Listen to EMediaEvent::MetadataChanged to catch updates to this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMediaMetadataItemsBPT, METADATA_PARAMS(0, nullptr) }; // 615016521
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetMediaMetadataItems_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 615016521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetMediaMetadataItems", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::MediaPlayer_eventGetMediaMetadataItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::MediaPlayer_eventGetMediaMetadataItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetMediaMetadataItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FMediaMetadataItemsBPT>*)Z_Param__Result=P_THIS->GetMediaMetadataItems();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetMediaMetadataItems

// Begin Class UMediaPlayer Function GetMediaName
struct Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics
{
	struct MediaPlayer_eventGetMediaName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the human readable name of the currently loaded media source.\n\x09 *\n\x09 * @return Media source name, or empty text if no media is opened\n\x09 * @see GetPlayerName, GetUrl\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the human readable name of the currently loaded media source.\n\n@return Media source name, or empty text if no media is opened\n@see GetPlayerName, GetUrl" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetMediaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetMediaName", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::MediaPlayer_eventGetMediaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::MediaPlayer_eventGetMediaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetMediaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetMediaName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetMediaName();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetMediaName

// Begin Class UMediaPlayer Function GetNumTrackFormats
struct Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics
{
	struct MediaPlayer_eventGetNumTrackFormats_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 TrackIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the number of formats of the specified track.\n\x09 *\n\x09 * @param TrackType The type of media tracks.\n\x09 * @param TrackIndex The index of the track.\n\x09 * @return Number of formats.\n\x09 * @see GetNumTracks, GetSelectedTrack, SelectTrack\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the number of formats of the specified track.\n\n@param TrackType The type of media tracks.\n@param TrackIndex The index of the track.\n@return Number of formats.\n@see GetNumTracks, GetSelectedTrack, SelectTrack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetNumTrackFormats_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetNumTrackFormats_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetNumTrackFormats_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetNumTrackFormats", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::MediaPlayer_eventGetNumTrackFormats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::MediaPlayer_eventGetNumTrackFormats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetNumTrackFormats)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTrackFormats(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetNumTrackFormats

// Begin Class UMediaPlayer Function GetNumTracks
struct Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics
{
	struct MediaPlayer_eventGetNumTracks_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the number of tracks of the given type.\n\x09 *\n\x09 * @param TrackType The type of media tracks.\n\x09 * @return Number of tracks.\n\x09 * @see GetNumTrackFormats, GetSelectedTrack, SelectTrack\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the number of tracks of the given type.\n\n@param TrackType The type of media tracks.\n@return Number of tracks.\n@see GetNumTrackFormats, GetSelectedTrack, SelectTrack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetNumTracks_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetNumTracks_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetNumTracks", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::MediaPlayer_eventGetNumTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::MediaPlayer_eventGetNumTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetNumTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetNumTracks)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTracks(EMediaPlayerTrack(Z_Param_TrackType));
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetNumTracks

// Begin Class UMediaPlayer Function GetPlaybackTimeRange
struct Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics
{
	struct FFloatInterval
	{
		float Min;
		float Max;
	};

	struct MediaPlayer_eventGetPlaybackTimeRange_Parms
	{
		EMediaTimeRangeBPType InRangeToGet;
		FFloatInterval ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Blueprint accessible version of GetPlaybackTimeRange.\n\x09 * This returns the range truncated into a blueprint usable float interval and should not\n\x09 * be used for live streams as 32 bit floats can not store wallclock times with enough precision.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Blueprint accessible version of GetPlaybackTimeRange.\nThis returns the range truncated into a blueprint usable float interval and should not\nbe used for live streams as 32 bit floats can not store wallclock times with enough precision." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InRangeToGet_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InRangeToGet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::NewProp_InRangeToGet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::NewProp_InRangeToGet = { "InRangeToGet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetPlaybackTimeRange_Parms, InRangeToGet), Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType, METADATA_PARAMS(0, nullptr) }; // 1207143038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetPlaybackTimeRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::NewProp_InRangeToGet_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::NewProp_InRangeToGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetPlaybackTimeRange", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::MediaPlayer_eventGetPlaybackTimeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::MediaPlayer_eventGetPlaybackTimeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetPlaybackTimeRange)
{
	P_GET_ENUM(EMediaTimeRangeBPType,Z_Param_InRangeToGet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFloatInterval*)Z_Param__Result=P_THIS->GetPlaybackTimeRange(EMediaTimeRangeBPType(Z_Param_InRangeToGet));
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetPlaybackTimeRange

// Begin Class UMediaPlayer Function GetPlayerName
struct Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics
{
	struct MediaPlayer_eventGetPlayerName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the name of the current native media player.\n\x09 *\n\x09 * @return Player name, or NAME_None if not available.\n\x09 * @see GetMediaName\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the name of the current native media player.\n\n@return Player name, or NAME_None if not available.\n@see GetMediaName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetPlayerName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetPlayerName", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::MediaPlayer_eventGetPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::MediaPlayer_eventGetPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetPlayerName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetPlayerName();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetPlayerName

// Begin Class UMediaPlayer Function GetPlaylist
struct Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics
{
	struct MediaPlayer_eventGetPlaylist_Parms
	{
		UMediaPlaylist* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the current play list.\n\x09 *\n\x09 * Media players always have a valid play list. In C++ code you can use\n\x09 * the GetPlaylistRef to get a reference instead of a pointer to it.\n\x09 *\n\x09 * @return The play list.\n\x09 * @see GetPlaylistIndex, GetPlaylistRef\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the current play list.\n\nMedia players always have a valid play list. In C++ code you can use\nthe GetPlaylistRef to get a reference instead of a pointer to it.\n\n@return The play list.\n@see GetPlaylistIndex, GetPlaylistRef" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetPlaylist_Parms, ReturnValue), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetPlaylist", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::MediaPlayer_eventGetPlaylist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::MediaPlayer_eventGetPlaylist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetPlaylist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetPlaylist)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaPlaylist**)Z_Param__Result=P_THIS->GetPlaylist();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetPlaylist

// Begin Class UMediaPlayer Function GetPlaylistIndex
struct Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics
{
	struct MediaPlayer_eventGetPlaylistIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the current play list index.\n\x09 *\n\x09 * @return Play list index.\n\x09 * @see GetPlaylist\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the current play list index.\n\n@return Play list index.\n@see GetPlaylist" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetPlaylistIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetPlaylistIndex", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::MediaPlayer_eventGetPlaylistIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::MediaPlayer_eventGetPlaylistIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetPlaylistIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlaylistIndex();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetPlaylistIndex

// Begin Class UMediaPlayer Function GetRate
struct Z_Construct_UFunction_UMediaPlayer_GetRate_Statics
{
	struct MediaPlayer_eventGetRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the media's current playback rate.\n\x09 *\n\x09 * @return The playback rate.\n\x09 * @see SetRate, SupportsRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the media's current playback rate.\n\n@return The playback rate.\n@see SetRate, SupportsRate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetRate", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::MediaPlayer_eventGetRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::MediaPlayer_eventGetRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRate();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetRate

// Begin Class UMediaPlayer Function GetSelectedTrack
struct Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics
{
	struct MediaPlayer_eventGetSelectedTrack_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the index of the currently selected track of the given type.\n\x09 *\n\x09 * @param TrackType The type of track to get.\n\x09 * @return The index of the selected track, or INDEX_NONE if no track is active.\n\x09 * @see GetNumTracks, GetTrackFormat, SelectTrack\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the index of the currently selected track of the given type.\n\n@param TrackType The type of track to get.\n@return The index of the selected track, or INDEX_NONE if no track is active.\n@see GetNumTracks, GetTrackFormat, SelectTrack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetSelectedTrack_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetSelectedTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetSelectedTrack", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::MediaPlayer_eventGetSelectedTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::MediaPlayer_eventGetSelectedTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetSelectedTrack)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedTrack(EMediaPlayerTrack(Z_Param_TrackType));
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetSelectedTrack

// Begin Class UMediaPlayer Function GetSupportedRates
struct Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics
{
	struct FFloatRangeBound
	{
		TEnumAsByte<ERangeBoundTypes::Type> Type;
		float Value;
	};

	struct FFloatRange
	{
		FFloatRangeBound LowerBound;
		FFloatRangeBound UpperBound;
	};

	struct MediaPlayer_eventGetSupportedRates_Parms
	{
		TArray<FFloatRange> OutRates;
		bool Unthinned;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the supported playback rates.\n\x09 *\n\x09 * @param Unthinned Whether the rates are for unthinned playback.\n\x09 * @param Will contain the the ranges of supported rates.\n\x09 * @see SetRate, SupportsRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the supported playback rates.\n\n@param Unthinned Whether the rates are for unthinned playback.\n@param Will contain the the ranges of supported rates.\n@see SetRate, SupportsRate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRates;
	static void NewProp_Unthinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Unthinned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_OutRates_Inner = { "OutRates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_OutRates = { "OutRates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetSupportedRates_Parms, OutRates), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_Unthinned_SetBit(void* Obj)
{
	((MediaPlayer_eventGetSupportedRates_Parms*)Obj)->Unthinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_Unthinned = { "Unthinned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventGetSupportedRates_Parms), &Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_Unthinned_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_OutRates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_OutRates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_Unthinned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetSupportedRates", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::MediaPlayer_eventGetSupportedRates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::MediaPlayer_eventGetSupportedRates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetSupportedRates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetSupportedRates)
{
	P_GET_TARRAY_REF(FFloatRange,Z_Param_Out_OutRates);
	P_GET_UBOOL(Z_Param_Unthinned);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSupportedRates(Z_Param_Out_OutRates,Z_Param_Unthinned);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetSupportedRates

// Begin Class UMediaPlayer Function GetTime
struct Z_Construct_UFunction_UMediaPlayer_GetTime_Statics
{
	struct MediaPlayer_eventGetTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the media's current playback time.\n\x09 *\n\x09 * @return Playback time.\n\x09 * @see GetDuration, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the media's current playback time.\n\n@return Playback time.\n@see GetDuration, Seek" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::MediaPlayer_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::MediaPlayer_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetTime

// Begin Class UMediaPlayer Function GetTimeDelay
struct Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics
{
	struct MediaPlayer_eventGetTimeDelay_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Delay of the player's time.\n\x09 *\n\x09 * @return Delay added to the player's time used to manually sync multiple sources.\n\x09 * @see SetTimeDelay\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Delay of the player's time.\n\n@return Delay added to the player's time used to manually sync multiple sources.\n@see SetTimeDelay" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTimeDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetTimeDelay", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::MediaPlayer_eventGetTimeDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::MediaPlayer_eventGetTimeDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetTimeDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetTimeDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetTimeDelay();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetTimeDelay

// Begin Class UMediaPlayer Function GetTimeStamp
struct Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics
{
	struct MediaPlayer_eventGetTimeStamp_Parms
	{
		UMediaTimeStampInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the media's current playback timestamp.\n\x09 *\n\x09 * @return Playback timestamp.\n\x09 * @see GetDuration, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the media's current playback timestamp.\n\n@return Playback timestamp.\n@see GetDuration, Seek" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTimeStamp_Parms, ReturnValue), Z_Construct_UClass_UMediaTimeStampInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetTimeStamp", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::MediaPlayer_eventGetTimeStamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::MediaPlayer_eventGetTimeStamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetTimeStamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetTimeStamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaTimeStampInfo**)Z_Param__Result=P_THIS->GetTimeStamp();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetTimeStamp

// Begin Class UMediaPlayer Function GetTrackDisplayName
struct Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics
{
	struct MediaPlayer_eventGetTrackDisplayName_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 TrackIndex;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the human readable name of the specified track.\n\x09 *\n\x09 * @param TrackType The type of track.\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @return Display name.\n\x09 * @see GetNumTracks, GetTrackLanguage\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the human readable name of the specified track.\n\n@param TrackType The type of track.\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@return Display name.\n@see GetNumTracks, GetTrackLanguage" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackDisplayName_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackDisplayName_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetTrackDisplayName", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::MediaPlayer_eventGetTrackDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::MediaPlayer_eventGetTrackDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetTrackDisplayName)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTrackDisplayName(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetTrackDisplayName

// Begin Class UMediaPlayer Function GetTrackFormat
struct Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics
{
	struct MediaPlayer_eventGetTrackFormat_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 TrackIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the index of the active format of the specified track type.\n\x09 *\n\x09 * @param TrackType The type of track.\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @return The index of the selected format.\n\x09 * @see GetNumTrackFormats, GetSelectedTrack, SetTrackFormat\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the index of the active format of the specified track type.\n\n@param TrackType The type of track.\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@return The index of the selected format.\n@see GetNumTrackFormats, GetSelectedTrack, SetTrackFormat" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackFormat_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackFormat_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackFormat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetTrackFormat", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::MediaPlayer_eventGetTrackFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::MediaPlayer_eventGetTrackFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetTrackFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetTrackFormat)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetTrackFormat

// Begin Class UMediaPlayer Function GetTrackLanguage
struct Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics
{
	struct MediaPlayer_eventGetTrackLanguage_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 TrackIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the language tag of the specified track.\n\x09 *\n\x09 * @param TrackType The type of track.\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @return Language tag, i.e. \"en-US\" for English, or \"und\" for undefined.\n\x09 * @see GetNumTracks, GetTrackDisplayName\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the language tag of the specified track.\n\n@param TrackType The type of track.\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@return Language tag, i.e. \"en-US\" for English, or \"und\" for undefined.\n@see GetNumTracks, GetTrackDisplayName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackLanguage_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackLanguage_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetTrackLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetTrackLanguage", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::MediaPlayer_eventGetTrackLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::MediaPlayer_eventGetTrackLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetTrackLanguage)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTrackLanguage(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetTrackLanguage

// Begin Class UMediaPlayer Function GetUrl
struct Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics
{
	struct MediaPlayer_eventGetUrl_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the URL of the currently loaded media, if any.\n\x09 *\n\x09 * @return Media URL, or empty string if no media was loaded.\n\x09 * @see OpenUrl\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the URL of the currently loaded media, if any.\n\n@return Media URL, or empty string if no media was loaded.\n@see OpenUrl" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetUrl", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::MediaPlayer_eventGetUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::MediaPlayer_eventGetUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetUrl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUrl();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetUrl

// Begin Class UMediaPlayer Function GetVerticalFieldOfView
struct Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics
{
	struct MediaPlayer_eventGetVerticalFieldOfView_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the current vertical field of view (only for 360 videos).\n\x09 *\n\x09 * @return Vertical field of view (in Euler degrees), or 0.0 if not available.\n\x09 * @see GetHorizontalFieldOfView, GetViewRotation, SetVerticalFieldOfView\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the current vertical field of view (only for 360 videos).\n\n@return Vertical field of view (in Euler degrees), or 0.0 if not available.\n@see GetHorizontalFieldOfView, GetViewRotation, SetVerticalFieldOfView" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVerticalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetVerticalFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::MediaPlayer_eventGetVerticalFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::MediaPlayer_eventGetVerticalFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetVerticalFieldOfView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVerticalFieldOfView();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetVerticalFieldOfView

// Begin Class UMediaPlayer Function GetVideoTrackAspectRatio
struct Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics
{
	struct MediaPlayer_eventGetVideoTrackAspectRatio_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the aspect ratio of the specified video track.\n\x09 *\n\x09 * @param TrackIndex Index of the video track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Aspect ratio.\n\x09 * @see GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackFrameRates, GetVideoTrackType\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the aspect ratio of the specified video track.\n\n@param TrackIndex Index of the video track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Aspect ratio.\n@see GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackFrameRates, GetVideoTrackType" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackAspectRatio_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackAspectRatio_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetVideoTrackAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::MediaPlayer_eventGetVideoTrackAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::MediaPlayer_eventGetVideoTrackAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetVideoTrackAspectRatio)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVideoTrackAspectRatio(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetVideoTrackAspectRatio

// Begin Class UMediaPlayer Function GetVideoTrackDimensions
struct Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics
{
	struct MediaPlayer_eventGetVideoTrackDimensions_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the current dimensions of the specified video track.\n\x09 *\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Video dimensions (in pixels).\n\x09 * @see GetVideoTrackAspectRatio, GetVideoTrackFrameRate, GetVideoTrackFrameRates, GetVideoTrackType\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the current dimensions of the specified video track.\n\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Video dimensions (in pixels).\n@see GetVideoTrackAspectRatio, GetVideoTrackFrameRate, GetVideoTrackFrameRates, GetVideoTrackType" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackDimensions_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackDimensions_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetVideoTrackDimensions", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::MediaPlayer_eventGetVideoTrackDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::MediaPlayer_eventGetVideoTrackDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetVideoTrackDimensions)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetVideoTrackDimensions(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetVideoTrackDimensions

// Begin Class UMediaPlayer Function GetVideoTrackFrameRate
struct Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics
{
	struct MediaPlayer_eventGetVideoTrackFrameRate_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the frame rate of the specified video track.\n\x09 *\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Frame rate (in frames per second).\n\x09 * @see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRates, GetVideoTrackType, SetVideoTrackFrameRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the frame rate of the specified video track.\n\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Frame rate (in frames per second).\n@see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRates, GetVideoTrackType, SetVideoTrackFrameRate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackFrameRate_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackFrameRate_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackFrameRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetVideoTrackFrameRate", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::MediaPlayer_eventGetVideoTrackFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::MediaPlayer_eventGetVideoTrackFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetVideoTrackFrameRate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetVideoTrackFrameRate

// Begin Class UMediaPlayer Function GetVideoTrackFrameRates
struct Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics
{
	struct FFloatRangeBound
	{
		TEnumAsByte<ERangeBoundTypes::Type> Type;
		float Value;
	};

	struct FFloatRange
	{
		FFloatRangeBound LowerBound;
		FFloatRangeBound UpperBound;
	};

	struct MediaPlayer_eventGetVideoTrackFrameRates_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		FFloatRange ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the supported range of frame rates of the specified video track.\n\x09 *\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Frame rate range (in frames per second).\n\x09 * @see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackType\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the supported range of frame rates of the specified video track.\n\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Frame rate range (in frames per second).\n@see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackType" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackFrameRates_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackFrameRates_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackFrameRates_Parms, ReturnValue), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetVideoTrackFrameRates", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::MediaPlayer_eventGetVideoTrackFrameRates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::MediaPlayer_eventGetVideoTrackFrameRates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetVideoTrackFrameRates)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFloatRange*)Z_Param__Result=P_THIS->GetVideoTrackFrameRates(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetVideoTrackFrameRates

// Begin Class UMediaPlayer Function GetVideoTrackType
struct Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics
{
	struct MediaPlayer_eventGetVideoTrackType_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the type of the specified video track format.\n\x09 *\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @return Video format type string.\n\x09 * @see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackFrameRates\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the type of the specified video track format.\n\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@return Video format type string.\n@see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackFrameRates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackType_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackType_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetVideoTrackType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetVideoTrackType", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::MediaPlayer_eventGetVideoTrackType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::MediaPlayer_eventGetVideoTrackType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetVideoTrackType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetVideoTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetVideoTrackType

// Begin Class UMediaPlayer Function GetViewRotation
struct Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics
{
	struct MediaPlayer_eventGetViewRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Get the current view rotation (only for 360 videos).\n\x09 *\n\x09 * @return View rotation, or zero rotator if not available.\n\x09 * @see GetHorizontalFieldOfView, GetVerticalFieldOfView, SetViewRotation\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Get the current view rotation (only for 360 videos).\n\n@return View rotation, or zero rotator if not available.\n@see GetHorizontalFieldOfView, GetVerticalFieldOfView, SetViewRotation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventGetViewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "GetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::MediaPlayer_eventGetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::MediaPlayer_eventGetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_GetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execGetViewRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function GetViewRotation

// Begin Class UMediaPlayer Function HasError
struct Z_Construct_UFunction_UMediaPlayer_HasError_Statics
{
	struct MediaPlayer_eventHasError_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the player is in an error state.\n\x09 *\n\x09 * When the player is in an error state, no further operations are possible.\n\x09 * The current media must be closed, and a new media source must be opened\n\x09 * before the player can be used again. Errors are usually caused by faulty\n\x09 * media files or interrupted network connections.\n\x09 *\n\x09 * @see IsReady\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the player is in an error state.\n\nWhen the player is in an error state, no further operations are possible.\nThe current media must be closed, and a new media source must be opened\nbefore the player can be used again. Errors are usually caused by faulty\nmedia files or interrupted network connections.\n\n@see IsReady" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventHasError_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventHasError_Parms), &Z_Construct_UFunction_UMediaPlayer_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_HasError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_HasError_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_HasError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "HasError", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_HasError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_HasError_Statics::MediaPlayer_eventHasError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_HasError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_HasError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_HasError_Statics::MediaPlayer_eventHasError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_HasError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_HasError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execHasError)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasError();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function HasError

// Begin Class UMediaPlayer Function IsBuffering
struct Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics
{
	struct MediaPlayer_eventIsBuffering_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback is buffering data.\n\x09 *\n\x09 * @return true if looping, false otherwise.\n\x09 * @see IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether playback is buffering data.\n\n@return true if looping, false otherwise.\n@see IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsBuffering_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsBuffering_Parms), &Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsBuffering", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::MediaPlayer_eventIsBuffering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::MediaPlayer_eventIsBuffering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsBuffering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsBuffering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBuffering();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsBuffering

// Begin Class UMediaPlayer Function IsClosed
struct Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics
{
	struct MediaPlayer_eventIsClosed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Whether media is currently closed.\n\x09 *\n\x09 * @return true if media is closed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Whether media is currently closed.\n\n@return true if media is closed, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsClosed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsClosed_Parms), &Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsClosed", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::MediaPlayer_eventIsClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::MediaPlayer_eventIsClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsClosed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClosed();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsClosed

// Begin Class UMediaPlayer Function IsConnecting
struct Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics
{
	struct MediaPlayer_eventIsConnecting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the player is currently connecting to a media source.\n\x09 *\n\x09 * @return true if connecting, false otherwise.\n\x09 * @see IsBuffering, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the player is currently connecting to a media source.\n\n@return true if connecting, false otherwise.\n@see IsBuffering, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsConnecting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsConnecting_Parms), &Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsConnecting", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::MediaPlayer_eventIsConnecting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::MediaPlayer_eventIsConnecting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsConnecting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsConnecting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnecting();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsConnecting

// Begin Class UMediaPlayer Function IsLooping
struct Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics
{
	struct MediaPlayer_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback is looping.\n\x09 *\n\x09 * @return true if looping, false otherwise.\n\x09 * @see IsBuffering, IsConnecting, IsPaused, IsPlaying, IsPreparing, IsReady, SetLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether playback is looping.\n\n@return true if looping, false otherwise.\n@see IsBuffering, IsConnecting, IsPaused, IsPlaying, IsPreparing, IsReady, SetLooping" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::MediaPlayer_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::MediaPlayer_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsLooping

// Begin Class UMediaPlayer Function IsPaused
struct Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics
{
	struct MediaPlayer_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback is currently paused.\n\x09 *\n\x09 * @return true if playback is paused, false otherwise.\n\x09 * @see CanPause, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady, Pause\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether playback is currently paused.\n\n@return true if playback is paused, false otherwise.\n@see CanPause, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady, Pause" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsPaused", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::MediaPlayer_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::MediaPlayer_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsPaused

// Begin Class UMediaPlayer Function IsPlaying
struct Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics
{
	struct MediaPlayer_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback has started.\n\x09 *\n\x09 * @return true if playback has started, false otherwise.\n\x09 * @see CanPlay, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether playback has started.\n\n@return true if playback has started, false otherwise.\n@see CanPlay, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing, IsReady, Play" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::MediaPlayer_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::MediaPlayer_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsPlaying

// Begin Class UMediaPlayer Function IsPreparing
struct Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics
{
	struct MediaPlayer_eventIsPreparing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the media is currently opening or buffering.\n\x09 *\n\x09 * @return true if playback is being prepared, false otherwise.\n\x09 * @see CanPlay, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsReady, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the media is currently opening or buffering.\n\n@return true if playback is being prepared, false otherwise.\n@see CanPlay, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsReady, Play" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsPreparing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsPreparing_Parms), &Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsPreparing", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::MediaPlayer_eventIsPreparing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::MediaPlayer_eventIsPreparing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsPreparing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsPreparing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreparing();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsPreparing

// Begin Class UMediaPlayer Function IsReady
struct Z_Construct_UFunction_UMediaPlayer_IsReady_Statics
{
	struct MediaPlayer_eventIsReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether media is ready for playback.\n\x09 *\n\x09 * A player is ready for playback if it has a media source opened that\n\x09 * finished preparing and is not in an error state.\n\x09 *\n\x09 * @return true if media is ready, false otherwise.\n\x09 * @see HasError, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether media is ready for playback.\n\nA player is ready for playback if it has a media source opened that\nfinished preparing and is not in an error state.\n\n@return true if media is ready, false otherwise.\n@see HasError, IsBuffering, IsConnecting, IsLooping, IsPaused, IsPlaying, IsPreparing" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventIsReady_Parms), &Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "IsReady", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::MediaPlayer_eventIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::MediaPlayer_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function IsReady

// Begin Class UMediaPlayer Function Next
struct Z_Construct_UFunction_UMediaPlayer_Next_Statics
{
	struct MediaPlayer_eventNext_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Open the next item in the current play list.\n\x09 *\n\x09 * The player will start playing the new media source if it was playing\n\x09 * something previously, otherwise it will only open the media source.\n\x09 *\n\x09 * @return true on success, false otherwise.\n\x09 * @see Close, OpenUrl, OpenSource, Play, Previous, SetPlaylist\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Open the next item in the current play list.\n\nThe player will start playing the new media source if it was playing\nsomething previously, otherwise it will only open the media source.\n\n@return true on success, false otherwise.\n@see Close, OpenUrl, OpenSource, Play, Previous, SetPlaylist" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_Next_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventNext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_Next_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventNext_Parms), &Z_Construct_UFunction_UMediaPlayer_Next_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_Next_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Next_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Next_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Next", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Next_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_Next_Statics::MediaPlayer_eventNext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Next_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Next_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_Next_Statics::MediaPlayer_eventNext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_Next()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Next_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Next();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Next

// Begin Class UMediaPlayer Function OpenFile
struct Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics
{
	struct MediaPlayer_eventOpenFile_Parms
	{
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Opens the specified media file path.\n\x09 *\n\x09 * A return value of true indicates that the player will attempt to open\n\x09 * the media, but it may fail to do so later for other reasons, i.e. if\n\x09 * a connection to the media server timed out. Use the OnMediaOpened and\n\x09 * OnMediaOpenFailed delegates to detect if and when the media is ready!\n\x09 *\n\x09 * @param FilePath The file path to open.\n\x09 * @return true if the file path will be opened, false otherwise.\n\x09 * @see GetUrl, Close, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl, Reopen\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Opens the specified media file path.\n\nA return value of true indicates that the player will attempt to open\nthe media, but it may fail to do so later for other reasons, i.e. if\na connection to the media server timed out. Use the OnMediaOpened and\nOnMediaOpenFailed delegates to detect if and when the media is ready!\n\n@param FilePath The file path to open.\n@return true if the file path will be opened, false otherwise.\n@see GetUrl, Close, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl, Reopen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventOpenFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventOpenFile_Parms), &Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "OpenFile", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::MediaPlayer_eventOpenFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::MediaPlayer_eventOpenFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_OpenFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execOpenFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function OpenFile

// Begin Class UMediaPlayer Function OpenPlaylist
struct Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics
{
	struct MediaPlayer_eventOpenPlaylist_Parms
	{
		UMediaPlaylist* InPlaylist;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Open the first media source in the specified play list.\n\x09 *\n\x09 * @param InPlaylist The play list to open.\n\x09 * @return true if the source will be opened, false otherwise.\n\x09 * @see Close, OpenFile, OpenPlaylistIndex, OpenSource, OpenUrl, Reopen\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Open the first media source in the specified play list.\n\n@param InPlaylist The play list to open.\n@return true if the source will be opened, false otherwise.\n@see Close, OpenFile, OpenPlaylistIndex, OpenSource, OpenUrl, Reopen" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlaylist;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::NewProp_InPlaylist = { "InPlaylist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenPlaylist_Parms, InPlaylist), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventOpenPlaylist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventOpenPlaylist_Parms), &Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::NewProp_InPlaylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "OpenPlaylist", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::MediaPlayer_eventOpenPlaylist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::MediaPlayer_eventOpenPlaylist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_OpenPlaylist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execOpenPlaylist)
{
	P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenPlaylist(Z_Param_InPlaylist);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function OpenPlaylist

// Begin Class UMediaPlayer Function OpenPlaylistIndex
struct Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics
{
	struct MediaPlayer_eventOpenPlaylistIndex_Parms
	{
		UMediaPlaylist* InPlaylist;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Open a particular media source in the specified play list.\n\x09 *\n\x09 * @param InPlaylist The play list to open.\n\x09 * @param Index The index of the source to open.\n\x09 * @return true if the source will be opened, false otherwise.\n\x09 * @see Close, OpenFile, OpenPlaylist, OpenSource, OpenUrl, Reopen\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Open a particular media source in the specified play list.\n\n@param InPlaylist The play list to open.\n@param Index The index of the source to open.\n@return true if the source will be opened, false otherwise.\n@see Close, OpenFile, OpenPlaylist, OpenSource, OpenUrl, Reopen" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlaylist;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_InPlaylist = { "InPlaylist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenPlaylistIndex_Parms, InPlaylist), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenPlaylistIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventOpenPlaylistIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventOpenPlaylistIndex_Parms), &Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_InPlaylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "OpenPlaylistIndex", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::MediaPlayer_eventOpenPlaylistIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::MediaPlayer_eventOpenPlaylistIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execOpenPlaylistIndex)
{
	P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function OpenPlaylistIndex

// Begin Class UMediaPlayer Function OpenSource
struct Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics
{
	struct MediaPlayer_eventOpenSource_Parms
	{
		UMediaSource* MediaSource;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Open the specified media source.\n\x09 *\n\x09 * A return value of true indicates that the player will attempt to open\n\x09 * the media, but it may fail to do so later for other reasons, i.e. if\n\x09 * a connection to the media server timed out. Use the OnMediaOpened and\n\x09 * OnMediaOpenFailed delegates to detect if and when the media is ready!\n\x09 *\n\x09 * @param MediaSource The media source to open.\n\x09 * @return true if the source will be opened, false otherwise.\n\x09 * @see Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenUrl, Reopen\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Open the specified media source.\n\nA return value of true indicates that the player will attempt to open\nthe media, but it may fail to do so later for other reasons, i.e. if\na connection to the media server timed out. Use the OnMediaOpened and\nOnMediaOpenFailed delegates to detect if and when the media is ready!\n\n@param MediaSource The media source to open.\n@return true if the source will be opened, false otherwise.\n@see Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenUrl, Reopen" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenSource_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventOpenSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventOpenSource_Parms), &Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "OpenSource", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::MediaPlayer_eventOpenSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::MediaPlayer_eventOpenSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_OpenSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execOpenSource)
{
	P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenSource(Z_Param_MediaSource);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function OpenSource

// Begin Class UMediaPlayer Function OpenSourceLatent
struct Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics
{
	struct MediaPlayer_eventOpenSourceLatent_Parms
	{
		const UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		UMediaSource* MediaSource;
		FMediaPlayerOptions Options;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Open the specified media source with options using a latent action.\n\x09 *\n\x09 * A result of true indicates that the player successfully completed all requested operations.\n\x09 *\n\x09 * @param MediaSource The media source to open.\n\x09 * @param Options The media player options to apply.\n\x09 * @param bSuccess  All requested operations have completed successfully.\n\x09 * @see Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenUrl, Reopen\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Open the specified media source with options using a latent action.\n\nA result of true indicates that the player successfully completed all requested operations.\n\n@param MediaSource The media source to open.\n@param Options The media player options to apply.\n@param bSuccess  All requested operations have completed successfully.\n@see Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenUrl, Reopen" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenSourceLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenSourceLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenSourceLatent_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenSourceLatent_Parms, Options), Z_Construct_UScriptStruct_FMediaPlayerOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 4094434988
void Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((MediaPlayer_eventOpenSourceLatent_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventOpenSourceLatent_Parms), &Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "OpenSourceLatent", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::MediaPlayer_eventOpenSourceLatent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::MediaPlayer_eventOpenSourceLatent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execOpenSourceLatent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
	P_GET_STRUCT_REF(FMediaPlayerOptions,Z_Param_Out_Options);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenSourceLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_MediaSource,Z_Param_Out_Options,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function OpenSourceLatent

// Begin Class UMediaPlayer Function OpenSourceWithOptions
struct Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics
{
	struct MediaPlayer_eventOpenSourceWithOptions_Parms
	{
		UMediaSource* MediaSource;
		FMediaPlayerOptions Options;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Open the specified media source with supplied options applied.\n\x09 *\n\x09 * A return value of true indicates that the player will attempt to open\n\x09 * the media, but it may fail to do so later for other reasons, i.e. if\n\x09 * a connection to the media server timed out. Use the OnMediaOpened and\n\x09 * OnMediaOpenFailed delegates to detect if and when the media is ready!\n\x09 *\n\x09 * @param MediaSource The media source to open.\n\x09 * @param Options The media player options to apply.\n\x09 * @return true if the source will be opened, false otherwise.\n\x09 * @see Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenUrl, Reopen\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Open the specified media source with supplied options applied.\n\nA return value of true indicates that the player will attempt to open\nthe media, but it may fail to do so later for other reasons, i.e. if\na connection to the media server timed out. Use the OnMediaOpened and\nOnMediaOpenFailed delegates to detect if and when the media is ready!\n\n@param MediaSource The media source to open.\n@param Options The media player options to apply.\n@return true if the source will be opened, false otherwise.\n@see Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenUrl, Reopen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenSourceWithOptions_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenSourceWithOptions_Parms, Options), Z_Construct_UScriptStruct_FMediaPlayerOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 4094434988
void Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventOpenSourceWithOptions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventOpenSourceWithOptions_Parms), &Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "OpenSourceWithOptions", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::MediaPlayer_eventOpenSourceWithOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::MediaPlayer_eventOpenSourceWithOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execOpenSourceWithOptions)
{
	P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
	P_GET_STRUCT_REF(FMediaPlayerOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenSourceWithOptions(Z_Param_MediaSource,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function OpenSourceWithOptions

// Begin Class UMediaPlayer Function OpenUrl
struct Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics
{
	struct MediaPlayer_eventOpenUrl_Parms
	{
		FString Url;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Opens the specified media URL.\n\x09 *\n\x09 * A return value of true indicates that the player will attempt to open\n\x09 * the media, but it may fail to do so later for other reasons, i.e. if\n\x09 * a connection to the media server timed out. Use the OnMediaOpened and\n\x09 * OnMediaOpenFailed delegates to detect if and when the media is ready!\n\x09 *\n\x09 * @param Url The URL to open.\n\x09 * @return true if the URL will be opened, false otherwise.\n\x09 * @see GetUrl, Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenSource, Reopen\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Opens the specified media URL.\n\nA return value of true indicates that the player will attempt to open\nthe media, but it may fail to do so later for other reasons, i.e. if\na connection to the media server timed out. Use the OnMediaOpened and\nOnMediaOpenFailed delegates to detect if and when the media is ready!\n\n@param Url The URL to open.\n@return true if the URL will be opened, false otherwise.\n@see GetUrl, Close, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenSource, Reopen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventOpenUrl_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
void Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventOpenUrl_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventOpenUrl_Parms), &Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "OpenUrl", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::MediaPlayer_eventOpenUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::MediaPlayer_eventOpenUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_OpenUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execOpenUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenUrl(Z_Param_Url);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function OpenUrl

// Begin Class UMediaPlayer Function Pause
struct Z_Construct_UFunction_UMediaPlayer_Pause_Statics
{
	struct MediaPlayer_eventPause_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Pauses media playback.\n\x09 *\n\x09 * This is the same as setting the playback rate to 0.0.\n\x09 *\n\x09 * @return true if playback is being paused, false otherwise.\n\x09 * @see CanPause, Close, Next, Play, Previous, Rewind, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Pauses media playback.\n\nThis is the same as setting the playback rate to 0.0.\n\n@return true if playback is being paused, false otherwise.\n@see CanPause, Close, Next, Play, Previous, Rewind, Seek" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventPause_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventPause_Parms), &Z_Construct_UFunction_UMediaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_Pause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Pause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Pause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Pause", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Pause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_Pause_Statics::MediaPlayer_eventPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Pause_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_Pause_Statics::MediaPlayer_eventPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Pause

// Begin Class UMediaPlayer Function Play
struct Z_Construct_UFunction_UMediaPlayer_Play_Statics
{
	struct MediaPlayer_eventPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Starts media playback.\n\x09 *\n\x09 * This is the same as setting the playback rate to 1.0.\n\x09 *\n\x09 * @return true if playback is starting, false otherwise.\n\x09 * @see CanPlay, GetRate, Next, Pause, Previous, SetRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Starts media playback.\n\nThis is the same as setting the playback rate to 1.0.\n\n@return true if playback is starting, false otherwise.\n@see CanPlay, GetRate, Next, Pause, Previous, SetRate" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventPlay_Parms), &Z_Construct_UFunction_UMediaPlayer_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Play_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_Play_Statics::MediaPlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_Play_Statics::MediaPlayer_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Play();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Play

// Begin Class UMediaPlayer Function PlayAndSeek
struct Z_Construct_UFunction_UMediaPlayer_PlayAndSeek_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Starts playback from the media opened event, but can be used elsewhere.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Starts playback from the media opened event, but can be used elsewhere." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_PlayAndSeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "PlayAndSeek", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_PlayAndSeek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_PlayAndSeek_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlayer_PlayAndSeek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_PlayAndSeek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execPlayAndSeek)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAndSeek();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function PlayAndSeek

// Begin Class UMediaPlayer Function Previous
struct Z_Construct_UFunction_UMediaPlayer_Previous_Statics
{
	struct MediaPlayer_eventPrevious_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Open the previous item in the current play list.\n\x09 *\n\x09 * The player will start playing the new media source if it was playing\n\x09 * something previously, otherwise it will only open the media source.\n\x09 *\n\x09 * @return true on success, false otherwise.\n\x09 * @see Close, Next, OpenUrl, OpenSource, Play, SetPlaylist\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Open the previous item in the current play list.\n\nThe player will start playing the new media source if it was playing\nsomething previously, otherwise it will only open the media source.\n\n@return true on success, false otherwise.\n@see Close, Next, OpenUrl, OpenSource, Play, SetPlaylist" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_Previous_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventPrevious_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_Previous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventPrevious_Parms), &Z_Construct_UFunction_UMediaPlayer_Previous_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_Previous_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Previous_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Previous_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Previous", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_Previous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Previous_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_Previous_Statics::MediaPlayer_eventPrevious_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Previous_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Previous_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_Previous_Statics::MediaPlayer_eventPrevious_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_Previous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Previous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Previous();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Previous

// Begin Class UMediaPlayer Function Reopen
struct Z_Construct_UFunction_UMediaPlayer_Reopen_Statics
{
	struct MediaPlayer_eventReopen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Reopens the currently opened media or play list.\n\x09 *\n\x09 * @return true if the media will be opened, false otherwise.\n\x09 * @see Close, Open, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Reopens the currently opened media or play list.\n\n@return true if the media will be opened, false otherwise.\n@see Close, Open, OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventReopen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventReopen_Parms), &Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Reopen", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::MediaPlayer_eventReopen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::MediaPlayer_eventReopen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_Reopen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execReopen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Reopen();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Reopen

// Begin Class UMediaPlayer Function Rewind
struct Z_Construct_UFunction_UMediaPlayer_Rewind_Statics
{
	struct MediaPlayer_eventRewind_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Rewinds the media to the beginning.\n\x09 *\n\x09 * This is the same as seeking to zero time.\n\x09 *\n\x09 * @return true if rewinding, false otherwise.\n\x09 * @see GetTime, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Rewinds the media to the beginning.\n\nThis is the same as seeking to zero time.\n\n@return true if rewinding, false otherwise.\n@see GetTime, Seek" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventRewind_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventRewind_Parms), &Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Rewind", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::MediaPlayer_eventRewind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::MediaPlayer_eventRewind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_Rewind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execRewind)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Rewind();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Rewind

// Begin Class UMediaPlayer Function Seek
struct Z_Construct_UFunction_UMediaPlayer_Seek_Statics
{
	struct MediaPlayer_eventSeek_Parms
	{
		FTimespan Time;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Seeks to the specified playback time.\n\x09 *\n\x09 * @param Time The playback time to set.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetTime, Rewind\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Seeks to the specified playback time.\n\n@param Time The playback time to set.\n@return true on success, false otherwise.\n@see GetTime, Rewind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
void Z_Construct_UFunction_UMediaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSeek_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSeek_Parms), &Z_Construct_UFunction_UMediaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_Seek_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Seek_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_Seek_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Seek_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "Seek", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_Seek_Statics::MediaPlayer_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_Seek_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_Seek_Statics::MediaPlayer_eventSeek_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_Seek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_Seek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSeek)
{
	P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Out_Time);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function Seek

// Begin Class UMediaPlayer Function SelectTrack
struct Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics
{
	struct MediaPlayer_eventSelectTrack_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 TrackIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Select the active track of the given type.\n\x09 *\n\x09 * The selected track will use its currently active format. Active formats will\n\x09 * be remembered on a per track basis. The first available format is active by\n\x09 * default. To switch the track format, use SetTrackFormat instead.\n\x09 *\n\x09 * @param TrackType The type of track to select.\n\x09 * @param TrackIndex The index of the track to select, or INDEX_NONE to deselect.\n\x09 * @return true if the track was selected, false otherwise.\n\x09 * @see GetNumTracks, GetSelectedTrack, SetTrackFormat\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Select the active track of the given type.\n\nThe selected track will use its currently active format. Active formats will\nbe remembered on a per track basis. The first available format is active by\ndefault. To switch the track format, use SetTrackFormat instead.\n\n@param TrackType The type of track to select.\n@param TrackIndex The index of the track to select, or INDEX_NONE to deselect.\n@return true if the track was selected, false otherwise.\n@see GetNumTracks, GetSelectedTrack, SetTrackFormat" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSelectTrack_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSelectTrack_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSelectTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSelectTrack_Parms), &Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SelectTrack", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::MediaPlayer_eventSelectTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::MediaPlayer_eventSelectTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SelectTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSelectTrack)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectTrack(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SelectTrack

// Begin Class UMediaPlayer Function SetBlockOnTime
struct Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics
{
	struct MediaPlayer_eventSetBlockOnTime_Parms
	{
		FTimespan Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Set the time on which to block.\n\x09 *\n\x09 * If set, this player will block in TickInput or TickFetch until the video sample\n\x09 * for the specified time are actually available.\n\x09 *\n\x09 * @param Time The time to block on, or FTimespan::MinValue to disable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Set the time on which to block.\n\nIf set, this player will block in TickInput or TickFetch until the video sample\nfor the specified time are actually available.\n\n@param Time The time to block on, or FTimespan::MinValue to disable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetBlockOnTime_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetBlockOnTime", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::MediaPlayer_eventSetBlockOnTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::MediaPlayer_eventSetBlockOnTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetBlockOnTime)
{
	P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockOnTime(Z_Param_Out_Time);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetBlockOnTime

// Begin Class UMediaPlayer Function SetDesiredPlayerName
struct Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics
{
	struct MediaPlayer_eventSetDesiredPlayerName_Parms
	{
		FName PlayerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Set the name of the desired native player.\n\x09 *\n\x09 * @param PlayerName The name of the player to set.\n\x09 * @see GetDesiredPlayerName\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Set the name of the desired native player.\n\n@param PlayerName The name of the player to set.\n@see GetDesiredPlayerName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetDesiredPlayerName_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetDesiredPlayerName", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::MediaPlayer_eventSetDesiredPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::MediaPlayer_eventSetDesiredPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetDesiredPlayerName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PlayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredPlayerName(Z_Param_PlayerName);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetDesiredPlayerName

// Begin Class UMediaPlayer Function SetLooping
struct Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics
{
	struct MediaPlayer_eventSetLooping_Parms
	{
		bool Looping;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Enables or disables playback looping.\n\x09 *\n\x09 * @param Looping Whether playback should be looped.\n\x09 * @return true on success, false otherwise.\n\x09 * @see IsLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Enables or disables playback looping.\n\n@param Looping Whether playback should be looped.\n@return true on success, false otherwise.\n@see IsLooping" },
	};
#endif // WITH_METADATA
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((MediaPlayer_eventSetLooping_Parms*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_Looping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::MediaPlayer_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::MediaPlayer_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetLooping)
{
	P_GET_UBOOL(Z_Param_Looping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetLooping

// Begin Class UMediaPlayer Function SetMediaOptions
struct Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics
{
	struct MediaPlayer_eventSetMediaOptions_Parms
	{
		const UMediaSource* Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Sets the media options used by the player.\n\x09 *\n\x09 * @param Options Options to pass to the player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Sets the media options used by the player.\n\n@param Options Options to pass to the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetMediaOptions_Parms, Options), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetMediaOptions", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::MediaPlayer_eventSetMediaOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::MediaPlayer_eventSetMediaOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetMediaOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetMediaOptions)
{
	P_GET_OBJECT(UMediaSource,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaOptions(Z_Param_Options);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetMediaOptions

// Begin Class UMediaPlayer Function SetNativeVolume
struct Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics
{
	struct MediaPlayer_eventSetNativeVolume_Parms
	{
		float Volume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Set the volume on the native player if not mixing with Sound Wave asset.\n\x09 *\n\x09 * The SetNativeVolume can be used to change the audio output volume at runtime. Note that\n\x09 * not all media player plug-ins may support native audio output on all platforms.\n\x09 *\n\x09 * @param Volume The volume to set.\n\x09 * @return true on success, false otherwise.\n\x09 * @see NativeAudioOut\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Set the volume on the native player if not mixing with Sound Wave asset.\n\nThe SetNativeVolume can be used to change the audio output volume at runtime. Note that\nnot all media player plug-ins may support native audio output on all platforms.\n\n@param Volume The volume to set.\n@return true on success, false otherwise.\n@see NativeAudioOut" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetNativeVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetNativeVolume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetNativeVolume_Parms), &Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetNativeVolume", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::MediaPlayer_eventSetNativeVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::MediaPlayer_eventSetNativeVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetNativeVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetNativeVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNativeVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetNativeVolume

// Begin Class UMediaPlayer Function SetPlaybackTimeRange
struct Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics
{
	struct FFloatInterval
	{
		float Min;
		float Max;
	};

	struct MediaPlayer_eventSetPlaybackTimeRange_Parms
	{
		FFloatInterval InTimeRange;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Blueprint accessible version of SetPlaybackTimeRange().\n\x09 * The range is set through a blueprint usable float interval which may not have enough\n\x09 * precision to represent the range accurately.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Blueprint accessible version of SetPlaybackTimeRange().\nThe range is set through a blueprint usable float interval which may not have enough\nprecision to represent the range accurately." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTimeRange;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::NewProp_InTimeRange = { "InTimeRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetPlaybackTimeRange_Parms, InTimeRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetPlaybackTimeRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetPlaybackTimeRange_Parms), &Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::NewProp_InTimeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetPlaybackTimeRange", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::MediaPlayer_eventSetPlaybackTimeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::MediaPlayer_eventSetPlaybackTimeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetPlaybackTimeRange)
{
	P_GET_STRUCT(FFloatInterval,Z_Param_InTimeRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetPlaybackTimeRange(Z_Param_InTimeRange);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetPlaybackTimeRange

// Begin Class UMediaPlayer Function SetRate
struct Z_Construct_UFunction_UMediaPlayer_SetRate_Statics
{
	struct MediaPlayer_eventSetRate_Parms
	{
		float Rate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Changes the media's playback rate.\n\x09 *\n\x09 * @param Rate The playback rate to set.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetRate, SupportsRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Changes the media's playback rate.\n\n@param Rate The playback rate to set.\n@return true on success, false otherwise.\n@see GetRate, SupportsRate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetRate_Parms), &Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetRate", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::MediaPlayer_eventSetRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::MediaPlayer_eventSetRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRate(Z_Param_Rate);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetRate

// Begin Class UMediaPlayer Function SetTimeDelay
struct Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics
{
	struct MediaPlayer_eventSetTimeDelay_Parms
	{
		FTimespan TimeDelay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Delay of the player's time.\n\x09 *\n\x09 * This setting can be used to manually sync multiple sources.\n\x09 * Set to 1 seconds, if you would like that Player to play 1 second behind its current time.\n\x09 * If the value is too big, it is possible that the player would not hold that frame for that long.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetTimeDelay\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Delay of the player's time.\n\nThis setting can be used to manually sync multiple sources.\nSet to 1 seconds, if you would like that Player to play 1 second behind its current time.\nIf the value is too big, it is possible that the player would not hold that frame for that long.\n@return true on success, false otherwise.\n@see GetTimeDelay" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::NewProp_TimeDelay = { "TimeDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetTimeDelay_Parms, TimeDelay), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::NewProp_TimeDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetTimeDelay", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::MediaPlayer_eventSetTimeDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::MediaPlayer_eventSetTimeDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetTimeDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetTimeDelay)
{
	P_GET_STRUCT(FTimespan,Z_Param_TimeDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeDelay(Z_Param_TimeDelay);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetTimeDelay

// Begin Class UMediaPlayer Function SetTrackFormat
struct Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics
{
	struct MediaPlayer_eventSetTrackFormat_Parms
	{
		EMediaPlayerTrack TrackType;
		int32 TrackIndex;
		int32 FormatIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Set the format on the specified track.\n\x09 *\n\x09 * Selecting the format will not switch to the specified track. To switch\n\x09 * tracks, use SelectTrack instead. If the track is already selected, the\n\x09 * format change will be applied immediately.\n\x09 *\n\x09 * @param TrackType The type of track to update.\n\x09 * @param TrackIndex The index of the track to update.\n\x09 * @param FormatIndex The index of the format to select (must be valid).\n\x09 * @return true if the track was selected, false otherwise.\n\x09 * @see GetNumTrackFormats, GetNumTracks, GetTrackFormat, SelectTrack\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Set the format on the specified track.\n\nSelecting the format will not switch to the specified track. To switch\ntracks, use SelectTrack instead. If the track is already selected, the\nformat change will be applied immediately.\n\n@param TrackType The type of track to update.\n@param TrackIndex The index of the track to update.\n@param FormatIndex The index of the format to select (must be valid).\n@return true if the track was selected, false otherwise.\n@see GetNumTrackFormats, GetNumTracks, GetTrackFormat, SelectTrack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_TrackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetTrackFormat_Parms, TrackType), Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack, METADATA_PARAMS(0, nullptr) }; // 3296908249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetTrackFormat_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetTrackFormat_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetTrackFormat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetTrackFormat_Parms), &Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_TrackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetTrackFormat", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::MediaPlayer_eventSetTrackFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::MediaPlayer_eventSetTrackFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetTrackFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetTrackFormat)
{
	P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex,Z_Param_FormatIndex);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetTrackFormat

// Begin Class UMediaPlayer Function SetVideoTrackFrameRate
struct Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics
{
	struct MediaPlayer_eventSetVideoTrackFrameRate_Parms
	{
		int32 TrackIndex;
		int32 FormatIndex;
		float FrameRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Set the frame rate of the specified video track.\n\x09 *\n\x09 * @param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n\x09 * @param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n\x09 * @param FrameRate The frame rate to set (must be in range of format's supported frame rates).\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackFrameRates, GetVideoTrackType\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Set the frame rate of the specified video track.\n\n@param TrackIndex The index of the track, or INDEX_NONE for the selected one.\n@param FormatIndex Index of the track format, or INDEX_NONE for the selected one.\n@param FrameRate The frame rate to set (must be in range of format's supported frame rates).\n@return true on success, false otherwise.\n@see GetVideoTrackAspectRatio, GetVideoTrackDimensions, GetVideoTrackFrameRate, GetVideoTrackFrameRates, GetVideoTrackType" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetVideoTrackFrameRate_Parms, TrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetVideoTrackFrameRate_Parms, FormatIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetVideoTrackFrameRate_Parms, FrameRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetVideoTrackFrameRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetVideoTrackFrameRate_Parms), &Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_FormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetVideoTrackFrameRate", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::MediaPlayer_eventSetVideoTrackFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::MediaPlayer_eventSetVideoTrackFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetVideoTrackFrameRate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FormatIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrameRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex,Z_Param_FrameRate);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetVideoTrackFrameRate

// Begin Class UMediaPlayer Function SetViewField
struct Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics
{
	struct MediaPlayer_eventSetViewField_Parms
	{
		float Horizontal;
		float Vertical;
		bool Absolute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Set the field of view (only for 360 videos).\n\x09 *\n\x09 * @param Horizontal Horizontal field of view (in Euler degrees).\n\x09 * @param Vertical Vertical field of view (in Euler degrees).\n\x09 * @param Whether the field of view change should be absolute (true) or relative (false).\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetHorizontalFieldOfView, GetVerticalFieldOfView, SetViewRotation\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Set the field of view (only for 360 videos).\n\n@param Horizontal Horizontal field of view (in Euler degrees).\n@param Vertical Vertical field of view (in Euler degrees).\n@param Whether the field of view change should be absolute (true) or relative (false).\n@return true on success, false otherwise.\n@see GetHorizontalFieldOfView, GetVerticalFieldOfView, SetViewRotation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Horizontal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Vertical;
	static void NewProp_Absolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Absolute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Horizontal = { "Horizontal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetViewField_Parms, Horizontal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Vertical = { "Vertical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetViewField_Parms, Vertical), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Absolute_SetBit(void* Obj)
{
	((MediaPlayer_eventSetViewField_Parms*)Obj)->Absolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Absolute = { "Absolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetViewField_Parms), &Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Absolute_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetViewField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetViewField_Parms), &Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Absolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetViewField", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::MediaPlayer_eventSetViewField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::MediaPlayer_eventSetViewField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetViewField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetViewField)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Horizontal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Vertical);
	P_GET_UBOOL(Z_Param_Absolute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetViewField(Z_Param_Horizontal,Z_Param_Vertical,Z_Param_Absolute);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetViewField

// Begin Class UMediaPlayer Function SetViewRotation
struct Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics
{
	struct MediaPlayer_eventSetViewRotation_Parms
	{
		FRotator Rotation;
		bool Absolute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Set the view's rotation (only for 360 videos).\n\x09 *\n\x09 * @param Rotation The desired view rotation.\n\x09 * @param Whether the rotation change should be absolute (true) or relative (false).\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetViewRotation, SetViewField\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Set the view's rotation (only for 360 videos).\n\n@param Rotation The desired view rotation.\n@param Whether the rotation change should be absolute (true) or relative (false).\n@return true on success, false otherwise.\n@see GetViewRotation, SetViewField" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_Absolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Absolute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSetViewRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_Absolute_SetBit(void* Obj)
{
	((MediaPlayer_eventSetViewRotation_Parms*)Obj)->Absolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_Absolute = { "Absolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetViewRotation_Parms), &Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_Absolute_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSetViewRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSetViewRotation_Parms), &Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_Absolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::MediaPlayer_eventSetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::MediaPlayer_eventSetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSetViewRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_GET_UBOOL(Z_Param_Absolute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetViewRotation(Z_Param_Out_Rotation,Z_Param_Absolute);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SetViewRotation

// Begin Class UMediaPlayer Function SupportsPlaybackTimeRange
struct Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics
{
	struct MediaPlayer_eventSupportsPlaybackTimeRange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the player supports playing back of range within the media.\n\x09 *\n\x09 * @return true if playing back a range is supported, false otherwise.\n\x09 * @see GetPlaybackTimeRange, SetPlaybackTimeRange\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the player supports playing back of range within the media.\n\n@return true if playing back a range is supported, false otherwise.\n@see GetPlaybackTimeRange, SetPlaybackTimeRange" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSupportsPlaybackTimeRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSupportsPlaybackTimeRange_Parms), &Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SupportsPlaybackTimeRange", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::MediaPlayer_eventSupportsPlaybackTimeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::MediaPlayer_eventSupportsPlaybackTimeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSupportsPlaybackTimeRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsPlaybackTimeRange();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SupportsPlaybackTimeRange

// Begin Class UMediaPlayer Function SupportsRate
struct Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics
{
	struct MediaPlayer_eventSupportsRate_Parms
	{
		float Rate;
		bool Unthinned;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the specified playback rate is supported.\n\x09 *\n\x09 * @param Rate The playback rate to check.\n\x09 * @param Unthinned Whether no frames should be dropped at the given rate.\n\x09 * @see SupportsScrubbing, SupportsSeeking\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the specified playback rate is supported.\n\n@param Rate The playback rate to check.\n@param Unthinned Whether no frames should be dropped at the given rate.\n@see SupportsScrubbing, SupportsSeeking" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static void NewProp_Unthinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Unthinned;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlayer_eventSupportsRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_Unthinned_SetBit(void* Obj)
{
	((MediaPlayer_eventSupportsRate_Parms*)Obj)->Unthinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_Unthinned = { "Unthinned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSupportsRate_Parms), &Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_Unthinned_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSupportsRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSupportsRate_Parms), &Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_Unthinned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SupportsRate", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::MediaPlayer_eventSupportsRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::MediaPlayer_eventSupportsRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SupportsRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSupportsRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_GET_UBOOL(Z_Param_Unthinned);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsRate(Z_Param_Rate,Z_Param_Unthinned);
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SupportsRate

// Begin Class UMediaPlayer Function SupportsScrubbing
struct Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics
{
	struct MediaPlayer_eventSupportsScrubbing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the currently loaded media supports scrubbing.\n\x09 *\n\x09 * @return true if scrubbing is supported, false otherwise.\n\x09 * @see SupportsRate, SupportsSeeking\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the currently loaded media supports scrubbing.\n\n@return true if scrubbing is supported, false otherwise.\n@see SupportsRate, SupportsSeeking" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSupportsScrubbing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSupportsScrubbing_Parms), &Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SupportsScrubbing", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::MediaPlayer_eventSupportsScrubbing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::MediaPlayer_eventSupportsScrubbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSupportsScrubbing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsScrubbing();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SupportsScrubbing

// Begin Class UMediaPlayer Function SupportsSeeking
struct Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics
{
	struct MediaPlayer_eventSupportsSeeking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * Check whether the currently loaded media can jump to a certain position.\n\x09 *\n\x09 * @return true if seeking is supported, false otherwise.\n\x09 * @see SupportsRate, SupportsScrubbing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Check whether the currently loaded media can jump to a certain position.\n\n@return true if seeking is supported, false otherwise.\n@see SupportsRate, SupportsScrubbing" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlayer_eventSupportsSeeking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlayer_eventSupportsSeeking_Parms), &Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlayer, nullptr, "SupportsSeeking", nullptr, nullptr, Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::MediaPlayer_eventSupportsSeeking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::MediaPlayer_eventSupportsSeeking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlayer_SupportsSeeking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlayer::execSupportsSeeking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsSeeking();
	P_NATIVE_END;
}
// End Class UMediaPlayer Function SupportsSeeking

// Begin Class UMediaPlayer
void UMediaPlayer::StaticRegisterNativesUMediaPlayer()
{
	UClass* Class = UMediaPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPause", &UMediaPlayer::execCanPause },
		{ "CanPlaySource", &UMediaPlayer::execCanPlaySource },
		{ "CanPlayUrl", &UMediaPlayer::execCanPlayUrl },
		{ "Close", &UMediaPlayer::execClose },
		{ "GetAudioTrackChannels", &UMediaPlayer::execGetAudioTrackChannels },
		{ "GetAudioTrackSampleRate", &UMediaPlayer::execGetAudioTrackSampleRate },
		{ "GetAudioTrackType", &UMediaPlayer::execGetAudioTrackType },
		{ "GetDesiredPlayerName", &UMediaPlayer::execGetDesiredPlayerName },
		{ "GetDisplayTime", &UMediaPlayer::execGetDisplayTime },
		{ "GetDisplayTimeStamp", &UMediaPlayer::execGetDisplayTimeStamp },
		{ "GetDuration", &UMediaPlayer::execGetDuration },
		{ "GetHorizontalFieldOfView", &UMediaPlayer::execGetHorizontalFieldOfView },
		{ "GetMediaMetadataItems", &UMediaPlayer::execGetMediaMetadataItems },
		{ "GetMediaName", &UMediaPlayer::execGetMediaName },
		{ "GetNumTrackFormats", &UMediaPlayer::execGetNumTrackFormats },
		{ "GetNumTracks", &UMediaPlayer::execGetNumTracks },
		{ "GetPlaybackTimeRange", &UMediaPlayer::execGetPlaybackTimeRange },
		{ "GetPlayerName", &UMediaPlayer::execGetPlayerName },
		{ "GetPlaylist", &UMediaPlayer::execGetPlaylist },
		{ "GetPlaylistIndex", &UMediaPlayer::execGetPlaylistIndex },
		{ "GetRate", &UMediaPlayer::execGetRate },
		{ "GetSelectedTrack", &UMediaPlayer::execGetSelectedTrack },
		{ "GetSupportedRates", &UMediaPlayer::execGetSupportedRates },
		{ "GetTime", &UMediaPlayer::execGetTime },
		{ "GetTimeDelay", &UMediaPlayer::execGetTimeDelay },
		{ "GetTimeStamp", &UMediaPlayer::execGetTimeStamp },
		{ "GetTrackDisplayName", &UMediaPlayer::execGetTrackDisplayName },
		{ "GetTrackFormat", &UMediaPlayer::execGetTrackFormat },
		{ "GetTrackLanguage", &UMediaPlayer::execGetTrackLanguage },
		{ "GetUrl", &UMediaPlayer::execGetUrl },
		{ "GetVerticalFieldOfView", &UMediaPlayer::execGetVerticalFieldOfView },
		{ "GetVideoTrackAspectRatio", &UMediaPlayer::execGetVideoTrackAspectRatio },
		{ "GetVideoTrackDimensions", &UMediaPlayer::execGetVideoTrackDimensions },
		{ "GetVideoTrackFrameRate", &UMediaPlayer::execGetVideoTrackFrameRate },
		{ "GetVideoTrackFrameRates", &UMediaPlayer::execGetVideoTrackFrameRates },
		{ "GetVideoTrackType", &UMediaPlayer::execGetVideoTrackType },
		{ "GetViewRotation", &UMediaPlayer::execGetViewRotation },
		{ "HasError", &UMediaPlayer::execHasError },
		{ "IsBuffering", &UMediaPlayer::execIsBuffering },
		{ "IsClosed", &UMediaPlayer::execIsClosed },
		{ "IsConnecting", &UMediaPlayer::execIsConnecting },
		{ "IsLooping", &UMediaPlayer::execIsLooping },
		{ "IsPaused", &UMediaPlayer::execIsPaused },
		{ "IsPlaying", &UMediaPlayer::execIsPlaying },
		{ "IsPreparing", &UMediaPlayer::execIsPreparing },
		{ "IsReady", &UMediaPlayer::execIsReady },
		{ "Next", &UMediaPlayer::execNext },
		{ "OpenFile", &UMediaPlayer::execOpenFile },
		{ "OpenPlaylist", &UMediaPlayer::execOpenPlaylist },
		{ "OpenPlaylistIndex", &UMediaPlayer::execOpenPlaylistIndex },
		{ "OpenSource", &UMediaPlayer::execOpenSource },
		{ "OpenSourceLatent", &UMediaPlayer::execOpenSourceLatent },
		{ "OpenSourceWithOptions", &UMediaPlayer::execOpenSourceWithOptions },
		{ "OpenUrl", &UMediaPlayer::execOpenUrl },
		{ "Pause", &UMediaPlayer::execPause },
		{ "Play", &UMediaPlayer::execPlay },
		{ "PlayAndSeek", &UMediaPlayer::execPlayAndSeek },
		{ "Previous", &UMediaPlayer::execPrevious },
		{ "Reopen", &UMediaPlayer::execReopen },
		{ "Rewind", &UMediaPlayer::execRewind },
		{ "Seek", &UMediaPlayer::execSeek },
		{ "SelectTrack", &UMediaPlayer::execSelectTrack },
		{ "SetBlockOnTime", &UMediaPlayer::execSetBlockOnTime },
		{ "SetDesiredPlayerName", &UMediaPlayer::execSetDesiredPlayerName },
		{ "SetLooping", &UMediaPlayer::execSetLooping },
		{ "SetMediaOptions", &UMediaPlayer::execSetMediaOptions },
		{ "SetNativeVolume", &UMediaPlayer::execSetNativeVolume },
		{ "SetPlaybackTimeRange", &UMediaPlayer::execSetPlaybackTimeRange },
		{ "SetRate", &UMediaPlayer::execSetRate },
		{ "SetTimeDelay", &UMediaPlayer::execSetTimeDelay },
		{ "SetTrackFormat", &UMediaPlayer::execSetTrackFormat },
		{ "SetVideoTrackFrameRate", &UMediaPlayer::execSetVideoTrackFrameRate },
		{ "SetViewField", &UMediaPlayer::execSetViewField },
		{ "SetViewRotation", &UMediaPlayer::execSetViewRotation },
		{ "SupportsPlaybackTimeRange", &UMediaPlayer::execSupportsPlaybackTimeRange },
		{ "SupportsRate", &UMediaPlayer::execSupportsRate },
		{ "SupportsScrubbing", &UMediaPlayer::execSupportsScrubbing },
		{ "SupportsSeeking", &UMediaPlayer::execSupportsSeeking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayer);
UClass* Z_Construct_UClass_UMediaPlayer_NoRegister()
{
	return UMediaPlayer::StaticClass();
}
struct Z_Construct_UClass_UMediaPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a media player asset that can play movies and other media sources.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaPlayer.h" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Implements a media player asset that can play movies and other media sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndReached_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/** A delegate that is invoked when playback has reached the end of the media. */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when playback has reached the end of the media." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaClosed_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/** A delegate that is invoked when a media source has been closed. */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when a media source has been closed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaOpened_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * A delegate that is invoked when a media source has been opened.\n\x09 *\n\x09 * Depending on whether the underlying player implementation opens the media\n\x09 * synchronously or asynchronously, this event may be executed before or\n\x09 * after the call to OpenSource / OpenUrl returns.\n\x09 *\n\x09 * @see OnMediaOpenFailed, OnTracksChanged\n\x09 */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when a media source has been opened.\n\nDepending on whether the underlying player implementation opens the media\nsynchronously or asynchronously, this event may be executed before or\nafter the call to OpenSource / OpenUrl returns.\n\n@see OnMediaOpenFailed, OnTracksChanged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaOpenFailed_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * A delegate that is invoked when a media source has failed to open.\n\x09 *\n\x09 * This delegate is only executed if OpenSource / OpenUrl returned true and\n\x09 * the media failed to open asynchronously later. It is not executed if\n\x09 * OpenSource / OpenUrl returned false, indicating an immediate failure.\n\x09 *\n\x09 * @see OnMediaOpened\n\x09 */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when a media source has failed to open.\n\nThis delegate is only executed if OpenSource / OpenUrl returned true and\nthe media failed to open asynchronously later. It is not executed if\nOpenSource / OpenUrl returned false, indicating an immediate failure.\n\n@see OnMediaOpened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackResumed_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * A delegate that is invoked when media playback has been resumed.\n\x09 *\n\x09 * @see OnPlaybackSuspended\n\x09 */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when media playback has been resumed.\n\n@see OnPlaybackSuspended" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackSuspended_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * A delegate that is invoked when media playback has been suspended.\n\x09 *\n\x09 * @see OnPlaybackResumed\n\x09 */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when media playback has been suspended.\n\n@see OnPlaybackResumed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSeekCompleted_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * A delegate that is invoked when a seek operation completed successfully.\n\x09 *\n\x09 * Depending on whether the underlying player implementation performs seeks\n\x09 * synchronously or asynchronously, this event may be executed before or\n\x09 * after the call to Seek returns.\n\x09 */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when a seek operation completed successfully.\n\nDepending on whether the underlying player implementation performs seeks\nsynchronously or asynchronously, this event may be executed before or\nafter the call to Seek returns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTracksChanged_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * A delegate that is invoked when the media track collection changed.\n\x09 *\n\x09 * @see OnMediaOpened\n\x09 */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when the media track collection changed.\n\n@see OnMediaOpened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMetadataChanged_MetaData[] = {
		{ "Category", "Media|MediaPlayer" },
		{ "Comment", "/**\n\x09 * A delegate that is invoked when the media metadata changed.\n\x09 *\n\x09 * @see OnMediaOpened\n\x09 */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when the media metadata changed.\n\n@see OnMediaOpened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheAhead_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Duration of samples to cache ahead of the play head.\n\x09 *\n\x09 * @see CacheBehind, CacheBehindGame\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Duration of samples to cache ahead of the play head.\n\n@see CacheBehind, CacheBehindGame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheBehind_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Duration of samples to cache behind the play head (when not running as game).\n\x09 *\n\x09 * @see CacheAhead, CacheBehindGame\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Duration of samples to cache behind the play head (when not running as game).\n\n@see CacheAhead, CacheBehindGame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheBehindGame_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Duration of samples to cache behind the play head (when running as game).\n\x09 *\n\x09 * @see CacheAhead, CacheBehind\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Duration of samples to cache behind the play head (when running as game).\n\n@see CacheAhead, CacheBehind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeAudioOut_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/**\n\x09 * Output any audio via the operating system's sound mixer instead of a Sound Wave asset.\n\x09 *\n\x09 * If enabled, the assigned Sound Wave asset will be ignored. The SetNativeVolume\n\x09 * function can then be used to change the audio output volume at runtime. Note that\n\x09 * not all media player plug-ins may support native audio output on all platforms.\n\x09 *\n\x09 * @see SetNativeVolume\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Output any audio via the operating system's sound mixer instead of a Sound Wave asset.\n\nIf enabled, the assigned Sound Wave asset will be ignored. The SetNativeVolume\nfunction can then be used to change the audio output volume at runtime. Note that\nnot all media player plug-ins may support native audio output on all platforms.\n\n@see SetNativeVolume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * Automatically start playback after media opened successfully.\n\x09 *\n\x09 * If disabled, listen to the OnMediaOpened Blueprint event to detect when\n\x09 * the media finished opening, and then start playback using the Play function.\n\x09 *\n\x09 * @see OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Automatically start playback after media opened successfully.\n\nIf disabled, listen to the OnMediaOpened Blueprint event to detect when\nthe media finished opening, and then start playback using the Play function.\n\n@see OpenFile, OpenPlaylist, OpenPlaylistIndex, OpenSource, OpenUrl, Play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shuffle_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * Whether playback should shuffle media sources in the play list.\n\x09 *\n\x09 * @see OpenPlaylist, OpenPlaylistIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Whether playback should shuffle media sources in the play list.\n\n@see OpenPlaylist, OpenPlaylistIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * Whether the player should loop when media playback reaches the end.\n\x09 *\n\x09 * Use the SetLooping function to change this value at runtime.\n\x09 *\n\x09 * @see IsLooping, SetLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Whether the player should loop when media playback reaches the end.\n\nUse the SetLooping function to change this value at runtime.\n\n@see IsLooping, SetLooping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[] = {
		{ "BlueprintGetter", "GetPlayList" },
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * The play list to use, if any.\n\x09 *\n\x09 * Use the OpenPlaylist or OpenPlaylistIndex function to change this value at runtime.\n\x09 *\n\x09 * @see OpenPlaylist, OpenPlaylistIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "The play list to use, if any.\n\nUse the OpenPlaylist or OpenPlaylistIndex function to change this value at runtime.\n\n@see OpenPlaylist, OpenPlaylistIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * The current index of the source in the play list being played.\n\x09 *\n\x09 * Use the Previous and Next methods to change this value at runtime.\n\x09 *\n\x09 * @see Next, Previous\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "The current index of the source in the play list being played.\n\nUse the Previous and Next methods to change this value at runtime.\n\n@see Next, Previous" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDelay_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * Delay of the player's time.\n\x09 *\n\x09 * @see SetTimeDelay, GetTimeDelay\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Delay of the player's time.\n\n@see SetTimeDelay, GetTimeDelay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalFieldOfView_MetaData[] = {
		{ "Category", "ViewSettings" },
		{ "Comment", "/**\n\x09 * The initial horizontal field of view (in Euler degrees; default = 90).\n\x09 *\n\x09 * This setting is used only for 360 videos. It determines the portion of the\n\x09 * video that is visible at a time. To modify the field of view at runtime in\n\x09 * Blueprints, use the SetHorizontalFieldOfView function.\n\x09 *\n\x09 * @see GetHorizontalFieldOfView, SetHorizontalFieldOfView, VerticalFieldOfView, ViewRotation\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "The initial horizontal field of view (in Euler degrees; default = 90).\n\nThis setting is used only for 360 videos. It determines the portion of the\nvideo that is visible at a time. To modify the field of view at runtime in\nBlueprints, use the SetHorizontalFieldOfView function.\n\n@see GetHorizontalFieldOfView, SetHorizontalFieldOfView, VerticalFieldOfView, ViewRotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFieldOfView_MetaData[] = {
		{ "Category", "ViewSettings" },
		{ "Comment", "/**\n\x09 * The initial vertical field of view (in Euler degrees; default = 60).\n\x09 *\n\x09 * This setting is used only for 360 videos. It determines the portion of the\n\x09 * video that is visible at a time. To modify the field of view at runtime in\n\x09 * Blueprints, use the SetHorizontalFieldOfView function.\n\x09 *\n\x09 * Please note that some 360 video players may be able to change only the\n\x09 * horizontal field of view, and this setting may be ignored.\n\x09 *\n\x09 * @see GetVerticalFieldOfView, SetVerticalFieldOfView, HorizontalFieldOfView, ViewRotation\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "The initial vertical field of view (in Euler degrees; default = 60).\n\nThis setting is used only for 360 videos. It determines the portion of the\nvideo that is visible at a time. To modify the field of view at runtime in\nBlueprints, use the SetHorizontalFieldOfView function.\n\nPlease note that some 360 video players may be able to change only the\nhorizontal field of view, and this setting may be ignored.\n\n@see GetVerticalFieldOfView, SetVerticalFieldOfView, HorizontalFieldOfView, ViewRotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewRotation_MetaData[] = {
		{ "Category", "ViewSettings" },
		{ "Comment", "/**\n\x09 * The initial view rotation.\n\x09 *\n\x09 * This setting is used only for 360 videos. It determines the rotation of\n\x09 * the video's view. To modify the view orientation at runtime in Blueprints,\n\x09 * use the GetViewRotation and SetViewRotation functions.\n\x09 *\n\x09 * Please note that not all players may support video view rotations.\n\x09 *\n\x09 * @see GetViewRotation, SetViewRotation, HorizontalFieldOfView, VerticalFieldOfView\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "The initial view rotation.\n\nThis setting is used only for 360 videos. It determines the rotation of\nthe video's view. To modify the view orientation at runtime in Blueprints,\nuse the GetViewRotation and SetViewRotation functions.\n\nPlease note that not all players may support video view rotations.\n\n@see GetViewRotation, SetViewRotation, HorizontalFieldOfView, VerticalFieldOfView" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGuid_MetaData[] = {
		{ "Comment", "/** The player's globally unique identifier. */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "The player's globally unique identifier." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedByPIEHandling_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Whether this player should stop when entering or exiting PIE. */" },
		{ "ModuleRelativePath", "Public/MediaPlayer.h" },
		{ "ToolTip", "Whether this player should stop when entering or exiting PIE." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndReached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaOpenFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackResumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackSuspended;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeekCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTracksChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetadataChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheAhead;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheBehind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheBehindGame;
	static void NewProp_NativeAudioOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NativeAudioOut;
	static void NewProp_PlayOnOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayOnOpen;
	static void NewProp_Shuffle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Shuffle;
	static void NewProp_Loop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Loop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Playlist;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalFieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalFieldOfView;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerGuid;
#if WITH_EDITORONLY_DATA
	static void NewProp_AffectedByPIEHandling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectedByPIEHandling;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPlayer_CanPause, "CanPause" }, // 3505424795
		{ &Z_Construct_UFunction_UMediaPlayer_CanPlaySource, "CanPlaySource" }, // 573473251
		{ &Z_Construct_UFunction_UMediaPlayer_CanPlayUrl, "CanPlayUrl" }, // 3080650944
		{ &Z_Construct_UFunction_UMediaPlayer_Close, "Close" }, // 2452277000
		{ &Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels, "GetAudioTrackChannels" }, // 1821102773
		{ &Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate, "GetAudioTrackSampleRate" }, // 2390511542
		{ &Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType, "GetAudioTrackType" }, // 3379676304
		{ &Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName, "GetDesiredPlayerName" }, // 1418263748
		{ &Z_Construct_UFunction_UMediaPlayer_GetDisplayTime, "GetDisplayTime" }, // 2471763512
		{ &Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp, "GetDisplayTimeStamp" }, // 338174733
		{ &Z_Construct_UFunction_UMediaPlayer_GetDuration, "GetDuration" }, // 2455662208
		{ &Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView, "GetHorizontalFieldOfView" }, // 3454395155
		{ &Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems, "GetMediaMetadataItems" }, // 3373147310
		{ &Z_Construct_UFunction_UMediaPlayer_GetMediaName, "GetMediaName" }, // 2880818033
		{ &Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats, "GetNumTrackFormats" }, // 2603776865
		{ &Z_Construct_UFunction_UMediaPlayer_GetNumTracks, "GetNumTracks" }, // 3324500147
		{ &Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange, "GetPlaybackTimeRange" }, // 1751052609
		{ &Z_Construct_UFunction_UMediaPlayer_GetPlayerName, "GetPlayerName" }, // 2211323052
		{ &Z_Construct_UFunction_UMediaPlayer_GetPlaylist, "GetPlaylist" }, // 1583167815
		{ &Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex, "GetPlaylistIndex" }, // 2826131164
		{ &Z_Construct_UFunction_UMediaPlayer_GetRate, "GetRate" }, // 1768869601
		{ &Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack, "GetSelectedTrack" }, // 3694939630
		{ &Z_Construct_UFunction_UMediaPlayer_GetSupportedRates, "GetSupportedRates" }, // 2916378436
		{ &Z_Construct_UFunction_UMediaPlayer_GetTime, "GetTime" }, // 1882932877
		{ &Z_Construct_UFunction_UMediaPlayer_GetTimeDelay, "GetTimeDelay" }, // 2177450698
		{ &Z_Construct_UFunction_UMediaPlayer_GetTimeStamp, "GetTimeStamp" }, // 1073735606
		{ &Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName, "GetTrackDisplayName" }, // 401868291
		{ &Z_Construct_UFunction_UMediaPlayer_GetTrackFormat, "GetTrackFormat" }, // 3975779227
		{ &Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage, "GetTrackLanguage" }, // 3760770890
		{ &Z_Construct_UFunction_UMediaPlayer_GetUrl, "GetUrl" }, // 471399430
		{ &Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView, "GetVerticalFieldOfView" }, // 583299685
		{ &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio, "GetVideoTrackAspectRatio" }, // 736715409
		{ &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions, "GetVideoTrackDimensions" }, // 4223494876
		{ &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate, "GetVideoTrackFrameRate" }, // 2462198969
		{ &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates, "GetVideoTrackFrameRates" }, // 1527415949
		{ &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType, "GetVideoTrackType" }, // 1604550398
		{ &Z_Construct_UFunction_UMediaPlayer_GetViewRotation, "GetViewRotation" }, // 3514433213
		{ &Z_Construct_UFunction_UMediaPlayer_HasError, "HasError" }, // 315383897
		{ &Z_Construct_UFunction_UMediaPlayer_IsBuffering, "IsBuffering" }, // 4071616021
		{ &Z_Construct_UFunction_UMediaPlayer_IsClosed, "IsClosed" }, // 1932545496
		{ &Z_Construct_UFunction_UMediaPlayer_IsConnecting, "IsConnecting" }, // 3254185420
		{ &Z_Construct_UFunction_UMediaPlayer_IsLooping, "IsLooping" }, // 1163172385
		{ &Z_Construct_UFunction_UMediaPlayer_IsPaused, "IsPaused" }, // 2354615831
		{ &Z_Construct_UFunction_UMediaPlayer_IsPlaying, "IsPlaying" }, // 2123350624
		{ &Z_Construct_UFunction_UMediaPlayer_IsPreparing, "IsPreparing" }, // 3568898094
		{ &Z_Construct_UFunction_UMediaPlayer_IsReady, "IsReady" }, // 1577778448
		{ &Z_Construct_UFunction_UMediaPlayer_Next, "Next" }, // 1019679866
		{ &Z_Construct_UFunction_UMediaPlayer_OpenFile, "OpenFile" }, // 1632436640
		{ &Z_Construct_UFunction_UMediaPlayer_OpenPlaylist, "OpenPlaylist" }, // 120739522
		{ &Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex, "OpenPlaylistIndex" }, // 1017452420
		{ &Z_Construct_UFunction_UMediaPlayer_OpenSource, "OpenSource" }, // 665273662
		{ &Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent, "OpenSourceLatent" }, // 2978345903
		{ &Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions, "OpenSourceWithOptions" }, // 2412661809
		{ &Z_Construct_UFunction_UMediaPlayer_OpenUrl, "OpenUrl" }, // 1629387527
		{ &Z_Construct_UFunction_UMediaPlayer_Pause, "Pause" }, // 798766753
		{ &Z_Construct_UFunction_UMediaPlayer_Play, "Play" }, // 284346694
		{ &Z_Construct_UFunction_UMediaPlayer_PlayAndSeek, "PlayAndSeek" }, // 2472373696
		{ &Z_Construct_UFunction_UMediaPlayer_Previous, "Previous" }, // 4141442201
		{ &Z_Construct_UFunction_UMediaPlayer_Reopen, "Reopen" }, // 3787792235
		{ &Z_Construct_UFunction_UMediaPlayer_Rewind, "Rewind" }, // 49721727
		{ &Z_Construct_UFunction_UMediaPlayer_Seek, "Seek" }, // 1764595369
		{ &Z_Construct_UFunction_UMediaPlayer_SelectTrack, "SelectTrack" }, // 24696782
		{ &Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime, "SetBlockOnTime" }, // 4223398455
		{ &Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName, "SetDesiredPlayerName" }, // 1758564865
		{ &Z_Construct_UFunction_UMediaPlayer_SetLooping, "SetLooping" }, // 158182159
		{ &Z_Construct_UFunction_UMediaPlayer_SetMediaOptions, "SetMediaOptions" }, // 1539676008
		{ &Z_Construct_UFunction_UMediaPlayer_SetNativeVolume, "SetNativeVolume" }, // 3950083114
		{ &Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange, "SetPlaybackTimeRange" }, // 2022441897
		{ &Z_Construct_UFunction_UMediaPlayer_SetRate, "SetRate" }, // 2334615989
		{ &Z_Construct_UFunction_UMediaPlayer_SetTimeDelay, "SetTimeDelay" }, // 1367229162
		{ &Z_Construct_UFunction_UMediaPlayer_SetTrackFormat, "SetTrackFormat" }, // 3376137242
		{ &Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate, "SetVideoTrackFrameRate" }, // 3718882769
		{ &Z_Construct_UFunction_UMediaPlayer_SetViewField, "SetViewField" }, // 875874111
		{ &Z_Construct_UFunction_UMediaPlayer_SetViewRotation, "SetViewRotation" }, // 2780708698
		{ &Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange, "SupportsPlaybackTimeRange" }, // 4006906699
		{ &Z_Construct_UFunction_UMediaPlayer_SupportsRate, "SupportsRate" }, // 3010718141
		{ &Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing, "SupportsScrubbing" }, // 2071282046
		{ &Z_Construct_UFunction_UMediaPlayer_SupportsSeeking, "SupportsSeeking" }, // 1722430896
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnEndReached = { "OnEndReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnEndReached), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndReached_MetaData), NewProp_OnEndReached_MetaData) }; // 1926901667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMediaClosed = { "OnMediaClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnMediaClosed), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMediaClosed_MetaData), NewProp_OnMediaClosed_MetaData) }; // 1926901667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMediaOpened = { "OnMediaOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnMediaOpened), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMediaOpened_MetaData), NewProp_OnMediaOpened_MetaData) }; // 1019007603
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMediaOpenFailed = { "OnMediaOpenFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnMediaOpenFailed), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMediaOpenFailed_MetaData), NewProp_OnMediaOpenFailed_MetaData) }; // 3767478089
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnPlaybackResumed = { "OnPlaybackResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnPlaybackResumed), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackResumed_MetaData), NewProp_OnPlaybackResumed_MetaData) }; // 1926901667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnPlaybackSuspended = { "OnPlaybackSuspended", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnPlaybackSuspended), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackSuspended_MetaData), NewProp_OnPlaybackSuspended_MetaData) }; // 1926901667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnSeekCompleted = { "OnSeekCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnSeekCompleted), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSeekCompleted_MetaData), NewProp_OnSeekCompleted_MetaData) }; // 1926901667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnTracksChanged = { "OnTracksChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnTracksChanged), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTracksChanged_MetaData), NewProp_OnTracksChanged_MetaData) }; // 1926901667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMetadataChanged = { "OnMetadataChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, OnMetadataChanged), Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMetadataChanged_MetaData), NewProp_OnMetadataChanged_MetaData) }; // 1926901667
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_CacheAhead = { "CacheAhead", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, CacheAhead), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheAhead_MetaData), NewProp_CacheAhead_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_CacheBehind = { "CacheBehind", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, CacheBehind), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheBehind_MetaData), NewProp_CacheBehind_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_CacheBehindGame = { "CacheBehindGame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, CacheBehindGame), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheBehindGame_MetaData), NewProp_CacheBehindGame_MetaData) };
void Z_Construct_UClass_UMediaPlayer_Statics::NewProp_NativeAudioOut_SetBit(void* Obj)
{
	((UMediaPlayer*)Obj)->NativeAudioOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_NativeAudioOut = { "NativeAudioOut", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlayer), &Z_Construct_UClass_UMediaPlayer_Statics::NewProp_NativeAudioOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeAudioOut_MetaData), NewProp_NativeAudioOut_MetaData) };
void Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlayOnOpen_SetBit(void* Obj)
{
	((UMediaPlayer*)Obj)->PlayOnOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlayer), &Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlayOnOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayOnOpen_MetaData), NewProp_PlayOnOpen_MetaData) };
void Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Shuffle_SetBit(void* Obj)
{
	((UMediaPlayer*)Obj)->Shuffle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Shuffle = { "Shuffle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMediaPlayer), &Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Shuffle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shuffle_MetaData), NewProp_Shuffle_MetaData) };
void Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Loop_SetBit(void* Obj)
{
	((UMediaPlayer*)Obj)->Loop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMediaPlayer), &Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loop_MetaData), NewProp_Loop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, Playlist), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Playlist_MetaData), NewProp_Playlist_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlaylistIndex = { "PlaylistIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, PlaylistIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaylistIndex_MetaData), NewProp_PlaylistIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_TimeDelay = { "TimeDelay", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, TimeDelay), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDelay_MetaData), NewProp_TimeDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_HorizontalFieldOfView = { "HorizontalFieldOfView", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, HorizontalFieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalFieldOfView_MetaData), NewProp_HorizontalFieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_VerticalFieldOfView = { "VerticalFieldOfView", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, VerticalFieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalFieldOfView_MetaData), NewProp_VerticalFieldOfView_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewRotation_MetaData), NewProp_ViewRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlayerGuid = { "PlayerGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlayer, PlayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGuid_MetaData), NewProp_PlayerGuid_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMediaPlayer_Statics::NewProp_AffectedByPIEHandling_SetBit(void* Obj)
{
	((UMediaPlayer*)Obj)->AffectedByPIEHandling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlayer_Statics::NewProp_AffectedByPIEHandling = { "AffectedByPIEHandling", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlayer), &Z_Construct_UClass_UMediaPlayer_Statics::NewProp_AffectedByPIEHandling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedByPIEHandling_MetaData), NewProp_AffectedByPIEHandling_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnEndReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMediaClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMediaOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMediaOpenFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnPlaybackResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnPlaybackSuspended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnSeekCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnTracksChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_OnMetadataChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_CacheAhead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_CacheBehind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_CacheBehindGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_NativeAudioOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlayOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Shuffle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Loop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Playlist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlaylistIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_TimeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_HorizontalFieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_VerticalFieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_ViewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlayerGuid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayer_Statics::NewProp_AffectedByPIEHandling,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMediaPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayer_Statics::ClassParams = {
	&UMediaPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMediaPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayer_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaPlayer()
{
	if (!Z_Registration_Info_UClass_UMediaPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayer.OuterSingleton, Z_Construct_UClass_UMediaPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaPlayer.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaPlayer>()
{
	return UMediaPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayer);
UMediaPlayer::~UMediaPlayer() {}
// End Class UMediaPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMediaPlayerTrack_StaticEnum, TEXT("EMediaPlayerTrack"), &Z_Registration_Info_UEnum_EMediaPlayerTrack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3296908249U) },
		{ EMediaTimeRangeBPType_StaticEnum, TEXT("EMediaTimeRangeBPType"), &Z_Registration_Info_UEnum_EMediaTimeRangeBPType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1207143038U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMediaMetadataItemBPT::StaticStruct, Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewStructOps, TEXT("MediaMetadataItemBPT"), &Z_Registration_Info_UScriptStruct_MediaMetadataItemBPT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaMetadataItemBPT), 30198402U) },
		{ FMediaMetadataItemsBPT::StaticStruct, Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::NewStructOps, TEXT("MediaMetadataItemsBPT"), &Z_Registration_Info_UScriptStruct_MediaMetadataItemsBPT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaMetadataItemsBPT), 615016521U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaTimeStampInfo, UMediaTimeStampInfo::StaticClass, TEXT("UMediaTimeStampInfo"), &Z_Registration_Info_UClass_UMediaTimeStampInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaTimeStampInfo), 2282826385U) },
		{ Z_Construct_UClass_UMediaPlayer, UMediaPlayer::StaticClass, TEXT("UMediaPlayer"), &Z_Registration_Info_UClass_UMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayer), 4185882449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_2041877885(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
