// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeProxy.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/PerQualityLevelProperties.h"
#include "Runtime/Landscape/Classes/LandscapeComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeProxy() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_APartitionActor();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelFloat();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineInterface_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLODFalloff();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FLandscapeEditorLayerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings;
class UScriptStruct* FLandscapeEditorLayerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeEditorLayerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeEditorLayerSettings>()
{
	return FLandscapeEditorLayerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportLayerFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReimportLayerFilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeEditorLayerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_LayerInfoObj = { "LayerInfoObj", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditorLayerSettings, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfoObj_MetaData), NewProp_LayerInfoObj_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_ReimportLayerFilePath = { "ReimportLayerFilePath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeEditorLayerSettings, ReimportLayerFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportLayerFilePath_MetaData), NewProp_ReimportLayerFilePath_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_LayerInfoObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_ReimportLayerFilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeEditorLayerSettings",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::PropPointers), 0),
	sizeof(FLandscapeEditorLayerSettings),
	alignof(FLandscapeEditorLayerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings.InnerSingleton;
}
// End ScriptStruct FLandscapeEditorLayerSettings

// Begin Enum ELandscapeImportAlphamapType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeImportAlphamapType;
static UEnum* ELandscapeImportAlphamapType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeImportAlphamapType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeImportAlphamapType>()
{
	return ELandscapeImportAlphamapType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.Comment", "// Three layers blended 50/30/20 represented as 0.5, 0.3, and 0.2 in the alpha maps\n// All alpha maps for blended layers total to 1.0\n// This is the style used by UE internally for blended layers\n" },
		{ "Additive.Name", "ELandscapeImportAlphamapType::Additive" },
		{ "Additive.ToolTip", "Three layers blended 50/30/20 represented as 0.5, 0.3, and 0.2 in the alpha maps\nAll alpha maps for blended layers total to 1.0\nThis is the style used by UE internally for blended layers" },
		{ "Layered.Comment", "// Three layers blended 50/30/20 represented as 0.5, 0.6, and 1.0 in the alpha maps\n// Each alpha map only specifies the remainder from previous layers, so the last layer used will always be 1.0\n// Some other tools use this format\n" },
		{ "Layered.Name", "ELandscapeImportAlphamapType::Layered" },
		{ "Layered.ToolTip", "Three layers blended 50/30/20 represented as 0.5, 0.6, and 1.0 in the alpha maps\nEach alpha map only specifies the remainder from previous layers, so the last layer used will always be 1.0\nSome other tools use this format" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeImportAlphamapType::Additive", (int64)ELandscapeImportAlphamapType::Additive },
		{ "ELandscapeImportAlphamapType::Layered", (int64)ELandscapeImportAlphamapType::Layered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeImportAlphamapType",
	"ELandscapeImportAlphamapType",
	Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.InnerSingleton;
}
// End Enum ELandscapeImportAlphamapType

// Begin ScriptStruct FLandscapeImportLayerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo;
class UScriptStruct* FLandscapeImportLayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeImportLayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeImportLayerInfo>()
{
	return FLandscapeImportLayerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing Layer Data for import */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Structure storing Layer Data for import" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "NoCreate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "Category", "Import" },
		{ "DisplayName", "Layer File" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportLayerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeImportLayerInfo, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeImportLayerInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfo_MetaData), NewProp_LayerInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeImportLayerInfo, SourceFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_SourceFilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeImportLayerInfo",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::PropPointers), 0),
	sizeof(FLandscapeImportLayerInfo),
	alignof(FLandscapeImportLayerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo.InnerSingleton;
}
// End ScriptStruct FLandscapeImportLayerInfo

// Begin Enum ELandscapeLayerPaintingRestriction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction;
static UEnum* ELandscapeLayerPaintingRestriction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerPaintingRestriction"));
	}
	return Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerPaintingRestriction>()
{
	return ELandscapeLayerPaintingRestriction_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// this is only here because putting it in LandscapeEditorObject.h (where it belongs)\n// results in Engine being dependent on LandscapeEditor, as the actual landscape editing\n// code (e.g. LandscapeEdit.h) is in /Engine/ for some reason...\n" },
		{ "ExistingOnly.Comment", "/** Restricts painting to only components that already have this layer. */" },
		{ "ExistingOnly.DisplayName", "Existing Layers Only" },
		{ "ExistingOnly.Name", "ELandscapeLayerPaintingRestriction::ExistingOnly" },
		{ "ExistingOnly.ToolTip", "Restricts painting to only components that already have this layer." },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "None.Comment", "/** No restriction, can paint anywhere (default). */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELandscapeLayerPaintingRestriction::None" },
		{ "None.ToolTip", "No restriction, can paint anywhere (default)." },
		{ "ToolTip", "this is only here because putting it in LandscapeEditorObject.h (where it belongs)\nresults in Engine being dependent on LandscapeEditor, as the actual landscape editing\ncode (e.g. LandscapeEdit.h) is in /Engine/ for some reason..." },
		{ "UseComponentAllowList.Comment", "/** Restricts painting to only components that have this layer in their allow list. */" },
		{ "UseComponentAllowList.DisplayName", "Component Allow List" },
		{ "UseComponentAllowList.Name", "ELandscapeLayerPaintingRestriction::UseComponentAllowList" },
		{ "UseComponentAllowList.ToolTip", "Restricts painting to only components that have this layer in their allow list." },
		{ "UseMaxLayers.Comment", "/** Uses the MaxPaintedLayersPerComponent setting from the LandscapeProxy. */" },
		{ "UseMaxLayers.DisplayName", "Limit Layer Count" },
		{ "UseMaxLayers.Name", "ELandscapeLayerPaintingRestriction::UseMaxLayers" },
		{ "UseMaxLayers.ToolTip", "Uses the MaxPaintedLayersPerComponent setting from the LandscapeProxy." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeLayerPaintingRestriction::None", (int64)ELandscapeLayerPaintingRestriction::None },
		{ "ELandscapeLayerPaintingRestriction::UseMaxLayers", (int64)ELandscapeLayerPaintingRestriction::UseMaxLayers },
		{ "ELandscapeLayerPaintingRestriction::ExistingOnly", (int64)ELandscapeLayerPaintingRestriction::ExistingOnly },
		{ "ELandscapeLayerPaintingRestriction::UseComponentAllowList", (int64)ELandscapeLayerPaintingRestriction::UseComponentAllowList },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeLayerPaintingRestriction",
	"ELandscapeLayerPaintingRestriction",
	Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.InnerSingleton;
}
// End Enum ELandscapeLayerPaintingRestriction

// Begin Enum ELandscapeLayerDisplayMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode;
static UEnum* ELandscapeLayerDisplayMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerDisplayMode"));
	}
	return Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerDisplayMode>()
{
	return ELandscapeLayerDisplayMode_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alphabetical.Comment", "/** Alphabetical sorting display mode */" },
		{ "Alphabetical.Name", "ELandscapeLayerDisplayMode::Alphabetical" },
		{ "Alphabetical.ToolTip", "Alphabetical sorting display mode" },
		{ "Default.Comment", "/** Material sorting display mode */" },
		{ "Default.Name", "ELandscapeLayerDisplayMode::Default" },
		{ "Default.ToolTip", "Material sorting display mode" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "UserSpecific.Comment", "/** User specific sorting display mode */" },
		{ "UserSpecific.Name", "ELandscapeLayerDisplayMode::UserSpecific" },
		{ "UserSpecific.ToolTip", "User specific sorting display mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeLayerDisplayMode::Default", (int64)ELandscapeLayerDisplayMode::Default },
		{ "ELandscapeLayerDisplayMode::Alphabetical", (int64)ELandscapeLayerDisplayMode::Alphabetical },
		{ "ELandscapeLayerDisplayMode::UserSpecific", (int64)ELandscapeLayerDisplayMode::UserSpecific },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeLayerDisplayMode",
	"ELandscapeLayerDisplayMode",
	Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.InnerSingleton;
}
// End Enum ELandscapeLayerDisplayMode

