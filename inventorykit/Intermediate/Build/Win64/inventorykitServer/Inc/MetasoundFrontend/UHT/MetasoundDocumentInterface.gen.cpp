// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundFrontend/Public/MetasoundDocumentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundDocumentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetasoundFrontend();
// End Cross Module References

// Begin Interface UMetaSoundDocumentInterface
void UMetaSoundDocumentInterface::StaticRegisterNativesUMetaSoundDocumentInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundDocumentInterface);
UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister()
{
	return UMetaSoundDocumentInterface::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundDocumentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/MetasoundDocumentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMetaSoundDocumentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundDocumentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundDocumentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundDocumentInterface_Statics::ClassParams = {
	&UMetaSoundDocumentInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundDocumentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundDocumentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundDocumentInterface()
{
	if (!Z_Registration_Info_UClass_UMetaSoundDocumentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundDocumentInterface.OuterSingleton, Z_Construct_UClass_UMetaSoundDocumentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundDocumentInterface.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UClass* StaticClass<UMetaSoundDocumentInterface>()
{
	return UMetaSoundDocumentInterface::StaticClass();
}
UMetaSoundDocumentInterface::UMetaSoundDocumentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundDocumentInterface);
UMetaSoundDocumentInterface::~UMetaSoundDocumentInterface() {}
// End Interface UMetaSoundDocumentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundDocumentInterface, UMetaSoundDocumentInterface::StaticClass, TEXT("UMetaSoundDocumentInterface"), &Z_Registration_Info_UClass_UMetaSoundDocumentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundDocumentInterface), 467103172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_2336894429(TEXT("/Script/MetasoundFrontend"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
