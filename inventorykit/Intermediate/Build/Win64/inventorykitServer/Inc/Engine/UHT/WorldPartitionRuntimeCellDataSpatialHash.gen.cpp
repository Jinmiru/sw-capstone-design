// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellDataSpatialHash.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellDataSpatialHash() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionRuntimeCellDataSpatialHash
void UWorldPartitionRuntimeCellDataSpatialHash::StaticRegisterNativesUWorldPartitionRuntimeCellDataSpatialHash()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCellDataSpatialHash);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_NoRegister()
{
	return UWorldPartitionRuntimeCellDataSpatialHash::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCellDataSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellDataSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Comment", "//~End UWorldPartitionRuntimeCellData\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellDataSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellDataSpatialHash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCellDataSpatialHash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellDataSpatialHash, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellDataSpatialHash, Extent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::NewProp_Extent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeCellData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::ClassParams = {
	&UWorldPartitionRuntimeCellDataSpatialHash::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCellDataSpatialHash>()
{
	return UWorldPartitionRuntimeCellDataSpatialHash::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCellDataSpatialHash);
UWorldPartitionRuntimeCellDataSpatialHash::~UWorldPartitionRuntimeCellDataSpatialHash() {}
// End Class UWorldPartitionRuntimeCellDataSpatialHash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash, UWorldPartitionRuntimeCellDataSpatialHash::StaticClass, TEXT("UWorldPartitionRuntimeCellDataSpatialHash"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCellDataSpatialHash), 424789398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_276683576(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
