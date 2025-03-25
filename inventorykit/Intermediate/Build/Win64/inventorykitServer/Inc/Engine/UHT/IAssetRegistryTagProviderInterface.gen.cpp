// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/IAssetRegistryTagProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAssetRegistryTagProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAssetRegistryTagProviderInterface();
ENGINE_API UClass* Z_Construct_UClass_UAssetRegistryTagProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UAssetRegistryTagProviderInterface
void UAssetRegistryTagProviderInterface::StaticRegisterNativesUAssetRegistryTagProviderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetRegistryTagProviderInterface);
UClass* Z_Construct_UClass_UAssetRegistryTagProviderInterface_NoRegister()
{
	return UAssetRegistryTagProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IAssetRegistryTagProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetRegistryTagProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics::ClassParams = {
	&UAssetRegistryTagProviderInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetRegistryTagProviderInterface()
{
	if (!Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.OuterSingleton, Z_Construct_UClass_UAssetRegistryTagProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAssetRegistryTagProviderInterface>()
{
	return UAssetRegistryTagProviderInterface::StaticClass();
}
UAssetRegistryTagProviderInterface::UAssetRegistryTagProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistryTagProviderInterface);
UAssetRegistryTagProviderInterface::~UAssetRegistryTagProviderInterface() {}
// End Interface UAssetRegistryTagProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetRegistryTagProviderInterface, UAssetRegistryTagProviderInterface::StaticClass, TEXT("UAssetRegistryTagProviderInterface"), &Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetRegistryTagProviderInterface), 4225807651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_3195472482(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IAssetRegistryTagProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
