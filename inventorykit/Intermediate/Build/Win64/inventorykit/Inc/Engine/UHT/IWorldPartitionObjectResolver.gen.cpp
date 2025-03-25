// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/IWorldPartitionObjectResolver.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWorldPartitionObjectResolver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionObjectResolver();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionObjectResolver_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionResolveData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FWorldPartitionResolveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionResolveData;
class UScriptStruct* FWorldPartitionResolveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionResolveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionResolveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionResolveData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionResolveData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionResolveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionResolveData>()
{
	return FWorldPartitionResolveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/IWorldPartitionObjectResolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/IWorldPartitionObjectResolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceWorldAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/IWorldPartitionObjectResolver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceWorldAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionResolveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::NewProp_ContainerID = { "ContainerID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionResolveData, ContainerID), Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerID_MetaData), NewProp_ContainerID_MetaData) }; // 1291227467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::NewProp_SourceWorldAssetPath = { "SourceWorldAssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionResolveData, SourceWorldAssetPath), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceWorldAssetPath_MetaData), NewProp_SourceWorldAssetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::NewProp_ContainerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::NewProp_SourceWorldAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionResolveData",
	Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::PropPointers),
	sizeof(FWorldPartitionResolveData),
	alignof(FWorldPartitionResolveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionResolveData()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionResolveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionResolveData.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionResolveData.InnerSingleton;
}
// End ScriptStruct FWorldPartitionResolveData

// Begin Interface UWorldPartitionObjectResolver
void UWorldPartitionObjectResolver::StaticRegisterNativesUWorldPartitionObjectResolver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionObjectResolver);
UClass* Z_Construct_UClass_UWorldPartitionObjectResolver_NoRegister()
{
	return UWorldPartitionObjectResolver::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionObjectResolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/IWorldPartitionObjectResolver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionObjectResolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionObjectResolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionObjectResolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionObjectResolver_Statics::ClassParams = {
	&UWorldPartitionObjectResolver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionObjectResolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionObjectResolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionObjectResolver()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionObjectResolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionObjectResolver.OuterSingleton, Z_Construct_UClass_UWorldPartitionObjectResolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionObjectResolver.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionObjectResolver>()
{
	return UWorldPartitionObjectResolver::StaticClass();
}
UWorldPartitionObjectResolver::UWorldPartitionObjectResolver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionObjectResolver);
UWorldPartitionObjectResolver::~UWorldPartitionObjectResolver() {}
// End Interface UWorldPartitionObjectResolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionResolveData::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics::NewStructOps, TEXT("WorldPartitionResolveData"), &Z_Registration_Info_UScriptStruct_WorldPartitionResolveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionResolveData), 3461544685U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionObjectResolver, UWorldPartitionObjectResolver::StaticClass, TEXT("UWorldPartitionObjectResolver"), &Z_Registration_Info_UClass_UWorldPartitionObjectResolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionObjectResolver), 650593381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_2198835302(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
