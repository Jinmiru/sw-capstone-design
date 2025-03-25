// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Mesh/InterchangeMeshPayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshPayloadInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Interface UInterchangeMeshPayloadInterface
void UInterchangeMeshPayloadInterface::StaticRegisterNativesUInterchangeMeshPayloadInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMeshPayloadInterface);
UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister()
{
	return UInterchangeMeshPayloadInterface::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mesh/InterchangeMeshPayloadInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeMeshPayloadInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics::ClassParams = {
	&UInterchangeMeshPayloadInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface()
{
	if (!Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeMeshPayloadInterface>()
{
	return UInterchangeMeshPayloadInterface::StaticClass();
}
UInterchangeMeshPayloadInterface::UInterchangeMeshPayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMeshPayloadInterface);
UInterchangeMeshPayloadInterface::~UInterchangeMeshPayloadInterface() {}
// End Interface UInterchangeMeshPayloadInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMeshPayloadInterface, UInterchangeMeshPayloadInterface::StaticClass, TEXT("UInterchangeMeshPayloadInterface"), &Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMeshPayloadInterface), 159805936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_3970610834(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
