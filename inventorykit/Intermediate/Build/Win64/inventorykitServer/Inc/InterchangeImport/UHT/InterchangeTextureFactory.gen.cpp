// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangeTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeTextureFactory
void UInterchangeTextureFactory::StaticRegisterNativesUInterchangeTextureFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureFactory);
UClass* Z_Construct_UClass_UInterchangeTextureFactory_NoRegister()
{
	return UInterchangeTextureFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Texture/InterchangeTextureFactory.h" },
		{ "ModuleRelativePath", "Public/Texture/InterchangeTextureFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureFactory_Statics::ClassParams = {
	&UInterchangeTextureFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureFactory.OuterSingleton, Z_Construct_UClass_UInterchangeTextureFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeTextureFactory>()
{
	return UInterchangeTextureFactory::StaticClass();
}
UInterchangeTextureFactory::UInterchangeTextureFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureFactory);
UInterchangeTextureFactory::~UInterchangeTextureFactory() {}
// End Class UInterchangeTextureFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureFactory, UInterchangeTextureFactory::StaticClass, TEXT("UInterchangeTextureFactory"), &Z_Registration_Info_UClass_UInterchangeTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureFactory), 3587603989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_4200850607(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
