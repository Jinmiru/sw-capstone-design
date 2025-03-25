// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AssetRegistry/Private/AssetRegistry.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistry() {}

// Begin Cross Module References
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl();
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References

// Begin Class UAssetRegistryImpl
void UAssetRegistryImpl::StaticRegisterNativesUAssetRegistryImpl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetRegistryImpl);
UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister()
{
	return UAssetRegistryImpl::StaticClass();
}
struct Z_Construct_UClass_UAssetRegistryImpl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetRegistry.h" },
		{ "ModuleRelativePath", "Private/AssetRegistry.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetRegistryImpl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetRegistryImpl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryImpl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAssetRegistryImpl_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAssetRegistry_NoRegister, (int32)VTABLE_OFFSET(UAssetRegistryImpl, IAssetRegistry), false },  // 962401186
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistryImpl_Statics::ClassParams = {
	&UAssetRegistryImpl::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetRegistryImpl()
{
	if (!Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton, Z_Construct_UClass_UAssetRegistryImpl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton;
}
template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistryImpl>()
{
	return UAssetRegistryImpl::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAssetRegistryImpl)
// End Class UAssetRegistryImpl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetRegistryImpl, UAssetRegistryImpl::StaticClass, TEXT("UAssetRegistryImpl"), &Z_Registration_Info_UClass_UAssetRegistryImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetRegistryImpl), 1240783039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_3481002017(TEXT("/Script/AssetRegistry"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
