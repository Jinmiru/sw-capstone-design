// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/Misc/MediaBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBlueprintFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter();
MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Enum EMediaAudioCaptureDeviceFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter;
static UEnum* EMediaAudioCaptureDeviceFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaAudioCaptureDeviceFilter"));
	}
	return Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaAudioCaptureDeviceFilter>()
{
	return EMediaAudioCaptureDeviceFilter_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BitFlags", "" },
		{ "BlueprintType", "true" },
		{ "Card.Comment", "/** Audio capture cards. */" },
		{ "Card.Name", "EMediaAudioCaptureDeviceFilter::Card" },
		{ "Card.ToolTip", "Audio capture cards." },
		{ "Comment", "/**\n * Filter flags for the EnumerateAudioCaptureDevices BP function.\n */" },
		{ "Microphone.Comment", "/** Microphone. */" },
		{ "Microphone.Name", "EMediaAudioCaptureDeviceFilter::Microphone" },
		{ "Microphone.ToolTip", "Microphone." },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMediaAudioCaptureDeviceFilter::None" },
		{ "Software.Comment", "/** Software device. */" },
		{ "Software.Name", "EMediaAudioCaptureDeviceFilter::Software" },
		{ "Software.ToolTip", "Software device." },
		{ "ToolTip", "Filter flags for the EnumerateAudioCaptureDevices BP function." },
		{ "Unknown.Comment", "/** Unknown audio capture device types. */" },
		{ "Unknown.Name", "EMediaAudioCaptureDeviceFilter::Unknown" },
		{ "Unknown.ToolTip", "Unknown audio capture device types." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaAudioCaptureDeviceFilter::None", (int64)EMediaAudioCaptureDeviceFilter::None },
		{ "EMediaAudioCaptureDeviceFilter::Card", (int64)EMediaAudioCaptureDeviceFilter::Card },
		{ "EMediaAudioCaptureDeviceFilter::Microphone", (int64)EMediaAudioCaptureDeviceFilter::Microphone },
		{ "EMediaAudioCaptureDeviceFilter::Software", (int64)EMediaAudioCaptureDeviceFilter::Software },
		{ "EMediaAudioCaptureDeviceFilter::Unknown", (int64)EMediaAudioCaptureDeviceFilter::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaAudioCaptureDeviceFilter",
	"EMediaAudioCaptureDeviceFilter",
	Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter()
{
	if (!Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.InnerSingleton;
}
// End Enum EMediaAudioCaptureDeviceFilter

// Begin Enum EMediaVideoCaptureDeviceFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter;
static UEnum* EMediaVideoCaptureDeviceFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaVideoCaptureDeviceFilter"));
	}
	return Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaVideoCaptureDeviceFilter>()
{
	return EMediaVideoCaptureDeviceFilter_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BitFlags", "" },
		{ "BlueprintType", "true" },
		{ "Card.Comment", "/** Video capture card. */" },
		{ "Card.Name", "EMediaVideoCaptureDeviceFilter::Card" },
		{ "Card.ToolTip", "Video capture card." },
		{ "Comment", "/**\n * Filter flags for the EnumerateVideoCaptureDevices BP function.\n */" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMediaVideoCaptureDeviceFilter::None" },
		{ "Software.Comment", "/** Software video capture device. */" },
		{ "Software.Name", "EMediaVideoCaptureDeviceFilter::Software" },
		{ "Software.ToolTip", "Software video capture device." },
		{ "ToolTip", "Filter flags for the EnumerateVideoCaptureDevices BP function." },
		{ "Unknown.Comment", "/** Unknown video capture device types. */" },
		{ "Unknown.Name", "EMediaVideoCaptureDeviceFilter::Unknown" },
		{ "Unknown.ToolTip", "Unknown video capture device types." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Webcam.Comment", "/** Web cam. */" },
		{ "Webcam.Name", "EMediaVideoCaptureDeviceFilter::Webcam" },
		{ "Webcam.ToolTip", "Web cam." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaVideoCaptureDeviceFilter::None", (int64)EMediaVideoCaptureDeviceFilter::None },
		{ "EMediaVideoCaptureDeviceFilter::Card", (int64)EMediaVideoCaptureDeviceFilter::Card },
		{ "EMediaVideoCaptureDeviceFilter::Software", (int64)EMediaVideoCaptureDeviceFilter::Software },
		{ "EMediaVideoCaptureDeviceFilter::Unknown", (int64)EMediaVideoCaptureDeviceFilter::Unknown },
		{ "EMediaVideoCaptureDeviceFilter::Webcam", (int64)EMediaVideoCaptureDeviceFilter::Webcam },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaVideoCaptureDeviceFilter",
	"EMediaVideoCaptureDeviceFilter",
	Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter()
{
	if (!Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.InnerSingleton;
}
// End Enum EMediaVideoCaptureDeviceFilter

// Begin Enum EMediaWebcamCaptureDeviceFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter;
static UEnum* EMediaWebcamCaptureDeviceFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaWebcamCaptureDeviceFilter"));
	}
	return Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaWebcamCaptureDeviceFilter>()
{
	return EMediaWebcamCaptureDeviceFilter_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BitFlags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filter flags for the EnumerateWebcamCaptureDevices BP function.\n */" },
		{ "DepthSensor.Comment", "/** Depth sensor. */" },
		{ "DepthSensor.Name", "EMediaWebcamCaptureDeviceFilter::DepthSensor" },
		{ "DepthSensor.ToolTip", "Depth sensor." },
		{ "Front.Comment", "/** Front facing web cam. */" },
		{ "Front.Name", "EMediaWebcamCaptureDeviceFilter::Front" },
		{ "Front.ToolTip", "Front facing web cam." },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMediaWebcamCaptureDeviceFilter::None" },
		{ "Rear.Comment", "/** Rear facing web cam. */" },
		{ "Rear.Name", "EMediaWebcamCaptureDeviceFilter::Rear" },
		{ "Rear.ToolTip", "Rear facing web cam." },
		{ "ToolTip", "Filter flags for the EnumerateWebcamCaptureDevices BP function." },
		{ "Unknown.Comment", "/** Unknown web cam types. */" },
		{ "Unknown.Name", "EMediaWebcamCaptureDeviceFilter::Unknown" },
		{ "Unknown.ToolTip", "Unknown web cam types." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaWebcamCaptureDeviceFilter::None", (int64)EMediaWebcamCaptureDeviceFilter::None },
		{ "EMediaWebcamCaptureDeviceFilter::DepthSensor", (int64)EMediaWebcamCaptureDeviceFilter::DepthSensor },
		{ "EMediaWebcamCaptureDeviceFilter::Front", (int64)EMediaWebcamCaptureDeviceFilter::Front },
		{ "EMediaWebcamCaptureDeviceFilter::Rear", (int64)EMediaWebcamCaptureDeviceFilter::Rear },
		{ "EMediaWebcamCaptureDeviceFilter::Unknown", (int64)EMediaWebcamCaptureDeviceFilter::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaWebcamCaptureDeviceFilter",
	"EMediaWebcamCaptureDeviceFilter",
	Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter()
{
	if (!Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.InnerSingleton;
}
// End Enum EMediaWebcamCaptureDeviceFilter

// Begin ScriptStruct FMediaCaptureDevice
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaCaptureDevice;
class UScriptStruct* FMediaCaptureDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaCaptureDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaCaptureDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaCaptureDevice, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaCaptureDevice"));
	}
	return Z_Registration_Info_UScriptStruct_MediaCaptureDevice.OuterSingleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaCaptureDevice>()
{
	return FMediaCaptureDevice::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a capture device.\n */" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Information about a capture device." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Media Capture Device" },
		{ "Comment", "/** Human readable display name. */" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Human readable display name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "Category", "Media Capture Device" },
		{ "Comment", "/** Media URL string for use with media players. */" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Media URL string for use with media players." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaCaptureDevice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaCaptureDevice, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaCaptureDevice, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	&NewStructOps,
	"MediaCaptureDevice",
	Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers),
	sizeof(FMediaCaptureDevice),
	alignof(FMediaCaptureDevice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice()
{
	if (!Z_Registration_Info_UScriptStruct_MediaCaptureDevice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaCaptureDevice.InnerSingleton, Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaCaptureDevice.InnerSingleton;
}
// End ScriptStruct FMediaCaptureDevice

// Begin Class UMediaBlueprintFunctionLibrary Function EnumerateAudioCaptureDevices
struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics
{
	struct MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms
	{
		TArray<FMediaCaptureDevice> OutDevices;
		int32 Filter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "Comment", "/**\n\x09 * Enumerate available audio capture devices.\n\x09 *\n\x09 * To filter for a specific subset of devices, use the MakeBitmask node\n\x09 * with EMediaAudioCaptureDeviceFilter as the Bitmask Enum.\n\x09 *\n\x09 * @param OutDevices Will contain the available capture devices.\n\x09 * @param Filter The types of capture devices to return (-1 = all).\n\x09 */" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaAudioCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices_Inner = { "OutDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(0, nullptr) }; // 837925633
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices = { "OutDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, OutDevices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 837925633
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, Filter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_Filter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, nullptr, "EnumerateAudioCaptureDevices", nullptr, nullptr, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices)
{
	P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices);
	P_GET_PROPERTY(FIntProperty,Z_Param_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter);
	P_NATIVE_END;
}
// End Class UMediaBlueprintFunctionLibrary Function EnumerateAudioCaptureDevices

// Begin Class UMediaBlueprintFunctionLibrary Function EnumerateVideoCaptureDevices
struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics
{
	struct MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms
	{
		TArray<FMediaCaptureDevice> OutDevices;
		int32 Filter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "Comment", "/**\n\x09 * Enumerate available audio capture devices.\n\x09 *\n\x09 * To filter for a specific subset of devices, use the MakeBitmask node\n\x09 * with EMediaVideoCaptureDeviceFilter as the Bitmask Enum.\n\x09 *\n\x09 * @param OutDevices Will contain the available capture devices.\n\x09 * @param Filter The types of capture devices to return (-1 = all).\n\x09 */" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaVideoCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices_Inner = { "OutDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(0, nullptr) }; // 837925633
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices = { "OutDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, OutDevices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 837925633
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, Filter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_Filter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, nullptr, "EnumerateVideoCaptureDevices", nullptr, nullptr, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices)
{
	P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices);
	P_GET_PROPERTY(FIntProperty,Z_Param_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter);
	P_NATIVE_END;
}
// End Class UMediaBlueprintFunctionLibrary Function EnumerateVideoCaptureDevices

// Begin Class UMediaBlueprintFunctionLibrary Function EnumerateWebcamCaptureDevices
struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics
{
	struct MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms
	{
		TArray<FMediaCaptureDevice> OutDevices;
		int32 Filter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "Comment", "/**\n\x09 * Enumerate available audio capture devices.\n\x09 *\n\x09 * To filter for a specific subset of devices, use the MakeBitmask node\n\x09 * with EMediaWebcamCaptureDeviceFilter as the Bitmask Enum.\n\x09 *\n\x09 * @param OutDevices Will contain the available capture devices.\n\x09 * @param Filter The types of capture devices to return (-1 = all).\n\x09 */" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaWebcamCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices_Inner = { "OutDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(0, nullptr) }; // 837925633
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices = { "OutDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, OutDevices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 837925633
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, Filter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_Filter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, nullptr, "EnumerateWebcamCaptureDevices", nullptr, nullptr, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices)
{
	P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices);
	P_GET_PROPERTY(FIntProperty,Z_Param_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter);
	P_NATIVE_END;
}
// End Class UMediaBlueprintFunctionLibrary Function EnumerateWebcamCaptureDevices

// Begin Class UMediaBlueprintFunctionLibrary
void UMediaBlueprintFunctionLibrary::StaticRegisterNativesUMediaBlueprintFunctionLibrary()
{
	UClass* Class = UMediaBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateAudioCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices },
		{ "EnumerateVideoCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices },
		{ "EnumerateWebcamCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister()
{
	return UMediaBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint library for Media related functions.\n */" },
		{ "IncludePath", "Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ScriptName", "MediaLibrary" },
		{ "ToolTip", "Blueprint library for Media related functions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices, "EnumerateAudioCaptureDevices" }, // 1111704578
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices, "EnumerateVideoCaptureDevices" }, // 4254983433
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices, "EnumerateWebcamCaptureDevices" }, // 2225977392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::ClassParams = {
	&UMediaBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaBlueprintFunctionLibrary>()
{
	return UMediaBlueprintFunctionLibrary::StaticClass();
}
UMediaBlueprintFunctionLibrary::UMediaBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaBlueprintFunctionLibrary);
UMediaBlueprintFunctionLibrary::~UMediaBlueprintFunctionLibrary() {}
// End Class UMediaBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMediaAudioCaptureDeviceFilter_StaticEnum, TEXT("EMediaAudioCaptureDeviceFilter"), &Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4245503820U) },
		{ EMediaVideoCaptureDeviceFilter_StaticEnum, TEXT("EMediaVideoCaptureDeviceFilter"), &Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 877706081U) },
		{ EMediaWebcamCaptureDeviceFilter_StaticEnum, TEXT("EMediaWebcamCaptureDeviceFilter"), &Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2015120565U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMediaCaptureDevice::StaticStruct, Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewStructOps, TEXT("MediaCaptureDevice"), &Z_Registration_Info_UScriptStruct_MediaCaptureDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaCaptureDevice), 837925633U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaBlueprintFunctionLibrary, UMediaBlueprintFunctionLibrary::StaticClass, TEXT("UMediaBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaBlueprintFunctionLibrary), 3186004421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_847288659(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
