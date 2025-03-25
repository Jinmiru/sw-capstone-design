// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Animation/InterchangeAnimationPayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimationPayloadInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Interface UInterchangeAnimationPayloadInterface
void UInterchangeAnimationPayloadInterface::StaticRegisterNativesUInterchangeAnimationPayloadInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationPayloadInterface);
UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister()
{
	return UInterchangeAnimationPayloadInterface::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/InterchangeAnimationPayloadInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeAnimationPayloadInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::ClassParams = {
	&UInterchangeAnimationPayloadInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface()
{
	if (!Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeAnimationPayloadInterface>()
{
	return UInterchangeAnimationPayloadInterface::StaticClass();
}
UInterchangeAnimationPayloadInterface::UInterchangeAnimationPayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationPayloadInterface);
UInterchangeAnimationPayloadInterface::~UInterchangeAnimationPayloadInterface() {}
// End Interface UInterchangeAnimationPayloadInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface, UInterchangeAnimationPayloadInterface::StaticClass, TEXT("UInterchangeAnimationPayloadInterface"), &Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationPayloadInterface), 790242820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_1914310223(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
