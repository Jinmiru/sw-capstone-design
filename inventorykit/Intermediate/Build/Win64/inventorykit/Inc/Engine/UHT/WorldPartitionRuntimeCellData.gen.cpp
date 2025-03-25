// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionRuntimeCellData
void UWorldPartitionRuntimeCellData::StaticRegisterNativesUWorldPartitionRuntimeCellData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCellData);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister()
{
	return UWorldPartitionRuntimeCellData::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Caches information on streaming source that will be used later on to sort cell. */" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCellData.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
		{ "ToolTip", "Caches information on streaming source that will be used later on to sort cell." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellBounds_MetaData[] = {
		{ "Comment", "// Optional cell bounds\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
		{ "ToolTip", "Optional cell bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchicalLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellBounds_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_CellBounds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GridName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HierarchicalLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCellData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_ContentBounds = { "ContentBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellData, ContentBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBounds_MetaData), NewProp_ContentBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_CellBounds_Inner = { "CellBounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_CellBounds = { "CellBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellData, CellBounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellBounds_MetaData), NewProp_CellBounds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellData, GridName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridName_MetaData), NewProp_GridName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellData, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_HierarchicalLevel = { "HierarchicalLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellData, HierarchicalLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchicalLevel_MetaData), NewProp_HierarchicalLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_ContentBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_CellBounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_CellBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_GridName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_HierarchicalLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::ClassParams = {
	&UWorldPartitionRuntimeCellData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCellData>()
{
	return UWorldPartitionRuntimeCellData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCellData);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionRuntimeCellData)
// End Class UWorldPartitionRuntimeCellData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCellData, UWorldPartitionRuntimeCellData::StaticClass, TEXT("UWorldPartitionRuntimeCellData"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCellData), 1124642328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_365873575(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
