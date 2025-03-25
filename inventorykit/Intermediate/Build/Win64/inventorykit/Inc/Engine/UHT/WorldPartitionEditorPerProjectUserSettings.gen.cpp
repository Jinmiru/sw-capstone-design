// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorPerProjectUserSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FWorldPartitionPerWorldSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings;
class UScriptStruct* FWorldPartitionPerWorldSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionPerWorldSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionPerWorldSettings>()
{
	return FWorldPartitionPerWorldSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedEditorRegions_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedEditorLocationVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotLoadedDataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedDataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedEditorRegions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedEditorRegions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedEditorLocationVolumes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedEditorLocationVolumes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotLoadedDataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NotLoadedDataLayers;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedDataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedDataLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionPerWorldSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions_Inner = { "LoadedEditorRegions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions = { "LoadedEditorRegions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, LoadedEditorRegions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedEditorRegions_MetaData), NewProp_LoadedEditorRegions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes_Inner = { "LoadedEditorLocationVolumes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes = { "LoadedEditorLocationVolumes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, LoadedEditorLocationVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedEditorLocationVolumes_MetaData), NewProp_LoadedEditorLocationVolumes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers_Inner = { "NotLoadedDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers = { "NotLoadedDataLayers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, NotLoadedDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotLoadedDataLayers_MetaData), NewProp_NotLoadedDataLayers_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers_Inner = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, LoadedDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedDataLayers_MetaData), NewProp_LoadedDataLayers_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionPerWorldSettings",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::PropPointers), 0),
	sizeof(FWorldPartitionPerWorldSettings),
	alignof(FWorldPartitionPerWorldSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.InnerSingleton;
}
// End ScriptStruct FWorldPartitionPerWorldSettings

// Begin Class UWorldPartitionEditorPerProjectUserSettings
void UWorldPartitionEditorPerProjectUserSettings::StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorPerProjectUserSettings);
UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister()
{
	return UWorldPartitionEditorPerProjectUserSettings::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "World Partition (Local)" },
		{ "IncludePath", "WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideEditorDataLayers_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** True when the Data Layer Outliner is displaying Editor Data Layers */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is displaying Editor Data Layers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideRuntimeDataLayers_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** True when the Data Layer Outliner is displaying Runtime Data Layers */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is displaying Runtime Data Layers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideDataLayerActors_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** True when the Data Layer Outliner is not displaying actors */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is not displaying actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnloadedActors_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** True when the Data Layer Outliner is not displaying unloaded actors */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is not displaying unloaded actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlySelectedActors_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** True when the Data Layer Outliner is only displaying actors and datalayers for selected actors */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is only displaying actors and datalayers for selected actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightSelectedDataLayers_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** True when the Data Layer Outliner highlights Data Layers containing actors that are currently selected */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner highlights Data Layers containing actors that are currently selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideLevelInstanceContent_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** True when the Data Layer Outliner is not displaying Level Instance content */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is not displaying Level Instance content" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLoadingOfLastLoadedRegions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBugItGoLoadRegion_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCellCoords_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapUnloadedOpacity_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerWorldEditorSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bHideEditorDataLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideEditorDataLayers;
	static void NewProp_bHideRuntimeDataLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideRuntimeDataLayers;
	static void NewProp_bHideDataLayerActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDataLayerActors;
	static void NewProp_bHideUnloadedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnloadedActors;
	static void NewProp_bShowOnlySelectedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlySelectedActors;
	static void NewProp_bHighlightSelectedDataLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightSelectedDataLayers;
	static void NewProp_bHideLevelInstanceContent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLevelInstanceContent;
	static void NewProp_bDisableLoadingOfLastLoadedRegions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLoadingOfLastLoadedRegions;
	static void NewProp_bBugItGoLoadRegion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBugItGoLoadRegion;
	static void NewProp_bShowCellCoords_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCellCoords;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapUnloadedOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerWorldEditorSettings_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PerWorldEditorSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerWorldEditorSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorPerProjectUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideEditorDataLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers = { "bHideEditorDataLayers", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideEditorDataLayers_MetaData), NewProp_bHideEditorDataLayers_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideRuntimeDataLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers = { "bHideRuntimeDataLayers", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideRuntimeDataLayers_MetaData), NewProp_bHideRuntimeDataLayers_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideDataLayerActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors = { "bHideDataLayerActors", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideDataLayerActors_MetaData), NewProp_bHideDataLayerActors_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideUnloadedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors = { "bHideUnloadedActors", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideUnloadedActors_MetaData), NewProp_bHideUnloadedActors_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bShowOnlySelectedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors = { "bShowOnlySelectedActors", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOnlySelectedActors_MetaData), NewProp_bShowOnlySelectedActors_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHighlightSelectedDataLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers = { "bHighlightSelectedDataLayers", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighlightSelectedDataLayers_MetaData), NewProp_bHighlightSelectedDataLayers_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideLevelInstanceContent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent = { "bHideLevelInstanceContent", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideLevelInstanceContent_MetaData), NewProp_bHideLevelInstanceContent_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bDisableLoadingOfLastLoadedRegions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions = { "bDisableLoadingOfLastLoadedRegions", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableLoadingOfLastLoadedRegions_MetaData), NewProp_bDisableLoadingOfLastLoadedRegions_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bBugItGoLoadRegion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion = { "bBugItGoLoadRegion", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBugItGoLoadRegion_MetaData), NewProp_bBugItGoLoadRegion_MetaData) };
void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords_SetBit(void* Obj)
{
	((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bShowCellCoords = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords = { "bShowCellCoords", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCellCoords_MetaData), NewProp_bShowCellCoords_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_MinimapUnloadedOpacity = { "MinimapUnloadedOpacity", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionEditorPerProjectUserSettings, MinimapUnloadedOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapUnloadedOpacity_MetaData), NewProp_MinimapUnloadedOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_ValueProp = { "PerWorldEditorSettings", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings, METADATA_PARAMS(0, nullptr) }; // 1269385476
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_Key_KeyProp = { "PerWorldEditorSettings_Key", nullptr, (EPropertyFlags)0x0004000800004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings = { "PerWorldEditorSettings", nullptr, (EPropertyFlags)0x0040000800004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionEditorPerProjectUserSettings, PerWorldEditorSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerWorldEditorSettings_MetaData), NewProp_PerWorldEditorSettings_MetaData) }; // 1269385476
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_MinimapUnloadedOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::ClassParams = {
	&UWorldPartitionEditorPerProjectUserSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::PropPointers), 0),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionEditorPerProjectUserSettings>()
{
	return UWorldPartitionEditorPerProjectUserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorPerProjectUserSettings);
UWorldPartitionEditorPerProjectUserSettings::~UWorldPartitionEditorPerProjectUserSettings() {}
// End Class UWorldPartitionEditorPerProjectUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionPerWorldSettings::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewStructOps, TEXT("WorldPartitionPerWorldSettings"), &Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionPerWorldSettings), 1269385476U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings, UWorldPartitionEditorPerProjectUserSettings::StaticClass, TEXT("UWorldPartitionEditorPerProjectUserSettings"), &Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorPerProjectUserSettings), 429848020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_35121972(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
