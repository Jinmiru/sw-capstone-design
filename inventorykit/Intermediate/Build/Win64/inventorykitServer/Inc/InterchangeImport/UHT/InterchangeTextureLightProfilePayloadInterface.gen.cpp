// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangeTextureLightProfilePayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureLightProfilePayloadInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Interface UInterchangeTextureLightProfilePayloadInterface
void UInterchangeTextureLightProfilePayloadInterface::StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureLightProfilePayloadInterface);
UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister()
{
	return UInterchangeTextureLightProfilePayloadInterface::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Texture/InterchangeTextureLightProfilePayloadInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeTextureLightProfilePayloadInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::ClassParams = {
	&UInterchangeTextureLightProfilePayloadInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeTextureLightProfilePayloadInterface>()
{
	return UInterchangeTextureLightProfilePayloadInterface::StaticClass();
}
UInterchangeTextureLightProfilePayloadInterface::UInterchangeTextureLightProfilePayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureLightProfilePayloadInterface);
UInterchangeTextureLightProfilePayloadInterface::~UInterchangeTextureLightProfilePayloadInterface() {}
// End Interface UInterchangeTextureLightProfilePayloadInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface, UInterchangeTextureLightProfilePayloadInterface::StaticClass, TEXT("UInterchangeTextureLightProfilePayloadInterface"), &Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureLightProfilePayloadInterface), 1290120151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_3627339609(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
