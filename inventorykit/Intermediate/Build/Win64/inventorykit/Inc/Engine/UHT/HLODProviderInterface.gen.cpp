// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODProvider();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UWorldPartitionHLODProvider
void UWorldPartitionHLODProvider::StaticRegisterNativesUWorldPartitionHLODProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODProvider);
UClass* Z_Construct_UClass_UWorldPartitionHLODProvider_NoRegister()
{
	return UWorldPartitionHLODProvider::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionHLODProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionHLODProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionHLODProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODProvider_Statics::ClassParams = {
	&UWorldPartitionHLODProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionHLODProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionHLODProvider()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionHLODProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODProvider.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionHLODProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionHLODProvider>()
{
	return UWorldPartitionHLODProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODProvider);
UWorldPartitionHLODProvider::~UWorldPartitionHLODProvider() {}
// End Interface UWorldPartitionHLODProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODProvider, UWorldPartitionHLODProvider::StaticClass, TEXT("UWorldPartitionHLODProvider"), &Z_Registration_Info_UClass_UWorldPartitionHLODProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODProvider), 1063913074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_2514177980(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
