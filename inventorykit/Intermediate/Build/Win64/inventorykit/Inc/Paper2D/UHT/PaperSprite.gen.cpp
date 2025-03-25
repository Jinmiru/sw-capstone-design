// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSprite.h"
#include "Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSprite() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister();
PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode();
PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpritePivotMode();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteSocket();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FPaperSpriteSocket
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperSpriteSocket;
class UScriptStruct* FPaperSpriteSocket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperSpriteSocket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperSpriteSocket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperSpriteSocket, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperSpriteSocket"));
	}
	return Z_Registration_Info_UScriptStruct_PaperSpriteSocket.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperSpriteSocket>()
{
	return FPaperSpriteSocket::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Should have some nice UI and enforce unique names, etc...\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "@TODO: Should have some nice UI and enforce unique names, etc..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "// Transform in pivot space (*not* texture space)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Transform in pivot space (*not* texture space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "// Name of the socket\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Name of the socket" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperSpriteSocket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteSocket, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTransform_MetaData), NewProp_LocalTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteSocket, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_LocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"PaperSpriteSocket",
	Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::PropPointers),
	sizeof(FPaperSpriteSocket),
	alignof(FPaperSpriteSocket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteSocket()
{
	if (!Z_Registration_Info_UScriptStruct_PaperSpriteSocket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperSpriteSocket.InnerSingleton, Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperSpriteSocket.InnerSingleton;
}
// End ScriptStruct FPaperSpriteSocket

// Begin Class UPaperSprite
void UPaperSprite::StaticRegisterNativesUPaperSprite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSprite);
UClass* Z_Construct_UClass_UPaperSprite_NoRegister()
{
	return UPaperSprite::StaticClass();
}
struct Z_Construct_UClass_UPaperSprite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sprite Asset\n *\n * Stores the data necessary to render a single 2D sprite (from a region of a texture)\n * Can also contain collision shapes for the sprite.\n *\n * @see UPaperSpriteComponent\n */" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperSprite.h" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Sprite Asset\n\nStores the data necessary to render a single 2D sprite (from a region of a texture)\nCan also contain collision shapes for the sprite.\n\n@see UPaperSpriteComponent" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginInSourceImageBeforeTrimming_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Origin within SourceImage, prior to atlasing\n" },
		{ "EditCondition", "bTrimmedInSourceImage" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Origin within SourceImage, prior to atlasing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceImageDimensionBeforeTrimming_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Dimensions of SourceImage\n" },
		{ "EditCondition", "bTrimmedInSourceImage" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimensions of SourceImage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrimmedInSourceImage_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// This texture is trimmed, consider the values above\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "This texture is trimmed, consider the values above" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotatedInSourceImage_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// This texture is rotated in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "This texture is rotated in the atlas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextureDimension_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Dimension of the texture when this sprite was created\n// Used when the sprite is resized at some point\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimension of the texture when this sprite was created\nUsed when the sprite is resized at some point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceUV_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Position within SourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Position within SourceTexture (in pixels)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDimension_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Dimensions within SourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimensions within SourceTexture (in pixels)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The source texture that the sprite comes from\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The source texture that the sprite comes from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextureCacheNeverSerialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSourceTextures_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Additional source textures for other slots\n" },
		{ "DisplayName", "Additional Textures" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Additional source textures for other slots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedSourceUV_MetaData[] = {
		{ "Comment", "// Position within BakedSourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Position within BakedSourceTexture (in pixels)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedSourceDimension_MetaData[] = {
		{ "Comment", "// Dimensions within BakedSourceTexture (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Dimensions within BakedSourceTexture (in pixels)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedSourceTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The material to use on a sprite instance if not overridden (this is the default material when only one is being used, and is the translucent/masked material for Diced render geometry, slot 0)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The material to use on a sprite instance if not overridden (this is the default material when only one is being used, and is the translucent/masked material for Diced render geometry, slot 0)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// The alternate material to use on a sprite instance if not overridden (this is only used for Diced render geometry, and will be the opaque material in that case, slot 1)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The alternate material to use on a sprite instance if not overridden (this is only used for Diced render geometry, and will be the opaque material in that case, slot 1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// List of sockets on this sprite\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "List of sockets on this sprite" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteCollisionDomain_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Collision domain (no collision, 2D, or 3D)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Collision domain (no collision, 2D, or 3D)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelsPerUnrealUnit_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The scaling factor between pixels and Unreal units (cm) (e.g., 0.64 would make a 64 pixel wide sprite take up 100 cm)\n" },
		{ "DisplayName", "Pixels per unit" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The scaling factor between pixels and Unreal units (cm) (e.g., 0.64 would make a 64 pixel wide sprite take up 100 cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "Category", "NeverShown" },
		{ "Comment", "// Baked physics data.\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Baked physics data." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotMode_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Pivot mode\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Pivot mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPivotPoint_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Custom pivot point (relative to the sprite rectangle)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Custom pivot point (relative to the sprite rectangle)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPivotToPixelGrid_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Should the pivot be snapped to a pixel boundary?\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Should the pivot be snapped to a pixel boundary?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGeometry_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Custom collision geometry polygons (in texture space)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Custom collision geometry polygons (in texture space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// The extrusion thickness of collision geometry when using a 3D collision domain\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The extrusion thickness of collision geometry when using a 3D collision domain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Custom render geometry polygons (in texture space)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Custom render geometry polygons (in texture space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasGroup_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Spritesheet group that this sprite belongs to\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Spritesheet group that this sprite belongs to" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateMaterialSplitIndex_MetaData[] = {
		{ "Comment", "// The point at which the alternate material takes over in the baked render data (or INDEX_NONE)\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "The point at which the alternate material takes over in the baked render data (or INDEX_NONE)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedRenderData_MetaData[] = {
		{ "Comment", "// Baked render data (triangle vertices, stored as XY UV tuples)\n//   XY is the XZ position in world space, relative to the pivot\n//   UV is normalized (0..1)\n//   There should always be a multiple of three elements in this array\n" },
		{ "ModuleRelativePath", "Classes/PaperSprite.h" },
		{ "ToolTip", "Baked render data (triangle vertices, stored as XY UV tuples)\n  XY is the XZ position in world space, relative to the pivot\n  UV is normalized (0..1)\n  There should always be a multiple of three elements in this array" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginInSourceImageBeforeTrimming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceImageDimensionBeforeTrimming;
	static void NewProp_bTrimmedInSourceImage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimmedInSourceImage;
	static void NewProp_bRotatedInSourceImage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotatedInSourceImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTextureDimension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceUV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDimension;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTextureCacheNeverSerialized;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalSourceTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSourceTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedSourceUV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedSourceDimension;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakedSourceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlternateMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpriteCollisionDomain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelsPerUnrealUnit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PivotMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPivotPoint;
	static void NewProp_bSnapPivotToPixelGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPivotToPixelGrid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionGeometry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderGeometry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtlasGroup;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlternateMaterialSplitIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedRenderData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedRenderData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSprite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_OriginInSourceImageBeforeTrimming = { "OriginInSourceImageBeforeTrimming", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, OriginInSourceImageBeforeTrimming), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginInSourceImageBeforeTrimming_MetaData), NewProp_OriginInSourceImageBeforeTrimming_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceImageDimensionBeforeTrimming = { "SourceImageDimensionBeforeTrimming", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, SourceImageDimensionBeforeTrimming), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceImageDimensionBeforeTrimming_MetaData), NewProp_SourceImageDimensionBeforeTrimming_MetaData) };
void Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage_SetBit(void* Obj)
{
	((UPaperSprite*)Obj)->bTrimmedInSourceImage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage = { "bTrimmedInSourceImage", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperSprite), &Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrimmedInSourceImage_MetaData), NewProp_bTrimmedInSourceImage_MetaData) };
void Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage_SetBit(void* Obj)
{
	((UPaperSprite*)Obj)->bRotatedInSourceImage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage = { "bRotatedInSourceImage", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperSprite), &Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotatedInSourceImage_MetaData), NewProp_bRotatedInSourceImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureDimension = { "SourceTextureDimension", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, SourceTextureDimension), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTextureDimension_MetaData), NewProp_SourceTextureDimension_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceUV = { "SourceUV", nullptr, (EPropertyFlags)0x0020090800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, SourceUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceUV_MetaData), NewProp_SourceUV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceDimension = { "SourceDimension", nullptr, (EPropertyFlags)0x0020090800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, SourceDimension), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDimension_MetaData), NewProp_SourceDimension_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0024090800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, SourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTexture_MetaData), NewProp_SourceTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureCacheNeverSerialized = { "SourceTextureCacheNeverSerialized", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, SourceTextureCacheNeverSerialized), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTextureCacheNeverSerialized_MetaData), NewProp_SourceTextureCacheNeverSerialized_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures_Inner = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0124090000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, AdditionalSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSourceTextures_MetaData), NewProp_AdditionalSourceTextures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceUV = { "BakedSourceUV", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, BakedSourceUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedSourceUV_MetaData), NewProp_BakedSourceUV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceDimension = { "BakedSourceDimension", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, BakedSourceDimension), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedSourceDimension_MetaData), NewProp_BakedSourceDimension_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceTexture = { "BakedSourceTexture", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, BakedSourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedSourceTexture_MetaData), NewProp_BakedSourceTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterial = { "AlternateMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, AlternateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateMaterial_MetaData), NewProp_AlternateMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperSpriteSocket, METADATA_PARAMS(0, nullptr) }; // 1047558728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sockets_MetaData), NewProp_Sockets_MetaData) }; // 1047558728
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_SpriteCollisionDomain = { "SpriteCollisionDomain", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, SpriteCollisionDomain), Z_Construct_UEnum_Paper2D_ESpriteCollisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteCollisionDomain_MetaData), NewProp_SpriteCollisionDomain_MetaData) }; // 3506429279
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_PixelsPerUnrealUnit = { "PixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, PixelsPerUnrealUnit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelsPerUnrealUnit_MetaData), NewProp_PixelsPerUnrealUnit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_PivotMode = { "PivotMode", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, PivotMode), Z_Construct_UEnum_Paper2D_ESpritePivotMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotMode_MetaData), NewProp_PivotMode_MetaData) }; // 1840517934
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_CustomPivotPoint = { "CustomPivotPoint", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, CustomPivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPivotPoint_MetaData), NewProp_CustomPivotPoint_MetaData) };
void Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid_SetBit(void* Obj)
{
	((UPaperSprite*)Obj)->bSnapPivotToPixelGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid = { "bSnapPivotToPixelGrid", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperSprite), &Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapPivotToPixelGrid_MetaData), NewProp_bSnapPivotToPixelGrid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionGeometry = { "CollisionGeometry", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, CollisionGeometry), Z_Construct_UScriptStruct_FSpriteGeometryCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionGeometry_MetaData), NewProp_CollisionGeometry_MetaData) }; // 826102719
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, CollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionThickness_MetaData), NewProp_CollisionThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_RenderGeometry = { "RenderGeometry", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, RenderGeometry), Z_Construct_UScriptStruct_FSpriteGeometryCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderGeometry_MetaData), NewProp_RenderGeometry_MetaData) }; // 826102719
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AtlasGroup = { "AtlasGroup", nullptr, (EPropertyFlags)0x0124090800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, AtlasGroup), Z_Construct_UClass_UPaperSpriteAtlas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasGroup_MetaData), NewProp_AtlasGroup_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterialSplitIndex = { "AlternateMaterialSplitIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, AlternateMaterialSplitIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateMaterialSplitIndex_MetaData), NewProp_AlternateMaterialSplitIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData_Inner = { "BakedRenderData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData = { "BakedRenderData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSprite, BakedRenderData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedRenderData_MetaData), NewProp_BakedRenderData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSprite_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_OriginInSourceImageBeforeTrimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceImageDimensionBeforeTrimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_bTrimmedInSourceImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_bRotatedInSourceImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SourceTextureCacheNeverSerialized,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AdditionalSourceTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedSourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_Sockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_SpriteCollisionDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_PixelsPerUnrealUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BodySetup,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_PivotMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_CustomPivotPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_bSnapPivotToPixelGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_CollisionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_RenderGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AtlasGroup,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_AlternateMaterialSplitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSprite_Statics::NewProp_BakedRenderData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperSprite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPaperSprite_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UPaperSprite, IInterface_CollisionDataProvider), false },  // 4090871341
	{ Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister, (int32)VTABLE_OFFSET(UPaperSprite, ISlateTextureAtlasInterface), false },  // 3680432440
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSprite_Statics::ClassParams = {
	&UPaperSprite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperSprite_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSprite_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperSprite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperSprite()
{
	if (!Z_Registration_Info_UClass_UPaperSprite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSprite.OuterSingleton, Z_Construct_UClass_UPaperSprite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperSprite.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperSprite>()
{
	return UPaperSprite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSprite);
UPaperSprite::~UPaperSprite() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSprite)
// End Class UPaperSprite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperSpriteSocket::StaticStruct, Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewStructOps, TEXT("PaperSpriteSocket"), &Z_Registration_Info_UScriptStruct_PaperSpriteSocket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperSpriteSocket), 1047558728U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSprite, UPaperSprite::StaticClass, TEXT("UPaperSprite"), &Z_Registration_Info_UClass_UPaperSprite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSprite), 3853458546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_689924186(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
