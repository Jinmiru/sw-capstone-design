// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeVariantSetPayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeVariantSetPayloadInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Interface UInterchangeVariantSetPayloadInterface
void UInterchangeVariantSetPayloadInterface::StaticRegisterNativesUInterchangeVariantSetPayloadInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeVariantSetPayloadInterface);
UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister()
{
	return UInterchangeVariantSetPayloadInterface::StaticClass();
}
struct Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Scene/InterchangeVariantSetPayloadInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeVariantSetPayloadInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics::ClassParams = {
	&UInterchangeVariantSetPayloadInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface()
{
	if (!Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeVariantSetPayloadInterface>()
{
	return UInterchangeVariantSetPayloadInterface::StaticClass();
}
UInterchangeVariantSetPayloadInterface::UInterchangeVariantSetPayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeVariantSetPayloadInterface);
UInterchangeVariantSetPayloadInterface::~UInterchangeVariantSetPayloadInterface() {}
// End Interface UInterchangeVariantSetPayloadInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeVariantSetPayloadInterface, UInterchangeVariantSetPayloadInterface::StaticClass, TEXT("UInterchangeVariantSetPayloadInterface"), &Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeVariantSetPayloadInterface), 3330272686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_721226390(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
