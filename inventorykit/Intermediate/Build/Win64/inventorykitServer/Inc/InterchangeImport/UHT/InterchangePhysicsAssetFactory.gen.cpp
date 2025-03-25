// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Mesh/InterchangePhysicsAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePhysicsAssetFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangePhysicsAssetFactory
void UInterchangePhysicsAssetFactory::StaticRegisterNativesUInterchangePhysicsAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePhysicsAssetFactory);
UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactory_NoRegister()
{
	return UInterchangePhysicsAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Mesh/InterchangePhysicsAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Mesh/InterchangePhysicsAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePhysicsAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics::ClassParams = {
	&UInterchangePhysicsAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.OuterSingleton, Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangePhysicsAssetFactory>()
{
	return UInterchangePhysicsAssetFactory::StaticClass();
}
UInterchangePhysicsAssetFactory::UInterchangePhysicsAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePhysicsAssetFactory);
UInterchangePhysicsAssetFactory::~UInterchangePhysicsAssetFactory() {}
// End Class UInterchangePhysicsAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePhysicsAssetFactory, UInterchangePhysicsAssetFactory::StaticClass, TEXT("UInterchangePhysicsAssetFactory"), &Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePhysicsAssetFactory), 2056102082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_3527114007(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
