// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureAvailability();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorSpace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureDownscaleOptions();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipLoadOptions();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceEncoding();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureFormatSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceBlock();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceColorSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FTextureSourceLayerColorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo;
class UScriptStruct* FTextureSourceLayerColorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureSourceLayerColorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSourceLayerColorInfo>()
{
	return FTextureSourceLayerColorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMin_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Per channel min value of the colors for all blocks in mip0 in linear space */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Per channel min value of the colors for all blocks in mip0 in linear space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMax_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Per channel max value of the colors for all blocks in mip0 in linear space */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Per channel max value of the colors for all blocks in mip0 in linear space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSourceLayerColorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::NewProp_ColorMin = { "ColorMin", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceLayerColorInfo, ColorMin), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMin_MetaData), NewProp_ColorMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::NewProp_ColorMax = { "ColorMax", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceLayerColorInfo, ColorMax), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMax_MetaData), NewProp_ColorMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::NewProp_ColorMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::NewProp_ColorMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextureSourceLayerColorInfo",
	Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::PropPointers),
	sizeof(FTextureSourceLayerColorInfo),
	alignof(FTextureSourceLayerColorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo.InnerSingleton, Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo.InnerSingleton;
}
// End ScriptStruct FTextureSourceLayerColorInfo

// Begin ScriptStruct FTextureSourceBlock
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureSourceBlock;
class UScriptStruct* FTextureSourceBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureSourceBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceBlock, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureSourceBlock"));
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceBlock.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSourceBlock>()
{
	return FTextureSourceBlock::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureSourceBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlockX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlockY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumMips;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSourceBlock>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX = { "BlockX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceBlock, BlockX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockX_MetaData), NewProp_BlockX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY = { "BlockY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceBlock, BlockY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockY_MetaData), NewProp_BlockY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceBlock, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceBlock, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceBlock, NumSlices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlices_MetaData), NewProp_NumSlices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceBlock, NumMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumMips_MetaData), NewProp_NumMips_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextureSourceBlock",
	Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers),
	sizeof(FTextureSourceBlock),
	alignof(FTextureSourceBlock),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceBlock()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceBlock.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureSourceBlock.InnerSingleton, Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceBlock.InnerSingleton;
}
// End ScriptStruct FTextureSourceBlock

// Begin ScriptStruct FTextureSource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureSource;
class UScriptStruct* FTextureSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureSource"));
	}
	return Z_Registration_Info_UScriptStruct_TextureSource.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSource>()
{
	return FTextureSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Texture source data management.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture source data management." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** GUID used to track changes to the source data.\n\x09Typically with UseHashAsGuid , this \"Id\" is the hash of the BulkData.\n\x09Note that GetId() is not == Id. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "GUID used to track changes to the source data.\n      Typically with UseHashAsGuid , this \"Id\" is the hash of the BulkData.\n      Note that GetId() is not == Id." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseBlockX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Position of texture block0, only relevant if source has multiple blocks */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Position of texture block0, only relevant if source has multiple blocks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseBlockY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Width of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Width of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Height of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Height of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Depth (volume textures) or faces (cube maps). */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Depth (volume textures) or faces (cube maps)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Number of mips provided as source data for the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Number of mips provided as source data for the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLayers_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Number of layers (for multi-layered virtual textures) provided as source data for the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Number of layers (for multi-layered virtual textures) provided as source data for the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPNGCompressed_MetaData[] = {
		{ "Comment", "/** RGBA8 source data is optionally compressed as PNG. \n\x09""Deprecated, use CompressionFormat instead.  To be removed.\n\x09""Deprecated uproperties are loaded but not saved. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "RGBA8 source data is optionally compressed as PNG.\n      Deprecated, use CompressionFormat instead.  To be removed.\n      Deprecated uproperties are loaded but not saved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLongLatCubemap_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/**\n\x09 * Source represents a cubemap in long/lat format, will have only 1 slice per cube, rather than 6 slices.\n\x09 * Not needed for non-array cubemaps, since we can just look at NumSlices == 1 or 6\n\x09 * But for cube arrays, no way of determining whether NumSlices=6 means 1 cubemap, or 6 long/lat cubemaps\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Source represents a cubemap in long/lat format, will have only 1 slice per cube, rather than 6 slices.\nNot needed for non-array cubemaps, since we can just look at NumSlices == 1 or 6\nBut for cube arrays, no way of determining whether NumSlices=6 means 1 cubemap, or 6 long/lat cubemaps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionFormat_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Compression format that source data is stored as. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Compression format that source data is stored as." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGuidIsHash_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Uses hash instead of guid to identify content to improve DDC cache hit. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Uses hash instead of guid to identify content to improve DDC cache hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerColorInfo_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Per layer color info. If this is empty we don't have the data, otherwise count is == NumLayers. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Per layer color info. If this is empty we don't have the data, otherwise count is == NumLayers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Format in which the source data is stored. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Format in which the source data is stored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerFormat_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** For multi-layered sources, each layer may have a different format (in this case LayerFormat[0] == Format) . */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "For multi-layered sources, each layer may have a different format (in this case LayerFormat[0] == Format) ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/**\n\x09 * All sources have 1 implicit block defined by BaseBlockXY/SizeXY members.  Textures imported as UDIM may have additional blocks defined here.\n\x09 * These are stored sequentially in the source's bulk data.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "All sources have 1 implicit block defined by BaseBlockXY/SizeXY members.  Textures imported as UDIM may have additional blocks defined here.\nThese are stored sequentially in the source's bulk data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockDataOffsets_MetaData[] = {
		{ "Comment", "/**\n\x09 * Offsets of each block (including Block0) in the bulk data.\n\x09 * Blocks are not necessarily stored in order, since block indices are sorted by X/Y location.\n\x09 * For non-UDIM textures, this will always have a single entry equal to 0\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Offsets of each block (including Block0) in the bulk data.\nBlocks are not necessarily stored in order, since block indices are sorted by X/Y location.\nFor non-UDIM textures, this will always have a single entry equal to 0" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseBlockX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseBlockY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumMips;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLayers;
	static void NewProp_bPNGCompressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPNGCompressed;
	static void NewProp_bLongLatCubemap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLongLatCubemap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionFormat;
	static void NewProp_bGuidIsHash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGuidIsHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerColorInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerColorInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayerFormat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BlockDataOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockDataOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX = { "BaseBlockX", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, BaseBlockX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseBlockX_MetaData), NewProp_BaseBlockX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY = { "BaseBlockY", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, BaseBlockY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseBlockY_MetaData), NewProp_BaseBlockY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, NumSlices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlices_MetaData), NewProp_NumSlices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, NumMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumMips_MetaData), NewProp_NumMips_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers = { "NumLayers", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, NumLayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLayers_MetaData), NewProp_NumLayers_MetaData) };
