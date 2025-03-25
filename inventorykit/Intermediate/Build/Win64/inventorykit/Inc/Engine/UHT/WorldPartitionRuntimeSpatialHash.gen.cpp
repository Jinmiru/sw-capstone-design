// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHash() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo();
ENGINE_API UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase();
ENGINE_API UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject();
ENGINE_API UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGrid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EWorldPartitionCVarProjectDefaultOverride
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride;
static UEnum* EWorldPartitionCVarProjectDefaultOverride_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionCVarProjectDefaultOverride"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionCVarProjectDefaultOverride>()
{
	return EWorldPartitionCVarProjectDefaultOverride_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Name", "EWorldPartitionCVarProjectDefaultOverride::Disabled" },
		{ "Enabled.Name", "EWorldPartitionCVarProjectDefaultOverride::Enabled" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ProjectDefault.Name", "EWorldPartitionCVarProjectDefaultOverride::ProjectDefault" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionCVarProjectDefaultOverride::ProjectDefault", (int64)EWorldPartitionCVarProjectDefaultOverride::ProjectDefault },
		{ "EWorldPartitionCVarProjectDefaultOverride::Disabled", (int64)EWorldPartitionCVarProjectDefaultOverride::Disabled },
		{ "EWorldPartitionCVarProjectDefaultOverride::Enabled", (int64)EWorldPartitionCVarProjectDefaultOverride::Enabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldPartitionCVarProjectDefaultOverride",
	"EWorldPartitionCVarProjectDefaultOverride",
	Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.InnerSingleton;
}
// End Enum EWorldPartitionCVarProjectDefaultOverride

// Begin ScriptStruct FSpatialHashSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashSettings;
class UScriptStruct* FSpatialHashSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashSettings>()
{
	return FSpatialHashSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpatialHashSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAlignedGridLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapNonAlignedGridLevelsToLowerLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceSmallActorsUsingLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlacePartitionActorsUsingLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bUseAlignedGridLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlignedGridLevels;
	static void NewProp_bSnapNonAlignedGridLevelsToLowerLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapNonAlignedGridLevelsToLowerLevels;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPlaceSmallActorsUsingLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceSmallActorsUsingLocation;
	static void NewProp_bPlacePartitionActorsUsingLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlacePartitionActorsUsingLocation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bUseAlignedGridLevels_SetBit(void* Obj)
{
	((FSpatialHashSettings*)Obj)->bUseAlignedGridLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bUseAlignedGridLevels = { "bUseAlignedGridLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashSettings), &Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bUseAlignedGridLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAlignedGridLevels_MetaData), NewProp_bUseAlignedGridLevels_MetaData) };
void Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bSnapNonAlignedGridLevelsToLowerLevels_SetBit(void* Obj)
{
	((FSpatialHashSettings*)Obj)->bSnapNonAlignedGridLevelsToLowerLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bSnapNonAlignedGridLevelsToLowerLevels = { "bSnapNonAlignedGridLevelsToLowerLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashSettings), &Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bSnapNonAlignedGridLevelsToLowerLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapNonAlignedGridLevelsToLowerLevels_MetaData), NewProp_bSnapNonAlignedGridLevelsToLowerLevels_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlaceSmallActorsUsingLocation_SetBit(void* Obj)
{
	((FSpatialHashSettings*)Obj)->bPlaceSmallActorsUsingLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlaceSmallActorsUsingLocation = { "bPlaceSmallActorsUsingLocation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashSettings), &Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlaceSmallActorsUsingLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaceSmallActorsUsingLocation_MetaData), NewProp_bPlaceSmallActorsUsingLocation_MetaData) };
void Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlacePartitionActorsUsingLocation_SetBit(void* Obj)
{
	((FSpatialHashSettings*)Obj)->bPlacePartitionActorsUsingLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlacePartitionActorsUsingLocation = { "bPlacePartitionActorsUsingLocation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashSettings), &Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlacePartitionActorsUsingLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlacePartitionActorsUsingLocation_MetaData), NewProp_bPlacePartitionActorsUsingLocation_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bUseAlignedGridLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bSnapNonAlignedGridLevelsToLowerLevels,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlaceSmallActorsUsingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bPlacePartitionActorsUsingLocation,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SpatialHashSettings",
	Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::PropPointers),
	sizeof(FSpatialHashSettings),
	alignof(FSpatialHashSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashSettings.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashSettings.InnerSingleton;
}
// End ScriptStruct FSpatialHashSettings

// Begin ScriptStruct FSpatialHashStreamingGridLayerCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell;
class UScriptStruct* FSpatialHashStreamingGridLayerCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashStreamingGridLayerCell"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashStreamingGridLayerCell>()
{
	return FSpatialHashStreamingGridLayerCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashStreamingGridLayerCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells_Inner = { "GridCells", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells = { "GridCells", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGridLayerCell, GridCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCells_MetaData), NewProp_GridCells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SpatialHashStreamingGridLayerCell",
	Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::PropPointers),
	sizeof(FSpatialHashStreamingGridLayerCell),
	alignof(FSpatialHashStreamingGridLayerCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.InnerSingleton;
}
// End ScriptStruct FSpatialHashStreamingGridLayerCell

// Begin ScriptStruct FSpatialHashStreamingGridLevel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel;
class UScriptStruct* FSpatialHashStreamingGridLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashStreamingGridLevel"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashStreamingGridLevel>()
{
	return FSpatialHashStreamingGridLevel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a PIE/Game streaming grid level\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents a PIE/Game streaming grid level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerCells_MetaData[] = {
		{ "Comment", "/** \n\x09 * Represents the grid cells\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents the grid cells" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerCellsMapping_MetaData[] = {
		{ "Comment", "/** \n\x09 * Represents the grid cells index mapping\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents the grid cells index mapping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerCells;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerCellsMapping_ValueProp;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LayerCellsMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LayerCellsMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashStreamingGridLevel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells_Inner = { "LayerCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell, METADATA_PARAMS(0, nullptr) }; // 279248726
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells = { "LayerCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGridLevel, LayerCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerCells_MetaData), NewProp_LayerCells_MetaData) }; // 279248726
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_ValueProp = { "LayerCellsMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_Key_KeyProp = { "LayerCellsMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping = { "LayerCellsMapping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGridLevel, LayerCellsMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerCellsMapping_MetaData), NewProp_LayerCellsMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SpatialHashStreamingGridLevel",
	Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::PropPointers),
	sizeof(FSpatialHashStreamingGridLevel),
	alignof(FSpatialHashStreamingGridLevel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.InnerSingleton;
}
// End ScriptStruct FSpatialHashStreamingGridLevel

// Begin ScriptStruct FSpatialHashStreamingGrid
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid;
class UScriptStruct* FSpatialHashStreamingGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashStreamingGrid"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashStreamingGrid>()
{
	return FSpatialHashStreamingGrid::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a PIE/Game streaming grid\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents a PIE/Game streaming grid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnSlowStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InjectedGridLevels_MetaData[] = {
		{ "Comment", "// Contains cells injected at runtime from content bundles\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Contains cells injected at runtime from content bundles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GridName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingRange;
	static void NewProp_bBlockOnSlowStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnSlowStreaming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridLevels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBounds;
	static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InjectedGridLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InjectedGridLevels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashStreamingGrid>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, GridName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridName_MetaData), NewProp_GridName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, LoadingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingRange_MetaData), NewProp_LoadingRange_MetaData) };
void Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit(void* Obj)
{
	((FSpatialHashStreamingGrid*)Obj)->bBlockOnSlowStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming = { "bBlockOnSlowStreaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashStreamingGrid), &Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockOnSlowStreaming_MetaData), NewProp_bBlockOnSlowStreaming_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels_Inner = { "GridLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel, METADATA_PARAMS(0, nullptr) }; // 3055606742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels = { "GridLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, GridLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLevels_MetaData), NewProp_GridLevels_MetaData) }; // 3055606742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_WorldBounds = { "WorldBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, WorldBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBounds_MetaData), NewProp_WorldBounds_MetaData) };
void Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
{
	((FSpatialHashStreamingGrid*)Obj)->bClientOnlyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashStreamingGrid), &Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClientOnlyVisible_MetaData), NewProp_bClientOnlyVisible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_HLODLayer = { "HLODLayer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, HLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayer_MetaData), NewProp_HLODLayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridIndex_MetaData), NewProp_GridIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, Settings), Z_Construct_UScriptStruct_FSpatialHashSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4143427027
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_InjectedGridLevels_Inner = { "InjectedGridLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel, METADATA_PARAMS(0, nullptr) }; // 3055606742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_InjectedGridLevels = { "InjectedGridLevels", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashStreamingGrid, InjectedGridLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InjectedGridLevels_MetaData), NewProp_InjectedGridLevels_MetaData) }; // 3055606742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_LoadingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_WorldBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_HLODLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_InjectedGridLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_InjectedGridLevels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SpatialHashStreamingGrid",
	Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::PropPointers),
	sizeof(FSpatialHashStreamingGrid),
	alignof(FSpatialHashStreamingGrid),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGrid()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.InnerSingleton;
}
// End ScriptStruct FSpatialHashStreamingGrid

// Begin ScriptStruct FSpatialHashRuntimeGrid
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid;
class UScriptStruct* FSpatialHashRuntimeGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashRuntimeGrid"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashRuntimeGrid>()
{
	return FSpatialHashRuntimeGrid::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a runtime grid (editing)\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents a runtime grid (editing)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnSlowStreaming_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should streaming block in situations where cells aren't getting loaded fast enough. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Should streaming block in situations where cells aren't getting loaded fast enough." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GridName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingRange;
	static void NewProp_bBlockOnSlowStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnSlowStreaming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashRuntimeGrid>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashRuntimeGrid, GridName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridName_MetaData), NewProp_GridName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashRuntimeGrid, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashRuntimeGrid, LoadingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingRange_MetaData), NewProp_LoadingRange_MetaData) };
void Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit(void* Obj)
{
	((FSpatialHashRuntimeGrid*)Obj)->bBlockOnSlowStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming = { "bBlockOnSlowStreaming", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashRuntimeGrid), &Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockOnSlowStreaming_MetaData), NewProp_bBlockOnSlowStreaming_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashRuntimeGrid, Origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashRuntimeGrid, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashRuntimeGrid, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
void Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
{
	((FSpatialHashRuntimeGrid*)Obj)->bClientOnlyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialHashRuntimeGrid), &Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClientOnlyVisible_MetaData), NewProp_bClientOnlyVisible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_HLODLayer = { "HLODLayer", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashRuntimeGrid, HLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayer_MetaData), NewProp_HLODLayer_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_GridName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_LoadingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_HLODLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SpatialHashRuntimeGrid",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::PropPointers), 0),
	sizeof(FSpatialHashRuntimeGrid),
	alignof(FSpatialHashRuntimeGrid),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.InnerSingleton;
}
// End ScriptStruct FSpatialHashRuntimeGrid

// Begin Class ASpatialHashRuntimeGridInfo
void ASpatialHashRuntimeGridInfo::StaticRegisterNativesASpatialHashRuntimeGridInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpatialHashRuntimeGridInfo);
UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister()
{
	return ASpatialHashRuntimeGridInfo::StaticClass();
}
struct Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor keeping information regarding a runtime grid\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor keeping information regarding a runtime grid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialHashRuntimeGridInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::NewProp_GridSettings = { "GridSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpatialHashRuntimeGridInfo, GridSettings), Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSettings_MetaData), NewProp_GridSettings_MetaData) }; // 1238704042
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::NewProp_GridSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::ClassParams = {
	&ASpatialHashRuntimeGridInfo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo()
{
	if (!Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton, Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASpatialHashRuntimeGridInfo>()
{
	return ASpatialHashRuntimeGridInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialHashRuntimeGridInfo);
ASpatialHashRuntimeGridInfo::~ASpatialHashRuntimeGridInfo() {}
// End Class ASpatialHashRuntimeGridInfo

// Begin Class URuntimeSpatialHashExternalStreamingObject
void URuntimeSpatialHashExternalStreamingObject::StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeSpatialHashExternalStreamingObject);
UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister()
{
	return URuntimeSpatialHashExternalStreamingObject::StaticClass();
}
struct Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingGrids_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingGrids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingGrids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeSpatialHashExternalStreamingObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids_Inner = { "StreamingGrids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid, METADATA_PARAMS(0, nullptr) }; // 1492301123
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids = { "StreamingGrids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeSpatialHashExternalStreamingObject, StreamingGrids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingGrids_MetaData), NewProp_StreamingGrids_MetaData) }; // 1492301123
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::ClassParams = {
	&URuntimeSpatialHashExternalStreamingObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject()
{
	if (!Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton, Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimeSpatialHashExternalStreamingObject>()
{
	return URuntimeSpatialHashExternalStreamingObject::StaticClass();
}
URuntimeSpatialHashExternalStreamingObject::URuntimeSpatialHashExternalStreamingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeSpatialHashExternalStreamingObject);
URuntimeSpatialHashExternalStreamingObject::~URuntimeSpatialHashExternalStreamingObject() {}
// End Class URuntimeSpatialHashExternalStreamingObject

// Begin Class UWorldPartitionRuntimeSpatialHash
void UWorldPartitionRuntimeSpatialHash::StaticRegisterNativesUWorldPartitionRuntimeSpatialHash()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeSpatialHash);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister()
{
	return UWorldPartitionRuntimeSpatialHash::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grids_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewGrids_MetaData[] = {
		{ "Comment", "/** Whether to preview runtime grids. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Whether to preview runtime grids." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGridLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPreviewer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAlignedGridLevels_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Disable to help break the pattern caused by world partition promotion of actors to upper grid levels that are always aligned on child levels. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Disable to help break the pattern caused by world partition promotion of actors to upper grid levels that are always aligned on child levels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapNonAlignedGridLevelsToLowerLevels_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Disable to avoid snapping higher levels cells to child cells. Only used when bUseAlignedGridLevels is false. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Disable to avoid snapping higher levels cells to child cells. Only used when bUseAlignedGridLevels is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceSmallActorsUsingLocation_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Enable to place actors smaller than a cell size into their corresponding cell using their location instead of their bounding box. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Enable to place actors smaller than a cell size into their corresponding cell using their location instead of their bounding box." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacePartitionActorsUsingLocation_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Enable to place partitioned actors into their corresponding cell using their location instead of their bounding box. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Enable to place partitioned actors into their corresponding cell using their location instead of their bounding box." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableZCulling_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Whether this hash enables Z culling. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Whether this hash enables Z culling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingGrids_MetaData[] = {
		{ "Comment", "/** \n\x09 * Represents the streaming grids (PIE or Game)\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents the streaming grids (PIE or Game)" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Grids;
	static void NewProp_bPreviewGrids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewGrids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewGridLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPreviewer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UseAlignedGridLevels_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UseAlignedGridLevels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapNonAlignedGridLevelsToLowerLevels_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapNonAlignedGridLevelsToLowerLevels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaceSmallActorsUsingLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaceSmallActorsUsingLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlacePartitionActorsUsingLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlacePartitionActorsUsingLocation;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bEnableZCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableZCulling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingGrids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingGrids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeSpatialHash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid, METADATA_PARAMS(0, nullptr) }; // 1238704042
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, Grids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grids_MetaData), NewProp_Grids_MetaData) }; // 1238704042
void Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeSpatialHash*)Obj)->bPreviewGrids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids = { "bPreviewGrids", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeSpatialHash), &Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewGrids_MetaData), NewProp_bPreviewGrids_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PreviewGridLevel = { "PreviewGridLevel", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, PreviewGridLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGridLevel_MetaData), NewProp_PreviewGridLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_GridPreviewer = { "GridPreviewer", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, GridPreviewer), Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPreviewer_MetaData), NewProp_GridPreviewer_MetaData) }; // 1255329465
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_UseAlignedGridLevels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_UseAlignedGridLevels = { "UseAlignedGridLevels", nullptr, (EPropertyFlags)0x0040040800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, UseAlignedGridLevels), Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAlignedGridLevels_MetaData), NewProp_UseAlignedGridLevels_MetaData) }; // 1603830791
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_SnapNonAlignedGridLevelsToLowerLevels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_SnapNonAlignedGridLevelsToLowerLevels = { "SnapNonAlignedGridLevelsToLowerLevels", nullptr, (EPropertyFlags)0x0040040800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, SnapNonAlignedGridLevelsToLowerLevels), Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapNonAlignedGridLevelsToLowerLevels_MetaData), NewProp_SnapNonAlignedGridLevelsToLowerLevels_MetaData) }; // 1603830791
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlaceSmallActorsUsingLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlaceSmallActorsUsingLocation = { "PlaceSmallActorsUsingLocation", nullptr, (EPropertyFlags)0x0040040800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, PlaceSmallActorsUsingLocation), Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceSmallActorsUsingLocation_MetaData), NewProp_PlaceSmallActorsUsingLocation_MetaData) }; // 1603830791
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlacePartitionActorsUsingLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlacePartitionActorsUsingLocation = { "PlacePartitionActorsUsingLocation", nullptr, (EPropertyFlags)0x0040040800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, PlacePartitionActorsUsingLocation), Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacePartitionActorsUsingLocation_MetaData), NewProp_PlacePartitionActorsUsingLocation_MetaData) }; // 1603830791
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeSpatialHash*)Obj)->bEnableZCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling = { "bEnableZCulling", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeSpatialHash), &Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableZCulling_MetaData), NewProp_bEnableZCulling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, Settings), Z_Construct_UScriptStruct_FSpatialHashSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4143427027
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids_Inner = { "StreamingGrids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid, METADATA_PARAMS(0, nullptr) }; // 1492301123
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids = { "StreamingGrids", nullptr, (EPropertyFlags)0x0020880000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, StreamingGrids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingGrids_MetaData), NewProp_StreamingGrids_MetaData) }; // 1492301123
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PreviewGridLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_GridPreviewer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_UseAlignedGridLevels_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_UseAlignedGridLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_SnapNonAlignedGridLevelsToLowerLevels_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_SnapNonAlignedGridLevelsToLowerLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlaceSmallActorsUsingLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlaceSmallActorsUsingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlacePartitionActorsUsingLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_PlacePartitionActorsUsingLocation,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeHash,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::ClassParams = {
	&UWorldPartitionRuntimeSpatialHash::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeSpatialHash>()
{
	return UWorldPartitionRuntimeSpatialHash::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeSpatialHash);
UWorldPartitionRuntimeSpatialHash::~UWorldPartitionRuntimeSpatialHash() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionRuntimeSpatialHash)
// End Class UWorldPartitionRuntimeSpatialHash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWorldPartitionCVarProjectDefaultOverride_StaticEnum, TEXT("EWorldPartitionCVarProjectDefaultOverride"), &Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1603830791U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpatialHashSettings::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewStructOps, TEXT("SpatialHashSettings"), &Z_Registration_Info_UScriptStruct_SpatialHashSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashSettings), 4143427027U) },
		{ FSpatialHashStreamingGridLayerCell::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewStructOps, TEXT("SpatialHashStreamingGridLayerCell"), &Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashStreamingGridLayerCell), 279248726U) },
		{ FSpatialHashStreamingGridLevel::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewStructOps, TEXT("SpatialHashStreamingGridLevel"), &Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashStreamingGridLevel), 3055606742U) },
		{ FSpatialHashStreamingGrid::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewStructOps, TEXT("SpatialHashStreamingGrid"), &Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashStreamingGrid), 1492301123U) },
		{ FSpatialHashRuntimeGrid::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewStructOps, TEXT("SpatialHashRuntimeGrid"), &Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashRuntimeGrid), 1238704042U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpatialHashRuntimeGridInfo, ASpatialHashRuntimeGridInfo::StaticClass, TEXT("ASpatialHashRuntimeGridInfo"), &Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpatialHashRuntimeGridInfo), 3317706761U) },
		{ Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject, URuntimeSpatialHashExternalStreamingObject::StaticClass, TEXT("URuntimeSpatialHashExternalStreamingObject"), &Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeSpatialHashExternalStreamingObject), 4143066083U) },
		{ Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash, UWorldPartitionRuntimeSpatialHash::StaticClass, TEXT("UWorldPartitionRuntimeSpatialHash"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeSpatialHash), 3776994525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_1269909165(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
