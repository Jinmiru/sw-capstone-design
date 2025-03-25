// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangeBlockedTexturePayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeBlockedTexturePayloadInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Interface UInterchangeBlockedTexturePayloadInterface
void UInterchangeBlockedTexturePayloadInterface::StaticRegisterNativesUInterchangeBlockedTexturePayloadInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBlockedTexturePayloadInterface);
UClass* Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister()
{
	return UInterchangeBlockedTexturePayloadInterface::StaticClass();
}
struct Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Texture/InterchangeBlockedTexturePayloadInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeBlockedTexturePayloadInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics::ClassParams = {
	&UInterchangeBlockedTexturePayloadInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface()
{
	if (!Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeBlockedTexturePayloadInterface>()
{
	return UInterchangeBlockedTexturePayloadInterface::StaticClass();
}
UInterchangeBlockedTexturePayloadInterface::UInterchangeBlockedTexturePayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBlockedTexturePayloadInterface);
UInterchangeBlockedTexturePayloadInterface::~UInterchangeBlockedTexturePayloadInterface() {}
// End Interface UInterchangeBlockedTexturePayloadInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface, UInterchangeBlockedTexturePayloadInterface::StaticClass, TEXT("UInterchangeBlockedTexturePayloadInterface"), &Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBlockedTexturePayloadInterface), 408223474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_1807033427(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