void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_SetBit(void* Obj)
{
	((FTextureSource*)Obj)->bPNGCompressed_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed = { "bPNGCompressed", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPNGCompressed_MetaData), NewProp_bPNGCompressed_MetaData) };
void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap_SetBit(void* Obj)
{
	((FTextureSource*)Obj)->bLongLatCubemap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap = { "bLongLatCubemap", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLongLatCubemap_MetaData), NewProp_bLongLatCubemap_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_CompressionFormat = { "CompressionFormat", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, CompressionFormat), Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionFormat_MetaData), NewProp_CompressionFormat_MetaData) }; // 1327261017
void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_SetBit(void* Obj)
{
	((FTextureSource*)Obj)->bGuidIsHash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash = { "bGuidIsHash", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGuidIsHash_MetaData), NewProp_bGuidIsHash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerColorInfo_Inner = { "LayerColorInfo", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo, METADATA_PARAMS(0, nullptr) }; // 4261127900
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerColorInfo = { "LayerColorInfo", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, LayerColorInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerColorInfo_MetaData), NewProp_LayerColorInfo_MetaData) }; // 4261127900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, Format), Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 1427865707
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_Inner = { "LayerFormat", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(0, nullptr) }; // 1427865707
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat = { "LayerFormat", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, LayerFormat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerFormat_MetaData), NewProp_LayerFormat_MetaData) }; // 1427865707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTextureSourceBlock, METADATA_PARAMS(0, nullptr) }; // 970697138
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blocks_MetaData), NewProp_Blocks_MetaData) }; // 970697138
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets_Inner = { "BlockDataOffsets", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets = { "BlockDataOffsets", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSource, BlockDataOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockDataOffsets_MetaData), NewProp_BlockDataOffsets_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_CompressionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerColorInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerColorInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextureSource",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers), 0),
	sizeof(FTextureSource),
	alignof(FTextureSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureSource()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureSource.InnerSingleton, Z_Construct_UScriptStruct_FTextureSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureSource.InnerSingleton;
}
// End ScriptStruct FTextureSource

// Begin ScriptStruct FTexturePlatformData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TexturePlatformData;
class UScriptStruct* FTexturePlatformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TexturePlatformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TexturePlatformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturePlatformData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TexturePlatformData"));
	}
	return Z_Registration_Info_UScriptStruct_TexturePlatformData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTexturePlatformData>()
{
	return FTexturePlatformData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Platform-specific data used by the texture resource at runtime.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Platform-specific data used by the texture resource at runtime." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturePlatformData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturePlatformData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TexturePlatformData",
	nullptr,
	0,
	sizeof(FTexturePlatformData),
	alignof(FTexturePlatformData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData()
{
	if (!Z_Registration_Info_UScriptStruct_TexturePlatformData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TexturePlatformData.InnerSingleton, Z_Construct_UScriptStruct_FTexturePlatformData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TexturePlatformData.InnerSingleton;
}
// End ScriptStruct FTexturePlatformData

// Begin ScriptStruct FTextureFormatSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureFormatSettings;
class UScriptStruct* FTextureFormatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureFormatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureFormatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureFormatSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureFormatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TextureFormatSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureFormatSettings>()
{
	return FTextureFormatSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureFormatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Collection of values that contribute to pixel format chosen for texture\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Collection of values that contribute to pixel format chosen for texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNoAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionForceAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNone_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionYCoCg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
	static void NewProp_CompressionNoAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNoAlpha;
	static void NewProp_CompressionForceAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionForceAlpha;
	static void NewProp_CompressionNone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNone;
	static void NewProp_CompressionYCoCg_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionYCoCg;
	static void NewProp_SRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureFormatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureFormatSettings, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionSettings_MetaData), NewProp_CompressionSettings_MetaData) }; // 2977833603
void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_SetBit(void* Obj)
{
	((FTextureFormatSettings*)Obj)->CompressionNoAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha = { "CompressionNoAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionNoAlpha_MetaData), NewProp_CompressionNoAlpha_MetaData) };
void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_SetBit(void* Obj)
{
	((FTextureFormatSettings*)Obj)->CompressionForceAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha = { "CompressionForceAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionForceAlpha_MetaData), NewProp_CompressionForceAlpha_MetaData) };
void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_SetBit(void* Obj)
{
	((FTextureFormatSettings*)Obj)->CompressionNone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone = { "CompressionNone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionNone_MetaData), NewProp_CompressionNone_MetaData) };
void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_SetBit(void* Obj)
{
	((FTextureFormatSettings*)Obj)->CompressionYCoCg = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg = { "CompressionYCoCg", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionYCoCg_MetaData), NewProp_CompressionYCoCg_MetaData) };
void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_SetBit(void* Obj)
{
	((FTextureFormatSettings*)Obj)->SRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SRGB_MetaData), NewProp_SRGB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextureFormatSettings",
	Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers),
	sizeof(FTextureFormatSettings),
	alignof(FTextureFormatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureFormatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TextureFormatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureFormatSettings.InnerSingleton, Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureFormatSettings.InnerSingleton;
}
// End ScriptStruct FTextureFormatSettings

// Begin ScriptStruct FTextureSourceColorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureSourceColorSettings;
class UScriptStruct* FTextureSourceColorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceColorSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureSourceColorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSourceColorSettings>()
{
	return FTextureSourceColorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncodingOverride_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Source encoding of the texture, exposing more options than just sRGB. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Source encoding of the texture, exposing more options than just sRGB." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Source color space of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Source color space of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Red chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Red chromaticity coordinate of the source color space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GreenChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Green chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Green chromaticity coordinate of the source color space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Blue chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Blue chromaticity coordinate of the source color space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** White chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "White chromaticity coordinate of the source color space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAdaptationMethod_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Chromatic adaption method applied if the source white point differs from the working color space white point. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Chromatic adaption method applied if the source white point differs from the working color space white point." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodingOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodingOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RedChromaticityCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GreenChromaticityCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueChromaticityCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WhiteChromaticityCoordinate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChromaticAdaptationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChromaticAdaptationMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSourceColorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride = { "EncodingOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceColorSettings, EncodingOverride), Z_Construct_UEnum_Engine_ETextureSourceEncoding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncodingOverride_MetaData), NewProp_EncodingOverride_MetaData) }; // 986253757
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceColorSettings, ColorSpace), Z_Construct_UEnum_Engine_ETextureColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSpace_MetaData), NewProp_ColorSpace_MetaData) }; // 3275217672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_RedChromaticityCoordinate = { "RedChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceColorSettings, RedChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedChromaticityCoordinate_MetaData), NewProp_RedChromaticityCoordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_GreenChromaticityCoordinate = { "GreenChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceColorSettings, GreenChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GreenChromaticityCoordinate_MetaData), NewProp_GreenChromaticityCoordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_BlueChromaticityCoordinate = { "BlueChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceColorSettings, BlueChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueChromaticityCoordinate_MetaData), NewProp_BlueChromaticityCoordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_WhiteChromaticityCoordinate = { "WhiteChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceColorSettings, WhiteChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteChromaticityCoordinate_MetaData), NewProp_WhiteChromaticityCoordinate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod = { "ChromaticAdaptationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureSourceColorSettings, ChromaticAdaptationMethod), Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChromaticAdaptationMethod_MetaData), NewProp_ChromaticAdaptationMethod_MetaData) }; // 260056637
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_RedChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_GreenChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_BlueChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_WhiteChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextureSourceColorSettings",
	Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::PropPointers),
	sizeof(FTextureSourceColorSettings),
	alignof(FTextureSourceColorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceColorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.InnerSingleton, Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.InnerSingleton;
}
// End ScriptStruct FTextureSourceColorSettings

