// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FPaperTileInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperTileInfo;
class UScriptStruct* FPaperTileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperTileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileInfo, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PaperTileInfo.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileInfo>()
{
	return FPaperTileInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperTileInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the contents of a tile map cell\n" },
		{ "HasNativeBreak", "/Script/Paper2D.TileMapBlueprintLibrary.BreakTile" },
		{ "HasNativeMake", "/Script/Paper2D.TileMapBlueprintLibrary.MakeTile" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "This is the contents of a tile map cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The tile set that this tile comes from\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The tile set that this tile comes from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedTileIndex_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// This is the index of the current tile within the tile set\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "This is the index of the current tile within the tile set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PackedTileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTileInfo, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSet_MetaData), NewProp_TileSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_PackedTileIndex = { "PackedTileIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTileInfo, PackedTileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedTileIndex_MetaData), NewProp_PackedTileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_TileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_PackedTileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"PaperTileInfo",
	Z_Construct_UScriptStruct_FPaperTileInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::PropPointers),
	sizeof(FPaperTileInfo),
	alignof(FPaperTileInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperTileInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperTileInfo.InnerSingleton, Z_Construct_UScriptStruct_FPaperTileInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperTileInfo.InnerSingleton;
}
// End ScriptStruct FPaperTileInfo

// Begin Class UPaperTileLayer
void UPaperTileLayer::StaticRegisterNativesUPaperTileLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTileLayer);
UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister()
{
	return UPaperTileLayer::StaticClass();
}
struct Z_Construct_UClass_UPaperTileLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// This class represents a single layer in a tile map.  All layers in the map must have the size dimensions.\n" },
		{ "IncludePath", "PaperTileLayer.h" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "This class represents a single layer in a tile map.  All layers in the map must have the size dimensions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Name of the layer\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Name of the layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerWidth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Width of the layer (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Width of the layer (in tiles)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Height of the layer (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Height of the layer (in tiles)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Is this layer currently hidden in the editor?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Is this layer currently hidden in the editor?" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer be hidden in the game?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer be hidden in the game?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLayerCollides_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer generate collision?\n// Note: This only has an effect if the owning tile map has collision enabled\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer generate collision?\nNote: This only has an effect if the owning tile map has collision enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionThickness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer use a custom thickness for generated collision instead of the thickness setting in the tile map?\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer use a custom thickness for generated collision instead of the thickness setting in the tile map?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer use a custom offset for generated collision instead of the layer drawing offset?\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer use a custom offset for generated collision instead of the layer drawing offset?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThicknessOverride_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// The override thickness of the collision for this layer (when bOverrideCollisionThickness is set)\n" },
		{ "EditCondition", "bOverrideCollisionThickness" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The override thickness of the collision for this layer (when bOverrideCollisionThickness is set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionOffsetOverride_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// The override offset of the collision for this layer (when bOverrideCollisionOffset is set)\n// Note: This is measured in Unreal Units (cm) from the center of the tile map component, not from the previous layer.\n" },
		{ "EditCondition", "bOverrideCollisionOffset" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The override offset of the collision for this layer (when bOverrideCollisionOffset is set)\nNote: This is measured in Unreal Units (cm) from the center of the tile map component, not from the previous layer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// The color of this layer (multiplied with the tile map color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The color of this layer (multiplied with the tile map color and passed to the material as a vertex color)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedWidth_MetaData[] = {
		{ "Comment", "// The allocated width of the tile data (used to handle resizing without data loss)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The allocated width of the tile data (used to handle resizing without data loss)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedHeight_MetaData[] = {
		{ "Comment", "// The allocated height of the tile data (used to handle resizing without data loss)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The allocated height of the tile data (used to handle resizing without data loss)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedCells_MetaData[] = {
		{ "Comment", "// The allocated tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The allocated tile data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedGrid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerHeight;
#if WITH_EDITORONLY_DATA
	static void NewProp_bHiddenInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInEditor;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bHiddenInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
	static void NewProp_bLayerCollides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLayerCollides;
	static void NewProp_bOverrideCollisionThickness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionThickness;
	static void NewProp_bOverrideCollisionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThicknessOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionOffsetOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllocatedCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllocatedCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedGrid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllocatedGrid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerWidth = { "LayerWidth", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, LayerWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerWidth_MetaData), NewProp_LayerWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerHeight = { "LayerHeight", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, LayerHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerHeight_MetaData), NewProp_LayerHeight_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor_SetBit(void* Obj)
{
	((UPaperTileLayer*)Obj)->bHiddenInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor = { "bHiddenInEditor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenInEditor_MetaData), NewProp_bHiddenInEditor_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
{
	((UPaperTileLayer*)Obj)->bHiddenInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenInGame_MetaData), NewProp_bHiddenInGame_MetaData) };
void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_SetBit(void* Obj)
{
	((UPaperTileLayer*)Obj)->bLayerCollides = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides = { "bLayerCollides", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLayerCollides_MetaData), NewProp_bLayerCollides_MetaData) };
void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_SetBit(void* Obj)
{
	((UPaperTileLayer*)Obj)->bOverrideCollisionThickness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness = { "bOverrideCollisionThickness", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCollisionThickness_MetaData), NewProp_bOverrideCollisionThickness_MetaData) };
void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_SetBit(void* Obj)
{
	((UPaperTileLayer*)Obj)->bOverrideCollisionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset = { "bOverrideCollisionOffset", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCollisionOffset_MetaData), NewProp_bOverrideCollisionOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionThicknessOverride = { "CollisionThicknessOverride", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, CollisionThicknessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionThicknessOverride_MetaData), NewProp_CollisionThicknessOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionOffsetOverride = { "CollisionOffsetOverride", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, CollisionOffsetOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionOffsetOverride_MetaData), NewProp_CollisionOffsetOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerColor = { "LayerColor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, LayerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerColor_MetaData), NewProp_LayerColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedWidth = { "AllocatedWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedWidth_MetaData), NewProp_AllocatedWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedHeight = { "AllocatedHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedHeight_MetaData), NewProp_AllocatedHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells_Inner = { "AllocatedCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(0, nullptr) }; // 3247895172
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells = { "AllocatedCells", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedCells_MetaData), NewProp_AllocatedCells_MetaData) }; // 3247895172
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, TileSet_DEPRECATED), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSet_MetaData), NewProp_TileSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid_Inner = { "AllocatedGrid", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid = { "AllocatedGrid", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedGrid_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedGrid_MetaData), NewProp_AllocatedGrid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerHeight,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionThicknessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionOffsetOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_TileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperTileLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileLayer_Statics::ClassParams = {
	&UPaperTileLayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperTileLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperTileLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperTileLayer()
{
	if (!Z_Registration_Info_UClass_UPaperTileLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTileLayer.OuterSingleton, Z_Construct_UClass_UPaperTileLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperTileLayer.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperTileLayer>()
{
	return UPaperTileLayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileLayer);
UPaperTileLayer::~UPaperTileLayer() {}
// End Class UPaperTileLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperTileInfo::StaticStruct, Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewStructOps, TEXT("PaperTileInfo"), &Z_Registration_Info_UScriptStruct_PaperTileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperTileInfo), 3247895172U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTileLayer, UPaperTileLayer::StaticClass, TEXT("UPaperTileLayer"), &Z_Registration_Info_UClass_UPaperTileLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTileLayer), 3100452383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_1809764277(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
