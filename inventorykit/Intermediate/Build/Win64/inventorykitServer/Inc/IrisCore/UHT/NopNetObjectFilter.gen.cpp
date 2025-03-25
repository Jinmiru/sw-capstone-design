// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/NopNetObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNopNetObjectFilter() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNopNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNopNetObjectFilter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNopNetObjectFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNopNetObjectFilterConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNopNetObjectFilterConfig
void UNopNetObjectFilterConfig::StaticRegisterNativesUNopNetObjectFilterConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNopNetObjectFilterConfig);
UClass* Z_Construct_UClass_UNopNetObjectFilterConfig_NoRegister()
{
	return UNopNetObjectFilterConfig::StaticClass();
}
struct Z_Construct_UClass_UNopNetObjectFilterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NopNetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NopNetObjectFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNopNetObjectFilterConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNopNetObjectFilterConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilterConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNopNetObjectFilterConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNopNetObjectFilterConfig_Statics::ClassParams = {
	&UNopNetObjectFilterConfig::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNopNetObjectFilterConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNopNetObjectFilterConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNopNetObjectFilterConfig()
{
	if (!Z_Registration_Info_UClass_UNopNetObjectFilterConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNopNetObjectFilterConfig.OuterSingleton, Z_Construct_UClass_UNopNetObjectFilterConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNopNetObjectFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNopNetObjectFilterConfig>()
{
	return UNopNetObjectFilterConfig::StaticClass();
}
UNopNetObjectFilterConfig::UNopNetObjectFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNopNetObjectFilterConfig);
UNopNetObjectFilterConfig::~UNopNetObjectFilterConfig() {}
// End Class UNopNetObjectFilterConfig

// Begin Class UNopNetObjectFilter
void UNopNetObjectFilter::StaticRegisterNativesUNopNetObjectFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNopNetObjectFilter);
UClass* Z_Construct_UClass_UNopNetObjectFilter_NoRegister()
{
	return UNopNetObjectFilter::StaticClass();
}
struct Z_Construct_UClass_UNopNetObjectFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NopNetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NopNetObjectFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNopNetObjectFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNopNetObjectFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNopNetObjectFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNopNetObjectFilter_Statics::ClassParams = {
	&UNopNetObjectFilter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNopNetObjectFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNopNetObjectFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNopNetObjectFilter()
{
	if (!Z_Registration_Info_UClass_UNopNetObjectFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNopNetObjectFilter.OuterSingleton, Z_Construct_UClass_UNopNetObjectFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNopNetObjectFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNopNetObjectFilter>()
{
	return UNopNetObjectFilter::StaticClass();
}
UNopNetObjectFilter::UNopNetObjectFilter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNopNetObjectFilter);
UNopNetObjectFilter::~UNopNetObjectFilter() {}
// End Class UNopNetObjectFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NopNetObjectFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNopNetObjectFilterConfig, UNopNetObjectFilterConfig::StaticClass, TEXT("UNopNetObjectFilterConfig"), &Z_Registration_Info_UClass_UNopNetObjectFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNopNetObjectFilterConfig), 2679074895U) },
		{ Z_Construct_UClass_UNopNetObjectFilter, UNopNetObjectFilter::StaticClass, TEXT("UNopNetObjectFilter"), &Z_Registration_Info_UClass_UNopNetObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNopNetObjectFilter), 2110883684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NopNetObjectFilter_h_9089801(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NopNetObjectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NopNetObjectFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
