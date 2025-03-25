// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeCameraActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCameraActorFactory() {}

// Begin Cross Module References
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeCameraActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeCameraActorFactory_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeCineCameraActorFactory
void UInterchangeCineCameraActorFactory::StaticRegisterNativesUInterchangeCineCameraActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeCineCameraActorFactory);
UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory_NoRegister()
{
	return UInterchangeCineCameraActorFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scene/InterchangeCameraActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeCameraActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeCineCameraActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::ClassParams = {
	&UInterchangeCineCameraActorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeCineCameraActorFactory>()
{
	return UInterchangeCineCameraActorFactory::StaticClass();
}
UInterchangeCineCameraActorFactory::UInterchangeCineCameraActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeCineCameraActorFactory);
UInterchangeCineCameraActorFactory::~UInterchangeCineCameraActorFactory() {}
// End Class UInterchangeCineCameraActorFactory

// Begin Class UInterchangeCameraActorFactory
void UInterchangeCameraActorFactory::StaticRegisterNativesUInterchangeCameraActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeCameraActorFactory);
UClass* Z_Construct_UClass_UInterchangeCameraActorFactory_NoRegister()
{
	return UInterchangeCameraActorFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeCameraActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scene/InterchangeCameraActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeCameraActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeCameraActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeCameraActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCameraActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeCameraActorFactory_Statics::ClassParams = {
	&UInterchangeCameraActorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCameraActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeCameraActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeCameraActorFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeCameraActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeCameraActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeCameraActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeCameraActorFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeCameraActorFactory>()
{
	return UInterchangeCameraActorFactory::StaticClass();
}
UInterchangeCameraActorFactory::UInterchangeCameraActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeCameraActorFactory);
UInterchangeCameraActorFactory::~UInterchangeCameraActorFactory() {}
// End Class UInterchangeCameraActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCameraActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeCineCameraActorFactory, UInterchangeCineCameraActorFactory::StaticClass, TEXT("UInterchangeCineCameraActorFactory"), &Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeCineCameraActorFactory), 1740122699U) },
		{ Z_Construct_UClass_UInterchangeCameraActorFactory, UInterchangeCameraActorFactory::StaticClass, TEXT("UInterchangeCameraActorFactory"), &Z_Registration_Info_UClass_UInterchangeCameraActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeCameraActorFactory), 1976646299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCameraActorFactory_h_3440093361(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCameraActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCameraActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
