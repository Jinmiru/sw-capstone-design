// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/RuntimeHashSet/RuntimePartitionLevelStreaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimePartitionLevelStreaming() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_URuntimePartition();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartitionLevelStreaming();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartitionLevelStreaming_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class URuntimePartitionLevelStreaming
void URuntimePartitionLevelStreaming::StaticRegisterNativesURuntimePartitionLevelStreaming()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimePartitionLevelStreaming);
UClass* Z_Construct_UClass_URuntimePartitionLevelStreaming_NoRegister()
{
	return URuntimePartitionLevelStreaming::StaticClass();
}
struct Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/RuntimeHashSet/RuntimePartitionLevelStreaming.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartitionLevelStreaming.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimePartitionLevelStreaming>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimePartition,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics::ClassParams = {
	&URuntimePartitionLevelStreaming::StaticClass,
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
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimePartitionLevelStreaming()
{
	if (!Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.OuterSingleton, Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimePartitionLevelStreaming>()
{
	return URuntimePartitionLevelStreaming::StaticClass();
}
URuntimePartitionLevelStreaming::URuntimePartitionLevelStreaming(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimePartitionLevelStreaming);
URuntimePartitionLevelStreaming::~URuntimePartitionLevelStreaming() {}
// End Class URuntimePartitionLevelStreaming

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimePartitionLevelStreaming, URuntimePartitionLevelStreaming::StaticClass, TEXT("URuntimePartitionLevelStreaming"), &Z_Registration_Info_UClass_URuntimePartitionLevelStreaming, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimePartitionLevelStreaming), 108436931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_4150300313(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
