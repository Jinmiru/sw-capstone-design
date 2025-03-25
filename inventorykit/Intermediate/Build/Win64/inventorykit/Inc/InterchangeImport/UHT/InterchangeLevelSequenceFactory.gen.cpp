// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Animation/InterchangeLevelSequenceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLevelSequenceFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeLevelSequenceFactory
void UInterchangeLevelSequenceFactory::StaticRegisterNativesUInterchangeLevelSequenceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLevelSequenceFactory);
UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactory_NoRegister()
{
	return UInterchangeLevelSequenceFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/InterchangeLevelSequenceFactory.h" },
		{ "ModuleRelativePath", "Public/Animation/InterchangeLevelSequenceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLevelSequenceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics::ClassParams = {
	&UInterchangeLevelSequenceFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.OuterSingleton, Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeLevelSequenceFactory>()
{
	return UInterchangeLevelSequenceFactory::StaticClass();
}
UInterchangeLevelSequenceFactory::UInterchangeLevelSequenceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLevelSequenceFactory);
UInterchangeLevelSequenceFactory::~UInterchangeLevelSequenceFactory() {}
// End Class UInterchangeLevelSequenceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeLevelSequenceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeLevelSequenceFactory, UInterchangeLevelSequenceFactory::StaticClass, TEXT("UInterchangeLevelSequenceFactory"), &Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLevelSequenceFactory), 2231865747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeLevelSequenceFactory_h_3174081522(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeLevelSequenceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeLevelSequenceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
