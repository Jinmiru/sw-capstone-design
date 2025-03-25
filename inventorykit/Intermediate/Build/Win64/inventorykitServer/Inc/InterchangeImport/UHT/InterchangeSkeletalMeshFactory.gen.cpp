// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Mesh/InterchangeSkeletalMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeSkeletalMeshFactory
void UInterchangeSkeletalMeshFactory::StaticRegisterNativesUInterchangeSkeletalMeshFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshFactory);
UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory_NoRegister()
{
	return UInterchangeSkeletalMeshFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Mesh/InterchangeSkeletalMeshFactory.h" },
		{ "ModuleRelativePath", "Public/Mesh/InterchangeSkeletalMeshFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalMeshFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::ClassParams = {
	&UInterchangeSkeletalMeshFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSkeletalMeshFactory>()
{
	return UInterchangeSkeletalMeshFactory::StaticClass();
}
UInterchangeSkeletalMeshFactory::UInterchangeSkeletalMeshFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshFactory);
UInterchangeSkeletalMeshFactory::~UInterchangeSkeletalMeshFactory() {}
// End Class UInterchangeSkeletalMeshFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshFactory, UInterchangeSkeletalMeshFactory::StaticClass, TEXT("UInterchangeSkeletalMeshFactory"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshFactory), 165998507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_3213519083(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
