// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/MaterialX/InterchangeMaterialXTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMaterialXTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMaterialXTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMaterialXTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeMaterialXTranslator
void UInterchangeMaterialXTranslator::StaticRegisterNativesUInterchangeMaterialXTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialXTranslator);
UClass* Z_Construct_UClass_UInterchangeMaterialXTranslator_NoRegister()
{
	return UInterchangeMaterialXTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MaterialX/InterchangeMaterialXTranslator.h" },
		{ "ModuleRelativePath", "Public/MaterialX/InterchangeMaterialXTranslator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialXTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeMaterialXTranslator, IInterchangeTexturePayloadInterface), false },  // 3669720233
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics::ClassParams = {
	&UInterchangeMaterialXTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMaterialXTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMaterialXTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeMaterialXTranslator>()
{
	return UInterchangeMaterialXTranslator::StaticClass();
}
UInterchangeMaterialXTranslator::UInterchangeMaterialXTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialXTranslator);
UInterchangeMaterialXTranslator::~UInterchangeMaterialXTranslator() {}
// End Class UInterchangeMaterialXTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMaterialXTranslator, UInterchangeMaterialXTranslator::StaticClass, TEXT("UInterchangeMaterialXTranslator"), &Z_Registration_Info_UClass_UInterchangeMaterialXTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialXTranslator), 1784676767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_1133962965(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
