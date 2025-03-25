// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionMiniMap.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMap() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionMiniMap();
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionMiniMap_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AWorldPartitionMiniMap
void AWorldPartitionMiniMap::StaticRegisterNativesAWorldPartitionMiniMap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldPartitionMiniMap);
UClass* Z_Construct_UClass_AWorldPartitionMiniMap_NoRegister()
{
	return AWorldPartitionMiniMap::StaticClass();
}
struct Z_Construct_UClass_AWorldPartitionMiniMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A mini map to preview the world in world partition window. (editor-only)\n */" },
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Physics Cooking Networking LevelInstance Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldPartition/WorldPartitionMiniMap.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A mini map to preview the world in world partition window. (editor-only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapWorldBounds_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/* WorldBounds for MinMapTexture */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "WorldBounds for MinMapTexture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/* UVOffset used to setup Virtual Texture */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "UVOffset used to setup Virtual Texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapTexture_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/* MiniMap Texture for displaying on world partition window */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "MiniMap Texture for displaying on world partition window" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedDataLayers_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/* Datalayers excluded from MiniMap rendering */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "Datalayers excluded from MiniMap rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldUnitsPerPixel_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/**\n\x09 * Target world units per pixel for the minimap texture. \n\x09 * May not end up being the final minimap accuracy if the resulting texture resolution is unsupported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "Target world units per pixel for the minimap texture.\nMay not end up being the final minimap accuracy if the resulting texture resolution is unsupported." },
		{ "UIMax", "100000" },
		{ "UIMin", "10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderCellSize_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/**\n\x09 * Size of the loading region that will be used when iterating over the whole map during the minimap build process.\n\x09 * A smaller size may help reduce blurriness as it will put less pressure on various graphics pools, at the expanse of an increase in processing time. \n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "Size of the loading region that will be used when iterating over the whole map during the minimap build process.\nA smaller size may help reduce blurriness as it will put less pressure on various graphics pools, at the expanse of an increase in processing time." },
		{ "UIMax", "204800" },
		{ "UIMin", "3200" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSource_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/* Specifies which component of the scene rendering should be output to the minimap texture. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "Specifies which component of the scene rendering should be output to the minimap texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureWarmupFrames_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/* Number of frames to render before each capture in order to warmup various rendering systems (VT/Nanite/etc). */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "Number of frames to render before each capture in order to warmup various rendering systems (VT/Nanite/etc)." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapTileSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MiniMapWorldBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedDataLayers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ExcludedDataLayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldUnitsPerPixel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuilderCellSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CaptureWarmupFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MiniMapTileSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPartitionMiniMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapWorldBounds = { "MiniMapWorldBounds", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, MiniMapWorldBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapWorldBounds_MetaData), NewProp_MiniMapWorldBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, UVOffset), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVOffset_MetaData), NewProp_UVOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTexture = { "MiniMapTexture", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, MiniMapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapTexture_MetaData), NewProp_MiniMapTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers_ElementProp = { "ExcludedDataLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
static_assert(TModels_V<CGetTypeHashable, FActorDataLayer>, "The structure 'FActorDataLayer' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers = { "ExcludedDataLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, ExcludedDataLayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedDataLayers_MetaData), NewProp_ExcludedDataLayers_MetaData) }; // 1894108120
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_WorldUnitsPerPixel = { "WorldUnitsPerPixel", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, WorldUnitsPerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldUnitsPerPixel_MetaData), NewProp_WorldUnitsPerPixel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_BuilderCellSize = { "BuilderCellSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, BuilderCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderCellSize_MetaData), NewProp_BuilderCellSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureSource_MetaData), NewProp_CaptureSource_MetaData) }; // 3067947701
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_CaptureWarmupFrames = { "CaptureWarmupFrames", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, CaptureWarmupFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureWarmupFrames_MetaData), NewProp_CaptureWarmupFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTileSize = { "MiniMapTileSize", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, MiniMapTileSize_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapTileSize_MetaData), NewProp_MiniMapTileSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldPartitionMiniMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapWorldBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_UVOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_WorldUnitsPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_BuilderCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_CaptureSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_CaptureWarmupFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTileSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldPartitionMiniMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::ClassParams = {
	&AWorldPartitionMiniMap::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWorldPartitionMiniMap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldPartitionMiniMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldPartitionMiniMap()
{
	if (!Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton, Z_Construct_UClass_AWorldPartitionMiniMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AWorldPartitionMiniMap>()
{
	return AWorldPartitionMiniMap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPartitionMiniMap);
AWorldPartitionMiniMap::~AWorldPartitionMiniMap() {}
// End Class AWorldPartitionMiniMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldPartitionMiniMap, AWorldPartitionMiniMap::StaticClass, TEXT("AWorldPartitionMiniMap"), &Z_Registration_Info_UClass_AWorldPartitionMiniMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldPartitionMiniMap), 1330646528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_1130122171(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
