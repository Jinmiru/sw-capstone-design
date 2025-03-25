// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Mesh/InterchangeOBJTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeOBJTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeOBJTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeOBJTranslator
void UInterchangeOBJTranslator::StaticRegisterNativesUInterchangeOBJTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeOBJTranslator);
UClass* Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister()
{
	return UInterchangeOBJTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangeOBJTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Mesh/InterchangeOBJTranslator.h" },
		{ "ModuleRelativePath", "Public/Mesh/InterchangeOBJTranslator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeOBJTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeOBJTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeOBJTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeOBJTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeOBJTranslator, IInterchangeMeshPayloadInterface), false },  // 159805936
	{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeOBJTranslator, IInterchangeTexturePayloadInterface), false },  // 3669720233
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeOBJTranslator_Statics::ClassParams = {
	&UInterchangeOBJTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeOBJTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeOBJTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeOBJTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangeOBJTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeOBJTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeOBJTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeOBJTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeOBJTranslator>()
{
	return UInterchangeOBJTranslator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeOBJTranslator);
// End Class UInterchangeOBJTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeOBJTranslator, UInterchangeOBJTranslator::StaticClass, TEXT("UInterchangeOBJTranslator"), &Z_Registration_Info_UClass_UInterchangeOBJTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeOBJTranslator), 2335858681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_150644942(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
