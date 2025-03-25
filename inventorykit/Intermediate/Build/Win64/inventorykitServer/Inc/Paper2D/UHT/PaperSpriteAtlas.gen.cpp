// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSpriteAtlas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteAtlas() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister();
PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FPaperSpriteAtlasSlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot;
class UScriptStruct* FPaperSpriteAtlasSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperSpriteAtlasSlot"));
	}
	return Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperSpriteAtlasSlot>()
{
	return FPaperSpriteAtlasSlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpriteRef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtlasIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperSpriteAtlasSlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef = { "SpriteRef", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, SpriteRef), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteRef_MetaData), NewProp_SpriteRef_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex = { "AtlasIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, AtlasIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasIndex_MetaData), NewProp_AtlasIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"PaperSpriteAtlasSlot",
	Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers),
	sizeof(FPaperSpriteAtlasSlot),
	alignof(FPaperSpriteAtlasSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot()
{
	if (!Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.InnerSingleton, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.InnerSingleton;
}
// End ScriptStruct FPaperSpriteAtlasSlot

// Begin Enum EPaperSpriteAtlasPadding
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding;
static UEnum* EPaperSpriteAtlasPadding_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("EPaperSpriteAtlasPadding"));
	}
	return Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton;
}
template<> PAPER2D_API UEnum* StaticEnum<EPaperSpriteAtlasPadding>()
{
	return EPaperSpriteAtlasPadding_StaticEnum();
}
struct Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DilateBorder.Comment", "/** Dilate the texture to pad the atlas. */" },
		{ "DilateBorder.Name", "EPaperSpriteAtlasPadding::DilateBorder" },
		{ "DilateBorder.ToolTip", "Dilate the texture to pad the atlas." },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "PadWithZero.Comment", "/** Padding border filled with zeros. */" },
		{ "PadWithZero.Name", "EPaperSpriteAtlasPadding::PadWithZero" },
		{ "PadWithZero.ToolTip", "Padding border filled with zeros." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPaperSpriteAtlasPadding::DilateBorder", (int64)EPaperSpriteAtlasPadding::DilateBorder },
		{ "EPaperSpriteAtlasPadding::PadWithZero", (int64)EPaperSpriteAtlasPadding::PadWithZero },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	"EPaperSpriteAtlasPadding",
	"EPaperSpriteAtlasPadding",
	Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding()
{
	if (!Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton, Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton;
}
// End Enum EPaperSpriteAtlasPadding

// Begin Class UPaperSpriteAtlas
void UPaperSpriteAtlas::StaticRegisterNativesUPaperSpriteAtlas()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteAtlas);
UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister()
{
	return UPaperSpriteAtlas::StaticClass();
}
struct Z_Construct_UClass_UPaperSpriteAtlas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Groups together a set of sprites that will try to share the same texture atlas (allowing them to be combined into a single draw call)\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperSpriteAtlas.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Groups together a set of sprites that will try to share the same texture atlas (allowing them to be combined into a single draw call)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasDescription_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Description of this atlas, which shows up in the content browser tooltip\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Description of this atlas, which shows up in the content browser tooltip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page width (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page width (single pages might be smaller)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page height (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page height (single pages might be smaller)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipCount_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page height (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page height (single pages might be smaller)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaddingType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The type of padding performed on this atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The type of padding performed on this atlas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The number of pixels of padding\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The number of pixels of padding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// Compression settings to use on atlas texture\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Compression settings to use on atlas texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// Texture filtering mode when sampling these textures\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Texture filtering mode when sampling these textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTextures_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// List of generated atlas textures\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "List of generated atlas textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasGUID_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The GUID of the atlas group, used to match up sprites that belong to this group even thru atlas renames\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The GUID of the atlas group, used to match up sprites that belong to this group even thru atlas renames" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildAtlas_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Slots in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Slots in the atlas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasSlots_MetaData[] = {
		{ "Comment", "// Slots in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Slots in the atlas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumIncrementalBuilds_MetaData[] = {
		{ "Comment", "// Track the number of incremental builds\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Track the number of incremental builds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuiltWidth_MetaData[] = {
		{ "Comment", "// Values used when building this atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Values used when building this atlas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuiltHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuiltPadding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AtlasDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MipCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PaddingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PaddingType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasGUID;
	static void NewProp_bRebuildAtlas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildAtlas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AtlasSlots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIncrementalBuilds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuiltWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuiltHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuiltPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteAtlas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription = { "AtlasDescription", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasDescription_MetaData), NewProp_AtlasDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, MaxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWidth_MetaData), NewProp_MaxWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount = { "MipCount", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, MipCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipCount_MetaData), NewProp_MipCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType = { "PaddingType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, PaddingType), Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaddingType_MetaData), NewProp_PaddingType_MetaData) }; // 2009425652
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionSettings_MetaData), NewProp_CompressionSettings_MetaData) }; // 2977833603
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 525537855
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_Inner = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0104000800020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0114000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, GeneratedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTextures_MetaData), NewProp_GeneratedTextures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID = { "AtlasGUID", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasGUID_MetaData), NewProp_AtlasGUID_MetaData) };
void Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_SetBit(void* Obj)
{
	((UPaperSpriteAtlas*)Obj)->bRebuildAtlas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas = { "bRebuildAtlas", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperSpriteAtlas), &Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildAtlas_MetaData), NewProp_bRebuildAtlas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_Inner = { "AtlasSlots", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot, METADATA_PARAMS(0, nullptr) }; // 2426378195
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots = { "AtlasSlots", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasSlots_MetaData), NewProp_AtlasSlots_MetaData) }; // 2426378195
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds = { "NumIncrementalBuilds", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, NumIncrementalBuilds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumIncrementalBuilds_MetaData), NewProp_NumIncrementalBuilds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth = { "BuiltWidth", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuiltWidth_MetaData), NewProp_BuiltWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight = { "BuiltHeight", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuiltHeight_MetaData), NewProp_BuiltHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding = { "BuiltPadding", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuiltPadding_MetaData), NewProp_BuiltPadding_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UPaperSpriteAtlas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::ClassParams = {
	&UPaperSpriteAtlas::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperSpriteAtlas()
{
	if (!Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton, Z_Construct_UClass_UPaperSpriteAtlas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperSpriteAtlas>()
{
	return UPaperSpriteAtlas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteAtlas);
UPaperSpriteAtlas::~UPaperSpriteAtlas() {}
// End Class UPaperSpriteAtlas

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPaperSpriteAtlasPadding_StaticEnum, TEXT("EPaperSpriteAtlasPadding"), &Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2009425652U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperSpriteAtlasSlot::StaticStruct, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewStructOps, TEXT("PaperSpriteAtlasSlot"), &Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperSpriteAtlasSlot), 2426378195U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteAtlas, UPaperSpriteAtlas::StaticClass, TEXT("UPaperSpriteAtlas"), &Z_Registration_Info_UClass_UPaperSpriteAtlas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteAtlas), 1947134059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_2074359351(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
