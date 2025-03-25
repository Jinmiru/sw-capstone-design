// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHashGridPreviewer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FWorldPartitionRuntimeSpatialHashGridPreviewer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer;
class UScriptStruct* FWorldPartitionRuntimeSpatialHashGridPreviewer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeSpatialHashGridPreviewer"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeSpatialHashGridPreviewer>()
{
	return FWorldPartitionRuntimeSpatialHashGridPreviewer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeSpatialHashGridPreviewer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeSpatialHashGridPreviewer, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeSpatialHashGridPreviewer, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MID_MetaData), NewProp_MID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeSpatialHashGridPreviewer, Volume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionRuntimeSpatialHashGridPreviewer",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::PropPointers), 0),
	sizeof(FWorldPartitionRuntimeSpatialHashGridPreviewer),
	alignof(FWorldPartitionRuntimeSpatialHashGridPreviewer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.InnerSingleton;
}
// End ScriptStruct FWorldPartitionRuntimeSpatialHashGridPreviewer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionRuntimeSpatialHashGridPreviewer::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewStructOps, TEXT("WorldPartitionRuntimeSpatialHashGridPreviewer"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeSpatialHashGridPreviewer), 1255329465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_75496173(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
