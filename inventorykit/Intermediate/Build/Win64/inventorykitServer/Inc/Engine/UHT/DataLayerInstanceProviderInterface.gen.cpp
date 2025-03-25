// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstanceProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerInstanceProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceProvider();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UDataLayerInstanceProvider
void UDataLayerInstanceProvider::StaticRegisterNativesUDataLayerInstanceProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerInstanceProvider);
UClass* Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister()
{
	return UDataLayerInstanceProvider::StaticClass();
}
struct Z_Construct_UClass_UDataLayerInstanceProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataLayerInstanceProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataLayerInstanceProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerInstanceProvider_Statics::ClassParams = {
	&UDataLayerInstanceProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerInstanceProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerInstanceProvider()
{
	if (!Z_Registration_Info_UClass_UDataLayerInstanceProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerInstanceProvider.OuterSingleton, Z_Construct_UClass_UDataLayerInstanceProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerInstanceProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerInstanceProvider>()
{
	return UDataLayerInstanceProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerInstanceProvider);
UDataLayerInstanceProvider::~UDataLayerInstanceProvider() {}
// End Interface UDataLayerInstanceProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerInstanceProvider, UDataLayerInstanceProvider::StaticClass, TEXT("UDataLayerInstanceProvider"), &Z_Registration_Info_UClass_UDataLayerInstanceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerInstanceProvider), 2577983382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_2993069120(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
