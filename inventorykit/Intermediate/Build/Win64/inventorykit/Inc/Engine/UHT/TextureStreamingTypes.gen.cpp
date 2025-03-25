// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureStreamingTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FStreamingRenderAssetPrimitiveInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo;
class UScriptStruct* FStreamingRenderAssetPrimitiveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamingRenderAssetPrimitiveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingRenderAssetPrimitiveInfo>()
{
	return FStreamingRenderAssetPrimitiveInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about a streaming texture/mesh that a primitive uses for rendering. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "Information about a streaming texture/mesh that a primitive uses for rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Comment", "/** \n\x09 * The streaming bounds of the texture/mesh, usually the component material bounds. \n\x09 * Usually only valid for registered component, as component bounds are only updated when the components are registered.\n\x09 * otherwise only PackedRelativeBox can be used.Irrelevant when the component is not registered, as the component could be moved by ULevel::ApplyWorldOffset()\n\x09 * In that case, only PackedRelativeBox is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The streaming bounds of the texture/mesh, usually the component material bounds.\nUsually only valid for registered component, as component bounds are only updated when the components are registered.\notherwise only PackedRelativeBox can be used.Irrelevant when the component is not registered, as the component could be moved by ULevel::ApplyWorldOffset()\nIn that case, only PackedRelativeBox is meaningful." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[] = {
		{ "Comment", "/** \n\x09 * When non zero, this represents the relative box used to compute Bounds, using the component bounds as reference.\n\x09 * If available, this allows the renderable asset streamer to generate the level streaming data before the level gets visible.\n\x09 * At that point, the component are not yet registered, and the bounds are unknown, but the precompiled build data is still available.\n\x09 * Also allows to update the relative bounds after a level get moved around from ApplyWorldOffset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "When non zero, this represents the relative box used to compute Bounds, using the component bounds as reference.\nIf available, this allows the renderable asset streamer to generate the level streaming data before the level gets visible.\nAt that point, the component are not yet registered, and the bounds are unknown, but the precompiled build data is still available.\nAlso allows to update the relative bounds after a level get moved around from ApplyWorldOffset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvalidTexelFactorWhenUnregistered_MetaData[] = {
		{ "Comment", "/** For mesh components, texel factors are their sphere bound diameters that are 0 when unregistered */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "For mesh components, texel factors are their sphere bound diameters that are 0 when unregistered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedByComponentScale_MetaData[] = {
		{ "Comment", "/** Mesh texel factors aren't uv density and shouldn't be affected by component scales */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "Mesh texel factors aren't uv density and shouldn't be affected by component scales" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox;
	static void NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvalidTexelFactorWhenUnregistered;
	static void NewProp_bAffectedByComponentScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedByComponentScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingRenderAssetPrimitiveInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_RenderAsset = { "RenderAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, RenderAsset), Z_Construct_UClass_UStreamableRenderAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderAsset_MetaData), NewProp_RenderAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, TexelFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexelFactor_MetaData), NewProp_TexelFactor_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_PackedRelativeBox = { "PackedRelativeBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, PackedRelativeBox), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedRelativeBox_MetaData), NewProp_PackedRelativeBox_MetaData) };
void Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit(void* Obj)
{
	((FStreamingRenderAssetPrimitiveInfo*)Obj)->bAllowInvalidTexelFactorWhenUnregistered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered = { "bAllowInvalidTexelFactorWhenUnregistered", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreamingRenderAssetPrimitiveInfo), &Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInvalidTexelFactorWhenUnregistered_MetaData), NewProp_bAllowInvalidTexelFactorWhenUnregistered_MetaData) };
void Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAffectedByComponentScale_SetBit(void* Obj)
{
	((FStreamingRenderAssetPrimitiveInfo*)Obj)->bAffectedByComponentScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAffectedByComponentScale = { "bAffectedByComponentScale", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreamingRenderAssetPrimitiveInfo), &Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAffectedByComponentScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectedByComponentScale_MetaData), NewProp_bAffectedByComponentScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_RenderAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_TexelFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_PackedRelativeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAffectedByComponentScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StreamingRenderAssetPrimitiveInfo",
	Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::PropPointers),
	sizeof(FStreamingRenderAssetPrimitiveInfo),
	alignof(FStreamingRenderAssetPrimitiveInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo.InnerSingleton, Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo.InnerSingleton;
}
// End ScriptStruct FStreamingRenderAssetPrimitiveInfo

// Begin ScriptStruct FStreamingTextureBuildInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo;
class UScriptStruct* FStreamingTextureBuildInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamingTextureBuildInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingTextureBuildInfo>()
{
	return FStreamingTextureBuildInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * This struct holds the result of TextureStreaming Build for each component texture, as referred by its used materials.\n * It is possible that the entry referred by this data is not actually relevant in a given quality / target.\n * It is also possible that some texture are not referred, and will then fall on fallbacks computation.\n * Because each component holds its precomputed data for each texture, this struct is designed to be as compact as possible.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "This struct holds the result of TextureStreaming Build for each component texture, as referred by its used materials.\nIt is possible that the entry referred by this data is not actually relevant in a given quality / target.\nIt is also possible that some texture are not referred, and will then fall on fallbacks computation.\nBecause each component holds its precomputed data for each texture, this struct is designed to be as compact as possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[] = {
		{ "Comment", "/** \n\x09 * The relative bounding box for this entry. The relative bounds is a bound equal or smaller than the component bounds and represent\n\x09 * the merged LOD section bounds of all LOD section referencing the given texture. When the level transform is modified following\n\x09 * a call to ApplyLevelTransform, this relative bound becomes deprecated as it was computed from the transform at build time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The relative bounding box for this entry. The relative bounds is a bound equal or smaller than the component bounds and represent\nthe merged LOD section bounds of all LOD section referencing the given texture. When the level transform is modified following\na call to ApplyLevelTransform, this relative bound becomes deprecated as it was computed from the transform at build time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureLevelIndex_MetaData[] = {
		{ "Comment", "/** \n\x09 * The level scope identifier of the texture. When building the texture streaming data, each level holds a list of all referred texture Guids.\n\x09 * This is required to prevent loading textures on platforms which would not require the texture to be loaded, and is a consequence of the texture\n\x09 * streaming build not being platform specific (the same streaming data is build for every platform target). Could also apply to quality level.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The level scope identifier of the texture. When building the texture streaming data, each level holds a list of all referred texture Guids.\nThis is required to prevent loading textures on platforms which would not require the texture to be loaded, and is a consequence of the texture\nstreaming build not being platform specific (the same streaming data is build for every platform target). Could also apply to quality level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[] = {
		{ "Comment", "/** \n\x09 * The texel factor for this texture. This represent the world size a texture square holding with unit UVs.\n\x09 * This value is a combination of the TexelFactor from the mesh and also the material scale.\n\x09 * It does not take into consideration StreamingDistanceMultiplier, or texture group scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The texel factor for this texture. This represent the world size a texture square holding with unit UVs.\nThis value is a combination of the TexelFactor from the mesh and also the material scale.\nIt does not take into consideration StreamingDistanceMultiplier, or texture group scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureLevelIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingTextureBuildInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox = { "PackedRelativeBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, PackedRelativeBox), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedRelativeBox_MetaData), NewProp_PackedRelativeBox_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex = { "TextureLevelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, TextureLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureLevelIndex_MetaData), NewProp_TextureLevelIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, TexelFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexelFactor_MetaData), NewProp_TexelFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StreamingTextureBuildInfo",
	Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers),
	sizeof(FStreamingTextureBuildInfo),
	alignof(FStreamingTextureBuildInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo.InnerSingleton, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo.InnerSingleton;
}
// End ScriptStruct FStreamingTextureBuildInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureStreamingTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStreamingRenderAssetPrimitiveInfo::StaticStruct, Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewStructOps, TEXT("StreamingRenderAssetPrimitiveInfo"), &Z_Registration_Info_UScriptStruct_StreamingRenderAssetPrimitiveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamingRenderAssetPrimitiveInfo), 4289215262U) },
		{ FStreamingTextureBuildInfo::StaticStruct, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewStructOps, TEXT("StreamingTextureBuildInfo"), &Z_Registration_Info_UScriptStruct_StreamingTextureBuildInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamingTextureBuildInfo), 1727274560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureStreamingTypes_h_2640230881(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureStreamingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureStreamingTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
