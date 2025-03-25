// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleTypeFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleTypeFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleTypeFactory();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleTypeFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UContentBundleTypeFactory
void UContentBundleTypeFactory::StaticRegisterNativesUContentBundleTypeFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleTypeFactory);
UClass* Z_Construct_UClass_UContentBundleTypeFactory_NoRegister()
{
	return UContentBundleTypeFactory::StaticClass();
}
struct Z_Construct_UClass_UContentBundleTypeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleTypeFactory.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleTypeFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleTypeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentBundleTypeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleTypeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleTypeFactory_Statics::ClassParams = {
	&UContentBundleTypeFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleTypeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentBundleTypeFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentBundleTypeFactory()
{
	if (!Z_Registration_Info_UClass_UContentBundleTypeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleTypeFactory.OuterSingleton, Z_Construct_UClass_UContentBundleTypeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentBundleTypeFactory.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UContentBundleTypeFactory>()
{
	return UContentBundleTypeFactory::StaticClass();
}
UContentBundleTypeFactory::UContentBundleTypeFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleTypeFactory);
UContentBundleTypeFactory::~UContentBundleTypeFactory() {}
// End Class UContentBundleTypeFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleTypeFactory, UContentBundleTypeFactory::StaticClass, TEXT("UContentBundleTypeFactory"), &Z_Registration_Info_UClass_UContentBundleTypeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleTypeFactory), 3564153750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_3032317338(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
