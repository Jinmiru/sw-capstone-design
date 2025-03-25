// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionLevelStreamingPolicy() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionLevelStreamingPolicy
void UWorldPartitionLevelStreamingPolicy::StaticRegisterNativesUWorldPartitionLevelStreamingPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionLevelStreamingPolicy);
UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister()
{
	return UWorldPartitionLevelStreamingPolicy::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceWorldAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubObjectsToCellRemapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerResolver_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalStreamingObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceWorldAssetPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubObjectsToCellRemapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubObjectsToCellRemapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubObjectsToCellRemapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerResolver;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ExternalStreamingObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalStreamingObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionLevelStreamingPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SourceWorldAssetPath = { "SourceWorldAssetPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionLevelStreamingPolicy, SourceWorldAssetPath), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceWorldAssetPath_MetaData), NewProp_SourceWorldAssetPath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_ValueProp = { "SubObjectsToCellRemapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_Key_KeyProp = { "SubObjectsToCellRemapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping = { "SubObjectsToCellRemapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionLevelStreamingPolicy, SubObjectsToCellRemapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubObjectsToCellRemapping_MetaData), NewProp_SubObjectsToCellRemapping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ContainerResolver = { "ContainerResolver", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionLevelStreamingPolicy, ContainerResolver), Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerResolver_MetaData), NewProp_ContainerResolver_MetaData) }; // 3408488840
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ExternalStreamingObjects_Inner = { "ExternalStreamingObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ExternalStreamingObjects = { "ExternalStreamingObjects", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionLevelStreamingPolicy, ExternalStreamingObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalStreamingObjects_MetaData), NewProp_ExternalStreamingObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SourceWorldAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ContainerResolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ExternalStreamingObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ExternalStreamingObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionStreamingPolicy,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::ClassParams = {
	&UWorldPartitionLevelStreamingPolicy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton, Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionLevelStreamingPolicy>()
{
	return UWorldPartitionLevelStreamingPolicy::StaticClass();
}
UWorldPartitionLevelStreamingPolicy::UWorldPartitionLevelStreamingPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionLevelStreamingPolicy);
UWorldPartitionLevelStreamingPolicy::~UWorldPartitionLevelStreamingPolicy() {}
// End Class UWorldPartitionLevelStreamingPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy, UWorldPartitionLevelStreamingPolicy::StaticClass, TEXT("UWorldPartitionLevelStreamingPolicy"), &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionLevelStreamingPolicy), 326145778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_1252658660(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