// Begin Class UTexture Function AreDownscalePropertiesEditable
struct Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics
{
	struct Texture_eventAreDownscalePropertiesEditable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** This function is used to control access to the Downscale and DownscaleOptions properties from the Texture Editor UI\n\x09 * in order to make it more clear to the user whether these properties will or will not be used when building the texture.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "This function is used to control access to the Downscale and DownscaleOptions properties from the Texture Editor UI\nin order to make it more clear to the user whether these properties will or will not be used when building the texture." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Texture_eventAreDownscalePropertiesEditable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Texture_eventAreDownscalePropertiesEditable_Parms), &Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture, nullptr, "AreDownscalePropertiesEditable", nullptr, nullptr, Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::Texture_eventAreDownscalePropertiesEditable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::Texture_eventAreDownscalePropertiesEditable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexture::execAreDownscalePropertiesEditable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreDownscalePropertiesEditable();
	P_NATIVE_END;
}
// End Class UTexture Function AreDownscalePropertiesEditable

// Begin Class UTexture Function Blueprint_GetMemorySize
struct Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics
{
	struct Texture_eventBlueprint_GetMemorySize_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "Comment", "/**\n\x09 * Gets the memory size of the texture, in bytes.\n\x09 * This is the size in GPU memory of the built platformdata, accounting for LODBias, etc.\n\x09 * Returns zero for error.\n\x09 */" },
		{ "DisplayName", "GetMemorySize" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Gets the memory size of the texture, in bytes.\nThis is the size in GPU memory of the built platformdata, accounting for LODBias, etc.\nReturns zero for error." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture_eventBlueprint_GetMemorySize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture, nullptr, "Blueprint_GetMemorySize", nullptr, nullptr, Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::Texture_eventBlueprint_GetMemorySize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::Texture_eventBlueprint_GetMemorySize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexture::execBlueprint_GetMemorySize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->Blueprint_GetMemorySize();
	P_NATIVE_END;
}
// End Class UTexture Function Blueprint_GetMemorySize

