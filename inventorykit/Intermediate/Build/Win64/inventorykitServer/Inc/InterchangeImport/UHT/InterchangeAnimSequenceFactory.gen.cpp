// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Animation/InterchangeAnimSequenceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimSequenceFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeAnimSequenceFactory
void UInterchangeAnimSequenceFactory::StaticRegisterNativesUInterchangeAnimSequenceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimSequenceFactory);
UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister()
{
	return UInterchangeAnimSequenceFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/InterchangeAnimSequenceFactory.h" },
		{ "ModuleRelativePath", "Public/Animation/InterchangeAnimSequenceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimSequenceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::ClassParams = {
	&UInterchangeAnimSequenceFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton, Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeAnimSequenceFactory>()
{
	return UInterchangeAnimSequenceFactory::StaticClass();
}
UInterchangeAnimSequenceFactory::UInterchangeAnimSequenceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimSequenceFactory);
UInterchangeAnimSequenceFactory::~UInterchangeAnimSequenceFactory() {}
// End Class UInterchangeAnimSequenceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimSequenceFactory, UInterchangeAnimSequenceFactory::StaticClass, TEXT("UInterchangeAnimSequenceFactory"), &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimSequenceFactory), 3081065158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_1696024749(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
