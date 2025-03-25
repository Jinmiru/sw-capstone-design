// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/FilterOutNetObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterOutNetObjectFilter() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UFilterOutNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UFilterOutNetObjectFilter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UFilterOutNetObjectFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UFilterOutNetObjectFilterConfig_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UFilterOutNetObjectFilterConfig
void UFilterOutNetObjectFilterConfig::StaticRegisterNativesUFilterOutNetObjectFilterConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterOutNetObjectFilterConfig);
UClass* Z_Construct_UClass_UFilterOutNetObjectFilterConfig_NoRegister()
{
	return UFilterOutNetObjectFilterConfig::StaticClass();
}
struct Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/FilterOutNetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/FilterOutNetObjectFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterOutNetObjectFilterConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilterConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics::ClassParams = {
	&UFilterOutNetObjectFilterConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFilterOutNetObjectFilterConfig()
{
	if (!Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.OuterSingleton, Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UFilterOutNetObjectFilterConfig>()
{
	return UFilterOutNetObjectFilterConfig::StaticClass();
}
UFilterOutNetObjectFilterConfig::UFilterOutNetObjectFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterOutNetObjectFilterConfig);
UFilterOutNetObjectFilterConfig::~UFilterOutNetObjectFilterConfig() {}
// End Class UFilterOutNetObjectFilterConfig

// Begin Class UFilterOutNetObjectFilter
void UFilterOutNetObjectFilter::StaticRegisterNativesUFilterOutNetObjectFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterOutNetObjectFilter);
UClass* Z_Construct_UClass_UFilterOutNetObjectFilter_NoRegister()
{
	return UFilterOutNetObjectFilter::StaticClass();
}
struct Z_Construct_UClass_UFilterOutNetObjectFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/FilterOutNetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/FilterOutNetObjectFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterOutNetObjectFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFilterOutNetObjectFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOutNetObjectFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterOutNetObjectFilter_Statics::ClassParams = {
	&UFilterOutNetObjectFilter::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOutNetObjectFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UFilterOutNetObjectFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFilterOutNetObjectFilter()
{
	if (!Z_Registration_Info_UClass_UFilterOutNetObjectFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterOutNetObjectFilter.OuterSingleton, Z_Construct_UClass_UFilterOutNetObjectFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFilterOutNetObjectFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UFilterOutNetObjectFilter>()
{
	return UFilterOutNetObjectFilter::StaticClass();
}
UFilterOutNetObjectFilter::UFilterOutNetObjectFilter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterOutNetObjectFilter);
UFilterOutNetObjectFilter::~UFilterOutNetObjectFilter() {}
// End Class UFilterOutNetObjectFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_FilterOutNetObjectFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFilterOutNetObjectFilterConfig, UFilterOutNetObjectFilterConfig::StaticClass, TEXT("UFilterOutNetObjectFilterConfig"), &Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterOutNetObjectFilterConfig), 4235533866U) },
		{ Z_Construct_UClass_UFilterOutNetObjectFilter, UFilterOutNetObjectFilter::StaticClass, TEXT("UFilterOutNetObjectFilter"), &Z_Registration_Info_UClass_UFilterOutNetObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterOutNetObjectFilter), 2565486600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_FilterOutNetObjectFilter_h_2597799817(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_FilterOutNetObjectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_FilterOutNetObjectFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
