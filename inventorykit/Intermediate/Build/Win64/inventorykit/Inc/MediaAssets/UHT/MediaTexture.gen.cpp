// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTexture() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOrientation();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Enum MediaTextureOutputFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_MediaTextureOutputFormat;
static UEnum* MediaTextureOutputFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_MediaTextureOutputFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_MediaTextureOutputFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaTextureOutputFormat"));
	}
	return Z_Registration_Info_UEnum_MediaTextureOutputFormat.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<MediaTextureOutputFormat>()
{
	return MediaTextureOutputFormat_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "MTOF_Default.DisplayName", "Default (sRGB)" },
		{ "MTOF_Default.Name", "MTOF_Default" },
		{ "MTOF_MAX.Comment", "// sRGB data, using sRGB texture formats; hence read as linear RGB\n" },
		{ "MTOF_MAX.Name", "MTOF_MAX" },
		{ "MTOF_MAX.ToolTip", "sRGB data, using sRGB texture formats; hence read as linear RGB" },
		{ "MTOF_SRGB_LINOUT.DisplayName", "sRGB (linear output)" },
		{ "MTOF_SRGB_LINOUT.Name", "MTOF_SRGB_LINOUT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MTOF_Default", (int64)MTOF_Default },
		{ "MTOF_SRGB_LINOUT", (int64)MTOF_SRGB_LINOUT },
		{ "MTOF_MAX", (int64)MTOF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"MediaTextureOutputFormat",
	"MediaTextureOutputFormat",
	Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat()
{
	if (!Z_Registration_Info_UEnum_MediaTextureOutputFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MediaTextureOutputFormat.InnerSingleton, Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_MediaTextureOutputFormat.InnerSingleton;
}
// End Enum MediaTextureOutputFormat

// Begin Enum MediaTextureOrientation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_MediaTextureOrientation;
static UEnum* MediaTextureOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaTextureOrientation"));
	}
	return Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<MediaTextureOrientation>()
{
	return MediaTextureOrientation_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "MTORI_CW180.DisplayName", "Clockwise 180deg" },
		{ "MTORI_CW180.Name", "MTORI_CW180" },
		{ "MTORI_CW270.DisplayName", "Clockwise 270deg" },
		{ "MTORI_CW270.Name", "MTORI_CW270" },
		{ "MTORI_CW90.DisplayName", "Clockwise 90deg" },
		{ "MTORI_CW90.Name", "MTORI_CW90" },
		{ "MTORI_Original.DisplayName", "Original (as decoded)" },
		{ "MTORI_Original.Name", "MTORI_Original" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MTORI_Original", (int64)MTORI_Original },
		{ "MTORI_CW90", (int64)MTORI_CW90 },
		{ "MTORI_CW180", (int64)MTORI_CW180 },
		{ "MTORI_CW270", (int64)MTORI_CW270 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"MediaTextureOrientation",
	"MediaTextureOrientation",
	Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOrientation()
{
	if (!Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton, Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton;
}
// End Enum MediaTextureOrientation

// Begin Class UMediaTexture Function GetAspectRatio
struct Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics
{
	struct MediaTexture_eventGetAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current aspect ratio of the texture.\n\x09 *\n\x09 * @return Texture aspect ratio.\n\x09 * @see GetHeight, GetWidth\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current aspect ratio of the texture.\n\n@return Texture aspect ratio.\n@see GetHeight, GetWidth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaTexture_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::MediaTexture_eventGetAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::MediaTexture_eventGetAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaTexture_GetAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaTexture::execGetAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
	P_NATIVE_END;
}
// End Class UMediaTexture Function GetAspectRatio

// Begin Class UMediaTexture Function GetHeight
struct Z_Construct_UFunction_UMediaTexture_GetHeight_Statics
{
	struct MediaTexture_eventGetHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current height of the texture.\n\x09 *\n\x09 * @return Texture height (in pixels).\n\x09 * @see GetAspectRatio, GetWidth\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current height of the texture.\n\n@return Texture height (in pixels).\n@see GetAspectRatio, GetWidth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaTexture_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetHeight", nullptr, nullptr, Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::MediaTexture_eventGetHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::MediaTexture_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaTexture_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaTexture::execGetHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHeight();
	P_NATIVE_END;
}
// End Class UMediaTexture Function GetHeight

// Begin Class UMediaTexture Function GetMediaPlayer
struct Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics
{
	struct MediaTexture_eventGetMediaPlayer_Parms
	{
		UMediaPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Get the media player that provides the video samples.\n\x09 *\n\x09 * @return The texture's media player, or nullptr if not set.\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Get the media player that provides the video samples.\n\n@return The texture's media player, or nullptr if not set.\n@see SetMediaPlayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaTexture_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::MediaTexture_eventGetMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::MediaTexture_eventGetMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaTexture_GetMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaTexture::execGetMediaPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
	P_NATIVE_END;
}
// End Class UMediaTexture Function GetMediaPlayer

// Begin Class UMediaTexture Function GetTextureNumMips
struct Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics
{
	struct MediaTexture_eventGetTextureNumMips_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current numbe of mips of the texture.\n\x09 *\n\x09 * @return Number of mips.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current numbe of mips of the texture.\n\n@return Number of mips." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaTexture_eventGetTextureNumMips_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetTextureNumMips", nullptr, nullptr, Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::MediaTexture_eventGetTextureNumMips_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::MediaTexture_eventGetTextureNumMips_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaTexture_GetTextureNumMips()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaTexture::execGetTextureNumMips)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTextureNumMips();
	P_NATIVE_END;
}
// End Class UMediaTexture Function GetTextureNumMips

// Begin Class UMediaTexture Function GetWidth
struct Z_Construct_UFunction_UMediaTexture_GetWidth_Statics
{
	struct MediaTexture_eventGetWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current width of the texture.\n\x09 *\n\x09 * @return Texture width (in pixels).\n\x09 * @see GetAspectRatio, GetHeight\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current width of the texture.\n\n@return Texture width (in pixels).\n@see GetAspectRatio, GetHeight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaTexture_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetWidth", nullptr, nullptr, Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::MediaTexture_eventGetWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::MediaTexture_eventGetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaTexture_GetWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaTexture::execGetWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWidth();
	P_NATIVE_END;
}
// End Class UMediaTexture Function GetWidth

// Begin Class UMediaTexture Function SetMediaPlayer
struct Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics
{
	struct MediaTexture_eventSetMediaPlayer_Parms
	{
		UMediaPlayer* NewMediaPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Set the media player that provides the video samples.\n\x09 *\n\x09 * @param NewMediaPlayer The player to set.\n\x09 * @see GetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Set the media player that provides the video samples.\n\n@param NewMediaPlayer The player to set.\n@see GetMediaPlayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer = { "NewMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaTexture_eventSetMediaPlayer_Parms, NewMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "SetMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::MediaTexture_eventSetMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::MediaTexture_eventSetMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaTexture_SetMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaTexture::execSetMediaPlayer)
{
	P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer);
	P_NATIVE_END;
}
// End Class UMediaTexture Function SetMediaPlayer

// Begin Class UMediaTexture Function UpdateResource
struct Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Creates a new resource for the texture, and updates any cached references to the resource.\n\x09 * This obviously is just an override to expose to blueprints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Creates a new resource for the texture, and updates any cached references to the resource.\nThis obviously is just an override to expose to blueprints." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "UpdateResource", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaTexture_UpdateResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaTexture::execUpdateResource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateResource();
	P_NATIVE_END;
}
// End Class UMediaTexture Function UpdateResource

// Begin Class UMediaTexture
void UMediaTexture::StaticRegisterNativesUMediaTexture()
{
	UClass* Class = UMediaTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAspectRatio", &UMediaTexture::execGetAspectRatio },
		{ "GetHeight", &UMediaTexture::execGetHeight },
		{ "GetMediaPlayer", &UMediaTexture::execGetMediaPlayer },
		{ "GetTextureNumMips", &UMediaTexture::execGetTextureNumMips },
		{ "GetWidth", &UMediaTexture::execGetWidth },
		{ "SetMediaPlayer", &UMediaTexture::execSetMediaPlayer },
		{ "UpdateResource", &UMediaTexture::execUpdateResource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaTexture);
UClass* Z_Construct_UClass_UMediaTexture_NoRegister()
{
	return UMediaTexture::StaticClass();
}
struct Z_Construct_UClass_UMediaTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a texture asset for rendering video tracks from UMediaPlayer assets.\n * \n * note: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n *    maybe should have been UTexture2DDynamic?\n */" },
		{ "HideCategories", "Adjustments Compositing LevelOfDetail ImportSettings Object" },
		{ "IncludePath", "MediaTexture.h" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Implements a texture asset for rendering video tracks from UMediaPlayer assets.\n\nnote: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n   maybe should have been UTexture2DDynamic?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoClear_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Whether to clear the texture when no media is being played (default = enabled). */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Whether to clear the texture when no media is being played (default = enabled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The color used to clear the texture if AutoClear is enabled (default = black). */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The color used to clear the texture if AutoClear is enabled (default = black)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableGenMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Basic enablement for mip generation (default = false). */" },
		{ "DisplayName", "Enable Mipmap generation" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Basic enablement for mip generation (default = false)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The number of mips to use (default = 1). */" },
		{ "DisplayName", "Total number of Mipmaps to output" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The number of mips to use (default = 1)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStyleOutput_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Enable new style output. */" },
		{ "DisplayName", "Enable new style output" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Enable new style output." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[] = {
		{ "Comment", "/** DEPRECATED 5.4 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Output format was unused (not connected to active logic) and is now deprecated. References to it can be safely deleted." },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "DEPRECATED 5.4" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAspectRatio_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Current aspect ratio */" },
		{ "DisplayName", "Current frame's aspect ratio" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Current aspect ratio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOrientation_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Current media orientation */" },
		{ "DisplayName", "Current frame's orientation" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Current media orientation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * The media player asset associated with this texture.\n\x09 *\n\x09 * This property is meant for design-time convenience. To change the\n\x09 * associated media player at run-time, use the SetMediaPlayer method.\n\x09 *\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The media player asset associated with this texture.\n\nThis property is meant for design-time convenience. To change the\nassociated media player at run-time, use the SetMediaPlayer method.\n\n@see SetMediaPlayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static void NewProp_AutoClear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoClear;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static void NewProp_EnableGenMips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGenMips;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumMips;
	static void NewProp_NewStyleOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewStyleOutput;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAspectRatio;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentOrientation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaTexture_GetAspectRatio, "GetAspectRatio" }, // 3183036228
		{ &Z_Construct_UFunction_UMediaTexture_GetHeight, "GetHeight" }, // 2547007159
		{ &Z_Construct_UFunction_UMediaTexture_GetMediaPlayer, "GetMediaPlayer" }, // 3842631151
		{ &Z_Construct_UFunction_UMediaTexture_GetTextureNumMips, "GetTextureNumMips" }, // 285411658
		{ &Z_Construct_UFunction_UMediaTexture_GetWidth, "GetWidth" }, // 1079463146
		{ &Z_Construct_UFunction_UMediaTexture_SetMediaPlayer, "SetMediaPlayer" }, // 2500967642
		{ &Z_Construct_UFunction_UMediaTexture_UpdateResource, "UpdateResource" }, // 1701424351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
void Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit(void* Obj)
{
	((UMediaTexture*)Obj)->AutoClear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear = { "AutoClear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoClear_MetaData), NewProp_AutoClear_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
void Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_SetBit(void* Obj)
{
	((UMediaTexture*)Obj)->EnableGenMips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips = { "EnableGenMips", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableGenMips_MetaData), NewProp_EnableGenMips_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, NumMips), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumMips_MetaData), NewProp_NumMips_MetaData) };
void Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_SetBit(void* Obj)
{
	((UMediaTexture*)Obj)->NewStyleOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput = { "NewStyleOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStyleOutput_MetaData), NewProp_NewStyleOutput_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, OutputFormat_DEPRECATED), Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFormat_MetaData), NewProp_OutputFormat_MetaData) }; // 3883505894
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentAspectRatio = { "CurrentAspectRatio", nullptr, (EPropertyFlags)0x0090400000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, CurrentAspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAspectRatio_MetaData), NewProp_CurrentAspectRatio_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentOrientation = { "CurrentOrientation", nullptr, (EPropertyFlags)0x0090400000002014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, CurrentOrientation), Z_Construct_UEnum_MediaAssets_MediaTextureOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOrientation_MetaData), NewProp_CurrentOrientation_MetaData) }; // 3501168261
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaTexture, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_OutputFormat,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMediaTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaTexture_Statics::ClassParams = {
	&UMediaTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMediaTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaTexture()
{
	if (!Z_Registration_Info_UClass_UMediaTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaTexture.OuterSingleton, Z_Construct_UClass_UMediaTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaTexture.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaTexture>()
{
	return UMediaTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTexture);
UMediaTexture::~UMediaTexture() {}
// End Class UMediaTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ MediaTextureOutputFormat_StaticEnum, TEXT("MediaTextureOutputFormat"), &Z_Registration_Info_UEnum_MediaTextureOutputFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3883505894U) },
		{ MediaTextureOrientation_StaticEnum, TEXT("MediaTextureOrientation"), &Z_Registration_Info_UEnum_MediaTextureOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3501168261U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaTexture, UMediaTexture::StaticClass, TEXT("UMediaTexture"), &Z_Registration_Info_UClass_UMediaTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaTexture), 2824454324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_396397709(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
