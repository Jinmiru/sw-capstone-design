// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeSceneVariantSetsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSceneVariantSetsFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeSceneVariantSetsFactory
void UInterchangeSceneVariantSetsFactory::StaticRegisterNativesUInterchangeSceneVariantSetsFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneVariantSetsFactory);
UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister()
{
	return UInterchangeSceneVariantSetsFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeSceneVariantSetsFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeSceneVariantSetsFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneVariantSetsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::ClassParams = {
	&UInterchangeSceneVariantSetsFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.OuterSingleton, Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSceneVariantSetsFactory>()
{
	return UInterchangeSceneVariantSetsFactory::StaticClass();
}
UInterchangeSceneVariantSetsFactory::UInterchangeSceneVariantSetsFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneVariantSetsFactory);
UInterchangeSceneVariantSetsFactory::~UInterchangeSceneVariantSetsFactory() {}
// End Class UInterchangeSceneVariantSetsFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSceneVariantSetsFactory, UInterchangeSceneVariantSetsFactory::StaticClass, TEXT("UInterchangeSceneVariantSetsFactory"), &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneVariantSetsFactory), 1402982382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_3632317531(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
