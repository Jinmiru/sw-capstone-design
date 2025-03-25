// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHashSet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashSetExternalStreamingObject();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartition_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHashSet();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHashSet_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePartitionDesc();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePartitionStreamingData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRuntimePartitionHLODSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup;
class UScriptStruct* FRuntimePartitionHLODSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimePartitionHLODSetup"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimePartitionHLODSetup>()
{
	return FRuntimePartitionHLODSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds an HLOD setup for a particular partition class. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Holds an HLOD setup for a particular partition class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Name for this HLOD layer setup */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Name for this HLOD layer setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayers_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Associated HLOD Layer objects */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Associated HLOD Layer objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpatiallyLoaded_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** whether this HLOD setup is spatially loaded or not */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "whether this HLOD setup is spatially loaded or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionLayer_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "EditCondition", "bIsSpatiallyLoaded" },
		{ "EditInline", "true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "NoResetToDefault", "" },
		{ "TitleProperty", "Name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODLayers;
	static void NewProp_bIsSpatiallyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpatiallyLoaded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartitionLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimePartitionHLODSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionHLODSetup, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_HLODLayers_Inner = { "HLODLayers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_HLODLayers = { "HLODLayers", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionHLODSetup, HLODLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayers_MetaData), NewProp_HLODLayers_MetaData) };
void Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_bIsSpatiallyLoaded_SetBit(void* Obj)
{
	((FRuntimePartitionHLODSetup*)Obj)->bIsSpatiallyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_bIsSpatiallyLoaded = { "bIsSpatiallyLoaded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRuntimePartitionHLODSetup), &Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_bIsSpatiallyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpatiallyLoaded_MetaData), NewProp_bIsSpatiallyLoaded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_PartitionLayer = { "PartitionLayer", nullptr, (EPropertyFlags)0x01160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionHLODSetup, PartitionLayer), Z_Construct_UClass_URuntimePartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionLayer_MetaData), NewProp_PartitionLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_HLODLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_HLODLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_bIsSpatiallyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_PartitionLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RuntimePartitionHLODSetup",
	Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::PropPointers),
	sizeof(FRuntimePartitionHLODSetup),
	alignof(FRuntimePartitionHLODSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup.InnerSingleton, Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup.InnerSingleton;
}
// End ScriptStruct FRuntimePartitionHLODSetup

// Begin ScriptStruct FRuntimePartitionDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimePartitionDesc;
class UScriptStruct* FRuntimePartitionDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePartitionDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimePartitionDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimePartitionDesc, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimePartitionDesc"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimePartitionDesc.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimePartitionDesc>()
{
	return FRuntimePartitionDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds settings for a runtime partition instance. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Holds settings for a runtime partition instance." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Partition class */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Partition class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Name for this partition, used to map actors to it through the Actor.RuntimeGrid property  */" },
		{ "EditCondition", "Class != nullptr" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Name for this partition, used to map actors to it through the Actor.RuntimeGrid property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainLayer_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Main partition object */" },
		{ "EditCondition", "Class != nullptr" },
		{ "EditInline", "true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "NoResetToDefault", "" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "Main partition object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODSetups_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** HLOD setups used by this partition, one for each layers in the hierarchy */" },
		{ "EditCondition", "Class != nullptr" },
		{ "ForceInlineRow", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "HLOD setups used by this partition, one for each layers in the hierarchy" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODSetups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODSetups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimePartitionDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionDesc, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_URuntimePartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_MainLayer = { "MainLayer", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionDesc, MainLayer), Z_Construct_UClass_URuntimePartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainLayer_MetaData), NewProp_MainLayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_HLODSetups_Inner = { "HLODSetups", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup, METADATA_PARAMS(0, nullptr) }; // 686395141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_HLODSetups = { "HLODSetups", nullptr, (EPropertyFlags)0x0010008800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionDesc, HLODSetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODSetups_MetaData), NewProp_HLODSetups_MetaData) }; // 686395141
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_MainLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_HLODSetups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewProp_HLODSetups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RuntimePartitionDesc",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::PropPointers), 0),
	sizeof(FRuntimePartitionDesc),
	alignof(FRuntimePartitionDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimePartitionDesc()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePartitionDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimePartitionDesc.InnerSingleton, Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimePartitionDesc.InnerSingleton;
}
// End ScriptStruct FRuntimePartitionDesc

// Begin ScriptStruct FRuntimePartitionStreamingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData;
class UScriptStruct* FRuntimePartitionStreamingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimePartitionStreamingData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimePartitionStreamingData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimePartitionStreamingData>()
{
	return FRuntimePartitionStreamingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the runtime partition, currently maps to target grids. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Name of the runtime partition, currently maps to target grids." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonStreamingCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoadingRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NonStreamingCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NonStreamingCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimePartitionStreamingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionStreamingData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionStreamingData, LoadingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingRange_MetaData), NewProp_LoadingRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_StreamingCells_Inner = { "StreamingCells", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_StreamingCells = { "StreamingCells", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionStreamingData, StreamingCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingCells_MetaData), NewProp_StreamingCells_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_NonStreamingCells_Inner = { "NonStreamingCells", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_NonStreamingCells = { "NonStreamingCells", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePartitionStreamingData, NonStreamingCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonStreamingCells_MetaData), NewProp_NonStreamingCells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_LoadingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_StreamingCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_StreamingCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_NonStreamingCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewProp_NonStreamingCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RuntimePartitionStreamingData",
	Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::PropPointers),
	sizeof(FRuntimePartitionStreamingData),
	alignof(FRuntimePartitionStreamingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimePartitionStreamingData()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData.InnerSingleton;
}
// End ScriptStruct FRuntimePartitionStreamingData

// Begin Class URuntimeHashSetExternalStreamingObject
void URuntimeHashSetExternalStreamingObject::StaticRegisterNativesURuntimeHashSetExternalStreamingObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeHashSetExternalStreamingObject);
UClass* Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_NoRegister()
{
	return URuntimeHashSetExternalStreamingObject::StaticClass();
}
struct Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeStreamingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeStreamingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeStreamingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeHashSetExternalStreamingObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::NewProp_RuntimeStreamingData_Inner = { "RuntimeStreamingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimePartitionStreamingData, METADATA_PARAMS(0, nullptr) }; // 756583763
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::NewProp_RuntimeStreamingData = { "RuntimeStreamingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashSetExternalStreamingObject, RuntimeStreamingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeStreamingData_MetaData), NewProp_RuntimeStreamingData_MetaData) }; // 756583763
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::NewProp_RuntimeStreamingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::NewProp_RuntimeStreamingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::ClassParams = {
	&URuntimeHashSetExternalStreamingObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeHashSetExternalStreamingObject()
{
	if (!Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.OuterSingleton, Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimeHashSetExternalStreamingObject>()
{
	return URuntimeHashSetExternalStreamingObject::StaticClass();
}
URuntimeHashSetExternalStreamingObject::URuntimeHashSetExternalStreamingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeHashSetExternalStreamingObject);
URuntimeHashSetExternalStreamingObject::~URuntimeHashSetExternalStreamingObject() {}
// End Class URuntimeHashSetExternalStreamingObject

// Begin Class UWorldPartitionRuntimeHashSet
void UWorldPartitionRuntimeHashSet::StaticRegisterNativesUWorldPartitionRuntimeHashSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeHashSet);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeHashSet_NoRegister()
{
	return UWorldPartitionRuntimeHashSet::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentPartitionDesc_MetaData[] = {
		{ "Comment", "/** Persistent partition */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "ToolTip", "Persistent partition" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimePartitions_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Array of runtime partition descriptors */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "Array of runtime partition descriptors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeStreamingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentPartitionDesc;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimePartitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimePartitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeStreamingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeStreamingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeHashSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_PersistentPartitionDesc = { "PersistentPartitionDesc", nullptr, (EPropertyFlags)0x0010008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeHashSet, PersistentPartitionDesc), Z_Construct_UScriptStruct_FRuntimePartitionDesc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentPartitionDesc_MetaData), NewProp_PersistentPartitionDesc_MetaData) }; // 1247216238
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimePartitions_Inner = { "RuntimePartitions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimePartitionDesc, METADATA_PARAMS(0, nullptr) }; // 1247216238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimePartitions = { "RuntimePartitions", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeHashSet, RuntimePartitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimePartitions_MetaData), NewProp_RuntimePartitions_MetaData) }; // 1247216238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimeStreamingData_Inner = { "RuntimeStreamingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimePartitionStreamingData, METADATA_PARAMS(0, nullptr) }; // 756583763
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimeStreamingData = { "RuntimeStreamingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeHashSet, RuntimeStreamingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeStreamingData_MetaData), NewProp_RuntimeStreamingData_MetaData) }; // 756583763
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_PersistentPartitionDesc,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimePartitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimePartitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimeStreamingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::NewProp_RuntimeStreamingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeHash,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::ClassParams = {
	&UWorldPartitionRuntimeHashSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeHashSet()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeHashSet>()
{
	return UWorldPartitionRuntimeHashSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeHashSet);
UWorldPartitionRuntimeHashSet::~UWorldPartitionRuntimeHashSet() {}
// End Class UWorldPartitionRuntimeHashSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRuntimePartitionHLODSetup::StaticStruct, Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewStructOps, TEXT("RuntimePartitionHLODSetup"), &Z_Registration_Info_UScriptStruct_RuntimePartitionHLODSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimePartitionHLODSetup), 686395141U) },
		{ FRuntimePartitionDesc::StaticStruct, Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewStructOps, TEXT("RuntimePartitionDesc"), &Z_Registration_Info_UScriptStruct_RuntimePartitionDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimePartitionDesc), 1247216238U) },
		{ FRuntimePartitionStreamingData::StaticStruct, Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewStructOps, TEXT("RuntimePartitionStreamingData"), &Z_Registration_Info_UScriptStruct_RuntimePartitionStreamingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimePartitionStreamingData), 756583763U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeHashSetExternalStreamingObject, URuntimeHashSetExternalStreamingObject::StaticClass, TEXT("URuntimeHashSetExternalStreamingObject"), &Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeHashSetExternalStreamingObject), 3365341384U) },
		{ Z_Construct_UClass_UWorldPartitionRuntimeHashSet, UWorldPartitionRuntimeHashSet::StaticClass, TEXT("UWorldPartitionRuntimeHashSet"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeHashSet), 1985877739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_3242401338(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
