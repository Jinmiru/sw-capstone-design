// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileSet.h"
#include "Paper2D/Classes/IntMargin.h"
#include "Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileSet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FIntMargin();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileMetadata();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileSetTerrain();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FPaperTileMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperTileMetadata;
class UScriptStruct* FPaperTileMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperTileMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileMetadata, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_PaperTileMetadata.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileMetadata>()
{
	return FPaperTileMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperTileMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Information about a single tile in a tile set\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Information about a single tile in a tile set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDataName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// A tag that can be used for grouping and categorizing (consider using it as the index into a UDataTable asset).\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "A tag that can be used for grouping and categorizing (consider using it as the index into a UDataTable asset)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Collision data for the tile\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Collision data for the tile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMembership_MetaData[] = {
		{ "Comment", "// Indexes into the Terrains array of the owning tile set, in counterclockwise order starting from top-left\n// 0xFF indicates no membership.\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Indexes into the Terrains array of the owning tile set, in counterclockwise order starting from top-left\n0xFF indicates no membership." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_UserDataName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TerrainMembership;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName = { "UserDataName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTileMetadata, UserDataName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDataName_MetaData), NewProp_UserDataName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTileMetadata, CollisionData), Z_Construct_UScriptStruct_FSpriteGeometryCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionData_MetaData), NewProp_CollisionData_MetaData) }; // 826102719
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership = { "TerrainMembership", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(TerrainMembership, FPaperTileMetadata), STRUCT_OFFSET(FPaperTileMetadata, TerrainMembership), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMembership_MetaData), NewProp_TerrainMembership_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"PaperTileMetadata",
	Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers),
	sizeof(FPaperTileMetadata),
	alignof(FPaperTileMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperTileMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperTileMetadata.InnerSingleton, Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperTileMetadata.InnerSingleton;
}
// End ScriptStruct FPaperTileMetadata

// Begin ScriptStruct FPaperTileSetTerrain
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperTileSetTerrain;
class UScriptStruct* FPaperTileSetTerrain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileSetTerrain, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileSetTerrain"));
	}
	return Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileSetTerrain>()
{
	return FPaperTileSetTerrain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Information about a terrain type\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Information about a terrain type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterTileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TerrainName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterTileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileSetTerrain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName = { "TerrainName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTileSetTerrain, TerrainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainName_MetaData), NewProp_TerrainName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex = { "CenterTileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTileSetTerrain, CenterTileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterTileIndex_MetaData), NewProp_CenterTileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"PaperTileSetTerrain",
	Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers),
	sizeof(FPaperTileSetTerrain),
	alignof(FPaperTileSetTerrain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperTileSetTerrain()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.InnerSingleton, Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.InnerSingleton;
}
// End ScriptStruct FPaperTileSetTerrain

// Begin Class UPaperTileSet
void UPaperTileSet::StaticRegisterNativesUPaperTileSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTileSet);
UClass* Z_Construct_UClass_UPaperTileSet_NoRegister()
{
	return UPaperTileSet::StaticClass();
}
struct Z_Construct_UClass_UPaperTileSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A tile set is a collection of tiles pulled from a texture that can be used to fill out a tile map.\n *\n * @see UPaperTileMap, UPaperTileMapComponent\n */" },
		{ "IncludePath", "PaperTileSet.h" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "A tile set is a collection of tiles pulled from a texture that can be used to fill out a tile map.\n\n@see UPaperTileMap, UPaperTileMapComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "1" },
		{ "Comment", "// The width and height of a single tile (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The width and height of a single tile (in pixels)" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSheet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "// The tile sheet texture associated with this tile set\n" },
		{ "DisplayName", "Tile Sheet Texture" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The tile sheet texture associated with this tile set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSourceTextures_MetaData[] = {
		{ "Category", "TileSet" },
		{ "Comment", "// Additional source textures for other slots\n" },
		{ "DisplayName", "Additional Textures" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Additional source textures for other slots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderMargin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of padding around the border of the tile sheet (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The amount of padding around the border of the tile sheet (in pixels)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerTileSpacing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of padding between tiles in the tile sheet (in pixels)\n" },
		{ "DisplayName", "Per-Tile Spacing" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The amount of padding between tiles in the tile sheet (in pixels)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawingOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "// The drawing offset for tiles from this set (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The drawing offset for tiles from this set (in pixels)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "/** The background color displayed in the tile set viewer */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The background color displayed in the tile set viewer" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthInTiles_MetaData[] = {
		{ "Comment", "// Cached width of this tile set (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Cached width of this tile set (in tiles)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightInTiles_MetaData[] = {
		{ "Comment", "// Cached height of this tile set (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Cached height of this tile set (in tiles)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedWidth_MetaData[] = {
		{ "Comment", "// Allocated width of the per-tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Allocated width of the per-tile data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedHeight_MetaData[] = {
		{ "Comment", "// Allocated height of the per-tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Allocated height of the per-tile data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerTileData_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Per-tile information\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Per-tile information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Terrains_MetaData[] = {
		{ "Comment", "// Terrain information\n//@TODO: TileMapTerrains: (EditAnywhere, Category=Sprite)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Terrain information\n@TODO: TileMapTerrains: (EditAnywhere, Category=Sprite)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSheet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalSourceTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSourceTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderMargin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerTileSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawingOffset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WidthInTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightInTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerTileData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerTileData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Terrains_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Terrains;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Margin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Spacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, TileSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet = { "TileSheet", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, TileSheet), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSheet_MetaData), NewProp_TileSheet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_Inner = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0144010000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, AdditionalSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSourceTextures_MetaData), NewProp_AdditionalSourceTextures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin = { "BorderMargin", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, BorderMargin), Z_Construct_UScriptStruct_FIntMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderMargin_MetaData), NewProp_BorderMargin_MetaData) }; // 3867409075
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing = { "PerTileSpacing", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, PerTileSpacing), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerTileSpacing_MetaData), NewProp_PerTileSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset = { "DrawingOffset", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, DrawingOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawingOffset_MetaData), NewProp_DrawingOffset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles = { "WidthInTiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, WidthInTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthInTiles_MetaData), NewProp_WidthInTiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles = { "HeightInTiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, HeightInTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightInTiles_MetaData), NewProp_HeightInTiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth = { "AllocatedWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, AllocatedWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedWidth_MetaData), NewProp_AllocatedWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight = { "AllocatedHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, AllocatedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedHeight_MetaData), NewProp_AllocatedHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_Inner = { "PerTileData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperTileMetadata, METADATA_PARAMS(0, nullptr) }; // 228432975
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData = { "PerTileData", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, PerTileData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerTileData_MetaData), NewProp_PerTileData_MetaData) }; // 228432975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_Inner = { "Terrains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperTileSetTerrain, METADATA_PARAMS(0, nullptr) }; // 3620965824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains = { "Terrains", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, Terrains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Terrains_MetaData), NewProp_Terrains_MetaData) }; // 3620965824
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, TileWidth_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileWidth_MetaData), NewProp_TileWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, TileHeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileHeight_MetaData), NewProp_TileHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, Margin_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Margin_MetaData), NewProp_Margin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileSet, Spacing_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacing_MetaData), NewProp_Spacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperTileSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileSet_Statics::ClassParams = {
	&UPaperTileSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperTileSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperTileSet()
{
	if (!Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton, Z_Construct_UClass_UPaperTileSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperTileSet>()
{
	return UPaperTileSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileSet);
UPaperTileSet::~UPaperTileSet() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileSet)
// End Class UPaperTileSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperTileMetadata::StaticStruct, Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewStructOps, TEXT("PaperTileMetadata"), &Z_Registration_Info_UScriptStruct_PaperTileMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperTileMetadata), 228432975U) },
		{ FPaperTileSetTerrain::StaticStruct, Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewStructOps, TEXT("PaperTileSetTerrain"), &Z_Registration_Info_UScriptStruct_PaperTileSetTerrain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperTileSetTerrain), 3620965824U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTileSet, UPaperTileSet::StaticClass, TEXT("UPaperTileSet"), &Z_Registration_Info_UClass_UPaperTileSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTileSet), 3556391650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_866293073(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
