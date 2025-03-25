// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionEditorHash.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorHash() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionEditorHash
void UWorldPartitionEditorHash::StaticRegisterNativesUWorldPartitionEditorHash()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorHash);
UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister()
{
	return UWorldPartitionEditorHash::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionEditorHash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionEditorHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorHash.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorHash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionEditorHash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorHash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorHash_Statics::ClassParams = {
	&UWorldPartitionEditorHash::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorHash_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionEditorHash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionEditorHash()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorHash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionEditorHash>()
{
	return UWorldPartitionEditorHash::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorHash);
UWorldPartitionEditorHash::~UWorldPartitionEditorHash() {}
// End Class UWorldPartitionEditorHash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorHash, UWorldPartitionEditorHash::StaticClass, TEXT("UWorldPartitionEditorHash"), &Z_Registration_Info_UClass_UWorldPartitionEditorHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorHash), 91211749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_4212089740(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
