// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeSceneImportAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSceneImportAssetFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeSceneImportAssetFactory
void UInterchangeSceneImportAssetFactory::StaticRegisterNativesUInterchangeSceneImportAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneImportAssetFactory);
UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory_NoRegister()
{
	return UInterchangeSceneImportAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeSceneImportAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeSceneImportAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneImportAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::ClassParams = {
	&UInterchangeSceneImportAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.OuterSingleton, Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSceneImportAssetFactory>()
{
	return UInterchangeSceneImportAssetFactory::StaticClass();
}
UInterchangeSceneImportAssetFactory::UInterchangeSceneImportAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneImportAssetFactory);
UInterchangeSceneImportAssetFactory::~UInterchangeSceneImportAssetFactory() {}
// End Class UInterchangeSceneImportAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSceneImportAssetFactory, UInterchangeSceneImportAssetFactory::StaticClass, TEXT("UInterchangeSceneImportAssetFactory"), &Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneImportAssetFactory), 2932214338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_2670808692(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
