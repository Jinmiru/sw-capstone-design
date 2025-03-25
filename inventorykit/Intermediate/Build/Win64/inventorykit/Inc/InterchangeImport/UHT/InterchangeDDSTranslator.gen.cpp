// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangeDDSTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDDSTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeDDSTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeDDSTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeDDSTranslator
void UInterchangeDDSTranslator::StaticRegisterNativesUInterchangeDDSTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDDSTranslator);
UClass* Z_Construct_UClass_UInterchangeDDSTranslator_NoRegister()
{
	return UInterchangeDDSTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDDSTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Texture/InterchangeDDSTranslator.h" },
		{ "ModuleRelativePath", "Public/Texture/InterchangeDDSTranslator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDDSTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDDSTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDDSTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeDDSTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDDSTranslator, IInterchangeTexturePayloadInterface), false },  // 3669720233
	{ Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDDSTranslator, IInterchangeSlicedTexturePayloadInterface), false },  // 2543525071
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDDSTranslator_Statics::ClassParams = {
	&UInterchangeDDSTranslator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDDSTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDDSTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDDSTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangeDDSTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDDSTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeDDSTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDDSTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeDDSTranslator>()
{
	return UInterchangeDDSTranslator::StaticClass();
}
UInterchangeDDSTranslator::UInterchangeDDSTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDDSTranslator);
UInterchangeDDSTranslator::~UInterchangeDDSTranslator() {}
// End Class UInterchangeDDSTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDDSTranslator, UInterchangeDDSTranslator::StaticClass, TEXT("UInterchangeDDSTranslator"), &Z_Registration_Info_UClass_UInterchangeDDSTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDDSTranslator), 3044507515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_52157817(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
