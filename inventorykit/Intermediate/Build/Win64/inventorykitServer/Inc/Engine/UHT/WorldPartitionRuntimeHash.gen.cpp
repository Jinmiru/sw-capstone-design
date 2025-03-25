// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeHash.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHash() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EWorldPartitionStreamingPerformance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance;
static UEnum* EWorldPartitionStreamingPerformance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionStreamingPerformance"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionStreamingPerformance>()
{
	return EWorldPartitionStreamingPerformance_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Critical.Name", "EWorldPartitionStreamingPerformance::Critical" },
		{ "Good.Name", "EWorldPartitionStreamingPerformance::Good" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "Slow.Name", "EWorldPartitionStreamingPerformance::Slow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionStreamingPerformance::Good", (int64)EWorldPartitionStreamingPerformance::Good },
		{ "EWorldPartitionStreamingPerformance::Slow", (int64)EWorldPartitionStreamingPerformance::Slow },
		{ "EWorldPartitionStreamingPerformance::Critical", (int64)EWorldPartitionStreamingPerformance::Critical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldPartitionStreamingPerformance",
	"EWorldPartitionStreamingPerformance",
	Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton;
}
// End Enum EWorldPartitionStreamingPerformance

// Begin ScriptStruct FWorldPartitionRuntimeCellStreamingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData;
class UScriptStruct* FWorldPartitionRuntimeCellStreamingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeCellStreamingData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeCellStreamingData>()
{
	return FWorldPartitionRuntimeCellStreamingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeCellStreamingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellStreamingData, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellStreamingData, WorldAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldAsset_MetaData), NewProp_WorldAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::NewProp_WorldAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionRuntimeCellStreamingData",
	Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::PropPointers),
	sizeof(FWorldPartitionRuntimeCellStreamingData),
	alignof(FWorldPartitionRuntimeCellStreamingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData.InnerSingleton;
}
// End ScriptStruct FWorldPartitionRuntimeCellStreamingData

// Begin Class URuntimeHashExternalStreamingObjectBase
void URuntimeHashExternalStreamingObjectBase::StaticRegisterNativesURuntimeHashExternalStreamingObjectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeHashExternalStreamingObjectBase);
UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister()
{
	return URuntimeHashExternalStreamingObjectBase::StaticClass();
}
struct Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubObjectsToCellRemapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerResolver_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellToStreamingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootExternalDataLayerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "NativeConstTemplateArg", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToGenerateForCook_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataLayerAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubObjectsToCellRemapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubObjectsToCellRemapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubObjectsToCellRemapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerResolver;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OuterWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellToStreamingData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CellToStreamingData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CellToStreamingData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerInstances_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DataLayerInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootExternalDataLayerInstance;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PackagesToGenerateForCook_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagesToGenerateForCook_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PackagesToGenerateForCook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalDataLayerAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeHashExternalStreamingObjectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_SubObjectsToCellRemapping_ValueProp = { "SubObjectsToCellRemapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_SubObjectsToCellRemapping_Key_KeyProp = { "SubObjectsToCellRemapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_SubObjectsToCellRemapping = { "SubObjectsToCellRemapping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, SubObjectsToCellRemapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubObjectsToCellRemapping_MetaData), NewProp_SubObjectsToCellRemapping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_ContainerResolver = { "ContainerResolver", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, ContainerResolver), Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerResolver_MetaData), NewProp_ContainerResolver_MetaData) }; // 3408488840
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OuterWorld = { "OuterWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, OuterWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterWorld_MetaData), NewProp_OuterWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_CellToStreamingData_ValueProp = { "CellToStreamingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData, METADATA_PARAMS(0, nullptr) }; // 4292931852
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_CellToStreamingData_Key_KeyProp = { "CellToStreamingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_CellToStreamingData = { "CellToStreamingData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, CellToStreamingData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellToStreamingData_MetaData), NewProp_CellToStreamingData_MetaData) }; // 4292931852
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_DataLayerInstances_ElementProp = { "DataLayerInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_DataLayerInstances = { "DataLayerInstances", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, DataLayerInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerInstances_MetaData), NewProp_DataLayerInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_RootExternalDataLayerInstance = { "RootExternalDataLayerInstance", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, RootExternalDataLayerInstance), Z_Construct_UClass_UExternalDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootExternalDataLayerInstance_MetaData), NewProp_RootExternalDataLayerInstance_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_PackagesToGenerateForCook_ValueProp = { "PackagesToGenerateForCook", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_PackagesToGenerateForCook_Key_KeyProp = { "PackagesToGenerateForCook_Key", nullptr, (EPropertyFlags)0x0100000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_PackagesToGenerateForCook = { "PackagesToGenerateForCook", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, PackagesToGenerateForCook), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagesToGenerateForCook_MetaData), NewProp_PackagesToGenerateForCook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_ExternalDataLayerAsset = { "ExternalDataLayerAsset", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, ExternalDataLayerAsset), Z_Construct_UClass_UExternalDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataLayerAsset_MetaData), NewProp_ExternalDataLayerAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_SubObjectsToCellRemapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_SubObjectsToCellRemapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_SubObjectsToCellRemapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_ContainerResolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OuterWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_CellToStreamingData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_CellToStreamingData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_CellToStreamingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_DataLayerInstances_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_DataLayerInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_RootExternalDataLayerInstance,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_PackagesToGenerateForCook_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_PackagesToGenerateForCook_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_PackagesToGenerateForCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_ExternalDataLayerAsset,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister, (int32)VTABLE_OFFSET(URuntimeHashExternalStreamingObjectBase, IWorldPartitionCookPackageObject), false },  // 929673968
	{ Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister, (int32)VTABLE_OFFSET(URuntimeHashExternalStreamingObjectBase, IDataLayerInstanceProvider), false },  // 2577983382
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::ClassParams = {
	&URuntimeHashExternalStreamingObjectBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase()
{
	if (!Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton, Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimeHashExternalStreamingObjectBase>()
{
	return URuntimeHashExternalStreamingObjectBase::StaticClass();
}
URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeHashExternalStreamingObjectBase);
URuntimeHashExternalStreamingObjectBase::~URuntimeHashExternalStreamingObjectBase() {}
// End Class URuntimeHashExternalStreamingObjectBase

// Begin Class UWorldPartitionRuntimeHash
void UWorldPartitionRuntimeHash::StaticRegisterNativesUWorldPartitionRuntimeHash()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeHash);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister()
{
	return UWorldPartitionRuntimeHash::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeHash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::ClassParams = {
	&UWorldPartitionRuntimeHash::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeHash>()
{
	return UWorldPartitionRuntimeHash::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeHash);
UWorldPartitionRuntimeHash::~UWorldPartitionRuntimeHash() {}
// End Class UWorldPartitionRuntimeHash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWorldPartitionStreamingPerformance_StaticEnum, TEXT("EWorldPartitionStreamingPerformance"), &Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3134028602U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionRuntimeCellStreamingData::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::NewStructOps, TEXT("WorldPartitionRuntimeCellStreamingData"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellStreamingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeCellStreamingData), 4292931852U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase, URuntimeHashExternalStreamingObjectBase::StaticClass, TEXT("URuntimeHashExternalStreamingObjectBase"), &Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeHashExternalStreamingObjectBase), 4237129860U) },
		{ Z_Construct_UClass_UWorldPartitionRuntimeHash, UWorldPartitionRuntimeHash::StaticClass, TEXT("UWorldPartitionRuntimeHash"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeHash), 1014084363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_631921095(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
