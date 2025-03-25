// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangeSlicedTexturePayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSlicedTexturePayloadInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Interface UInterchangeSlicedTexturePayloadInterface
void UInterchangeSlicedTexturePayloadInterface::StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSlicedTexturePayloadInterface);
UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister()
{
	return UInterchangeSlicedTexturePayloadInterface::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Texture/InterchangeSlicedTexturePayloadInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeSlicedTexturePayloadInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::ClassParams = {
	&UInterchangeSlicedTexturePayloadInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface()
{
	if (!Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSlicedTexturePayloadInterface>()
{
	return UInterchangeSlicedTexturePayloadInterface::StaticClass();
}
UInterchangeSlicedTexturePayloadInterface::UInterchangeSlicedTexturePayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSlicedTexturePayloadInterface);
UInterchangeSlicedTexturePayloadInterface::~UInterchangeSlicedTexturePayloadInterface() {}
// End Interface UInterchangeSlicedTexturePayloadInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface, UInterchangeSlicedTexturePayloadInterface::StaticClass, TEXT("UInterchangeSlicedTexturePayloadInterface"), &Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSlicedTexturePayloadInterface), 2543525071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_4230877754(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
