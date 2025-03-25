// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeStaticMeshActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshActorFactory() {}

// Begin Cross Module References
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeStaticMeshActorFactory
void UInterchangeStaticMeshActorFactory::StaticRegisterNativesUInterchangeStaticMeshActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshActorFactory);
UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister()
{
	return UInterchangeStaticMeshActorFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeStaticMeshActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeStaticMeshActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStaticMeshActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::ClassParams = {
	&UInterchangeStaticMeshActorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeStaticMeshActorFactory>()
{
	return UInterchangeStaticMeshActorFactory::StaticClass();
}
UInterchangeStaticMeshActorFactory::UInterchangeStaticMeshActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshActorFactory);
UInterchangeStaticMeshActorFactory::~UInterchangeStaticMeshActorFactory() {}
// End Class UInterchangeStaticMeshActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshActorFactory, UInterchangeStaticMeshActorFactory::StaticClass, TEXT("UInterchangeStaticMeshActorFactory"), &Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshActorFactory), 2287853494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_1311779604(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
