// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangePSDTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePSDTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangePSDTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangePSDTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangePSDTranslator
void UInterchangePSDTranslator::StaticRegisterNativesUInterchangePSDTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePSDTranslator);
UClass* Z_Construct_UClass_UInterchangePSDTranslator_NoRegister()
{
	return UInterchangePSDTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangePSDTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Texture/InterchangePSDTranslator.h" },
		{ "ModuleRelativePath", "Public/Texture/InterchangePSDTranslator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePSDTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangePSDTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePSDTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangePSDTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangePSDTranslator, IInterchangeTexturePayloadInterface), false },  // 3669720233
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePSDTranslator_Statics::ClassParams = {
	&UInterchangePSDTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePSDTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePSDTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePSDTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangePSDTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePSDTranslator.OuterSingleton, Z_Construct_UClass_UInterchangePSDTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePSDTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangePSDTranslator>()
{
	return UInterchangePSDTranslator::StaticClass();
}
UInterchangePSDTranslator::UInterchangePSDTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePSDTranslator);
UInterchangePSDTranslator::~UInterchangePSDTranslator() {}
// End Class UInterchangePSDTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePSDTranslator, UInterchangePSDTranslator::StaticClass, TEXT("UInterchangePSDTranslator"), &Z_Registration_Info_UClass_UInterchangePSDTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePSDTranslator), 3549509232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_1332344129(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
