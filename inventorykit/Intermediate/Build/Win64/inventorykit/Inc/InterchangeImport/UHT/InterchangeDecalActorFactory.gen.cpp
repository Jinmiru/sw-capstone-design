// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeDecalActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDecalActorFactory() {}

// Begin Cross Module References
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeDecalActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeDecalActorFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeDecalActorFactory
void UInterchangeDecalActorFactory::StaticRegisterNativesUInterchangeDecalActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDecalActorFactory);
UClass* Z_Construct_UClass_UInterchangeDecalActorFactory_NoRegister()
{
	return UInterchangeDecalActorFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDecalActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scene/InterchangeDecalActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeDecalActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDecalActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDecalActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDecalActorFactory_Statics::ClassParams = {
	&UInterchangeDecalActorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDecalActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDecalActorFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeDecalActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDecalActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeDecalActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDecalActorFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeDecalActorFactory>()
{
	return UInterchangeDecalActorFactory::StaticClass();
}
UInterchangeDecalActorFactory::UInterchangeDecalActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDecalActorFactory);
UInterchangeDecalActorFactory::~UInterchangeDecalActorFactory() {}
// End Class UInterchangeDecalActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDecalActorFactory, UInterchangeDecalActorFactory::StaticClass, TEXT("UInterchangeDecalActorFactory"), &Z_Registration_Info_UClass_UInterchangeDecalActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDecalActorFactory), 954225426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_1750650942(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
