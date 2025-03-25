// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionEditorSpatialHash.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorSpatialHash() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorSpatialHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorSpatialHash_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionEditorSpatialHash
void UWorldPartitionEditorSpatialHash::StaticRegisterNativesUWorldPartitionEditorSpatialHash()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorSpatialHash);
UClass* Z_Construct_UClass_UWorldPartitionEditorSpatialHash_NoRegister()
{
	return UWorldPartitionEditorSpatialHash::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionEditorSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSpatialHash.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldImage_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D, /Script/Engine.MaterialInterface" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldImageTopLeftW_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSpatialHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldImageBottomRightW_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSpatialHash.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldImageTopLeftW;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldImageBottomRightW;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorSpatialHash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0040000800004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionEditorSpatialHash, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_WorldImage = { "WorldImage", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionEditorSpatialHash, WorldImage), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldImage_MetaData), NewProp_WorldImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_WorldImageTopLeftW = { "WorldImageTopLeftW", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionEditorSpatialHash, WorldImageTopLeftW), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldImageTopLeftW_MetaData), NewProp_WorldImageTopLeftW_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_WorldImageBottomRightW = { "WorldImageBottomRightW", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionEditorSpatialHash, WorldImageBottomRightW), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldImageBottomRightW_MetaData), NewProp_WorldImageBottomRightW_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_WorldImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_WorldImageTopLeftW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::NewProp_WorldImageBottomRightW,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionEditorHash,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::ClassParams = {
	&UWorldPartitionEditorSpatialHash::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::PropPointers), 0),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionEditorSpatialHash()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionEditorSpatialHash>()
{
	return UWorldPartitionEditorSpatialHash::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorSpatialHash);
// End Class UWorldPartitionEditorSpatialHash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorSpatialHash, UWorldPartitionEditorSpatialHash::StaticClass, TEXT("UWorldPartitionEditorSpatialHash"), &Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorSpatialHash), 4071390725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_2539583520(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
