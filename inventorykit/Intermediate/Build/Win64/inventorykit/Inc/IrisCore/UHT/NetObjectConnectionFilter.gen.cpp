// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/NetObjectConnectionFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectConnectionFilter() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectConnectionFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectConnectionFilter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectConnectionFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectConnectionFilterConfig_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetObjectConnectionFilterConfig
void UNetObjectConnectionFilterConfig::StaticRegisterNativesUNetObjectConnectionFilterConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectConnectionFilterConfig);
UClass* Z_Construct_UClass_UNetObjectConnectionFilterConfig_NoRegister()
{
	return UNetObjectConnectionFilterConfig::StaticClass();
}
struct Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectConnectionFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectConnectionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectCount_MetaData[] = {
		{ "Comment", "/** The maximum amount of objects that may be added to the filter. It's not designed to handle massive amounts- static connection filtering via the ReplicationSystem API is preferred. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectConnectionFilter.h" },
		{ "ToolTip", "The maximum amount of objects that may be added to the filter. It's not designed to handle massive amounts- static connection filtering via the ReplicationSystem API is preferred." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_MaxObjectCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectConnectionFilterConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::NewProp_MaxObjectCount = { "MaxObjectCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectConnectionFilterConfig, MaxObjectCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObjectCount_MetaData), NewProp_MaxObjectCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::NewProp_MaxObjectCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilterConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::ClassParams = {
	&UNetObjectConnectionFilterConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectConnectionFilterConfig()
{
	if (!Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectConnectionFilterConfig>()
{
	return UNetObjectConnectionFilterConfig::StaticClass();
}
UNetObjectConnectionFilterConfig::UNetObjectConnectionFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectConnectionFilterConfig);
UNetObjectConnectionFilterConfig::~UNetObjectConnectionFilterConfig() {}
// End Class UNetObjectConnectionFilterConfig

// Begin Class UNetObjectConnectionFilter
void UNetObjectConnectionFilter::StaticRegisterNativesUNetObjectConnectionFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectConnectionFilter);
UClass* Z_Construct_UClass_UNetObjectConnectionFilter_NoRegister()
{
	return UNetObjectConnectionFilter::StaticClass();
}
struct Z_Construct_UClass_UNetObjectConnectionFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The NetObjectConnectionFilter is a dynamic pre-poll filter that supports per connection filtering. It should be seen as an alternative to the ReplicationSystem SetConnectionFilter API for use cases where\n * for example the object in question can be a dependent object. Dependent objects will override dynamic filtering and only dynamic filtering.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectConnectionFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectConnectionFilter.h" },
		{ "ToolTip", "The NetObjectConnectionFilter is a dynamic pre-poll filter that supports per connection filtering. It should be seen as an alternative to the ReplicationSystem SetConnectionFilter API for use cases where\nfor example the object in question can be a dependent object. Dependent objects will override dynamic filtering and only dynamic filtering." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectConnectionFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectConnectionFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectConnectionFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectConnectionFilter_Statics::ClassParams = {
	&UNetObjectConnectionFilter::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectConnectionFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectConnectionFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectConnectionFilter()
{
	if (!Z_Registration_Info_UClass_UNetObjectConnectionFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectConnectionFilter.OuterSingleton, Z_Construct_UClass_UNetObjectConnectionFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectConnectionFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectConnectionFilter>()
{
	return UNetObjectConnectionFilter::StaticClass();
}
UNetObjectConnectionFilter::UNetObjectConnectionFilter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectConnectionFilter);
UNetObjectConnectionFilter::~UNetObjectConnectionFilter() {}
// End Class UNetObjectConnectionFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectConnectionFilterConfig, UNetObjectConnectionFilterConfig::StaticClass, TEXT("UNetObjectConnectionFilterConfig"), &Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectConnectionFilterConfig), 3320997643U) },
		{ Z_Construct_UClass_UNetObjectConnectionFilter, UNetObjectConnectionFilter::StaticClass, TEXT("UNetObjectConnectionFilter"), &Z_Registration_Info_UClass_UNetObjectConnectionFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectConnectionFilter), 652787683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_559595634(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