// Begin Enum ELandscapeHLODTextureSizePolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy;
static UEnum* ELandscapeHLODTextureSizePolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeHLODTextureSizePolicy"));
	}
	return Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeHLODTextureSizePolicy>()
{
	return ELandscapeHLODTextureSizePolicy_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutomaticSize.Comment", "/** Automatic texture size, based on the expected HLOD draw distance and the landscape size. */" },
		{ "AutomaticSize.Name", "ELandscapeHLODTextureSizePolicy::AutomaticSize" },
		{ "AutomaticSize.ToolTip", "Automatic texture size, based on the expected HLOD draw distance and the landscape size." },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "SpecificSize.Comment", "/** User specified texture size. */" },
		{ "SpecificSize.Name", "ELandscapeHLODTextureSizePolicy::SpecificSize" },
		{ "SpecificSize.ToolTip", "User specified texture size." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeHLODTextureSizePolicy::AutomaticSize", (int64)ELandscapeHLODTextureSizePolicy::AutomaticSize },
		{ "ELandscapeHLODTextureSizePolicy::SpecificSize", (int64)ELandscapeHLODTextureSizePolicy::SpecificSize },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeHLODTextureSizePolicy",
	"ELandscapeHLODTextureSizePolicy",
	Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy()
{
	if (!Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.InnerSingleton;
}
// End Enum ELandscapeHLODTextureSizePolicy

// Begin Enum ELandscapeHLODMeshSourceLODPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy;
static UEnum* ELandscapeHLODMeshSourceLODPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeHLODMeshSourceLODPolicy"));
	}
	return Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeHLODMeshSourceLODPolicy>()
{
	return ELandscapeHLODMeshSourceLODPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutomaticLOD.Comment", "/** Automatic LOD selection, based on the expected HLOD draw distance and the landscape LOD Distribution settings. */" },
		{ "AutomaticLOD.Name", "ELandscapeHLODMeshSourceLODPolicy::AutomaticLOD" },
		{ "AutomaticLOD.ToolTip", "Automatic LOD selection, based on the expected HLOD draw distance and the landscape LOD Distribution settings." },
		{ "LowestDetailLOD.Comment", "/** Use the lowest detailed LOD of this landscape. */" },
		{ "LowestDetailLOD.Name", "ELandscapeHLODMeshSourceLODPolicy::LowestDetailLOD" },
		{ "LowestDetailLOD.ToolTip", "Use the lowest detailed LOD of this landscape." },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "SpecificLOD.Comment", "/** User specified landscape LOD. */" },
		{ "SpecificLOD.Name", "ELandscapeHLODMeshSourceLODPolicy::SpecificLOD" },
		{ "SpecificLOD.ToolTip", "User specified landscape LOD." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeHLODMeshSourceLODPolicy::AutomaticLOD", (int64)ELandscapeHLODMeshSourceLODPolicy::AutomaticLOD },
		{ "ELandscapeHLODMeshSourceLODPolicy::SpecificLOD", (int64)ELandscapeHLODMeshSourceLODPolicy::SpecificLOD },
		{ "ELandscapeHLODMeshSourceLODPolicy::LowestDetailLOD", (int64)ELandscapeHLODMeshSourceLODPolicy::LowestDetailLOD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeHLODMeshSourceLODPolicy",
	"ELandscapeHLODMeshSourceLODPolicy",
	Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy()
{
	if (!Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.InnerSingleton;
}
// End Enum ELandscapeHLODMeshSourceLODPolicy

// Begin Enum ELandscapeLODFalloff
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeLODFalloff;
static UEnum* ELandscapeLODFalloff_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLODFalloff, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLODFalloff"));
	}
	return Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLODFalloff::Type>()
{
	return ELandscapeLODFalloff_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Linear.Comment", "/** Default mode. */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "ELandscapeLODFalloff::Linear" },
		{ "Linear.ToolTip", "Default mode." },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "SquareRoot.Comment", "/** Square Root give more natural transition, and also keep the same LOD. */" },
		{ "SquareRoot.DisplayName", "Square Root" },
		{ "SquareRoot.Name", "ELandscapeLODFalloff::SquareRoot" },
		{ "SquareRoot.ToolTip", "Square Root give more natural transition, and also keep the same LOD." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeLODFalloff::Linear", (int64)ELandscapeLODFalloff::Linear },
		{ "ELandscapeLODFalloff::SquareRoot", (int64)ELandscapeLODFalloff::SquareRoot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeLODFalloff",
	"ELandscapeLODFalloff::Type",
	Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeLODFalloff()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLODFalloff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeLODFalloff.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeLODFalloff.InnerSingleton;
}
// End Enum ELandscapeLODFalloff

// Begin ScriptStruct FLandscapeProxyMaterialOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride;
class UScriptStruct* FLandscapeProxyMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeProxyMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeProxyMaterialOverride>()
{
	return FLandscapeProxyMaterialOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeProxyMaterialOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeProxyMaterialOverride, LODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) }; // 1262733314
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeProxyMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeProxyMaterialOverride",
	Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::PropPointers),
	sizeof(FLandscapeProxyMaterialOverride),
	alignof(FLandscapeProxyMaterialOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride.InnerSingleton;
}
// End ScriptStruct FLandscapeProxyMaterialOverride

// Begin Class ALandscapeProxy Function ChangeComponentScreenSizeToUseSubSections
struct Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics
{
	struct LandscapeProxy_eventChangeComponentScreenSizeToUseSubSections_Parms
	{
		float InComponentScreenSizeToUseSubSections;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Change ComponentScreenSizeToUseSubSections value on the render proxy.*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This value can't be changed anymore and has been ineffective for several versions now. Please stop using it" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Change ComponentScreenSizeToUseSubSections value on the render proxy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InComponentScreenSizeToUseSubSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::NewProp_InComponentScreenSizeToUseSubSections = { "InComponentScreenSizeToUseSubSections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventChangeComponentScreenSizeToUseSubSections_Parms, InComponentScreenSizeToUseSubSections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::NewProp_InComponentScreenSizeToUseSubSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "ChangeComponentScreenSizeToUseSubSections", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::LandscapeProxy_eventChangeComponentScreenSizeToUseSubSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::LandscapeProxy_eventChangeComponentScreenSizeToUseSubSections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execChangeComponentScreenSizeToUseSubSections)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InComponentScreenSizeToUseSubSections);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeComponentScreenSizeToUseSubSections(Z_Param_InComponentScreenSizeToUseSubSections);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function ChangeComponentScreenSizeToUseSubSections

// Begin Class ALandscapeProxy Function ChangeLODDistanceFactor
struct Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics
{
	struct LandscapeProxy_eventChangeLODDistanceFactor_Parms
	{
		float InLODDistanceFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Change the Level of Detail distance factor */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This value can't be changed anymore, you should edit the property LODDistributionSetting of the Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Change the Level of Detail distance factor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLODDistanceFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::NewProp_InLODDistanceFactor = { "InLODDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventChangeLODDistanceFactor_Parms, InLODDistanceFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::NewProp_InLODDistanceFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "ChangeLODDistanceFactor", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::LandscapeProxy_eventChangeLODDistanceFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::LandscapeProxy_eventChangeLODDistanceFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execChangeLODDistanceFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLODDistanceFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeLODDistanceFactor(Z_Param_InLODDistanceFactor);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function ChangeLODDistanceFactor

// Begin Class ALandscapeProxy Function DeleteUnusedLayers
#if WITH_EDITOR
struct Z_Construct_UFunction_ALandscapeProxy_DeleteUnusedLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/**\n\x09 * Delete all unused layers in components. Warning: any update of the component could re-introduce them.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Delete all unused layers in components. Warning: any update of the component could re-introduce them." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_DeleteUnusedLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "DeleteUnusedLayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_DeleteUnusedLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_DeleteUnusedLayers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALandscapeProxy_DeleteUnusedLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_DeleteUnusedLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ALandscapeProxy::execDeleteUnusedLayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteUnusedLayers();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ALandscapeProxy Function DeleteUnusedLayers

// Begin Class ALandscapeProxy Function EditorApplySpline
struct Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics
{
	struct LandscapeProxy_eventEditorApplySpline_Parms
	{
		USplineComponent* InSplineComponent;
		float StartWidth;
		float EndWidth;
		float StartSideFalloff;
		float EndSideFalloff;
		float StartRoll;
		float EndRoll;
		int32 NumSubdivisions;
		bool bRaiseHeights;
		bool bLowerHeights;
		ULandscapeLayerInfoObject* PaintLayer;
		FName EditLayerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Editor" },
		{ "Comment", "/** Deform landscape using a given spline\n\x09 * @param InSplineComponent - The component containing the spline data\n\x09 * @param StartWidth - Width of the spline at the start node, in Spline Component local space\n\x09 * @param EndWidth   - Width of the spline at the end node, in Spline Component local space\n\x09 * @param StartSideFalloff - Width of the falloff at either side of the spline at the start node, in Spline Component local space\n\x09 * @param EndSideFalloff - Width of the falloff at either side of the spline at the end node, in Spline Component local space\n\x09 * @param StartRoll - Roll applied to the spline at the start node, in degrees. 0 is flat\n\x09 * @param EndRoll - Roll applied to the spline at the end node, in degrees. 0 is flat\n\x09 * @param NumSubdivisions - Number of triangles to place along the spline when applying it to the landscape. Higher numbers give better results, but setting it too high will be slow and may cause artifacts\n\x09 * @param bRaiseHeights - Allow the landscape to be raised up to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n\x09 * @param bLowerHeights - Allow the landscape to be lowered down to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n\x09 * @param PaintLayer - LayerInfo to paint, or none to skip painting. The landscape must be configured with the same layer info in one of its layers or this will do nothing!\n\x09 * @param EditLayerName - Name of the landscape edit layer to affect (in Edit Layers mode)\n\x09 */" },
		{ "CPP_Default_bLowerHeights", "true" },
		{ "CPP_Default_bRaiseHeights", "true" },
		{ "CPP_Default_EditLayerName", "" },
		{ "CPP_Default_EndRoll", "0.000000" },
		{ "CPP_Default_EndSideFalloff", "200.000000" },
		{ "CPP_Default_EndWidth", "200.000000" },
		{ "CPP_Default_NumSubdivisions", "20" },
		{ "CPP_Default_PaintLayer", "None" },
		{ "CPP_Default_StartRoll", "0.000000" },
		{ "CPP_Default_StartSideFalloff", "200.000000" },
		{ "CPP_Default_StartWidth", "200.000000" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Deform landscape using a given spline\n@param InSplineComponent - The component containing the spline data\n@param StartWidth - Width of the spline at the start node, in Spline Component local space\n@param EndWidth   - Width of the spline at the end node, in Spline Component local space\n@param StartSideFalloff - Width of the falloff at either side of the spline at the start node, in Spline Component local space\n@param EndSideFalloff - Width of the falloff at either side of the spline at the end node, in Spline Component local space\n@param StartRoll - Roll applied to the spline at the start node, in degrees. 0 is flat\n@param EndRoll - Roll applied to the spline at the end node, in degrees. 0 is flat\n@param NumSubdivisions - Number of triangles to place along the spline when applying it to the landscape. Higher numbers give better results, but setting it too high will be slow and may cause artifacts\n@param bRaiseHeights - Allow the landscape to be raised up to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n@param bLowerHeights - Allow the landscape to be lowered down to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n@param PaintLayer - LayerInfo to paint, or none to skip painting. The landscape must be configured with the same layer info in one of its layers or this will do nothing!\n@param EditLayerName - Name of the landscape edit layer to affect (in Edit Layers mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSideFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndSideFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndRoll;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubdivisions;
	static void NewProp_bRaiseHeights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseHeights;
	static void NewProp_bLowerHeights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowerHeights;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintLayer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EditLayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_InSplineComponent = { "InSplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, InSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineComponent_MetaData), NewProp_InSplineComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartWidth = { "StartWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndWidth = { "EndWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartSideFalloff = { "StartSideFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartSideFalloff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndSideFalloff = { "EndSideFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndSideFalloff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartRoll = { "StartRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartRoll), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndRoll = { "EndRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndRoll), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_NumSubdivisions = { "NumSubdivisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, NumSubdivisions), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights_SetBit(void* Obj)
{
	((LandscapeProxy_eventEditorApplySpline_Parms*)Obj)->bRaiseHeights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights = { "bRaiseHeights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventEditorApplySpline_Parms), &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights_SetBit(void* Obj)
{
	((LandscapeProxy_eventEditorApplySpline_Parms*)Obj)->bLowerHeights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights = { "bLowerHeights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventEditorApplySpline_Parms), &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_PaintLayer = { "PaintLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, PaintLayer), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EditLayerName = { "EditLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EditLayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_InSplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartSideFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndSideFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_NumSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_PaintLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EditLayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "EditorApplySpline", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::LandscapeProxy_eventEditorApplySpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::LandscapeProxy_eventEditorApplySpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execEditorApplySpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_InSplineComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartWidth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndWidth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartSideFalloff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndSideFalloff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartRoll);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndRoll);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSubdivisions);
	P_GET_UBOOL(Z_Param_bRaiseHeights);
	P_GET_UBOOL(Z_Param_bLowerHeights);
	P_GET_OBJECT(ULandscapeLayerInfoObject,Z_Param_PaintLayer);
	P_GET_PROPERTY(FNameProperty,Z_Param_EditLayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditorApplySpline(Z_Param_InSplineComponent,Z_Param_StartWidth,Z_Param_EndWidth,Z_Param_StartSideFalloff,Z_Param_EndSideFalloff,Z_Param_StartRoll,Z_Param_EndRoll,Z_Param_NumSubdivisions,Z_Param_bRaiseHeights,Z_Param_bLowerHeights,Z_Param_PaintLayer,Z_Param_EditLayerName);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function EditorApplySpline

// Begin Class ALandscapeProxy Function EditorSetLandscapeMaterial
struct Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics
{
	struct LandscapeProxy_eventEditorSetLandscapeMaterial_Parms
	{
		UMaterialInterface* NewLandscapeMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/* Setter for LandscapeMaterial. Has no effect outside the editor. */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Setter for LandscapeMaterial. Has no effect outside the editor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLandscapeMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::NewProp_NewLandscapeMaterial = { "NewLandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorSetLandscapeMaterial_Parms, NewLandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::NewProp_NewLandscapeMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "EditorSetLandscapeMaterial", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::LandscapeProxy_eventEditorSetLandscapeMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::LandscapeProxy_eventEditorSetLandscapeMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execEditorSetLandscapeMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewLandscapeMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditorSetLandscapeMaterial(Z_Param_NewLandscapeMaterial);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function EditorSetLandscapeMaterial

// Begin Class ALandscapeProxy Function GetLandscapeActor
struct Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics
{
	struct LandscapeProxy_eventGetLandscapeActor_Parms
	{
		ALandscape* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventGetLandscapeActor_Parms, ReturnValue), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "GetLandscapeActor", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::LandscapeProxy_eventGetLandscapeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::LandscapeProxy_eventGetLandscapeActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execGetLandscapeActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALandscape**)Z_Param__Result=P_THIS->GetLandscapeActor();
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function GetLandscapeActor

// Begin Class ALandscapeProxy Function LandscapeExportHeightmapToRenderTarget
struct Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics
{
	struct LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms
	{
		UTextureRenderTarget2D* InRenderTarget;
		bool InExportHeightIntoRGChannel;
		bool InExportLandscapeProxies;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Output a landscape heightmap to a render target\n\x09* @param InRenderTarget - Valid render target with a format of RTF_RGBA16f, RTF_RGBA32f or RTF_RGBA8\n\x09* @param InExportHeightIntoRGChannel - Tell us if we should export the height that is internally stored as R & G (for 16 bits) to a single R channel of the render target (the format need to be RTF_RGBA16f or RTF_RGBA32f)\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09   Note that using RTF_RGBA16f with InExportHeightIntoRGChannel == false, could have precision loss.\n\x09* @param InExportLandscapeProxies - Option to also export components of all proxies of Landscape actor (if LandscapeProxy is the Landscape Actor)\n\x09*/" },
		{ "CPP_Default_InExportHeightIntoRGChannel", "false" },
		{ "CPP_Default_InExportLandscapeProxies", "true" },
		{ "DisplayName", "Landscape Export Heightmap to RenderTarget" },
		{ "Keywords", "Push Landscape Heightmap to RenderTarget" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Output a landscape heightmap to a render target\n@param InRenderTarget - Valid render target with a format of RTF_RGBA16f, RTF_RGBA32f or RTF_RGBA8\n@param InExportHeightIntoRGChannel - Tell us if we should export the height that is internally stored as R & G (for 16 bits) to a single R channel of the render target (the format need to be RTF_RGBA16f or RTF_RGBA32f)\n                                                                         Note that using RTF_RGBA16f with InExportHeightIntoRGChannel == false, could have precision loss.\n@param InExportLandscapeProxies - Option to also export components of all proxies of Landscape actor (if LandscapeProxy is the Landscape Actor)" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
	static void NewProp_InExportHeightIntoRGChannel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InExportHeightIntoRGChannel;
	static void NewProp_InExportLandscapeProxies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InExportLandscapeProxies;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel_SetBit(void* Obj)
{
	((LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms*)Obj)->InExportHeightIntoRGChannel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel = { "InExportHeightIntoRGChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportLandscapeProxies_SetBit(void* Obj)
{
	((LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms*)Obj)->InExportLandscapeProxies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportLandscapeProxies = { "InExportLandscapeProxies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportLandscapeProxies_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportLandscapeProxies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeExportHeightmapToRenderTarget", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execLandscapeExportHeightmapToRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
	P_GET_UBOOL(Z_Param_InExportHeightIntoRGChannel);
	P_GET_UBOOL(Z_Param_InExportLandscapeProxies);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LandscapeExportHeightmapToRenderTarget(Z_Param_InRenderTarget,Z_Param_InExportHeightIntoRGChannel,Z_Param_InExportLandscapeProxies);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function LandscapeExportHeightmapToRenderTarget

// Begin Class ALandscapeProxy Function LandscapeExportWeightmapToRenderTarget
#if WITH_EDITOR
struct Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics
{
	struct LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms
	{
		UTextureRenderTarget2D* InRenderTarget;
		FName InLayerName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Output a landscape weightmap to a render target\n\x09* Only works in the editor\n\x09*/" },
		{ "DisplayName", "Landscape Export Weightmap to RenderTarget" },
		{ "Keywords", "Push Landscape Weightmap to RenderTarget" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Output a landscape weightmap to a render target\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InLayerName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InLayerName = { "InLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms, InLayerName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeExportWeightmapToRenderTarget", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ALandscapeProxy::execLandscapeExportWeightmapToRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
	P_GET_PROPERTY(FNameProperty,Z_Param_InLayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LandscapeExportWeightmapToRenderTarget(Z_Param_InRenderTarget,Z_Param_InLayerName);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ALandscapeProxy Function LandscapeExportWeightmapToRenderTarget

// Begin Class ALandscapeProxy Function LandscapeImportHeightmapFromRenderTarget
#if WITH_EDITOR
struct Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics
{
	struct LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms
	{
		UTextureRenderTarget2D* InRenderTarget;
		bool InImportHeightFromRGChannel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Overwrites a landscape heightmap with render target data\n\x09* @param InRenderTarget - Valid render target with a format of RTF_RGBA16f, RTF_RGBA32f or RTF_RGBA8\n\x09* @param InImportHeightFromRGChannel - Only relevant when using format RTF_RGBA16f or RTF_RGBA32f, and will tell us if we should import the height data from the R channel only of the Render target or from R & G. \n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09   Note that using RTF_RGBA16f with InImportHeightFromRGChannel == false, could have precision loss\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_InImportHeightFromRGChannel", "false" },
		{ "DisplayName", "Landscape Import Heightmap from RenderTarget" },
		{ "Keywords", "Push RenderTarget to Landscape Heightmap" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Overwrites a landscape heightmap with render target data\n@param InRenderTarget - Valid render target with a format of RTF_RGBA16f, RTF_RGBA32f or RTF_RGBA8\n@param InImportHeightFromRGChannel - Only relevant when using format RTF_RGBA16f or RTF_RGBA32f, and will tell us if we should import the height data from the R channel only of the Render target or from R & G.\n                                                                         Note that using RTF_RGBA16f with InImportHeightFromRGChannel == false, could have precision loss\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
	static void NewProp_InImportHeightFromRGChannel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InImportHeightFromRGChannel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel_SetBit(void* Obj)
{
	((LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms*)Obj)->InImportHeightFromRGChannel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel = { "InImportHeightFromRGChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeImportHeightmapFromRenderTarget", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ALandscapeProxy::execLandscapeImportHeightmapFromRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
	P_GET_UBOOL(Z_Param_InImportHeightFromRGChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LandscapeImportHeightmapFromRenderTarget(Z_Param_InRenderTarget,Z_Param_InImportHeightFromRGChannel);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ALandscapeProxy Function LandscapeImportHeightmapFromRenderTarget

// Begin Class ALandscapeProxy Function LandscapeImportWeightmapFromRenderTarget
#if WITH_EDITOR
struct Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics
{
	struct LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms
	{
		UTextureRenderTarget2D* InRenderTarget;
		FName InLayerName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Overwrites a landscape weightmap with render target data\n\x09* Only works in the editor\n\x09*/" },
		{ "DisplayName", "Landscape Import Weightmap from RenderTarget" },
		{ "Keywords", "Push RenderTarget to Landscape Weightmap" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Overwrites a landscape weightmap with render target data\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InLayerName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InLayerName = { "InLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms, InLayerName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeImportWeightmapFromRenderTarget", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ALandscapeProxy::execLandscapeImportWeightmapFromRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
	P_GET_PROPERTY(FNameProperty,Z_Param_InLayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LandscapeImportWeightmapFromRenderTarget(Z_Param_InRenderTarget,Z_Param_InLayerName);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ALandscapeProxy Function LandscapeImportWeightmapFromRenderTarget

// Begin Class ALandscapeProxy Function SetLandscapeMaterialScalarParameterValue
struct Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics
{
	struct LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms
	{
		FName ParameterName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "Comment", "/** Set a MID scalar (float) parameter value for all landscape components. */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value for all landscape components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "SetLandscapeMaterialScalarParameterValue", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execSetLandscapeMaterialScalarParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLandscapeMaterialScalarParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function SetLandscapeMaterialScalarParameterValue

// Begin Class ALandscapeProxy Function SetLandscapeMaterialTextureParameterValue
struct Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics
{
	struct LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms
	{
		FName ParameterName;
		UTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "Comment", "/** Set an MID texture parameter value for all landscape components. */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Set an MID texture parameter value for all landscape components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "SetLandscapeMaterialTextureParameterValue", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execSetLandscapeMaterialTextureParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLandscapeMaterialTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function SetLandscapeMaterialTextureParameterValue

// Begin Class ALandscapeProxy Function SetLandscapeMaterialVectorParameterValue
struct Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics
{
	struct LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms
	{
		FName ParameterName;
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "Comment", "/** Set an MID vector parameter value for all landscape components. */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Set an MID vector parameter value for all landscape components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "SetLandscapeMaterialVectorParameterValue", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execSetLandscapeMaterialVectorParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLandscapeMaterialVectorParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function SetLandscapeMaterialVectorParameterValue

// Begin Class ALandscapeProxy Function SetVirtualTextureRenderPassType
struct Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics
{
	struct LandscapeProxy_eventSetVirtualTextureRenderPassType_Parms
	{
		ERuntimeVirtualTextureMainPassType InType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeProxy_eventSetVirtualTextureRenderPassType_Parms, InType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(0, nullptr) }; // 531654431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::NewProp_InType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::NewProp_InType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "SetVirtualTextureRenderPassType", nullptr, nullptr, Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::LandscapeProxy_eventSetVirtualTextureRenderPassType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::LandscapeProxy_eventSetVirtualTextureRenderPassType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeProxy::execSetVirtualTextureRenderPassType)
{
	P_GET_ENUM(ERuntimeVirtualTextureMainPassType,Z_Param_InType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType(Z_Param_InType));
	P_NATIVE_END;
}
// End Class ALandscapeProxy Function SetVirtualTextureRenderPassType

// Begin Class ALandscapeProxy
void ALandscapeProxy::StaticRegisterNativesALandscapeProxy()
{
	UClass* Class = ALandscapeProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeComponentScreenSizeToUseSubSections", &ALandscapeProxy::execChangeComponentScreenSizeToUseSubSections },
		{ "ChangeLODDistanceFactor", &ALandscapeProxy::execChangeLODDistanceFactor },
#if WITH_EDITOR
		{ "DeleteUnusedLayers", &ALandscapeProxy::execDeleteUnusedLayers },
#endif // WITH_EDITOR
		{ "EditorApplySpline", &ALandscapeProxy::execEditorApplySpline },
		{ "EditorSetLandscapeMaterial", &ALandscapeProxy::execEditorSetLandscapeMaterial },
		{ "GetLandscapeActor", &ALandscapeProxy::execGetLandscapeActor },
		{ "LandscapeExportHeightmapToRenderTarget", &ALandscapeProxy::execLandscapeExportHeightmapToRenderTarget },
#if WITH_EDITOR
		{ "LandscapeExportWeightmapToRenderTarget", &ALandscapeProxy::execLandscapeExportWeightmapToRenderTarget },
		{ "LandscapeImportHeightmapFromRenderTarget", &ALandscapeProxy::execLandscapeImportHeightmapFromRenderTarget },
		{ "LandscapeImportWeightmapFromRenderTarget", &ALandscapeProxy::execLandscapeImportWeightmapFromRenderTarget },
#endif // WITH_EDITOR
		{ "SetLandscapeMaterialScalarParameterValue", &ALandscapeProxy::execSetLandscapeMaterialScalarParameterValue },
		{ "SetLandscapeMaterialTextureParameterValue", &ALandscapeProxy::execSetLandscapeMaterialTextureParameterValue },
		{ "SetLandscapeMaterialVectorParameterValue", &ALandscapeProxy::execSetLandscapeMaterialVectorParameterValue },
		{ "SetVirtualTextureRenderPassType", &ALandscapeProxy::execSetVirtualTextureRenderPassType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeProxy);
UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister()
{
	return ALandscapeProxy::StaticClass();
}
struct Z_Construct_UClass_ALandscapeProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Mobility" },
		{ "IncludePath", "LandscapeProxy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[] = {
		{ "Comment", "/** Guid for LandscapeEditorInfo, all proxies that belong to the same landscape should have the same LandscapeGuid, even if split across world partitions \n\x09  * Note that this value may change when the landscape is instanced (or in PIE) in order to allow multiple instances of the same landscape to exist.\n\x09  **/" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Guid for LandscapeEditorInfo, all proxies that belong to the same landscape should have the same LandscapeGuid, even if split across world partitions\nNote that this value may change when the landscape is instanced (or in PIE) in order to allow multiple instances of the same landscape to exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNanite_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/** Use Nanite to render landscape as a mesh on supported platforms. */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Use Nanite to render landscape as a mesh on supported platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerLODOverrideMaterials_MetaData[] = {
		{ "Category", "Landscape" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreEditPerLODOverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteLODIndex_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/** LOD level of the landscape when generating the Nanite mesh. Mostly there for debug reasons, since Nanite is meant to allow high density meshes, we want to use 0 most of the times. */" },
		{ "EditCondition", "bEnableNanite" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "LOD level of the landscape when generating the Nanite mesh. Mostly there for debug reasons, since Nanite is meant to allow high density meshes, we want to use 0 most of the times." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNaniteSkirtEnabled_MetaData[] = {
		{ "Category", "Nanite" },
		{ "EditCondition", "bEnableNanite" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSkirtDepth_MetaData[] = {
		{ "Category", "Nanite" },
		{ "EditCondition", "bEnableNanite" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NanitePositionPrecision_MetaData[] = {
		{ "Category", "Nanite" },
		{ "EditCondition", "bEnableNanite" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteMaxEdgeLengthFactor_MetaData[] = {
		{ "Category", "Nanite" },
		{ "EditCondition", "bEnableNanite" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRuntimeGrassMapGeneration_MetaData[] = {
		{ "Comment", "/** Disable runtime grass data generation.  If disabled, the grass maps will be serialized at cook time. Do not set directly, use ALandscape::SetDisableRuntimeGrassMapGeneration to ensure it is set on all loaded proxies. */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Disable runtime grass data generation.  If disabled, the grass maps will be serialized at cook time. Do not set directly, use ALandscape::SetDisableRuntimeGrassMapGeneration to ensure it is set on all loaded proxies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSectionOffset_MetaData[] = {
		{ "Comment", "/** Offset in quads from global components grid origin (in quads) **/" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Offset in quads from global components grid origin (in quads) *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODLevel_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Max LOD level to use when rendering, -1 means the max available */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Max LOD level to use when rendering, -1 means the max available" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentScreenSizeToUseSubSections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD0ScreenSize_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** This is the starting screen size used to calculate the distribution. You can increase the value if you want less LOD0 component, and you use very large landscape component. */" },
		{ "DisplayName", "LOD 0 Screen Size" },
		{ "EditCondition", "!bUseScalableLODSettings" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "This is the starting screen size used to calculate the distribution. You can increase the value if you want less LOD0 component, and you use very large landscape component." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODGroupKey_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Specifies the LOD Group (Zero is No Group). All landscapes in the same group calculate their LOD together, allowing matching border LODs to fix geometry seams. */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Specifies the LOD Group (Zero is No Group). All landscapes in the same group calculate their LOD together, allowing matching border LODs to fix geometry seams." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD0DistributionSetting_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The distribution setting used to change the LOD 0 generation, 1.25 is the normal distribution, numbers influence directly the LOD0 proportion on screen. */" },
		{ "DisplayName", "LOD 0" },
		{ "EditCondition", "!bUseScalableLODSettings" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The distribution setting used to change the LOD 0 generation, 1.25 is the normal distribution, numbers influence directly the LOD0 proportion on screen." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODDistributionSetting_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The distribution setting used to change the LOD generation, 3 is the normal distribution, small number mean you want your last LODs to take more screen space and big number mean you want your first LODs to take more screen space. */" },
		{ "DisplayName", "Other LODs" },
		{ "EditCondition", "!bUseScalableLODSettings" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The distribution setting used to change the LOD generation, 3 is the normal distribution, small number mean you want your last LODs to take more screen space and big number mean you want your first LODs to take more screen space." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalableLOD0ScreenSize_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Scalable (per-quality) version of 'LOD 0 Screen Size'. */" },
		{ "DisplayName", "Scalable LOD 0 Screen Size" },
		{ "EditCondition", "bUseScalableLODSettings" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Scalable (per-quality) version of 'LOD 0 Screen Size'." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalableLOD0DistributionSetting_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Scalable (per-quality) version of 'LOD 0'. */" },
		{ "DisplayName", "Scalable LOD 0" },
		{ "EditCondition", "bUseScalableLODSettings" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Scalable (per-quality) version of 'LOD 0'." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalableLODDistributionSetting_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Scalable (per-quality) version of 'Other LODs'. */" },
		{ "DisplayName", "Scalable Other LODs" },
		{ "EditCondition", "bUseScalableLODSettings" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Scalable (per-quality) version of 'Other LODs'." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseScalableLODSettings_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "Comment", "/** Allows to specify LOD distribution settings per quality level. Using this will ignore the r.LandscapeLOD0DistributionScale CVar. */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Allows to specify LOD distribution settings per quality level. Using this will ignore the r.LandscapeLOD0DistributionScale CVar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBlendRange_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** This controls the area that blends LOD between neighboring sections. At 1.0 it blends across the entire section, and lower numbers reduce the blend region to be closer to the boundary. */" },
		{ "DisplayName", "Blend Range" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "This controls the area that blends LOD between neighboring sections. At 1.0 it blends across the entire section, and lower numbers reduce the blend region to be closer to the boundary." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** LOD level to use when exporting the landscape to obj or FBX */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "LOD level to use when exporting the landscape to obj or FBX" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrderList_MetaData[] = {
		{ "Comment", "/** Display Order of the targets */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Display Order of the targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrder_MetaData[] = {
		{ "Comment", "/** Display Order mode for the targets */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Display Order mode for the targets" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLOD_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** LOD level to use when running lightmass (increase to 1 or 2 for large landscapes to stop lightmass crashing) */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "LOD level to use when running lightmass (increase to 1 or 2 for large landscapes to stop lightmass crashing)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysMaterial_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Default physical material, used when no per-layer values physical materials */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Default physical material, used when no per-layer values physical materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/**\n\x09 * Allows artists to adjust the distance where textures using UV 0 are streamed in/out.\n\x09 * 1.0 is the default, whereas a higher value increases the streamed-in resolution.\n\x09 * Value can be < 0 (from legcay content, or code changes)\n\x09 */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out.\n1.0 is the default, whereas a higher value increases the streamed-in resolution.\nValue can be < 0 (from legcay content, or code changes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[] = {
		{ "BlueprintSetter", "EditorSetLandscapeMaterial" },
		{ "Category", "Landscape" },
		{ "Comment", "/** Combined material used to render the landscape */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Combined material used to render the landscape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeHoleMaterial_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Material used to render landscape components with holes. If not set, LandscapeMaterial will be used (blend mode will be overridden to Masked if it is set to Opaque) */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Material used to render landscape components with holes. If not set, LandscapeMaterial will be used (blend mode will be overridden to Masked if it is set to Opaque)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialsOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreEditLandscapeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreEditLandscapeHoleMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * Array of runtime virtual textures into which we draw this landscape.\n\x09 * The material also needs to be set up to output to a virtual texture.\n\x09 */" },
		{ "DisplayName", "Draw in Virtual Textures" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Array of runtime virtual textures into which we draw this landscape.\nThe material also needs to be set up to output to a virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetCreateRuntimeVirtualTextureVolumes_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureRenderWithQuad_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Use a single quad to render this landscape to runtime virtual texture pages. \n\x09 * This is the fastest path but it only gives correct results if the runtime virtual texture orientation is aligned with the landscape.\n\x09 * If the two are unaligned we need to render to the virtual texture using LODs with sufficient density.\n\x09 */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Use a single quad to render this landscape to runtime virtual texture pages.\nThis is the fastest path but it only gives correct results if the runtime virtual texture orientation is aligned with the landscape.\nIf the two are unaligned we need to render to the virtual texture using LODs with sufficient density." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureRenderWithQuadHQ_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Use highest quality heightmap interpolation when using a single quad to render this landscape to runtime virtual texture pages.\n\x09 * This also requires the project setting: r.VT.RVT.HighQualityPerPixelHeight.\n\x09 */" },
		{ "DisplayName", "High Quality PerPixel Height" },
		{ "EditCondition", "bVirtualTextureRenderWithQuad" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Use highest quality heightmap interpolation when using a single quad to render this landscape to runtime virtual texture pages.\nThis also requires the project setting: r.VT.RVT.HighQualityPerPixelHeight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureNumLods_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Number of mesh levels to use when rendering landscape into runtime virtual texture.\n\x09 * Lower values reduce vertex count when rendering to the runtime virtual texture but decrease accuracy when using values that require vertex interpolation.\n\x09 */" },
		{ "DisplayName", "Virtual Texture Num LODs" },
		{ "EditCondition", "!bVirtualTextureRenderWithQuad" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Number of mesh levels to use when rendering landscape into runtime virtual texture.\nLower values reduce vertex count when rendering to the runtime virtual texture but decrease accuracy when using values that require vertex interpolation." },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureLodBias_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Bias to the LOD selected for rendering to runtime virtual textures.\n\x09 * Higher values reduce vertex count when rendering to the runtime virtual texture.\n\x09 */" },
		{ "DisplayName", "Virtual Texture LOD Bias" },
		{ "EditCondition", "!bVirtualTextureRenderWithQuad" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Bias to the LOD selected for rendering to runtime virtual textures.\nHigher values reduce vertex count when rendering to the runtime virtual texture." },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "BlueprintSetter", "SetVirtualTextureRenderPassType" },
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Controls if this component draws in the main pass as well as in the virtual texture. */" },
		{ "DisplayName", "Draw in Main Pass" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Controls if this component draws in the main pass as well as in the virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeZBoundsExtension_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\n\x09 *  Extension value in the negative Z axis, positive value increases bound size\n\x09 *  Note that this can also be overridden per-component when the component is selected with the component select tool */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the negative Z axis, positive value increases bound size\nNote that this can also be overridden per-component when the component is selected with the component select tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveZBoundsExtension_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\n\x09 *  Extension value in the positive Z axis, positive value increases bound size\n\x09 *  Note that this can also be overridden per-component when the component is selected with the component select tool */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the positive Z axis, positive value increases bound size\nNote that this can also be overridden per-component when the component is selected with the component select tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeComponents_MetaData[] = {
		{ "Comment", "/** The array of LandscapeComponent that are used by the landscape */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The array of LandscapeComponent that are used by the landscape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponents_MetaData[] = {
		{ "Comment", "/** Array of LandscapeHeightfieldCollisionComponent */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Array of LandscapeHeightfieldCollisionComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassTypesMaxDiscardDistance_MetaData[] = {
		{ "Comment", "// Only used outside of the editor (e.g. in cooked builds) - this value is no longer authoritative TODO [chris.tchou] remove\n// Cached grass max discard distance for all grass types in all landscape components with landscape grass configured\n" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Only used outside of the editor (e.g. in cooked builds) - this value is no longer authoritative TODO [chris.tchou] remove\nCached grass max discard distance for all grass types in all landscape components with landscape grass configured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 *\x09The resolution to cache lighting at, in texels/quad in one axis\n\x09 *  Total resolution would be changed by StaticLightingResolution*StaticLightingResolution\n\x09 *\x09""Automatically calculate proper value for removing seams\n\x09 */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The resolution to cache lighting at, in texels/quad in one axis\nTotal resolution would be changed by StaticLightingResolution*StaticLightingResolution\nAutomatically calculate proper value for removing seams" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive component should cast a shadow or not. */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Controls whether the primitive component should cast a shadow or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true. **/" },
		{ "DisplayName", "Dynamic Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Controls whether the primitive should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether the object should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true. */" },
		{ "DisplayName", "Static Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether the object should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCacheInvalidationBehavior_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset. */" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether the object should cast contact shadows. This flag is only used if CastShadow is true. */" },
		{ "DisplayName", "Contact Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether the object should cast contact shadows. This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastFarShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** When enabled, the component will be rendering into the far shadow cascades(only for directional lights).  This flag is only used if CastShadow is true. */" },
		{ "DisplayName", "Far Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "When enabled, the component will be rendering into the far shadow cascades(only for directional lights).  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastHiddenShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** If true, the primitive will cast shadows even if bHidden is true.  Controls whether the primitive should cast shadows when hidden.  This flag is only used if CastShadow is true. */" },
		{ "DisplayName", "Hidden Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "If true, the primitive will cast shadows even if bHidden is true.  Controls whether the primitive should cast shadows when hidden.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether this primitive should cast dynamic shadows as if it were a two sided material.  This flag is only used if CastShadow is true. */" },
		{ "DisplayName", "Shadow Two Sided" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether this primitive should cast dynamic shadows as if it were a two sided material.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. **/" },
		{ "EditCondition", "CastShadow" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09* Channels that this Landscape should be in.  Lights with matching channels will affect the Landscape.\n\x09* These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09*/" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Channels that this Landscape should be in.  Lights with matching channels will affect the Landscape.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether to use the landscape material's vertical world position offset when calculating static lighting.\n\x09* Note: Only z (vertical) offset is supported. XY offsets are ignored.\n\x09* Does not work correctly with an XY offset map (mesh collision) */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether to use the landscape material's vertical world position offset when calculating static lighting.\nNote: Only z (vertical) offset is supported. XY offsets are ignored.\nDoes not work correctly with an XY offset map (mesh collision)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonNaniteVirtualShadowMapConstantDepthBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Constant bias to handle the worst artifacts of the continuous LOD morphing when rendering to VSM.  \n\x09* Only applies when using non-Nanite landscape and VSM. */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Constant bias to handle the worst artifacts of the continuous LOD morphing when rendering to VSM.\nOnly applies when using non-Nanite landscape and VSM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** For non-Nanite landscape, cached VSM pages need to be invalidated when continuous LOD morphing introduces a height difference that is too large between the current landscape component's profile and the one that was used when the shadow was shadow was last cached.\n\x09* This height threshold (in Unreal units) controls this invalidation rate (a smaller threshold will reduce the likeliness of shadow artifacts, but will make the invalidations occur more frequently, which is not desirable in terms of performance.\n\x09* Disabled if 0.0.\n\x09* Only applies when using non-Nanite landscape and VSM. */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "For non-Nanite landscape, cached VSM pages need to be invalidated when continuous LOD morphing introduces a height difference that is too large between the current landscape component's profile and the one that was used when the shadow was shadow was last cached.\nThis height threshold (in Unreal units) controls this invalidation rate (a smaller threshold will reduce the likeliness of shadow artifacts, but will make the invalidations occur more frequently, which is not desirable in terms of performance.\nDisabled if 0.0.\nOnly applies when using non-Nanite landscape and VSM." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonNaniteVirtualShadowMapInvalidationScreenSizeLimit_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Screen size under which VSM invalidation stops occurring.\n\x09* As the height difference between 2 mip levels increases when the LOD level increases (because of undersampling), VSM pages tend to be invalidated more frequently even though it's getting less and less relevant to do so, since this will mean that the screen size of the landscape section decreases, thus the artifacts actually become less noticeable.\n\x09* We therefore artificially attenuate the VSM invalidation rate as the screen size decreases, to avoid invalidating VSM pages too often, as it becomes less and less impactful. \n\x09* A higher value will accentuate this attenuation (better performance but more artifacts) and vice versa.\n\x09* If 0.0, the attenuation of the VSM invalidation rate will be disabled entirely.\n\x09* Only applies when using non-Nanite landscape and VSM. */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Screen size under which VSM invalidation stops occurring.\nAs the height difference between 2 mip levels increases when the LOD level increases (because of undersampling), VSM pages tend to be invalidated more frequently even though it's getting less and less relevant to do so, since this will mean that the screen size of the landscape section decreases, thus the artifacts actually become less noticeable.\nWe therefore artificially attenuate the VSM invalidation rate as the screen size decreases, to avoid invalidating VSM pages too often, as it becomes less and less impactful.\nA higher value will accentuate this attenuation (better performance but more artifacts) and vice versa.\nIf 0.0, the attenuation of the VSM invalidation rate will be disabled entirely.\nOnly applies when using non-Nanite landscape and VSM." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, the Landscape will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "If true, the Landscape will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Mask used for stencil buffer writes. */" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Mask used for stencil buffer writes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**  Max draw distance exposed to LDs. The real max draw distance is the min (disregarding 0) of this and volumes affecting this object. */" },
		{ "DisplayName", "Desired Max Draw Distance" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Max draw distance exposed to LDs. The real max draw distance is the min (disregarding 0) of this and volumes affecting this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMipLevel_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Landscape LOD to use for collision tests. Higher numbers use less memory and process faster, but are much less accurate\n" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Landscape LOD to use for collision tests. Higher numbers use less memory and process faster, but are much less accurate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionMipLevel_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// If set higher than the \"Collision Mip Level\", this specifies the Landscape LOD to use for \"simple collision\" tests, otherwise the \"Collision Mip Level\" is used for both simple and complex collision.\n// Does not work with an XY offset map (mesh collision)\n" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "If set higher than the \"Collision Mip Level\", this specifies the Landscape LOD to use for \"simple collision\" tests, otherwise the \"Collision Mip Level\" is used for both simple and complex collision.\nDoes not work with an XY offset map (mesh collision)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision profile settings for this landscape */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Collision profile settings for this landscape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If true, Landscape will generate overlap events when other components are overlapping it (eg Begin Overlap).\n\x09 * Both the Landscape and the other component must have this flag enabled for overlap events to occur.\n\x09 *\n\x09 * @see [Overlap Events](https://docs.unrealengine.com/InteractiveExperiences/Physics/Collision/Overview#overlapandgenerateoverlapevents)\n\x09 * @see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()\n\x09 */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "If true, Landscape will generate overlap events when other components are overlapping it (eg Begin Overlap).\nBoth the Landscape and the other component must have this flag enabled for overlap events to occur.\n\n@see [Overlap Events](https://docs.unrealengine.com/InteractiveExperiences/Physics/Collision/Overview#overlapandgenerateoverlapevents)\n@see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Whether to bake the landscape material's vertical world position offset into the collision heightfield.\n\x09\x09Note: Only z (vertical) offset is supported. XY offsets are ignored.\n\x09\x09""Does not work with an XY offset map (mesh collision) */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether to bake the landscape material's vertical world position offset into the collision heightfield.\n              Note: Only z (vertical) offset is supported. XY offsets are ignored.\n              Does not work with an XY offset map (mesh collision)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorCachedLayerInfos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportHeightmapFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportDestinationLayerGuid_MetaData[] = {
		{ "Comment", "/** Height and weightmap import destination layer guid */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Height and weightmap import destination layer guid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorLayerSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapUsageMap_MetaData[] = {
		{ "Comment", "/** Map of weightmap usage */" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Map of weightmap usage" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[] = {
		{ "Comment", "/** Data set at creation time */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Data set at creation time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[] = {
		{ "Comment", "// Total number of quads in each component\n" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Total number of quads in each component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSubsections_MetaData[] = {
		{ "Comment", "// Number of quads for a subsection of a component. SubsectionSizeQuads+1 must be a power of two.\n" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Number of quads for a subsection of a component. SubsectionSizeQuads+1 must be a power of two." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedForNavigation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Hints navigation system whether this landscape will ever be navigated on. true by default, but make sure to set it to false for faraway, background landscapes */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Hints navigation system whether this landscape will ever be navigated on. true by default, but make sure to set it to false for faraway, background landscapes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillCollisionUnderLandscapeForNavmesh_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Set to true to prevent navmesh generation under the terrain geometry */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Set to true to prevent navmesh generation under the terrain geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationGeometryGatheringMode_MetaData[] = {
		{ "Category", "Navigation" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicMaterialInstance_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** When set to true it will generate MaterialInstanceDynamic for each components, so material can be changed at runtime */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "When set to true it will generate MaterialInstanceDynamic for each components, so material can be changed at runtime" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPaintedLayersPerComponent_MetaData[] = {
		{ "Category", "Landscape" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Flag whether or not this Landscape's surface can be used for culling hidden triangles **/" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Flag whether or not this Landscape's surface can be used for culling hidden triangles *" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODTextureSizePolicy_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Specify how to choose the texture size of the resulting HLOD mesh */" },
		{ "DisplayName", "HLOD Texture Size Policy" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Specify how to choose the texture size of the resulting HLOD mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODTextureSize_MetaData[] = {
		{ "Category", "HLOD" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "16" },
		{ "Comment", "/** Specify the texture size to use for the HLOD mesh if HLODTextureSizePolicy is set to SpecificSize */" },
		{ "DisplayName", "HLOD Texture Size" },
		{ "EditCondition", "HLODTextureSizePolicy == ELandscapeHLODTextureSizePolicy::SpecificSize" },
		{ "EditConditionHides", "" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Specify the texture size to use for the HLOD mesh if HLODTextureSizePolicy is set to SpecificSize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODMeshSourceLODPolicy_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Specify how to choose the LOD used as input for the HLOD mesh */" },
		{ "DisplayName", "HLOD Mesh Source LOD Policy" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Specify how to choose the LOD used as input for the HLOD mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODMeshSourceLOD_MetaData[] = {
		{ "Category", "HLOD" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specify which LOD to use for the HLOD mesh if HLODMeshSourceLODPolicy is set to SpecificLOD */" },
		{ "DisplayName", "HLOD Mesh Source LOD" },
		{ "EditCondition", "HLODMeshSourceLODPolicy == ELandscapeHLODMeshSourceLODPolicy::SpecificLOD" },
		{ "EditConditionHides", "" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Specify which LOD to use for the HLOD mesh if HLODMeshSourceLODPolicy is set to SpecificLOD" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLayersContent_MetaData[] = {
		{ "Comment", "/** Flag that tell if we have some layers content **/" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Flag that tell if we have some layers content *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCompressedHeightmapStorage_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Enable compressed heightmap texture storage. */" },
		{ "LandscapeInherited", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Enable compressed heightmap texture storage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripPhysicsWhenCookedClient_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Strip Physics/collision components when cooked for client */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Strip Physics/collision components when cooked for client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripPhysicsWhenCookedServer_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Strip Physics/collision components when cooked for server */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Strip Physics/collision components when cooked for server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripGrassWhenCookedClient_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Strip Grass data when cooked for client */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Strip Grass data when cooked for client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripGrassWhenCookedServer_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Strip Grass data when cooked for server */" },
		{ "LandscapeOverridable", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Strip Grass data when cooked for server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
	static void NewProp_bEnableNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNanite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerLODOverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerLODOverrideMaterials;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreEditPerLODOverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreEditPerLODOverrideMaterials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NaniteLODIndex;
	static void NewProp_bNaniteSkirtEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNaniteSkirtEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteSkirtDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NanitePositionPrecision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteMaxEdgeLengthFactor;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bDisableRuntimeGrassMapGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRuntimeGrassMapGeneration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeSectionOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODLevel;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODFalloff;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComponentScreenSizeToUseSubSections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD0ScreenSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LODGroupKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD0DistributionSetting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistributionSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalableLOD0ScreenSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalableLOD0DistributionSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalableLODDistributionSetting;
	static void NewProp_bUseScalableLODSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScalableLODSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODBlendRange;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExportLOD;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetDisplayOrderList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetDisplayOrderList;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetDisplayOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetDisplayOrder;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticLightingLOD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeHoleMaterial;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeMaterialsOverride_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeMaterialsOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreEditLandscapeMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreEditLandscapeHoleMaterial;
	static void NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
	static void NewProp_bSetCreateRuntimeVirtualTextureVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetCreateRuntimeVirtualTextureVolumes;
	static void NewProp_bVirtualTextureRenderWithQuad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureRenderWithQuad;
	static void NewProp_bVirtualTextureRenderWithQuadHQ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureRenderWithQuadHQ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureNumLods;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureLodBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeZBoundsExtension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositiveZBoundsExtension;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NaniteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NaniteComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NaniteComponents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrassTypesMaxDiscardDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticLightingResolution;
	static void NewProp_CastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadow;
	static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
	static void NewProp_bCastStaticShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowCacheInvalidationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShadowCacheInvalidationBehavior;
	static void NewProp_bCastContactShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
	static void NewProp_bCastFarShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastFarShadow;
	static void NewProp_bCastHiddenShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastHiddenShadow;
	static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static void NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialPositionOffsetInStaticLighting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonNaniteVirtualShadowMapConstantDepthBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonNaniteVirtualShadowMapInvalidationScreenSizeLimit;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionMipLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionMipLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
	static void NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMaterialPositionOffsetIntoCollision;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorCachedLayerInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorCachedLayerInfos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReimportHeightmapFilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportDestinationLayerGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorLayerSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorLayerSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightmapUsageMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightmapUsageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeightmapUsageMap;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubsections;
	static void NewProp_bUsedForNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedForNavigation;
	static void NewProp_bFillCollisionUnderLandscapeForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCollisionUnderLandscapeForNavmesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NavigationGeometryGatheringMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NavigationGeometryGatheringMode;
	static void NewProp_bUseDynamicMaterialInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicMaterialInstance;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPaintedLayersPerComponent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeForCullingInvisibleHLODVertices;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HLODTextureSizePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HLODTextureSizePolicy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HLODTextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HLODMeshSourceLODPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HLODMeshSourceLODPolicy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HLODMeshSourceLOD;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bHasLayersContent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLayersContent;
	static void NewProp_bUseCompressedHeightmapStorage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCompressedHeightmapStorage;
	static void NewProp_bStripPhysicsWhenCookedClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripPhysicsWhenCookedClient;
	static void NewProp_bStripPhysicsWhenCookedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripPhysicsWhenCookedServer;
	static void NewProp_bStripGrassWhenCookedClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripGrassWhenCookedClient;
	static void NewProp_bStripGrassWhenCookedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripGrassWhenCookedServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections, "ChangeComponentScreenSizeToUseSubSections" }, // 1336133464
		{ &Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor, "ChangeLODDistanceFactor" }, // 3814407027
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_DeleteUnusedLayers, "DeleteUnusedLayers" }, // 506375897
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline, "EditorApplySpline" }, // 2168485272
		{ &Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial, "EditorSetLandscapeMaterial" }, // 841558647
		{ &Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor, "GetLandscapeActor" }, // 3203370079
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget, "LandscapeExportHeightmapToRenderTarget" }, // 1827472790
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget, "LandscapeExportWeightmapToRenderTarget" }, // 404498526
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget, "LandscapeImportHeightmapFromRenderTarget" }, // 532136113
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget, "LandscapeImportWeightmapFromRenderTarget" }, // 3369012994
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue, "SetLandscapeMaterialScalarParameterValue" }, // 349200953
		{ &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue, "SetLandscapeMaterialTextureParameterValue" }, // 3840546439
		{ &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue, "SetLandscapeMaterialVectorParameterValue" }, // 2575146333
		{ &Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType, "SetVirtualTextureRenderPassType" }, // 3094903043
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, SplineComponent), Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeGuid_MetaData), NewProp_LandscapeGuid_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bEnableNanite_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bEnableNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bEnableNanite = { "bEnableNanite", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bEnableNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNanite_MetaData), NewProp_bEnableNanite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PerLODOverrideMaterials_Inner = { "PerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 2560867223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PerLODOverrideMaterials = { "PerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, PerLODOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerLODOverrideMaterials_MetaData), NewProp_PerLODOverrideMaterials_MetaData) }; // 2560867223
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditPerLODOverrideMaterials_Inner = { "PreEditPerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 2560867223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditPerLODOverrideMaterials = { "PreEditPerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, PreEditPerLODOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreEditPerLODOverrideMaterials_MetaData), NewProp_PreEditPerLODOverrideMaterials_MetaData) }; // 2560867223
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteLODIndex = { "NaniteLODIndex", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NaniteLODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteLODIndex_MetaData), NewProp_NaniteLODIndex_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bNaniteSkirtEnabled_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bNaniteSkirtEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bNaniteSkirtEnabled = { "bNaniteSkirtEnabled", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bNaniteSkirtEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNaniteSkirtEnabled_MetaData), NewProp_bNaniteSkirtEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteSkirtDepth = { "NaniteSkirtDepth", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NaniteSkirtDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteSkirtDepth_MetaData), NewProp_NaniteSkirtDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NanitePositionPrecision = { "NanitePositionPrecision", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NanitePositionPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NanitePositionPrecision_MetaData), NewProp_NanitePositionPrecision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteMaxEdgeLengthFactor = { "NaniteMaxEdgeLengthFactor", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NaniteMaxEdgeLengthFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteMaxEdgeLengthFactor_MetaData), NewProp_NaniteMaxEdgeLengthFactor_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bDisableRuntimeGrassMapGeneration_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bDisableRuntimeGrassMapGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bDisableRuntimeGrassMapGeneration = { "bDisableRuntimeGrassMapGeneration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bDisableRuntimeGrassMapGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableRuntimeGrassMapGeneration_MetaData), NewProp_bDisableRuntimeGrassMapGeneration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeSectionOffset = { "LandscapeSectionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeSectionOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSectionOffset_MetaData), NewProp_LandscapeSectionOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxLODLevel = { "MaxLODLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, MaxLODLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLODLevel_MetaData), NewProp_MaxLODLevel_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LODDistanceFactor_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODDistanceFactor_MetaData), NewProp_LODDistanceFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODFalloff = { "LODFalloff", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LODFalloff_DEPRECATED), Z_Construct_UEnum_Landscape_ELandscapeLODFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODFalloff_MetaData), NewProp_LODFalloff_MetaData) }; // 3721553468
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentScreenSizeToUseSubSections = { "ComponentScreenSizeToUseSubSections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ComponentScreenSizeToUseSubSections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentScreenSizeToUseSubSections_MetaData), NewProp_ComponentScreenSizeToUseSubSections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0ScreenSize = { "LOD0ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LOD0ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD0ScreenSize_MetaData), NewProp_LOD0ScreenSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODGroupKey = { "LODGroupKey", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LODGroupKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODGroupKey_MetaData), NewProp_LODGroupKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0DistributionSetting = { "LOD0DistributionSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LOD0DistributionSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD0DistributionSetting_MetaData), NewProp_LOD0DistributionSetting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistributionSetting = { "LODDistributionSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LODDistributionSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODDistributionSetting_MetaData), NewProp_LODDistributionSetting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ScalableLOD0ScreenSize = { "ScalableLOD0ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ScalableLOD0ScreenSize), Z_Construct_UScriptStruct_FPerQualityLevelFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalableLOD0ScreenSize_MetaData), NewProp_ScalableLOD0ScreenSize_MetaData) }; // 2915177448
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ScalableLOD0DistributionSetting = { "ScalableLOD0DistributionSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ScalableLOD0DistributionSetting), Z_Construct_UScriptStruct_FPerQualityLevelFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalableLOD0DistributionSetting_MetaData), NewProp_ScalableLOD0DistributionSetting_MetaData) }; // 2915177448
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ScalableLODDistributionSetting = { "ScalableLODDistributionSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ScalableLODDistributionSetting), Z_Construct_UScriptStruct_FPerQualityLevelFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalableLODDistributionSetting_MetaData), NewProp_ScalableLODDistributionSetting_MetaData) }; // 2915177448
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseScalableLODSettings_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bUseScalableLODSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseScalableLODSettings = { "bUseScalableLODSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseScalableLODSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseScalableLODSettings_MetaData), NewProp_bUseScalableLODSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODBlendRange = { "LODBlendRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LODBlendRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBlendRange_MetaData), NewProp_LODBlendRange_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ExportLOD = { "ExportLOD", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ExportLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportLOD_MetaData), NewProp_ExportLOD_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList_Inner = { "TargetDisplayOrderList", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList = { "TargetDisplayOrderList", nullptr, (EPropertyFlags)0x0010000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, TargetDisplayOrderList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDisplayOrderList_MetaData), NewProp_TargetDisplayOrderList_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder = { "TargetDisplayOrder", nullptr, (EPropertyFlags)0x0010000c00000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, TargetDisplayOrder), Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDisplayOrder_MetaData), NewProp_TargetDisplayOrder_MetaData) }; // 2813637858
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingLOD = { "StaticLightingLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, StaticLightingLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticLightingLOD_MetaData), NewProp_StaticLightingLOD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_DefaultPhysMaterial = { "DefaultPhysMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, DefaultPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPhysMaterial_MetaData), NewProp_DefaultPhysMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, StreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData), NewProp_StreamingDistanceMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterial_MetaData), NewProp_LandscapeMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeHoleMaterial = { "LandscapeHoleMaterial", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeHoleMaterial_MetaData), NewProp_LandscapeHoleMaterial_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride_Inner = { "LandscapeMaterialsOverride", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 2484666932
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride = { "LandscapeMaterialsOverride", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeMaterialsOverride_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterialsOverride_MetaData), NewProp_LandscapeMaterialsOverride_MetaData) }; // 2484666932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditLandscapeMaterial = { "PreEditLandscapeMaterial", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, PreEditLandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreEditLandscapeMaterial_MetaData), NewProp_PreEditLandscapeMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditLandscapeHoleMaterial = { "PreEditLandscapeHoleMaterial", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, PreEditLandscapeHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreEditLandscapeHoleMaterial_MetaData), NewProp_PreEditLandscapeHoleMaterial_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bIsPerformingInteractiveActionOnLandscapeMaterialOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride = { "bIsPerformingInteractiveActionOnLandscapeMaterialOverride", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride_MetaData), NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextures_MetaData), NewProp_RuntimeVirtualTextures_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bSetCreateRuntimeVirtualTextureVolumes_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bSetCreateRuntimeVirtualTextureVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bSetCreateRuntimeVirtualTextureVolumes = { "bSetCreateRuntimeVirtualTextureVolumes", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bSetCreateRuntimeVirtualTextureVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetCreateRuntimeVirtualTextureVolumes_MetaData), NewProp_bSetCreateRuntimeVirtualTextureVolumes_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuad_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bVirtualTextureRenderWithQuad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuad = { "bVirtualTextureRenderWithQuad", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualTextureRenderWithQuad_MetaData), NewProp_bVirtualTextureRenderWithQuad_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuadHQ_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bVirtualTextureRenderWithQuadHQ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuadHQ = { "bVirtualTextureRenderWithQuadHQ", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuadHQ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualTextureRenderWithQuadHQ_MetaData), NewProp_bVirtualTextureRenderWithQuadHQ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureNumLods = { "VirtualTextureNumLods", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, VirtualTextureNumLods), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureNumLods_MetaData), NewProp_VirtualTextureNumLods_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureLodBias = { "VirtualTextureLodBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, VirtualTextureLodBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureLodBias_MetaData), NewProp_VirtualTextureLodBias_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureRenderPassType_MetaData), NewProp_VirtualTextureRenderPassType_MetaData) }; // 531654431
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NegativeZBoundsExtension = { "NegativeZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NegativeZBoundsExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeZBoundsExtension_MetaData), NewProp_NegativeZBoundsExtension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PositiveZBoundsExtension = { "PositiveZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, PositiveZBoundsExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveZBoundsExtension_MetaData), NewProp_PositiveZBoundsExtension_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents_Inner = { "LandscapeComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents = { "LandscapeComponents", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeComponents_MetaData), NewProp_LandscapeComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents_Inner = { "CollisionComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents = { "CollisionComponents", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, CollisionComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponents_MetaData), NewProp_CollisionComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents_Inner = { "FoliageComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents = { "FoliageComponents", nullptr, (EPropertyFlags)0x0114008000202008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, FoliageComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageComponents_MetaData), NewProp_FoliageComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteComponent = { "NaniteComponent", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NaniteComponent_DEPRECATED), Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteComponent_MetaData), NewProp_NaniteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteComponents_Inner = { "NaniteComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteComponents = { "NaniteComponents", nullptr, (EPropertyFlags)0x0114c08400000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NaniteComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteComponents_MetaData), NewProp_NaniteComponents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_GrassTypesMaxDiscardDistance = { "GrassTypesMaxDiscardDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, GrassTypesMaxDiscardDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassTypesMaxDiscardDistance_MetaData), NewProp_GrassTypesMaxDiscardDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingResolution = { "StaticLightingResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, StaticLightingResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticLightingResolution_MetaData), NewProp_StaticLightingResolution_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CastShadow_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->CastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CastShadow = { "CastShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadow_MetaData), NewProp_CastShadow_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bCastDynamicShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadow_MetaData), NewProp_bCastDynamicShadow_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bCastStaticShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastStaticShadow_MetaData), NewProp_bCastStaticShadow_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ShadowCacheInvalidationBehavior = { "ShadowCacheInvalidationBehavior", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ShadowCacheInvalidationBehavior), Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCacheInvalidationBehavior_MetaData), NewProp_ShadowCacheInvalidationBehavior_MetaData) }; // 2141891292
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bCastContactShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastContactShadow_MetaData), NewProp_bCastContactShadow_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bCastFarShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow = { "bCastFarShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastFarShadow_MetaData), NewProp_bCastFarShadow_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastHiddenShadow_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bCastHiddenShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastHiddenShadow = { "bCastHiddenShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastHiddenShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastHiddenShadow_MetaData), NewProp_bCastHiddenShadow_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bCastShadowAsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData), NewProp_bCastShadowAsTwoSided_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 828539464
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bUseMaterialPositionOffsetInStaticLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting = { "bUseMaterialPositionOffsetInStaticLighting", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData), NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NonNaniteVirtualShadowMapConstantDepthBias = { "NonNaniteVirtualShadowMapConstantDepthBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NonNaniteVirtualShadowMapConstantDepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonNaniteVirtualShadowMapConstantDepthBias_MetaData), NewProp_NonNaniteVirtualShadowMapConstantDepthBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold = { "NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold_MetaData), NewProp_NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NonNaniteVirtualShadowMapInvalidationScreenSizeLimit = { "NonNaniteVirtualShadowMapInvalidationScreenSizeLimit", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NonNaniteVirtualShadowMapInvalidationScreenSizeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonNaniteVirtualShadowMapInvalidationScreenSizeLimit_MetaData), NewProp_NonNaniteVirtualShadowMapInvalidationScreenSizeLimit_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilWriteMask_MetaData), NewProp_CustomDepthStencilWriteMask_MetaData) }; // 2385485039
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LDMaxDrawDistance = { "LDMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LDMaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LDMaxDrawDistance_MetaData), NewProp_LDMaxDrawDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmassSettings_MetaData), NewProp_LightmassSettings_MetaData) }; // 675185212
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionMipLevel = { "CollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, CollisionMipLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMipLevel_MetaData), NewProp_CollisionMipLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SimpleCollisionMipLevel = { "SimpleCollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, SimpleCollisionMipLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleCollisionMipLevel_MetaData), NewProp_SimpleCollisionMipLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 3706165537
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bGenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOverlapEvents_MetaData), NewProp_bGenerateOverlapEvents_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bBakeMaterialPositionOffsetIntoCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision = { "bBakeMaterialPositionOffsetIntoCollision", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData), NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos_Inner = { "EditorCachedLayerInfos", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos = { "EditorCachedLayerInfos", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, EditorCachedLayerInfos_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorCachedLayerInfos_MetaData), NewProp_EditorCachedLayerInfos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportHeightmapFilePath = { "ReimportHeightmapFilePath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ReimportHeightmapFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportHeightmapFilePath_MetaData), NewProp_ReimportHeightmapFilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportDestinationLayerGuid = { "ReimportDestinationLayerGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ReimportDestinationLayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportDestinationLayerGuid_MetaData), NewProp_ReimportDestinationLayerGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings_Inner = { "EditorLayerSettings", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings, METADATA_PARAMS(0, nullptr) }; // 1883616195
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings = { "EditorLayerSettings", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, EditorLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorLayerSettings_MetaData), NewProp_EditorLayerSettings_MetaData) }; // 1883616195
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_WeightmapUsageMap_ValueProp = { "WeightmapUsageMap", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_WeightmapUsageMap_Key_KeyProp = { "WeightmapUsageMap_Key", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_WeightmapUsageMap = { "WeightmapUsageMap", nullptr, (EPropertyFlags)0x0114000c00002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, WeightmapUsageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapUsageMap_MetaData), NewProp_WeightmapUsageMap_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentSizeQuads = { "ComponentSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, ComponentSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentSizeQuads_MetaData), NewProp_ComponentSizeQuads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SubsectionSizeQuads = { "SubsectionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, SubsectionSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsectionSizeQuads_MetaData), NewProp_SubsectionSizeQuads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NumSubsections = { "NumSubsections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NumSubsections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSubsections_MetaData), NewProp_NumSubsections_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bUsedForNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation = { "bUsedForNavigation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedForNavigation_MetaData), NewProp_bUsedForNavigation_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bFillCollisionUnderLandscapeForNavmesh_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bFillCollisionUnderLandscapeForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bFillCollisionUnderLandscapeForNavmesh = { "bFillCollisionUnderLandscapeForNavmesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bFillCollisionUnderLandscapeForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillCollisionUnderLandscapeForNavmesh_MetaData), NewProp_bFillCollisionUnderLandscapeForNavmesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode = { "NavigationGeometryGatheringMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, NavigationGeometryGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationGeometryGatheringMode_MetaData), NewProp_NavigationGeometryGatheringMode_MetaData) }; // 4143279902
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bUseDynamicMaterialInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance = { "bUseDynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDynamicMaterialInstance_MetaData), NewProp_bUseDynamicMaterialInstance_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxPaintedLayersPerComponent = { "MaxPaintedLayersPerComponent", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, MaxPaintedLayersPerComponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPaintedLayersPerComponent_MetaData), NewProp_MaxPaintedLayersPerComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bUseLandscapeForCullingInvisibleHLODVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices = { "bUseLandscapeForCullingInvisibleHLODVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData), NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODTextureSizePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODTextureSizePolicy = { "HLODTextureSizePolicy", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, HLODTextureSizePolicy), Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODTextureSizePolicy_MetaData), NewProp_HLODTextureSizePolicy_MetaData) }; // 2536913270
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODTextureSize = { "HLODTextureSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, HLODTextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODTextureSize_MetaData), NewProp_HLODTextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODMeshSourceLODPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODMeshSourceLODPolicy = { "HLODMeshSourceLODPolicy", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, HLODMeshSourceLODPolicy), Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODMeshSourceLODPolicy_MetaData), NewProp_HLODMeshSourceLODPolicy_MetaData) }; // 2627079991
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODMeshSourceLOD = { "HLODMeshSourceLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeProxy, HLODMeshSourceLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODMeshSourceLOD_MetaData), NewProp_HLODMeshSourceLOD_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLayersContent_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bHasLayersContent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLayersContent = { "bHasLayersContent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLayersContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLayersContent_MetaData), NewProp_bHasLayersContent_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseCompressedHeightmapStorage_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bUseCompressedHeightmapStorage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseCompressedHeightmapStorage = { "bUseCompressedHeightmapStorage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseCompressedHeightmapStorage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCompressedHeightmapStorage_MetaData), NewProp_bUseCompressedHeightmapStorage_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedClient_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bStripPhysicsWhenCookedClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedClient = { "bStripPhysicsWhenCookedClient", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripPhysicsWhenCookedClient_MetaData), NewProp_bStripPhysicsWhenCookedClient_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedServer_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bStripPhysicsWhenCookedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedServer = { "bStripPhysicsWhenCookedServer", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripPhysicsWhenCookedServer_MetaData), NewProp_bStripPhysicsWhenCookedServer_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedClient_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bStripGrassWhenCookedClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedClient = { "bStripGrassWhenCookedClient", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripGrassWhenCookedClient_MetaData), NewProp_bStripGrassWhenCookedClient_MetaData) };
void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedServer_SetBit(void* Obj)
{
	((ALandscapeProxy*)Obj)->bStripGrassWhenCookedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedServer = { "bStripGrassWhenCookedServer", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripGrassWhenCookedServer_MetaData), NewProp_bStripGrassWhenCookedServer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bEnableNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PerLODOverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PerLODOverrideMaterials,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditPerLODOverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditPerLODOverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteLODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bNaniteSkirtEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteSkirtDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NanitePositionPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteMaxEdgeLengthFactor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bDisableRuntimeGrassMapGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeSectionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxLODLevel,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistanceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODFalloff,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentScreenSizeToUseSubSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODGroupKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0DistributionSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistributionSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ScalableLOD0ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ScalableLOD0DistributionSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ScalableLODDistributionSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseScalableLODSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODBlendRange,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ExportLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_DefaultPhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StreamingDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeHoleMaterial,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditLandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PreEditLandscapeHoleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsPerformingInteractiveActionOnLandscapeMaterialOverride,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RuntimeVirtualTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RuntimeVirtualTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bSetCreateRuntimeVirtualTextureVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuadHQ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureNumLods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureLodBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_VirtualTextureRenderPassType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NegativeZBoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PositiveZBoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NaniteComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_GrassTypesMaxDiscardDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastDynamicShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ShadowCacheInvalidationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastContactShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastHiddenShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NonNaniteVirtualShadowMapConstantDepthBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NonNaniteVirtualShadowMapInvalidationScreenSizeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilWriteMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LDMaxDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightmassSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionMipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SimpleCollisionMipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportHeightmapFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportDestinationLayerGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_WeightmapUsageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_WeightmapUsageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_WeightmapUsageMap,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SubsectionSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NumSubsections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bFillCollisionUnderLandscapeForNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxPaintedLayersPerComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODTextureSizePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODTextureSizePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODMeshSourceLODPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODMeshSourceLODPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HLODMeshSourceLOD,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLayersContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseCompressedHeightmapStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALandscapeProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APartitionActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALandscapeProxy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULandscapeSplineInterface_NoRegister, (int32)VTABLE_OFFSET(ALandscapeProxy, ILandscapeSplineInterface), false },  // 4288334296
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeProxy_Statics::ClassParams = {
	&ALandscapeProxy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALandscapeProxy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008802A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscapeProxy()
{
	if (!Z_Registration_Info_UClass_ALandscapeProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeProxy.OuterSingleton, Z_Construct_UClass_ALandscapeProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeProxy.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ALandscapeProxy>()
{
	return ALandscapeProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeProxy);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALandscapeProxy)
// End Class ALandscapeProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeImportAlphamapType_StaticEnum, TEXT("ELandscapeImportAlphamapType"), &Z_Registration_Info_UEnum_ELandscapeImportAlphamapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2634798425U) },
		{ ELandscapeLayerPaintingRestriction_StaticEnum, TEXT("ELandscapeLayerPaintingRestriction"), &Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1208655532U) },
		{ ELandscapeLayerDisplayMode_StaticEnum, TEXT("ELandscapeLayerDisplayMode"), &Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2813637858U) },
		{ ELandscapeHLODTextureSizePolicy_StaticEnum, TEXT("ELandscapeHLODTextureSizePolicy"), &Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2536913270U) },
		{ ELandscapeHLODMeshSourceLODPolicy_StaticEnum, TEXT("ELandscapeHLODMeshSourceLODPolicy"), &Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2627079991U) },
		{ ELandscapeLODFalloff_StaticEnum, TEXT("ELandscapeLODFalloff"), &Z_Registration_Info_UEnum_ELandscapeLODFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3721553468U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeEditorLayerSettings::StaticStruct, Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewStructOps, TEXT("LandscapeEditorLayerSettings"), &Z_Registration_Info_UScriptStruct_LandscapeEditorLayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeEditorLayerSettings), 1883616195U) },
		{ FLandscapeImportLayerInfo::StaticStruct, Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewStructOps, TEXT("LandscapeImportLayerInfo"), &Z_Registration_Info_UScriptStruct_LandscapeImportLayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeImportLayerInfo), 1623417521U) },
		{ FLandscapeProxyMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewStructOps, TEXT("LandscapeProxyMaterialOverride"), &Z_Registration_Info_UScriptStruct_LandscapeProxyMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeProxyMaterialOverride), 2484666932U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeProxy, ALandscapeProxy::StaticClass, TEXT("ALandscapeProxy"), &Z_Registration_Info_UClass_ALandscapeProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeProxy), 3015737987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_2483575161(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
