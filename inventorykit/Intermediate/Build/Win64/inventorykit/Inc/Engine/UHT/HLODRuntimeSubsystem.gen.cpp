// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODRuntimeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODRuntimeSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionHLODRuntimeSubsystem
void UWorldPartitionHLODRuntimeSubsystem::StaticRegisterNativesUWorldPartitionHLODRuntimeSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODRuntimeSubsystem);
UClass* Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister()
{
	return UWorldPartitionHLODRuntimeSubsystem::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UWorldPartitionHLODRuntimeSubsystem\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODRuntimeSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODRuntimeSubsystem.h" },
		{ "ToolTip", "UWorldPartitionHLODRuntimeSubsystem" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionHLODRuntimeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics::ClassParams = {
	&UWorldPartitionHLODRuntimeSubsystem::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionHLODRuntimeSubsystem>()
{
	return UWorldPartitionHLODRuntimeSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODRuntimeSubsystem);
UWorldPartitionHLODRuntimeSubsystem::~UWorldPartitionHLODRuntimeSubsystem() {}
// End Class UWorldPartitionHLODRuntimeSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem, UWorldPartitionHLODRuntimeSubsystem::StaticClass, TEXT("UWorldPartitionHLODRuntimeSubsystem"), &Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODRuntimeSubsystem), 3816881959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_1231720695(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
