// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCell();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCell_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UWorldPartitionCell
void UWorldPartitionCell::StaticRegisterNativesUWorldPartitionCell()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionCell);
UClass* Z_Construct_UClass_UWorldPartitionCell_NoRegister()
{
	return UWorldPartitionCell::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionCell_Statics::ClassParams = {
	&UWorldPartitionCell::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionCell()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionCell>()
{
	return UWorldPartitionCell::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionCell);
UWorldPartitionCell::~UWorldPartitionCell() {}
// End Interface UWorldPartitionCell

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionCell, UWorldPartitionCell::StaticClass, TEXT("UWorldPartitionCell"), &Z_Registration_Info_UClass_UWorldPartitionCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionCell), 387172478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_3396786804(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
