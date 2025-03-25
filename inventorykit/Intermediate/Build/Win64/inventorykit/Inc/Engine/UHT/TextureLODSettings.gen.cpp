// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureLODSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLODSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings();
ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureDownscaleOptions();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipLoadOptions();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FTextureLODGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureLODGroup;
class UScriptStruct* FTextureLODGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureLODGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureLODGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureLODGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureLODGroup"));
	}
	return Z_Registration_Info_UScriptStruct_TextureLODGroup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureLODGroup>()
{
	return FTextureLODGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureLODGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** LOD settings for a single texture group. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "LOD settings for a single texture group." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Comment", "/** Group ID.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Group ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
		{ "Comment", "/** Group LOD bias.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Group LOD bias." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_Smaller_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_Smallest_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumStreamedMips_MetaData[] = {
		{ "Comment", "/** Number of mip-levels that can be streamed. -1 means all mips can stream.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Number of mip-levels that can be streamed. -1 means all mips can stream." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[] = {
		{ "Comment", "/** Defines how the the mip-map generation works, e.g. sharpening\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Defines how the the mip-map generation works, e.g. sharpening" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLODSize_MetaData[] = {
		{ "Comment", "/** Prevent LODBias from making the textures smaller than this value. Note that this does _not_ affect the smallest mip level size. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Prevent LODBias from making the textures smaller than this value. Note that this does _not_ affect the smallest mip level size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_MetaData[] = {
		{ "Comment", "/** Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Not used for virtual textures. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Not used for virtual textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_Smaller_MetaData[] = {
		{ "Comment", "/** Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Used for platforms with the \"Smaller\" memory bucket. Not used for virtual textures. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Used for platforms with the \"Smaller\" memory bucket. Not used for virtual textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_Smallest_MetaData[] = {
		{ "Comment", "/** Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Used for platforms with the \"Smallest\" memory bucket. Not used for virtual textures. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Used for platforms with the \"Smallest\" memory bucket. Not used for virtual textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_VT_MetaData[] = {
		{ "Comment", "/** Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Used for virtual textures. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Cap the number of mips such that the largest mip is this big. Has no effect for textures with no mip chain. Used for virtual textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalLODBias_MetaData[] = {
		{ "Comment", "/** If this is greater then 0 will put that number of mips into an optional bulkdata package */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "If this is greater then 0 will put that number of mips into an optional bulkdata package" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalMaxLODSize_MetaData[] = {
		{ "Comment", "/** Put all the mips which have a width / height larger then OptionalLODSize into an optional bulkdata package */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Put all the mips which have a width / height larger then OptionalLODSize into an optional bulkdata package" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMagFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipLoadOptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighPriorityLoad_MetaData[] = {
		{ "Comment", "/** Wether those assets should be loaded with higher load order and higher IO priority. Allows ProjectXX texture groups to behave as character textures. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Wether those assets should be loaded with higher load order and higher IO priority. Allows ProjectXX texture groups to behave as character textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicateNonOptionalMips_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Downscale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownscaleOptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileCountBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileSizeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookPlatformTilingDisabled_MetaData[] = {
		{ "Comment", "/** If true textures with CookPlatformTilingSettings set to TCPTS_FromTextureGroup will not be tiled during cook. They will be tiled when uploaded to the GPU if necessary */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "If true textures with CookPlatformTilingSettings set to TCPTS_FromTextureGroup will not be tiled during cook. They will be tiled when uploaded to the GPU if necessary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAniso_MetaData[] = {
		{ "Comment", "/** Allows us to override max anisotropy. If unspecified, uses r.MaxAnisotropy */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Allows us to override max anisotropy. If unspecified, uses r.MaxAnisotropy" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias_Smaller;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias_Smallest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumStreamedMips;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLODSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_Smaller;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_Smallest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_VT;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalLODBias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalMaxLODSize;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MinMagFilter;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MipFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipLoadOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MipLoadOptions;
	static void NewProp_HighPriorityLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HighPriorityLoad;
	static void NewProp_DuplicateNonOptionalMips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DuplicateNonOptionalMips;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Downscale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DownscaleOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DownscaleOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureTileCountBias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureTileSizeBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
	static void NewProp_CookPlatformTilingDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CookPlatformTilingDisabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAniso;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureLODGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, Group), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) }; // 2065735531
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_MetaData), NewProp_LODBias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller = { "LODBias_Smaller", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, LODBias_Smaller), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_Smaller_MetaData), NewProp_LODBias_Smaller_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest = { "LODBias_Smallest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, LODBias_Smallest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_Smallest_MetaData), NewProp_LODBias_Smallest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips = { "NumStreamedMips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, NumStreamedMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumStreamedMips_MetaData), NewProp_NumStreamedMips_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipGenSettings_MetaData), NewProp_MipGenSettings_MetaData) }; // 3164791778
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize = { "MinLODSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MinLODSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLODSize_MetaData), NewProp_MinLODSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize = { "MaxLODSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLODSize_MetaData), NewProp_MaxLODSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller = { "MaxLODSize_Smaller", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_Smaller), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLODSize_Smaller_MetaData), NewProp_MaxLODSize_Smaller_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest = { "MaxLODSize_Smallest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_Smallest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLODSize_Smallest_MetaData), NewProp_MaxLODSize_Smallest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_VT = { "MaxLODSize_VT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_VT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLODSize_VT_MetaData), NewProp_MaxLODSize_VT_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias = { "OptionalLODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, OptionalLODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalLODBias_MetaData), NewProp_OptionalLODBias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize = { "OptionalMaxLODSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, OptionalMaxLODSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalMaxLODSize_MetaData), NewProp_OptionalMaxLODSize_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter = { "MinMagFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MinMagFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMagFilter_MetaData), NewProp_MinMagFilter_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter = { "MipFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MipFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipFilter_MetaData), NewProp_MipFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions = { "MipLoadOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MipLoadOptions), Z_Construct_UEnum_Engine_ETextureMipLoadOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipLoadOptions_MetaData), NewProp_MipLoadOptions_MetaData) }; // 3880485984
void Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_SetBit(void* Obj)
{
	((FTextureLODGroup*)Obj)->HighPriorityLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad = { "HighPriorityLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTextureLODGroup), &Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighPriorityLoad_MetaData), NewProp_HighPriorityLoad_MetaData) };
void Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_SetBit(void* Obj)
{
	((FTextureLODGroup*)Obj)->DuplicateNonOptionalMips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips = { "DuplicateNonOptionalMips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTextureLODGroup), &Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicateNonOptionalMips_MetaData), NewProp_DuplicateNonOptionalMips_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Downscale = { "Downscale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, Downscale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Downscale_MetaData), NewProp_Downscale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions = { "DownscaleOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, DownscaleOptions), Z_Construct_UEnum_Engine_ETextureDownscaleOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownscaleOptions_MetaData), NewProp_DownscaleOptions_MetaData) }; // 3416087455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileCountBias = { "VirtualTextureTileCountBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, VirtualTextureTileCountBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureTileCountBias_MetaData), NewProp_VirtualTextureTileCountBias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileSizeBias = { "VirtualTextureTileSizeBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, VirtualTextureTileSizeBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureTileSizeBias_MetaData), NewProp_VirtualTextureTileSizeBias_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LossyCompressionAmount_MetaData), NewProp_LossyCompressionAmount_MetaData) }; // 1608486090
void Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_SetBit(void* Obj)
{
	((FTextureLODGroup*)Obj)->CookPlatformTilingDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled = { "CookPlatformTilingDisabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTextureLODGroup), &Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookPlatformTilingDisabled_MetaData), NewProp_CookPlatformTilingDisabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxAniso = { "MaxAniso", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureLODGroup, MaxAniso), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAniso_MetaData), NewProp_MaxAniso_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_VT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Downscale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileCountBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileSizeBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LossyCompressionAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxAniso,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextureLODGroup",
	Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers),
	sizeof(FTextureLODGroup),
	alignof(FTextureLODGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup()
{
	if (!Z_Registration_Info_UScriptStruct_TextureLODGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureLODGroup.InnerSingleton, Z_Construct_UScriptStruct_FTextureLODGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureLODGroup.InnerSingleton;
}
// End ScriptStruct FTextureLODGroup

// Begin Class UTextureLODSettings
void UTextureLODSettings::StaticRegisterNativesUTextureLODSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureLODSettings);
UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister()
{
	return UTextureLODSettings::StaticClass();
}
struct Z_Construct_UClass_UTextureLODSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure containing all information related to an LOD group and providing helper functions to calculate\n * the LOD bias of a given group.\n */" },
		{ "IncludePath", "Engine/TextureLODSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Structure containing all information related to an LOD group and providing helper functions to calculate\nthe LOD bias of a given group." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureLODGroups_MetaData[] = {
		{ "Category", "Texture LOD Settings" },
		{ "Comment", "/** Array of LOD settings with entries per group. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Array of LOD settings with entries per group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureLODGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureLODGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureLODSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_Inner = { "TextureLODGroups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTextureLODGroup, METADATA_PARAMS(0, nullptr) }; // 684444185
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups = { "TextureLODGroups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureLODSettings, TextureLODGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureLODGroups_MetaData), NewProp_TextureLODGroups_MetaData) }; // 684444185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureLODSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureLODSettings_Statics::ClassParams = {
	&UTextureLODSettings::StaticClass,
	"DeviceProfiles",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers),
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureLODSettings()
{
	if (!Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton, Z_Construct_UClass_UTextureLODSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureLODSettings>()
{
	return UTextureLODSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLODSettings);
UTextureLODSettings::~UTextureLODSettings() {}
// End Class UTextureLODSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTextureLODGroup::StaticStruct, Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewStructOps, TEXT("TextureLODGroup"), &Z_Registration_Info_UScriptStruct_TextureLODGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureLODGroup), 684444185U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureLODSettings, UTextureLODSettings::StaticClass, TEXT("UTextureLODSettings"), &Z_Registration_Info_UClass_UTextureLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureLODSettings), 2467280593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_398530237(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
