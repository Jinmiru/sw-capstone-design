// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangeIESTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeIESTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeIESTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeIESTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeIESTranslator
void UInterchangeIESTranslator::StaticRegisterNativesUInterchangeIESTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeIESTranslator);
UClass* Z_Construct_UClass_UInterchangeIESTranslator_NoRegister()
{
	return UInterchangeIESTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangeIESTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Texture/InterchangeIESTranslator.h" },
		{ "ModuleRelativePath", "Public/Texture/InterchangeIESTranslator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeIESTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeIESTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeIESTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeIESTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeIESTranslator, IInterchangeTextureLightProfilePayloadInterface), false },  // 1290120151
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeIESTranslator_Statics::ClassParams = {
	&UInterchangeIESTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeIESTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeIESTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeIESTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangeIESTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeIESTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeIESTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeIESTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeIESTranslator>()
{
	return UInterchangeIESTranslator::StaticClass();
}
UInterchangeIESTranslator::UInterchangeIESTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeIESTranslator);
UInterchangeIESTranslator::~UInterchangeIESTranslator() {}
// End Class UInterchangeIESTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeIESTranslator, UInterchangeIESTranslator::StaticClass, TEXT("UInterchangeIESTranslator"), &Z_Registration_Info_UClass_UInterchangeIESTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeIESTranslator), 2230751901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_3958694927(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