// Begin Class UTexture Function Blueprint_GetTextureSourceDiskAndMemorySize
struct Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics
{
	struct Texture_eventBlueprint_GetTextureSourceDiskAndMemorySize_Parms
	{
		int64 OutDiskSize;
		int64 OutMemorySize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "Comment", "/**\n\x09 * Gets the memory size of the texture source top mip, in bytes, and the size on disk of the asset, which may be compressed.\n\x09 * Uses texture source, not available in runtime games.\n\x09 * Does not cause texture source to be loaded, queries cached values.\n\x09 * Returns zero for error.\n\x09 */" },
		{ "DisplayName", "GetTextureSourceDiskAndMemorySize" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Gets the memory size of the texture source top mip, in bytes, and the size on disk of the asset, which may be compressed.\nUses texture source, not available in runtime games.\nDoes not cause texture source to be loaded, queries cached values.\nReturns zero for error." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutDiskSize;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutMemorySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::NewProp_OutDiskSize = { "OutDiskSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture_eventBlueprint_GetTextureSourceDiskAndMemorySize_Parms, OutDiskSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::NewProp_OutMemorySize = { "OutMemorySize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture_eventBlueprint_GetTextureSourceDiskAndMemorySize_Parms, OutMemorySize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::NewProp_OutDiskSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::NewProp_OutMemorySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture, nullptr, "Blueprint_GetTextureSourceDiskAndMemorySize", nullptr, nullptr, Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::Texture_eventBlueprint_GetTextureSourceDiskAndMemorySize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::Texture_eventBlueprint_GetTextureSourceDiskAndMemorySize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexture::execBlueprint_GetTextureSourceDiskAndMemorySize)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutDiskSize);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutMemorySize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Blueprint_GetTextureSourceDiskAndMemorySize(Z_Param_Out_OutDiskSize,Z_Param_Out_OutMemorySize);
	P_NATIVE_END;
}
// End Class UTexture Function Blueprint_GetTextureSourceDiskAndMemorySize

// Begin Class UTexture Function ComputeTextureSourceChannelMinMax
struct Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics
{
	struct Texture_eventComputeTextureSourceChannelMinMax_Parms
	{
		FLinearColor OutColorMin;
		FLinearColor OutColorMax;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "Comment", "/**\n\x09 * Scan the texture source pixels to compute the min & max values of the RGBA channels.\n\x09 * Uses texture source, not available in runtime games.\n\x09 * Causes texture source data to be loaded, is computed by scanning pixels when called.\n\x09 * Will set Min=Max=zero and return false on failure\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Scan the texture source pixels to compute the min & max values of the RGBA channels.\nUses texture source, not available in runtime games.\nCauses texture source data to be loaded, is computed by scanning pixels when called.\nWill set Min=Max=zero and return false on failure" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutColorMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutColorMax;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_OutColorMin = { "OutColorMin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture_eventComputeTextureSourceChannelMinMax_Parms, OutColorMin), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_OutColorMax = { "OutColorMax", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture_eventComputeTextureSourceChannelMinMax_Parms, OutColorMax), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Texture_eventComputeTextureSourceChannelMinMax_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Texture_eventComputeTextureSourceChannelMinMax_Parms), &Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_OutColorMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_OutColorMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture, nullptr, "ComputeTextureSourceChannelMinMax", nullptr, nullptr, Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::Texture_eventComputeTextureSourceChannelMinMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::Texture_eventComputeTextureSourceChannelMinMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexture::execComputeTextureSourceChannelMinMax)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColorMin);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColorMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ComputeTextureSourceChannelMinMax(Z_Param_Out_OutColorMin,Z_Param_Out_OutColorMax);
	P_NATIVE_END;
}
// End Class UTexture Function ComputeTextureSourceChannelMinMax

// Begin Class UTexture
void UTexture::GetCompositeTexture_WrapperImpl(const void* Object, void* OutValue)
{
#if WITH_EDITORONLY_DATA
	const UTexture* Obj = (const UTexture*)Object;
	UTexture*& Result = *(UTexture**)OutValue;
	Result = (UTexture*)Obj->GetCompositeTexture();
#endif // WITH_EDITORONLY_DATA
}
void UTexture::SetCompositeTexture_WrapperImpl(void* Object, const void* InValue)
{
#if WITH_EDITORONLY_DATA
	UTexture* Obj = (UTexture*)Object;
	UTexture*& Value = *(UTexture**)InValue;
	Obj->SetCompositeTexture(Value);
#endif // WITH_EDITORONLY_DATA
}
void UTexture::StaticRegisterNativesUTexture()
{
	UClass* Class = UTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreDownscalePropertiesEditable", &UTexture::execAreDownscalePropertiesEditable },
		{ "Blueprint_GetMemorySize", &UTexture::execBlueprint_GetMemorySize },
		{ "Blueprint_GetTextureSourceDiskAndMemorySize", &UTexture::execBlueprint_GetTextureSourceDiskAndMemorySize },
		{ "ComputeTextureSourceChannelMinMax", &UTexture::execComputeTextureSourceChannelMinMax },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture);
UClass* Z_Construct_UClass_UTexture_NoRegister()
{
	return UTexture::StaticClass();
}
struct Z_Construct_UClass_UTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/Texture.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Comment", "/* Dynamic textures will have ! Source.IsValid() ;\n\x09""Also in UEFN , Textures from the cooked-only texture library.  Always check Source.IsValid before using Source. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Dynamic textures will have ! Source.IsValid() ;\n      Also in UEFN , Textures from the cooked-only texture library.  Always check Source.IsValid before using Source." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for this material, used for caching during distributed lighting */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Unique ID for this material, used for caching during distributed lighting" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Brightness Curve" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Static texture \"vibrance\" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Vibrance" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture \"vibrance\" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Saturation" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "RGBCurve" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Hue" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Min Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Max Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNoAlpha_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If enabled, the texture's alpha channel will be forced to opaque for any compressed texture output format.  Does not apply if output format is uncompressed RGBA. */" },
		{ "DisplayName", "Compress Without Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If enabled, the texture's alpha channel will be forced to opaque for any compressed texture output format.  Does not apply if output format is uncompressed RGBA." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionForceAlpha_MetaData[] = {
		{ "Comment", "/** If true, force alpha channel in output format when possible, eg. for AutoDXT BC1/BC3 choice **/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, force alpha channel in output format when possible, eg. for AutoDXT BC1/BC3 choice *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNone_MetaData[] = {
		{ "Comment", "/** If true, force the texture to be uncompressed no matter the format. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, force the texture to be uncompressed no matter the format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressFinal_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If enabled, compress with Final quality during this Editor session. */" },
		{ "DisplayName", "Editor Show Final Encode" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "If enabled, compress with Final quality during this Editor session." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferCompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If enabled, defer compression of the texture until save or manually compressed in the texture editor. */" },
		{ "DisplayName", "Editor Defer Compression" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "If enabled, defer compression of the texture until save or manually compressed in the texture editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** How aggressively should any relevant lossy compression be applied. For compressors that support EncodeSpeed (i.e. Oodle), this is only\n\x09*\x09""applied if enabled (see Project Settings -> Texture Encoding). Note that this is *in addition* to any\n\x09*\x09unavoidable loss due to the target format - selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "How aggressively should any relevant lossy compression be applied. For compressors that support EncodeSpeed (i.e. Oodle), this is only\n     applied if enabled (see Project Settings -> Texture Encoding). Note that this is *in addition* to any\n     unavoidable loss due to the target format - selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OodleTextureSdkVersion_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Oodle Texture SDK Version to encode with.  Enter 'latest' to update; 'None' preserves legacy encoding to avoid patches. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Oodle Texture SDK Version to encode with.  Enter 'latest' to update; 'None' preserves legacy encoding to avoid patches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTextureSize_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform. */" },
		{ "DisplayName", "Maximum Texture Size" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The compression quality for generated ASTC textures (i.e. mobile platform textures). */" },
		{ "DisplayName", "ASTC Compression Quality" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The compression quality for generated ASTC textures (i.e. mobile platform textures)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionCacheId_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Change this optional ID to force the texture to be recompressed by changing its cache key. */" },
		{ "DisplayName", "Compression Cache ID" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Change this optional ID to force the texture to be recompressed by changing its cache key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDitherMipMapAlpha_MetaData[] = {
		{ "Comment", "/** Removed. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoScaleMipsForAlphaCoverage_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Whether mip RGBA should be scaled to preserve the number of pixels with Value >= AlphaCoverageThresholds.  AlphaCoverageThresholds are ignored if this is off. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether mip RGBA should be scaled to preserve the number of pixels with Value >= AlphaCoverageThresholds.  AlphaCoverageThresholds are ignored if this is off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCoverageThresholds_MetaData[] = {
		{ "Category", "Texture" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Alpha values per channel to compare to when preserving alpha coverage. 0 means disable channel.  Typical good values in 0.5 - 0.9, not 1.0 */" },
		{ "EditCondition", "bDoScaleMipsForAlphaCoverage" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Alpha values per channel to compare to when preserving alpha coverage. 0 means disable channel.  Typical good values in 0.5 - 0.9, not 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNewMipFilter_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Use faster mip generation filter, usually the same result but occasionally causes color shift in high contrast areas. */" },
		{ "DisplayName", "Use Fast MipGen Filter" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Use faster mip generation filter, usually the same result but occasionally causes color shift in high contrast areas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveBorder_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** When true the texture's border will be preserved during mipmap generation. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true the texture's border will be preserved during mipmap generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipGreenChannel_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** When true the texture's green channel will be inverted. This is useful for some normal maps. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true the texture's green channel will be inverted. This is useful for some normal maps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerOfTwoMode_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** How to pad the texture to a power of 2 size (if necessary) */" },
		{ "DisplayName", "Padding and Resizing" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "How to pad the texture to a power of 2 size (if necessary)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaddingColor_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The color used to pad the texture out if it is padded due to PowerOfTwoMode */" },
		{ "EditCondition", "(PowerOfTwoMode == ETexturePowerOfTwoSetting::PadToPowerOfTwo || PowerOfTwoMode == ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo) && !bPadWithBorderColor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The color used to pad the texture out if it is padded due to PowerOfTwoMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPadWithBorderColor_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** If set to true, texture padding will be performed using colors of the border pixels. This can be used to improve quality of the generated mipmaps for padded textures. */" },
		{ "EditCondition", "PowerOfTwoMode == ETexturePowerOfTwoSetting::PadToPowerOfTwo || PowerOfTwoMode == ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If set to true, texture padding will be performed using colors of the border pixels. This can be used to improve quality of the generated mipmaps for padded textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizeDuringBuildX_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Width of the resized texture when using \"Resize To Specific Resolution\" padding and resizing option. If set to zero, original width will be used. */" },
		{ "EditCondition", "PowerOfTwoMode == ETexturePowerOfTwoSetting::ResizeToSpecificResolution" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Width of the resized texture when using \"Resize To Specific Resolution\" padding and resizing option. If set to zero, original width will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizeDuringBuildY_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Width of the resized texture when using \"Resize To Specific Resolution\" padding and resizing option. If set to zero, original height will be used. */" },
		{ "EditCondition", "PowerOfTwoMode == ETexturePowerOfTwoSetting::ResizeToSpecificResolution" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Width of the resized texture when using \"Resize To Specific Resolution\" padding and resizing option. If set to zero, original height will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyThreshold_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match) */" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** The color that will be replaced with transparent black if chroma keying is enabled */" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The color that will be replaced with transparent black if chroma keying is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Per asset specific setting to define the mip-map generation properties like sharpening and kernel size. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Per asset specific setting to define the mip-map generation properties like sharpening and kernel size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeTexture_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Compositing" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "RequiredAssetDataTags", "IsSourceValid=True" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeTextureMode_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/* defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositePower_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/**\n\x09 * default 1, high values result in a stronger effect e.g 1, 2, 4, 8\n\x09 * this is not a slider because the texture update would not be fast enough\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "default 1, high values result in a stronger effect e.g 1, 2, 4, 8\nthis is not a slider because the texture update would not be fast enough" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerFormatSettings_MetaData[] = {
		{ "Comment", "/**\n\x09 * Array of settings used to control the format of given layer\n\x09 * If this array doesn't include an entry for a given layer, values from UTexture will be used\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of settings used to control the format of given layer\nIf this array doesn't include an entry for a given layer, values from UTexture will be used" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelIndex_MetaData[] = {
		{ "Comment", "/*\n\x09 * Level scope index of this texture. It is used to reduce the amount of lookup to map a texture to its level index.\n\x09 * Useful when building texture streaming data, as well as when filling the texture streamer with precomputed data.\n     * It relates to FStreamingTextureBuildInfo::TextureLevelIndex and also the index in ULevel::StreamingTextureGuids. \n\x09 * Default value of -1, indicates that the texture has an unknown index (not yet processed). At level load time, \n\x09 * -2 is also used to indicate that the texture has been processed but no entry were found in the level table.\n\x09 * After any of these processes, the LevelIndex is reset to INDEX_NONE. Making it ready for the next level task.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "* Level scope index of this texture. It is used to reduce the amount of lookup to map a texture to its level index.\n* Useful when building texture streaming data, as well as when filling the texture streamer with precomputed data.\n* It relates to FStreamingTextureBuildInfo::TextureLevelIndex and also the index in ULevel::StreamingTextureGuids.\n* Default value of -1, indicates that the texture has an unknown index (not yet processed). At level load time,\n* -2 is also used to indicate that the texture has been processed but no entry were found in the level table.\n* After any of these processes, the LevelIndex is reset to INDEX_NONE. Making it ready for the next level task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** A bias to the index of the top mip level to use.  That is, number of mip levels to drop when cooking. */" },
		{ "DisplayName", "LOD Bias" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "A bias to the index of the top mip level to use.  That is, number of mip levels to drop when cooking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Compression settings to use when building the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Compression settings to use when building the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The texture filtering mode to use when sampling this texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The texture filtering mode to use when sampling this texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipLoadOptions_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The texture mip load options. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The texture mip load options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookPlatformTilingSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If the platform supports it, tile the texture when cooking, or keep it linear and tile it when it's actually submitted to the GPU. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If the platform supports it, tile the texture when cooking, or keep it linear and tile it when it's actually submitted to the GPU." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOodlePreserveExtremes_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If set to true, then Oodle encoder preserves 0 and 255 (0.0 and 1.0) values exactly in alpha channel for BC3/BC7 and in all channels for BC4/BC5. */" },
		{ "DisplayName", "Preserve Extremes When Compressing With Oodle" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If set to true, then Oodle encoder preserves 0 and 255 (0.0 and 1.0) values exactly in alpha channel for BC3/BC7 and in all channels for BC4/BC5." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Texture group this texture belongs to */" },
		{ "DisplayName", "Texture Group" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture group this texture belongs to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Downscale_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Downscale source texture, applied only to 2d textures without mips \n\x09 * < 1.0 - use scale value from texture group\n\x09 * 1.0 - do not scale texture\n\x09 * > 1.0 - scale texure\n\x09 */" },
		{ "EditCondition", "AreDownscalePropertiesEditable" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Downscale source texture, applied only to 2d textures without mips\n< 1.0 - use scale value from texture group\n1.0 - do not scale texture\n> 1.0 - scale texure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownscaleOptions_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Texture downscaling options */" },
		{ "EditCondition", "AreDownscalePropertiesEditable" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture downscaling options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** \n\x09* Whether the texture will be encoded to a gpu format and uploaded to the graphics card, or kept on the CPU for access by gamecode / blueprint. \n\x09* For CPU availability, the texture will still upload a tiny black texture as a placeholder. Only applies to 2d textures.\n\x09*/" },
		{ "DisplayName", "Availability" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether the texture will be encoded to a gpu format and uploaded to the graphics card, or kept on the CPU for access by gamecode / blueprint.\nFor CPU availability, the texture will still upload a tiny black texture as a placeholder. Only applies to 2d textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Whether Texture and its source are in SRGB Gamma color space.  Can only be used with 8-bit and compressed formats.  This should be unchecked if using alpha channels individually as masks. */" },
		{ "DisplayName", "sRGB" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether Texture and its source are in SRGB Gamma color space.  Can only be used with 8-bit and compressed formats.  This should be unchecked if using alpha channels individually as masks." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeNormals_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/* Normalize colors in Normal Maps after mip generation for better and sharper quality; recommended on if not required to match legacy behavior. */" },
		{ "DisplayName", "Normalize after making mips" },
		{ "EditCondition", "CompressionSettings==1" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Normalize colors in Normal Maps after mip generation for better and sharper quality; recommended on if not required to match legacy behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyGamma_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB. */" },
		{ "DisplayName", "sRGB Use Legacy Gamma" },
		{ "EditCondition", "SRGB" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceColorSettings_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Texture color management settings: source encoding and color space. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture color management settings: source encoding and color space." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoTiling_MetaData[] = {
		{ "Comment", "/** If true, the RHI texture will be created using TexCreate_NoTiling */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, the RHI texture will be created using TexCreate_NoTiling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureStreaming_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Is this texture streamed in using VT\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Is this texture streamed in using VT" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionYCoCg_MetaData[] = {
		{ "Comment", "/** If true the texture stores YCoCg. Blue channel will be filled with a precision scale during compression. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true the texture stores YCoCg. Blue channel will be filled with a precision scale during compression." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotOfflineProcessed_MetaData[] = {
		{ "Comment", "/** If true, the RHI texture will be created without TexCreate_OfflineProcessed.\n\x09  * This controls what format the data will be uploaded to RHI.\n\x09  * Offline processed textures may have platform specific tiling applied, and/or have their mip tails pre-combined into a single mip's data.\n\x09  * If NotOffline, then it will expect data to be uploaded in standard per-mip layouts.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, the RHI texture will be created without TexCreate_OfflineProcessed.\nThis controls what format the data will be uploaded to RHI.\nOffline processed textures may have platform specific tiling applied, and/or have their mip tails pre-combined into a single mip's data.\nIf NotOffline, then it will expect data to be uploaded in standard per-mip layouts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData[] = {
		{ "Comment", "/** Whether the async resource release process has already been kicked off or not */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether the async resource release process has already been kicked off or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
	static void NewProp_CompressionNoAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNoAlpha;
	static void NewProp_CompressionForceAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionForceAlpha;
	static void NewProp_CompressionNone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNone;
	static void NewProp_CompressFinal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressFinal;
	static void NewProp_DeferCompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DeferCompression;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OodleTextureSdkVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionQuality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompressionCacheId;
	static void NewProp_bDitherMipMapAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherMipMapAlpha;
	static void NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoScaleMipsForAlphaCoverage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCoverageThresholds;
	static void NewProp_bUseNewMipFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNewMipFilter;
	static void NewProp_bPreserveBorder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveBorder;
	static void NewProp_bFlipGreenChannel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipGreenChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PowerOfTwoMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaddingColor;
	static void NewProp_bPadWithBorderColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPadWithBorderColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResizeDuringBuildX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResizeDuringBuildY;
	static void NewProp_bChromaKeyTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeyThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeTexture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompositeTextureMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompositePower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerFormatSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerFormatSettings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipLoadOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MipLoadOptions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CookPlatformTilingSettings;
	static void NewProp_bOodlePreserveExtremes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOodlePreserveExtremes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Downscale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DownscaleOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DownscaleOptions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Availability;
	static void NewProp_SRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
#if WITH_EDITORONLY_DATA
	static void NewProp_bNormalizeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeNormals;
	static void NewProp_bUseLegacyGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyGamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceColorSettings;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bNoTiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoTiling;
	static void NewProp_VirtualTextureStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VirtualTextureStreaming;
	static void NewProp_CompressionYCoCg_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionYCoCg;
	static void NewProp_bNotOfflineProcessed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotOfflineProcessed;
	static void NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsyncResourceReleaseHasBeenStarted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable, "AreDownscalePropertiesEditable" }, // 1698173080
		{ &Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize, "Blueprint_GetMemorySize" }, // 589259247
		{ &Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize, "Blueprint_GetTextureSourceDiskAndMemorySize" }, // 952398100
		{ &Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax, "ComputeTextureSourceChannelMinMax" }, // 105577081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, Source), Z_Construct_UScriptStruct_FTextureSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1850453829
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingGuid_MetaData), NewProp_LightingGuid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, SourceFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightness_MetaData), NewProp_AdjustBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustBrightnessCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightnessCurve_MetaData), NewProp_AdjustBrightnessCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustVibrance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustVibrance_MetaData), NewProp_AdjustVibrance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustSaturation_MetaData), NewProp_AdjustSaturation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve = { "AdjustRGBCurve", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustRGBCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustRGBCurve_MetaData), NewProp_AdjustRGBCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustHue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustHue_MetaData), NewProp_AdjustHue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustMinAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMinAlpha_MetaData), NewProp_AdjustMinAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AdjustMaxAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMaxAlpha_MetaData), NewProp_AdjustMaxAlpha_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_SetBit(void* Obj)
{
	((UTexture*)Obj)->CompressionNoAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha = { "CompressionNoAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionNoAlpha_MetaData), NewProp_CompressionNoAlpha_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionForceAlpha_SetBit(void* Obj)
{
	((UTexture*)Obj)->CompressionForceAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionForceAlpha = { "CompressionForceAlpha", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionForceAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionForceAlpha_MetaData), NewProp_CompressionForceAlpha_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_SetBit(void* Obj)
{
	((UTexture*)Obj)->CompressionNone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone = { "CompressionNone", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionNone_MetaData), NewProp_CompressionNone_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_CompressFinal_SetBit(void* Obj)
{
	((UTexture*)Obj)->CompressFinal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressFinal = { "CompressFinal", nullptr, (EPropertyFlags)0x0090000800002005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressFinal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressFinal_MetaData), NewProp_CompressFinal_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_SetBit(void* Obj)
{
	((UTexture*)Obj)->DeferCompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression = { "DeferCompression", nullptr, (EPropertyFlags)0x0090000800002005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferCompression_MetaData), NewProp_DeferCompression_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LossyCompressionAmount_MetaData), NewProp_LossyCompressionAmount_MetaData) }; // 1608486090
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_OodleTextureSdkVersion = { "OodleTextureSdkVersion", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, OodleTextureSdkVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OodleTextureSdkVersion_MetaData), NewProp_OodleTextureSdkVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize = { "MaxTextureSize", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, MaxTextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTextureSize_MetaData), NewProp_MaxTextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, CompressionQuality), Z_Construct_UEnum_Engine_ETextureCompressionQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionQuality_MetaData), NewProp_CompressionQuality_MetaData) }; // 301197728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionCacheId = { "CompressionCacheId", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, CompressionCacheId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionCacheId_MetaData), NewProp_CompressionCacheId_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_SetBit(void* Obj)
{
	((UTexture*)Obj)->bDitherMipMapAlpha_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha = { "bDitherMipMapAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDitherMipMapAlpha_MetaData), NewProp_bDitherMipMapAlpha_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj)
{
	((UTexture*)Obj)->bDoScaleMipsForAlphaCoverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage = { "bDoScaleMipsForAlphaCoverage", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoScaleMipsForAlphaCoverage_MetaData), NewProp_bDoScaleMipsForAlphaCoverage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds = { "AlphaCoverageThresholds", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AlphaCoverageThresholds), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCoverageThresholds_MetaData), NewProp_AlphaCoverageThresholds_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bUseNewMipFilter_SetBit(void* Obj)
{
	((UTexture*)Obj)->bUseNewMipFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bUseNewMipFilter = { "bUseNewMipFilter", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bUseNewMipFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNewMipFilter_MetaData), NewProp_bUseNewMipFilter_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_SetBit(void* Obj)
{
	((UTexture*)Obj)->bPreserveBorder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder = { "bPreserveBorder", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveBorder_MetaData), NewProp_bPreserveBorder_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_SetBit(void* Obj)
{
	((UTexture*)Obj)->bFlipGreenChannel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel = { "bFlipGreenChannel", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipGreenChannel_MetaData), NewProp_bFlipGreenChannel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode = { "PowerOfTwoMode", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, PowerOfTwoMode), Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerOfTwoMode_MetaData), NewProp_PowerOfTwoMode_MetaData) }; // 3777802123
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor = { "PaddingColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, PaddingColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaddingColor_MetaData), NewProp_PaddingColor_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bPadWithBorderColor_SetBit(void* Obj)
{
	((UTexture*)Obj)->bPadWithBorderColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bPadWithBorderColor = { "bPadWithBorderColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bPadWithBorderColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPadWithBorderColor_MetaData), NewProp_bPadWithBorderColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ResizeDuringBuildX = { "ResizeDuringBuildX", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, ResizeDuringBuildX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizeDuringBuildX_MetaData), NewProp_ResizeDuringBuildX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ResizeDuringBuildY = { "ResizeDuringBuildY", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, ResizeDuringBuildY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizeDuringBuildY_MetaData), NewProp_ResizeDuringBuildY_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_SetBit(void* Obj)
{
	((UTexture*)Obj)->bChromaKeyTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture = { "bChromaKeyTexture", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChromaKeyTexture_MetaData), NewProp_bChromaKeyTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold = { "ChromaKeyThreshold", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, ChromaKeyThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChromaKeyThreshold_MetaData), NewProp_ChromaKeyThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor = { "ChromaKeyColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, ChromaKeyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChromaKeyColor_MetaData), NewProp_ChromaKeyColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipGenSettings_MetaData), NewProp_MipGenSettings_MetaData) }; // 3164791778
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture = { "CompositeTexture", nullptr, (EPropertyFlags)0x0114000800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UTexture::SetCompositeTexture_WrapperImpl, &UTexture::GetCompositeTexture_WrapperImpl, 1, STRUCT_OFFSET(UTexture, CompositeTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeTexture_MetaData), NewProp_CompositeTexture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode = { "CompositeTextureMode", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, CompositeTextureMode), Z_Construct_UEnum_Engine_ECompositeTextureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeTextureMode_MetaData), NewProp_CompositeTextureMode_MetaData) }; // 1369033822
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower = { "CompositePower", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, CompositePower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositePower_MetaData), NewProp_CompositePower_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_Inner = { "LayerFormatSettings", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTextureFormatSettings, METADATA_PARAMS(0, nullptr) }; // 2330103393
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings = { "LayerFormatSettings", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, LayerFormatSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerFormatSettings_MetaData), NewProp_LayerFormatSettings_MetaData) }; // 2330103393
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LevelIndex = { "LevelIndex", nullptr, (EPropertyFlags)0x0010000400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, LevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelIndex_MetaData), NewProp_LevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_MetaData), NewProp_LODBias_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionSettings_MetaData), NewProp_CompressionSettings_MetaData) }; // 2977833603
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 525537855
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions = { "MipLoadOptions", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, MipLoadOptions), Z_Construct_UEnum_Engine_ETextureMipLoadOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipLoadOptions_MetaData), NewProp_MipLoadOptions_MetaData) }; // 3880485984
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CookPlatformTilingSettings = { "CookPlatformTilingSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, CookPlatformTilingSettings), Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookPlatformTilingSettings_MetaData), NewProp_CookPlatformTilingSettings_MetaData) }; // 1935386549
void Z_Construct_UClass_UTexture_Statics::NewProp_bOodlePreserveExtremes_SetBit(void* Obj)
{
	((UTexture*)Obj)->bOodlePreserveExtremes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bOodlePreserveExtremes = { "bOodlePreserveExtremes", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bOodlePreserveExtremes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOodlePreserveExtremes_MetaData), NewProp_bOodlePreserveExtremes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODGroup_MetaData), NewProp_LODGroup_MetaData) }; // 2065735531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Downscale = { "Downscale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, Downscale), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Downscale_MetaData), NewProp_Downscale_MetaData) }; // 50753708
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions = { "DownscaleOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, DownscaleOptions), Z_Construct_UEnum_Engine_ETextureDownscaleOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownscaleOptions_MetaData), NewProp_DownscaleOptions_MetaData) }; // 3416087455
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, Availability), Z_Construct_UEnum_Engine_ETextureAvailability, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Availability_MetaData), NewProp_Availability_MetaData) }; // 1645037997
void Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_SetBit(void* Obj)
{
	((UTexture*)Obj)->SRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SRGB_MetaData), NewProp_SRGB_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UTexture_Statics::NewProp_bNormalizeNormals_SetBit(void* Obj)
{
	((UTexture*)Obj)->bNormalizeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bNormalizeNormals = { "bNormalizeNormals", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bNormalizeNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeNormals_MetaData), NewProp_bNormalizeNormals_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_SetBit(void* Obj)
{
	((UTexture*)Obj)->bUseLegacyGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma = { "bUseLegacyGamma", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyGamma_MetaData), NewProp_bUseLegacyGamma_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SourceColorSettings = { "SourceColorSettings", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, SourceColorSettings), Z_Construct_UScriptStruct_FTextureSourceColorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceColorSettings_MetaData), NewProp_SourceColorSettings_MetaData) }; // 1293317998
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_SetBit(void* Obj)
{
	((UTexture*)Obj)->bNoTiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling = { "bNoTiling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoTiling_MetaData), NewProp_bNoTiling_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_SetBit(void* Obj)
{
	((UTexture*)Obj)->VirtualTextureStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming = { "VirtualTextureStreaming", nullptr, (EPropertyFlags)0x0010050000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureStreaming_MetaData), NewProp_VirtualTextureStreaming_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_SetBit(void* Obj)
{
	((UTexture*)Obj)->CompressionYCoCg = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg = { "CompressionYCoCg", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionYCoCg_MetaData), NewProp_CompressionYCoCg_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_SetBit(void* Obj)
{
	((UTexture*)Obj)->bNotOfflineProcessed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed = { "bNotOfflineProcessed", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotOfflineProcessed_MetaData), NewProp_bNotOfflineProcessed_MetaData) };
void Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit(void* Obj)
{
	((UTexture*)Obj)->bAsyncResourceReleaseHasBeenStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted = { "bAsyncResourceReleaseHasBeenStarted", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData), NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x01240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionForceAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressFinal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_OodleTextureSdkVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionCacheId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bUseNewMipFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bPadWithBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ResizeDuringBuildX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ResizeDuringBuildY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CookPlatformTilingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bOodlePreserveExtremes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Downscale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Availability_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Availability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SRGB,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bNormalizeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SourceColorSettings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTexture_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UTexture, IInterface_AssetUserData), false },  // 505316468
	{ Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister, (int32)VTABLE_OFFSET(UTexture, IInterface_AsyncCompilation), false },  // 1385598614
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture_Statics::ClassParams = {
	&UTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTexture_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTexture()
{
	if (!Z_Registration_Info_UClass_UTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture.OuterSingleton, Z_Construct_UClass_UTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTexture>()
{
	return UTexture::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture)
// End Class UTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTextureSourceLayerColorInfo::StaticStruct, Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::NewStructOps, TEXT("TextureSourceLayerColorInfo"), &Z_Registration_Info_UScriptStruct_TextureSourceLayerColorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureSourceLayerColorInfo), 4261127900U) },
		{ FTextureSourceBlock::StaticStruct, Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewStructOps, TEXT("TextureSourceBlock"), &Z_Registration_Info_UScriptStruct_TextureSourceBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureSourceBlock), 970697138U) },
		{ FTextureSource::StaticStruct, Z_Construct_UScriptStruct_FTextureSource_Statics::NewStructOps, TEXT("TextureSource"), &Z_Registration_Info_UScriptStruct_TextureSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureSource), 1850453829U) },
		{ FTexturePlatformData::StaticStruct, Z_Construct_UScriptStruct_FTexturePlatformData_Statics::NewStructOps, TEXT("TexturePlatformData"), &Z_Registration_Info_UScriptStruct_TexturePlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTexturePlatformData), 855409226U) },
		{ FTextureFormatSettings::StaticStruct, Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewStructOps, TEXT("TextureFormatSettings"), &Z_Registration_Info_UScriptStruct_TextureFormatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureFormatSettings), 2330103393U) },
		{ FTextureSourceColorSettings::StaticStruct, Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewStructOps, TEXT("TextureSourceColorSettings"), &Z_Registration_Info_UScriptStruct_TextureSourceColorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureSourceColorSettings), 1293317998U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTexture, UTexture::StaticClass, TEXT("UTexture"), &Z_Registration_Info_UClass_UTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture), 255381092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_556837058(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
