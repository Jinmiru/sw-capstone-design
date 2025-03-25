// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODSourceActorsFromCell.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODSourceActorsFromCell() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionHLODSourceActorsFromCell
void UWorldPartitionHLODSourceActorsFromCell::StaticRegisterNativesUWorldPartitionHLODSourceActorsFromCell()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODSourceActorsFromCell);
UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_NoRegister()
{
	return UWorldPartitionHLODSourceActorsFromCell::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/HLOD/HLODSourceActorsFromCell.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSourceActorsFromCell.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSourceActorsFromCell.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionHLODSourceActorsFromCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping, METADATA_PARAMS(0, nullptr) }; // 588830860
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionHLODSourceActorsFromCell, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) }; // 588830860
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionHLODSourceActors,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::ClassParams = {
	&UWorldPartitionHLODSourceActorsFromCell::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionHLODSourceActorsFromCell>()
{
	return UWorldPartitionHLODSourceActorsFromCell::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODSourceActorsFromCell);
UWorldPartitionHLODSourceActorsFromCell::~UWorldPartitionHLODSourceActorsFromCell() {}
// End Class UWorldPartitionHLODSourceActorsFromCell

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromCell_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell, UWorldPartitionHLODSourceActorsFromCell::StaticClass, TEXT("UWorldPartitionHLODSourceActorsFromCell"), &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODSourceActorsFromCell), 2352568579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromCell_h_3318979618(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromCell_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
