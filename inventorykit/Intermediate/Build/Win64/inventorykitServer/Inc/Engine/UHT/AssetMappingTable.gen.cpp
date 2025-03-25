// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetMappingTable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable();
ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAssetMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetMapping;
class UScriptStruct* FAssetMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetMapping"));
	}
	return Z_Registration_Info_UScriptStruct_AssetMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetMapping>()
{
	return FAssetMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This defines one asset mapping */" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "This defines one asset mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[] = {
		{ "Category", "FAssetMapping" },
		{ "Comment", "/** source asset **/" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "source asset *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[] = {
		{ "Category", "FAssetMapping" },
		{ "Comment", "/** source asset **/" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "source asset *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMapping, SourceAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAsset_MetaData), NewProp_SourceAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMapping, TargetAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAsset_MetaData), NewProp_TargetAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AssetMapping",
	Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers),
	sizeof(FAssetMapping),
	alignof(FAssetMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping()
{
	if (!Z_Registration_Info_UScriptStruct_AssetMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetMapping.InnerSingleton, Z_Construct_UScriptStruct_FAssetMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetMapping.InnerSingleton;
}
// End ScriptStruct FAssetMapping

// Begin Class UAssetMappingTable
void UAssetMappingTable::StaticRegisterNativesUAssetMappingTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetMappingTable);
UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister()
{
	return UAssetMappingTable::StaticClass();
}
struct Z_Construct_UClass_UAssetMappingTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UAssetMappingTable : that has AssetMappingTableging data \n *\x09\x09- used for retargeting\n *\x09\x09- support to share different animations\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AssetMappingTable.h" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "UAssetMappingTable : that has AssetMappingTableging data\n        - used for retargeting\n        - support to share different animations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedAssets_MetaData[] = {
		{ "Category", "AssetMappingTable" },
		{ "Comment", "/** Mappin of asset between source and target **/" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "Mappin of asset between source and target *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappedAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetMappingTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_Inner = { "MappedAssets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetMapping, METADATA_PARAMS(0, nullptr) }; // 4071810217
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets = { "MappedAssets", nullptr, (EPropertyFlags)0x0040000000020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetMappingTable, MappedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedAssets_MetaData), NewProp_MappedAssets_MetaData) }; // 4071810217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetMappingTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetMappingTable_Statics::ClassParams = {
	&UAssetMappingTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetMappingTable()
{
	if (!Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton, Z_Construct_UClass_UAssetMappingTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAssetMappingTable>()
{
	return UAssetMappingTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetMappingTable);
UAssetMappingTable::~UAssetMappingTable() {}
// End Class UAssetMappingTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetMapping::StaticStruct, Z_Construct_UScriptStruct_FAssetMapping_Statics::NewStructOps, TEXT("AssetMapping"), &Z_Registration_Info_UScriptStruct_AssetMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetMapping), 4071810217U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetMappingTable, UAssetMappingTable::StaticClass, TEXT("UAssetMappingTable"), &Z_Registration_Info_UClass_UAssetMappingTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetMappingTable), 3369095191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_883329236(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
