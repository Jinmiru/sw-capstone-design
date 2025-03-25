// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Mesh/InterchangeStaticMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeStaticMeshFactory
void UInterchangeStaticMeshFactory::StaticRegisterNativesUInterchangeStaticMeshFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshFactory);
UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister()
{
	return UInterchangeStaticMeshFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Mesh/InterchangeStaticMeshFactory.h" },
		{ "ModuleRelativePath", "Public/Mesh/InterchangeStaticMeshFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStaticMeshFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::ClassParams = {
	&UInterchangeStaticMeshFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeStaticMeshFactory>()
{
	return UInterchangeStaticMeshFactory::StaticClass();
}
UInterchangeStaticMeshFactory::UInterchangeStaticMeshFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshFactory);
UInterchangeStaticMeshFactory::~UInterchangeStaticMeshFactory() {}
// End Class UInterchangeStaticMeshFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshFactory, UInterchangeStaticMeshFactory::StaticClass, TEXT("UInterchangeStaticMeshFactory"), &Z_Registration_Info_UClass_UInterchangeStaticMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshFactory), 3491093390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_1421266430(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
