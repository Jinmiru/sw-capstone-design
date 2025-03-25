// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/RuntimeHashSet/RuntimePartitionPersistent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimePartitionPersistent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_URuntimePartition();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartitionPersistent();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartitionPersistent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class URuntimePartitionPersistent
void URuntimePartitionPersistent::StaticRegisterNativesURuntimePartitionPersistent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimePartitionPersistent);
UClass* Z_Construct_UClass_URuntimePartitionPersistent_NoRegister()
{
	return URuntimePartitionPersistent::StaticClass();
}
struct Z_Construct_UClass_URuntimePartitionPersistent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/RuntimeHashSet/RuntimePartitionPersistent.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartitionPersistent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimePartitionPersistent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimePartitionPersistent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimePartition,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionPersistent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimePartitionPersistent_Statics::ClassParams = {
	&URuntimePartitionPersistent::StaticClass,
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
	0x040020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionPersistent_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimePartitionPersistent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimePartitionPersistent()
{
	if (!Z_Registration_Info_UClass_URuntimePartitionPersistent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimePartitionPersistent.OuterSingleton, Z_Construct_UClass_URuntimePartitionPersistent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimePartitionPersistent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimePartitionPersistent>()
{
	return URuntimePartitionPersistent::StaticClass();
}
URuntimePartitionPersistent::URuntimePartitionPersistent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimePartitionPersistent);
URuntimePartitionPersistent::~URuntimePartitionPersistent() {}
// End Class URuntimePartitionPersistent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimePartitionPersistent, URuntimePartitionPersistent::StaticClass, TEXT("URuntimePartitionPersistent"), &Z_Registration_Info_UClass_URuntimePartitionPersistent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimePartitionPersistent), 3321611155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_3726933351(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
