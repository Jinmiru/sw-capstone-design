// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeComponent.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Landscape/Classes/LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeClearMode();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FHeightmapData();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerComponentData();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightmapData();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FLandscapeEditToolRenderData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData;
class UScriptStruct* FLandscapeEditToolRenderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeEditToolRenderData"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeEditToolRenderData>()
{
	return FLandscapeEditToolRenderData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//\n// FLandscapeEditToolRenderData\n//\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "FLandscapeEditToolRenderData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Comment", "// Material used to render the tool.\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material used to render the tool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[] = {
		{ "Comment", "// Material used to render the gizmo selection region...\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material used to render the gizmo selection region..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedType_MetaData[] = {
		{ "Comment", "// Component is selected\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Component is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugChannelR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugChannelG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugChannelB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerContributionTexture_MetaData[] = {
		{ "Comment", "// Data texture other than height/weight\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Data texture other than height/weight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirtyTexture_MetaData[] = {
		{ "Comment", "// Data texture used to represent layer contribution\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Data texture used to represent layer contribution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugChannelR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugChannelG;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugChannelB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerContributionTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirtyTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeEditToolRenderData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0114000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, GizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoMaterial_MetaData), NewProp_GizmoMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType = { "SelectedType", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, SelectedType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedType_MetaData), NewProp_SelectedType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR = { "DebugChannelR", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugChannelR_MetaData), NewProp_DebugChannelR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG = { "DebugChannelG", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugChannelG_MetaData), NewProp_DebugChannelG_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB = { "DebugChannelB", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugChannelB_MetaData), NewProp_DebugChannelB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture = { "DataTexture", nullptr, (EPropertyFlags)0x0114000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DataTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTexture_MetaData), NewProp_DataTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_LayerContributionTexture = { "LayerContributionTexture", nullptr, (EPropertyFlags)0x0114000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, LayerContributionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerContributionTexture_MetaData), NewProp_LayerContributionTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DirtyTexture = { "DirtyTexture", nullptr, (EPropertyFlags)0x0114000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DirtyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirtyTexture_MetaData), NewProp_DirtyTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_LayerContributionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DirtyTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeEditToolRenderData",
	Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers),
	sizeof(FLandscapeEditToolRenderData),
	alignof(FLandscapeEditToolRenderData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.InnerSingleton;
}
// End ScriptStruct FLandscapeEditToolRenderData

// Begin ScriptStruct FWeightmapLayerAllocationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo;
class UScriptStruct* FWeightmapLayerAllocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("WeightmapLayerAllocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FWeightmapLayerAllocationInfo>()
{
	return FWeightmapLayerAllocationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about which weightmap texture and channel each layer is stored */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Stores information about which weightmap texture and channel each layer is stored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightmapLayerAllocationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfo_MetaData), NewProp_LayerInfo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex = { "WeightmapTextureIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapTextureIndex_MetaData), NewProp_WeightmapTextureIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel = { "WeightmapTextureChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureChannel), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapTextureChannel_MetaData), NewProp_WeightmapTextureChannel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"WeightmapLayerAllocationInfo",
	Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers),
	sizeof(FWeightmapLayerAllocationInfo),
	alignof(FWeightmapLayerAllocationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.InnerSingleton;
}
// End ScriptStruct FWeightmapLayerAllocationInfo

// Begin ScriptStruct FLandscapeComponentMaterialOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride;
class UScriptStruct* FLandscapeComponentMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeComponentMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeComponentMaterialOverride>()
{
	return FLandscapeComponentMaterialOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "5.1" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeComponentMaterialOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeComponentMaterialOverride, LODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) }; // 1262733314
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeComponentMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeComponentMaterialOverride",
	Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers),
	sizeof(FLandscapeComponentMaterialOverride),
	alignof(FLandscapeComponentMaterialOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.InnerSingleton;
}
// End ScriptStruct FLandscapeComponentMaterialOverride

// Begin ScriptStruct FLandscapePerLODMaterialOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride;
class UScriptStruct* FLandscapePerLODMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapePerLODMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapePerLODMaterialOverride>()
{
	return FLandscapePerLODMaterialOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapePerLODMaterialOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapePerLODMaterialOverride, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapePerLODMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapePerLODMaterialOverride",
	Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::PropPointers),
	sizeof(FLandscapePerLODMaterialOverride),
	alignof(FLandscapePerLODMaterialOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.InnerSingleton;
}
// End ScriptStruct FLandscapePerLODMaterialOverride

// Begin ScriptStruct FWeightmapData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightmapData;
class UScriptStruct* FWeightmapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightmapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightmapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("WeightmapData"));
	}
	return Z_Registration_Info_UScriptStruct_WeightmapData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FWeightmapData>()
{
	return FWeightmapData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeightmapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerAllocations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureUsages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerAllocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerAllocations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureUsages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureUsages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightmapData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightmapData, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations_Inner = { "LayerAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, METADATA_PARAMS(0, nullptr) }; // 2278532835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations = { "LayerAllocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightmapData, LayerAllocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerAllocations_MetaData), NewProp_LayerAllocations_MetaData) }; // 2278532835
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages_Inner = { "TextureUsages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages = { "TextureUsages", nullptr, (EPropertyFlags)0x0114000400002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightmapData, TextureUsages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureUsages_MetaData), NewProp_TextureUsages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightmapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightmapData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"WeightmapData",
	Z_Construct_UScriptStruct_FWeightmapData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::PropPointers),
	sizeof(FWeightmapData),
	alignof(FWeightmapData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeightmapData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeightmapData()
{
	if (!Z_Registration_Info_UScriptStruct_WeightmapData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightmapData.InnerSingleton, Z_Construct_UScriptStruct_FWeightmapData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeightmapData.InnerSingleton;
}
// End ScriptStruct FWeightmapData

// Begin ScriptStruct FHeightmapData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeightmapData;
class UScriptStruct* FHeightmapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeightmapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeightmapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeightmapData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("HeightmapData"));
	}
	return Z_Registration_Info_UScriptStruct_HeightmapData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FHeightmapData>()
{
	return FHeightmapData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHeightmapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeightmapData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHeightmapData_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeightmapData, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeightmapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightmapData_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightmapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeightmapData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"HeightmapData",
	Z_Construct_UScriptStruct_FHeightmapData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightmapData_Statics::PropPointers),
	sizeof(FHeightmapData),
	alignof(FHeightmapData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightmapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeightmapData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeightmapData()
{
	if (!Z_Registration_Info_UScriptStruct_HeightmapData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeightmapData.InnerSingleton, Z_Construct_UScriptStruct_FHeightmapData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HeightmapData.InnerSingleton;
}
// End ScriptStruct FHeightmapData

// Begin ScriptStruct FLandscapeLayerComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData;
class UScriptStruct* FLandscapeLayerComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerComponentData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayerComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayerComponentData>()
{
	return FLandscapeLayerComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Comment", "// Edit layers are referenced by Guid, this name is just there to provide some insights as to what edit layer name this layer data corresponded to in case of a missing edit layer guid\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Edit layers are referenced by Guid, this name is just there to provide some insights as to what edit layer name this layer data corresponded to in case of a missing edit layer guid" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayerComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayerComponentData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_HeightmapData = { "HeightmapData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayerComponentData, HeightmapData), Z_Construct_UScriptStruct_FHeightmapData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapData_MetaData), NewProp_HeightmapData_MetaData) }; // 3903484458
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_WeightmapData = { "WeightmapData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayerComponentData, WeightmapData), Z_Construct_UScriptStruct_FWeightmapData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapData_MetaData), NewProp_WeightmapData_MetaData) }; // 211101603
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_DebugName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_HeightmapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_WeightmapData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeLayerComponentData",
	Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::PropPointers),
	sizeof(FLandscapeLayerComponentData),
	alignof(FLandscapeLayerComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.InnerSingleton;
}
// End ScriptStruct FLandscapeLayerComponentData

// Begin Enum ELandscapeClearMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeClearMode;
static UEnum* ELandscapeClearMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeClearMode, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeClearMode"));
	}
	return Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeClearMode>()
{
	return ELandscapeClearMode_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clear_All.DisplayName", "All" },
		{ "Clear_All.Name", "Clear_All" },
		{ "Clear_Heightmap.DisplayName", "Sculpt" },
		{ "Clear_Heightmap.Name", "Clear_Heightmap" },
		{ "Clear_Weightmap.DisplayName", "Paint" },
		{ "Clear_Weightmap.Name", "Clear_Weightmap" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Clear_Weightmap", (int64)Clear_Weightmap },
		{ "Clear_Heightmap", (int64)Clear_Heightmap },
		{ "Clear_All", (int64)Clear_All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeClearMode",
	"ELandscapeClearMode",
	Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeClearMode()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton;
}
// End Enum ELandscapeClearMode

// Begin Class ULandscapeLODStreamingProxy_DEPRECATED
void ULandscapeLODStreamingProxy_DEPRECATED::StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeLODStreamingProxy_DEPRECATED);
UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister()
{
	return ULandscapeLODStreamingProxy_DEPRECATED::StaticClass();
}
struct Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeLODStreamingProxy_DEPRECATED>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::ClassParams = {
	&ULandscapeLODStreamingProxy_DEPRECATED::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED()
{
	if (!Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton, Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeLODStreamingProxy_DEPRECATED>()
{
	return ULandscapeLODStreamingProxy_DEPRECATED::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLODStreamingProxy_DEPRECATED);
ULandscapeLODStreamingProxy_DEPRECATED::~ULandscapeLODStreamingProxy_DEPRECATED() {}
// End Class ULandscapeLODStreamingProxy_DEPRECATED

// Begin Class ULandscapeComponent Function EditorGetPaintLayerWeightAtLocation
struct Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics
{
	struct LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms
	{
		FVector InLocation;
		ULandscapeLayerInfoObject* PaintLayer;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Editor" },
		{ "Comment", "/** Gets the landscape paint layer weight value at the given position using LandscapeLayerInfo . Returns 0 in case it fails. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Gets the landscape paint layer weight value at the given position using LandscapeLayerInfo . Returns 0 in case it fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintLayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocation_MetaData), NewProp_InLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_PaintLayer = { "PaintLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms, PaintLayer), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_PaintLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "EditorGetPaintLayerWeightAtLocation", nullptr, nullptr, Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULandscapeComponent::execEditorGetPaintLayerWeightAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
	P_GET_OBJECT(ULandscapeLayerInfoObject,Z_Param_PaintLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->EditorGetPaintLayerWeightAtLocation(Z_Param_Out_InLocation,Z_Param_PaintLayer);
	P_NATIVE_END;
}
// End Class ULandscapeComponent Function EditorGetPaintLayerWeightAtLocation

// Begin Class ULandscapeComponent Function EditorGetPaintLayerWeightByNameAtLocation
struct Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics
{
	struct LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms
	{
		FVector InLocation;
		FName InPaintLayerName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Editor" },
		{ "Comment", "/** Gets the landscape paint layer weight value at the given position using layer name. Returns 0 in case it fails. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Gets the landscape paint layer weight value at the given position using layer name. Returns 0 in case it fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPaintLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InPaintLayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocation_MetaData), NewProp_InLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InPaintLayerName = { "InPaintLayerName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms, InPaintLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPaintLayerName_MetaData), NewProp_InPaintLayerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InPaintLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "EditorGetPaintLayerWeightByNameAtLocation", nullptr, nullptr, Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULandscapeComponent::execEditorGetPaintLayerWeightByNameAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
	P_GET_PROPERTY(FNameProperty,Z_Param_InPaintLayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->EditorGetPaintLayerWeightByNameAtLocation(Z_Param_Out_InLocation,Z_Param_InPaintLayerName);
	P_NATIVE_END;
}
// End Class ULandscapeComponent Function EditorGetPaintLayerWeightByNameAtLocation

// Begin Class ULandscapeComponent Function GetMaterialInstanceDynamic
struct Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics
{
	struct LandscapeComponent_eventGetMaterialInstanceDynamic_Parms
	{
		int32 InIndex;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "Comment", "/** Gets the landscape material instance dynamic for this component */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Gets the landscape material instance dynamic for this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventGetMaterialInstanceDynamic_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventGetMaterialInstanceDynamic_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "GetMaterialInstanceDynamic", nullptr, nullptr, Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::LandscapeComponent_eventGetMaterialInstanceDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::LandscapeComponent_eventGetMaterialInstanceDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULandscapeComponent::execGetMaterialInstanceDynamic)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstanceDynamic(Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class ULandscapeComponent Function GetMaterialInstanceDynamic

// Begin Class ULandscapeComponent Function SetForcedLOD
struct Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics
{
	struct LandscapeComponent_eventSetForcedLOD_Parms
	{
		int32 InForcedLOD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InForcedLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::NewProp_InForcedLOD = { "InForcedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventSetForcedLOD_Parms, InForcedLOD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::NewProp_InForcedLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "SetForcedLOD", nullptr, nullptr, Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::LandscapeComponent_eventSetForcedLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::LandscapeComponent_eventSetForcedLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULandscapeComponent::execSetForcedLOD)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InForcedLOD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForcedLOD(Z_Param_InForcedLOD);
	P_NATIVE_END;
}
// End Class ULandscapeComponent Function SetForcedLOD

// Begin Class ULandscapeComponent Function SetLODBias
struct Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics
{
	struct LandscapeComponent_eventSetLODBias_Parms
	{
		int32 InLODBias;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLODBias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::NewProp_InLODBias = { "InLODBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeComponent_eventSetLODBias_Parms, InLODBias), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::NewProp_InLODBias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "SetLODBias", nullptr, nullptr, Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::LandscapeComponent_eventSetLODBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::LandscapeComponent_eventSetLODBias_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeComponent_SetLODBias()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULandscapeComponent::execSetLODBias)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLODBias);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLODBias(Z_Param_InLODBias);
	P_NATIVE_END;
}
// End Class ULandscapeComponent Function SetLODBias

// Begin Class ULandscapeComponent
void ULandscapeComponent::StaticRegisterNativesULandscapeComponent()
{
	UClass* Class = ULandscapeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EditorGetPaintLayerWeightAtLocation", &ULandscapeComponent::execEditorGetPaintLayerWeightAtLocation },
		{ "EditorGetPaintLayerWeightByNameAtLocation", &ULandscapeComponent::execEditorGetPaintLayerWeightByNameAtLocation },
		{ "GetMaterialInstanceDynamic", &ULandscapeComponent::execGetMaterialInstanceDynamic },
		{ "SetForcedLOD", &ULandscapeComponent::execSetForcedLOD },
		{ "SetLODBias", &ULandscapeComponent::execSetLODBias },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeComponent);
UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister()
{
	return ULandscapeComponent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Collision Movement Rendering PrimitiveComponent Object Transform Mobility VirtualTexture Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ShowCategories", "Rendering|Material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** X offset from global components grid origin (in quads) */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "X offset from global components grid origin (in quads)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Y offset from global components grid origin (in quads) */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Y offset from global components grid origin (in quads)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[] = {
		{ "Comment", "/** Total number of quads for this component, has to be >0 */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Total number of quads for this component, has to be >0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[] = {
		{ "Comment", "/** Number of quads for a subsection of the component. SubsectionSizeQuads+1 must be a power of two. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Number of quads for a subsection of the component. SubsectionSizeQuads+1 must be a power of two." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSubsections_MetaData[] = {
		{ "Comment", "/** Number of subsections in X or Y axis */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Number of subsections in X or Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideHoleMaterial_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstancesDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndexToMaterialIndex_MetaData[] = {
		{ "Comment", "/** Mapping between LOD and Material Index*/" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Mapping between LOD and Material Index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XYOffsetmapTexture_MetaData[] = {
		{ "Comment", "/** XYOffsetmap texture reference */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "XYOffsetmap texture reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapScaleBias_MetaData[] = {
		{ "Comment", "/** UV offset to component's weightmap data from component local coordinates*/" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "UV offset to component's weightmap data from component local coordinates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapSubsectionOffset_MetaData[] = {
		{ "Comment", "/** U or V offset into the weightmap for the first subsection, in texture UV space */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "U or V offset into the weightmap for the first subsection, in texture UV space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapScaleBias_MetaData[] = {
		{ "Comment", "/** UV offset to Heightmap data from component local coordinates */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "UV offset to Heightmap data from component local coordinates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[] = {
		{ "Comment", "/** Cached local-space bounding box, created at heightmap update time */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipToMipMaxDeltas_MetaData[] = {
		{ "Comment", "/** Maximum deltas between vertices and their counterparts from other mips. This mip-to-mip data is laid out in a contiguous array following the following pattern : \n\x09*  Say, we have 5 \"relevant\" mips and [N -> M] is the delta from mip N to M (where M > N and M < (NumRelevantMips - 1)) then the array will contain : \n\x09*  [0 -> 1], [0 -> 2], [0 -> 3], [1 -> 2], [1 -> 3], [2 -> 3]\n\x09*  i.e. for mip 0 : (NumRelevantMips - 1) deltas, then for mip 1 : (NumRelevantMips - 2) deltas, until mip == (NumRelevantMips - 2) : 1 delta\n\x09*  Note: a \"relevant\" mip is one with more than 1 vertex. i.e.:\n\x09*   - In the case of a 1x1 subsection, the last mip index (NumMips - 1) has a single pixel and is therefore not relevant (we cannot draw a landscape component with a single vertex!), hence the last relevant mip index will be NumMips - 2\n\x09*   - In the case of 2x2 subsections, the penultimate mip index (NumMips - 2) has 4 pixels, which means 4 subsections, each with a single pixel, and is therefore not relevant either, hence the last relevant mip index will be NumMips - 3\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Maximum deltas between vertices and their counterparts from other mips. This mip-to-mip data is laid out in a contiguous array following the following pattern :\nSay, we have 5 \"relevant\" mips and [N -> M] is the delta from mip N to M (where M > N and M < (NumRelevantMips - 1)) then the array will contain :\n[0 -> 1], [0 -> 2], [0 -> 3], [1 -> 2], [1 -> 3], [2 -> 3]\ni.e. for mip 0 : (NumRelevantMips - 1) deltas, then for mip 1 : (NumRelevantMips - 2) deltas, until mip == (NumRelevantMips - 2) : 1 delta\nNote: a \"relevant\" mip is one with more than 1 vertex. i.e.:\n - In the case of a 1x1 subsection, the last mip index (NumMips - 1) has a single pixel and is therefore not relevant (we cannot draw a landscape component with a single vertex!), hence the last relevant mip index will be NumMips - 2\n - In the case of 2x2 subsections, the penultimate mip index (NumMips - 2) has 4 pixels, which means 4 subsections, each with a single pixel, and is therefore not relevant either, hence the last relevant mip index will be NumMips - 3" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponentRef_MetaData[] = {
		{ "Comment", "/** Reference to associated collision component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Reference to associated collision component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUserTriggeredChangeRequested_MetaData[] = {
		{ "Comment", "/** Store  */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Store" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNaniteActive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for this component, used for caching during distributed lighting */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Unique ID for this component, used for caching during distributed lighting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayersData_MetaData[] = {
		{ "Comment", "/** Edit Layers that have data for this component store it here */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Edit Layers that have data for this component store it here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTexturesUsage_MetaData[] = {
		{ "Comment", "// Final layer data\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Final layer data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerUpdateFlagPerMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingCollisionDataUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingLayerCollisionDataUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[] = {
		{ "Comment", "/** Heightmap texture reference */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightmap texture reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerAllocations_MetaData[] = {
		{ "Comment", "/** List of layers, and the weightmap and channel they are stored */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "List of layers, and the weightmap and channel they are stored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextures_MetaData[] = {
		{ "Comment", "/** Weightmap texture reference */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Weightmap texture reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerLODOverrideMaterials_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassTypes_MetaData[] = {
		{ "Comment", "/** Cached list of grass types supported by the component's material.\n\x09* This is needed in a cooked build, as the grass types list is not available\n\x09* on the cooked material.\n\x09* Call UpdateGrassTypes() to ensure this array is up to date */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Cached list of grass types supported by the component's material.\nThis is needed in a cooked build, as the grass types list is not available\non the cooked material.\nCall UpdateGrassTypes() to ensure this array is up to date" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[] = {
		{ "Comment", "/** Uniquely identifies this component's built map data. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Uniquely identifies this component's built map data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMipLevel_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Heightfield mipmap used to generate collision */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightfield mipmap used to generate collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionMipLevel_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Heightfield mipmap used to generate simple collision */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightfield mipmap used to generate simple collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeZBoundsExtension_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\n\x09 *  Extension value in the negative Z axis, positive value increases bound size */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the negative Z axis, positive value increases bound size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveZBoundsExtension_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\n\x09 *  Extension value in the positive Z axis, positive value increases bound size */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the positive Z axis, positive value increases bound size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ClampMax", "4096" },
		{ "Comment", "/** StaticLightingResolution overriding per component, default value 0 means no overriding */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "StaticLightingResolution overriding per component, default value 0 means no overriding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Forced LOD level to use when rendering */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Forced LOD level to use when rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** LOD level Bias to use when rendering */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "LOD level Bias to use when rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
		{ "Comment", "// TODO [jonathan.bard] : remove unused : \n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "TODO [jonathan.bard] : remove unused :" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[] = {
		{ "Comment", "/**\x09Legacy irrelevant lights */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Legacy irrelevant lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingLODBias_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** LOD level Bias to use when lighting building via lightmass, -1 Means automatic LOD calculation based on ForcedLOD + LODBias */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "LOD level Bias to use when lighting building via lightmass, -1 Means automatic LOD calculation based on ForcedLOD + LODBias" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerAllowList_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "// List of layers allowed to be painted on this component\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "List of layers allowed to be painted on this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditToolRenderData_MetaData[] = {
		{ "Comment", "/** Pointer to data shared with the render thread, used by the editor tools */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Pointer to data shared with the render thread, used by the editor tools" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileDataSourceHash_MetaData[] = {
		{ "Comment", "/** Hash of source for mobile generated data. Used determine if we need to re-generate mobile pixel data. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Hash of source for mobile generated data. Used determine if we need to re-generate mobile pixel data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPerLOD_MetaData[] = {
		{ "Comment", "/** Represent the chosen material for each LOD */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Represent the chosen material for each LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialHash_MetaData[] = {
		{ "Comment", "/** Represents hash for last PhysicalMaterialTask */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Represents hash for last PhysicalMaterialTask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSavedPhysicalMaterialHash_MetaData[] = {
		{ "Comment", "/** Represents last saved hash for PhysicalMaterialTask */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Represents last saved hash for PhysicalMaterialTask" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileMaterialInterface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileMaterialInterfaces_MetaData[] = {
		{ "Comment", "/** Material interfaces used for mobile */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material interfaces used for mobile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileWeightmapTextures_MetaData[] = {
		{ "Comment", "/** Generated weightmap textures used for mobile. The first entry is also used for the normal map. \n\x09  * Serialized only when cooking or loading cooked builds. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Generated weightmap textures used for mobile. The first entry is also used for the normal map.\nSerialized only when cooking or loading cooked builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileWeightmapTextureArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileWeightmapLayerAllocations_MetaData[] = {
		{ "Comment", "/** Layer allocations used by mobile.*/" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Layer allocations used by mobile." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileCombinationMaterialInstances_MetaData[] = {
		{ "Comment", "/** The editor needs to save out the combination MIC we'll use for mobile, \n\x09  because we cannot generate it at runtime for standalone PIE games */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "The editor needs to save out the combination MIC we'll use for mobile,\n        because we cannot generate it at runtime for standalone PIE games" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileCombinationMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubsections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideHoleMaterial;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstancesDynamic_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstancesDynamic;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_LODIndexToMaterialIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODIndexToMaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XYOffsetmapTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapScaleBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightmapSubsectionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapScaleBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MipToMipMaxDeltas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MipToMipMaxDeltas;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_CollisionComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponentRef;
	static void NewProp_bUserTriggeredChangeRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserTriggeredChangeRequested;
	static void NewProp_bNaniteActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNaniteActive;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayersData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayersData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LayersData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightmapTexturesUsage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapTexturesUsage;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LayerUpdateFlagPerMode;
	static void NewProp_bPendingCollisionDataUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingCollisionDataUpdate;
	static void NewProp_bPendingLayerCollisionDataUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingLayerCollisionDataUpdate;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapLayerAllocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapLayerAllocations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightmapTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerLODOverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerLODOverrideMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrassTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrassTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionMipLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionMipLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeZBoundsExtension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositiveZBoundsExtension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticLightingResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightingLODBias;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerAllowList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerAllowList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditToolRenderData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MobileDataSourceHash;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_MaterialPerLOD_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialPerLOD_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialPerLOD;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SplineHash;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PhysicalMaterialHash;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastSavedPhysicalMaterialHash;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileMaterialInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileMaterialInterfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileMaterialInterfaces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileWeightmapTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileWeightmapTextures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileWeightmapTextureArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MobileWeightmapLayerAllocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileWeightmapLayerAllocations;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileCombinationMaterialInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileCombinationMaterialInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileCombinationMaterialInstance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation, "EditorGetPaintLayerWeightAtLocation" }, // 3368629046
		{ &Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, "EditorGetPaintLayerWeightByNameAtLocation" }, // 2278144730
		{ &Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic, "GetMaterialInstanceDynamic" }, // 3388069851
		{ &Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD, "SetForcedLOD" }, // 3364685913
		{ &Z_Construct_UFunction_ULandscapeComponent_SetLODBias, "SetLODBias" }, // 734387840
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX = { "SectionBaseX", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, SectionBaseX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionBaseX_MetaData), NewProp_SectionBaseX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY = { "SectionBaseY", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, SectionBaseY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionBaseY_MetaData), NewProp_SectionBaseY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads = { "ComponentSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, ComponentSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentSizeQuads_MetaData), NewProp_ComponentSizeQuads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads = { "SubsectionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, SubsectionSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsectionSizeQuads_MetaData), NewProp_SubsectionSizeQuads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections = { "NumSubsections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, NumSubsections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSubsections_MetaData), NewProp_NumSubsections_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterial_MetaData), NewProp_OverrideMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial = { "OverrideHoleMaterial", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, OverrideHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideHoleMaterial_MetaData), NewProp_OverrideHoleMaterial_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 2847342099
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, OverrideMaterials_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) }; // 2847342099
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialInstance_DEPRECATED), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0114400000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstances_MetaData), NewProp_MaterialInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_Inner = { "MaterialInstancesDynamic", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic = { "MaterialInstancesDynamic", nullptr, (EPropertyFlags)0x0114400000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialInstancesDynamic), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstancesDynamic_MetaData), NewProp_MaterialInstancesDynamic_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_Inner = { "LODIndexToMaterialIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex = { "LODIndexToMaterialIndex", nullptr, (EPropertyFlags)0x0010400000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LODIndexToMaterialIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndexToMaterialIndex_MetaData), NewProp_LODIndexToMaterialIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture = { "XYOffsetmapTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, XYOffsetmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XYOffsetmapTexture_MetaData), NewProp_XYOffsetmapTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias = { "WeightmapScaleBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapScaleBias_MetaData), NewProp_WeightmapScaleBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset = { "WeightmapSubsectionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapSubsectionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapSubsectionOffset_MetaData), NewProp_WeightmapSubsectionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias = { "HeightmapScaleBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, HeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapScaleBias_MetaData), NewProp_HeightmapScaleBias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox = { "CachedLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedLocalBox_MetaData), NewProp_CachedLocalBox_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MipToMipMaxDeltas_Inner = { "MipToMipMaxDeltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MipToMipMaxDeltas = { "MipToMipMaxDeltas", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MipToMipMaxDeltas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipToMipMaxDeltas_MetaData), NewProp_MipToMipMaxDeltas_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0014000820080008, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, CollisionComponent_DEPRECATED), Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponentRef = { "CollisionComponentRef", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, CollisionComponentRef), Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponentRef_MetaData), NewProp_CollisionComponentRef_MetaData) };
void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_SetBit(void* Obj)
{
	((ULandscapeComponent*)Obj)->bUserTriggeredChangeRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested = { "bUserTriggeredChangeRequested", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUserTriggeredChangeRequested_MetaData), NewProp_bUserTriggeredChangeRequested_MetaData) };
void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_SetBit(void* Obj)
{
	((ULandscapeComponent*)Obj)->bNaniteActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive = { "bNaniteActive", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNaniteActive_MetaData), NewProp_bNaniteActive_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingGuid_MetaData), NewProp_LightingGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_ValueProp = { "LayersData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLandscapeLayerComponentData, METADATA_PARAMS(0, nullptr) }; // 2891023111
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_Key_KeyProp = { "LayersData_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData = { "LayersData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LayersData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayersData_MetaData), NewProp_LayersData_MetaData) }; // 2891023111
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage_Inner = { "WeightmapTexturesUsage", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage = { "WeightmapTexturesUsage", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapTexturesUsage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapTexturesUsage_MetaData), NewProp_WeightmapTexturesUsage_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerUpdateFlagPerMode = { "LayerUpdateFlagPerMode", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LayerUpdateFlagPerMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerUpdateFlagPerMode_MetaData), NewProp_LayerUpdateFlagPerMode_MetaData) };
void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate_SetBit(void* Obj)
{
	((ULandscapeComponent*)Obj)->bPendingCollisionDataUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate = { "bPendingCollisionDataUpdate", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingCollisionDataUpdate_MetaData), NewProp_bPendingCollisionDataUpdate_MetaData) };
void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate_SetBit(void* Obj)
{
	((ULandscapeComponent*)Obj)->bPendingLayerCollisionDataUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate = { "bPendingLayerCollisionDataUpdate", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingLayerCollisionDataUpdate_MetaData), NewProp_bPendingLayerCollisionDataUpdate_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture = { "HeightmapTexture", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapTexture_MetaData), NewProp_HeightmapTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_Inner = { "WeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, METADATA_PARAMS(0, nullptr) }; // 2278532835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations = { "WeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapLayerAllocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapLayerAllocations_MetaData), NewProp_WeightmapLayerAllocations_MetaData) }; // 2278532835
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_Inner = { "WeightmapTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures = { "WeightmapTextures", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapTextures_MetaData), NewProp_WeightmapTextures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials_Inner = { "PerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 2560867223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials = { "PerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, PerLODOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerLODOverrideMaterials_MetaData), NewProp_PerLODOverrideMaterials_MetaData) }; // 2560867223
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GrassTypes_Inner = { "GrassTypes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeGrassType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GrassTypes = { "GrassTypes", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, GrassTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassTypes_MetaData), NewProp_GrassTypes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId = { "MapBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapBuildDataId_MetaData), NewProp_MapBuildDataId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel = { "CollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, CollisionMipLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMipLevel_MetaData), NewProp_CollisionMipLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel = { "SimpleCollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, SimpleCollisionMipLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleCollisionMipLevel_MetaData), NewProp_SimpleCollisionMipLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension = { "NegativeZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, NegativeZBoundsExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeZBoundsExtension_MetaData), NewProp_NegativeZBoundsExtension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension = { "PositiveZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, PositiveZBoundsExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveZBoundsExtension_MetaData), NewProp_PositiveZBoundsExtension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution = { "StaticLightingResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, StaticLightingResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticLightingResolution_MetaData), NewProp_StaticLightingResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, ForcedLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedLOD_MetaData), NewProp_ForcedLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_MetaData), NewProp_LODBias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateId_MetaData), NewProp_StateId_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_Inner = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, IrrelevantLights_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IrrelevantLights_MetaData), NewProp_IrrelevantLights_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias = { "LightingLODBias", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LightingLODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingLODBias_MetaData), NewProp_LightingLODBias_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList_Inner = { "LayerAllowList", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList = { "LayerAllowList", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LayerAllowList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerAllowList_MetaData), NewProp_LayerAllowList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData = { "EditToolRenderData", nullptr, (EPropertyFlags)0x0010000c00202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, EditToolRenderData), Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditToolRenderData_MetaData), NewProp_EditToolRenderData_MetaData) }; // 71166613
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash = { "MobileDataSourceHash", nullptr, (EPropertyFlags)0x0010000800200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileDataSourceHash), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileDataSourceHash_MetaData), NewProp_MobileDataSourceHash_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_ValueProp = { "MaterialPerLOD", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_Key_KeyProp = { "MaterialPerLOD_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD = { "MaterialPerLOD", nullptr, (EPropertyFlags)0x0010000800200000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialPerLOD), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPerLOD_MetaData), NewProp_MaterialPerLOD_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SplineHash = { "SplineHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, SplineHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineHash_MetaData), NewProp_SplineHash_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PhysicalMaterialHash = { "PhysicalMaterialHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, PhysicalMaterialHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialHash_MetaData), NewProp_PhysicalMaterialHash_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastSavedPhysicalMaterialHash = { "LastSavedPhysicalMaterialHash", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, LastSavedPhysicalMaterialHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSavedPhysicalMaterialHash_MetaData), NewProp_LastSavedPhysicalMaterialHash_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface = { "MobileMaterialInterface", nullptr, (EPropertyFlags)0x0114800020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileMaterialInterface_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileMaterialInterface_MetaData), NewProp_MobileMaterialInterface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_Inner = { "MobileMaterialInterfaces", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces = { "MobileMaterialInterfaces", nullptr, (EPropertyFlags)0x0114800000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileMaterialInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileMaterialInterfaces_MetaData), NewProp_MobileMaterialInterfaces_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_Inner = { "MobileWeightmapTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures = { "MobileWeightmapTextures", nullptr, (EPropertyFlags)0x0114800000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileWeightmapTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileWeightmapTextures_MetaData), NewProp_MobileWeightmapTextures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextureArray = { "MobileWeightmapTextureArray", nullptr, (EPropertyFlags)0x0114800000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileWeightmapTextureArray), Z_Construct_UClass_UTexture2DArray_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileWeightmapTextureArray_MetaData), NewProp_MobileWeightmapTextureArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapLayerAllocations_Inner = { "MobileWeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, METADATA_PARAMS(0, nullptr) }; // 2278532835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapLayerAllocations = { "MobileWeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileWeightmapLayerAllocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileWeightmapLayerAllocations_MetaData), NewProp_MobileWeightmapLayerAllocations_MetaData) }; // 2278532835
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_Inner = { "MobileCombinationMaterialInstances", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances = { "MobileCombinationMaterialInstances", nullptr, (EPropertyFlags)0x0114800800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileCombinationMaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileCombinationMaterialInstances_MetaData), NewProp_MobileCombinationMaterialInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance = { "MobileCombinationMaterialInstance", nullptr, (EPropertyFlags)0x0114800820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeComponent, MobileCombinationMaterialInstance_DEPRECATED), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileCombinationMaterialInstance_MetaData), NewProp_MobileCombinationMaterialInstance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MipToMipMaxDeltas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MipToMipMaxDeltas,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerUpdateFlagPerMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GrassTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GrassTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SplineHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PhysicalMaterialHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastSavedPhysicalMaterialHash,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextureArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapLayerAllocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapLayerAllocations,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeComponent_Statics::ClassParams = {
	&ULandscapeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeComponent()
{
	if (!Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton, Z_Construct_UClass_ULandscapeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeComponent>()
{
	return ULandscapeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeComponent);
ULandscapeComponent::~ULandscapeComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeComponent)
// End Class ULandscapeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeClearMode_StaticEnum, TEXT("ELandscapeClearMode"), &Z_Registration_Info_UEnum_ELandscapeClearMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1260731235U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeEditToolRenderData::StaticStruct, Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewStructOps, TEXT("LandscapeEditToolRenderData"), &Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeEditToolRenderData), 71166613U) },
		{ FWeightmapLayerAllocationInfo::StaticStruct, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewStructOps, TEXT("WeightmapLayerAllocationInfo"), &Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightmapLayerAllocationInfo), 2278532835U) },
		{ FLandscapeComponentMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewStructOps, TEXT("LandscapeComponentMaterialOverride"), &Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeComponentMaterialOverride), 2847342099U) },
		{ FLandscapePerLODMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewStructOps, TEXT("LandscapePerLODMaterialOverride"), &Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapePerLODMaterialOverride), 2560867223U) },
		{ FWeightmapData::StaticStruct, Z_Construct_UScriptStruct_FWeightmapData_Statics::NewStructOps, TEXT("WeightmapData"), &Z_Registration_Info_UScriptStruct_WeightmapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightmapData), 211101603U) },
		{ FHeightmapData::StaticStruct, Z_Construct_UScriptStruct_FHeightmapData_Statics::NewStructOps, TEXT("HeightmapData"), &Z_Registration_Info_UScriptStruct_HeightmapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeightmapData), 3903484458U) },
		{ FLandscapeLayerComponentData::StaticStruct, Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewStructOps, TEXT("LandscapeLayerComponentData"), &Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeLayerComponentData), 2891023111U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED, ULandscapeLODStreamingProxy_DEPRECATED::StaticClass, TEXT("ULandscapeLODStreamingProxy_DEPRECATED"), &Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeLODStreamingProxy_DEPRECATED), 288368197U) },
		{ Z_Construct_UClass_ULandscapeComponent, ULandscapeComponent::StaticClass, TEXT("ULandscapeComponent"), &Z_Registration_Info_UClass_ULandscapeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeComponent), 3116700609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_204850883(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
