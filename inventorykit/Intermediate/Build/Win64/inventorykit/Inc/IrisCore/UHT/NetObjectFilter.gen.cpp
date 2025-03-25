// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectFilter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig_NoRegister();
IRISCORE_API UEnum* Z_Construct_UEnum_IrisCore_ENetFilterType();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Enum ENetFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetFilterType;
static UEnum* ENetFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENetFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENetFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IrisCore_ENetFilterType, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ENetFilterType"));
	}
	return Z_Registration_Info_UEnum_ENetFilterType.OuterSingleton;
}
template<> IRISCORE_API UEnum* StaticEnum<ENetFilterType>()
{
	return ENetFilterType_StaticEnum();
}
struct Z_Construct_UEnum_IrisCore_ENetFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** This configures when a filter gets executed inside PreSendUpdate and what data it has access to. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "PostPoll_FragmentBased.Comment", "/**\n\x09 * When set to FragmentBased, the filter gets access to the up to date fragment data of an object when it executes.\n\x09 * Those objects will always be polled and have their dirty state copied even if not relevant.\n\x09 */" },
		{ "PostPoll_FragmentBased.Name", "ENetFilterType::PostPoll_FragmentBased" },
		{ "PostPoll_FragmentBased.ToolTip", "When set to FragmentBased, the filter gets access to the up to date fragment data of an object when it executes.\nThose objects will always be polled and have their dirty state copied even if not relevant." },
		{ "PrePoll_Raw.Comment", "/**\n\x09 * The default setting of filters.\n\x09 * This type of filter is applied before we poll objects and copy their data into network fragments.\n\x09 * Thus a filter cannot operate on fragment data during it's operation, only whatever it stored or is accessing directly from the object.\n\x09 * The benefit is that objects not relevant to any connection will get culled from being polled and forced to copy their dirty state for nothing.\n\x09 */" },
		{ "PrePoll_Raw.Name", "ENetFilterType::PrePoll_Raw" },
		{ "PrePoll_Raw.ToolTip", "The default setting of filters.\nThis type of filter is applied before we poll objects and copy their data into network fragments.\nThus a filter cannot operate on fragment data during it's operation, only whatever it stored or is accessing directly from the object.\nThe benefit is that objects not relevant to any connection will get culled from being polled and forced to copy their dirty state for nothing." },
		{ "ToolTip", "This configures when a filter gets executed inside PreSendUpdate and what data it has access to." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENetFilterType::PrePoll_Raw", (int64)ENetFilterType::PrePoll_Raw },
		{ "ENetFilterType::PostPoll_FragmentBased", (int64)ENetFilterType::PostPoll_FragmentBased },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IrisCore_ENetFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	"ENetFilterType",
	"ENetFilterType",
	Z_Construct_UEnum_IrisCore_ENetFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_ENetFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_ENetFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IrisCore_ENetFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IrisCore_ENetFilterType()
{
	if (!Z_Registration_Info_UEnum_ENetFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetFilterType.InnerSingleton, Z_Construct_UEnum_IrisCore_ENetFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENetFilterType.InnerSingleton;
}
// End Enum ENetFilterType

// Begin Class UNetObjectFilterConfig
void UNetObjectFilterConfig::StaticRegisterNativesUNetObjectFilterConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilterConfig);
UClass* Z_Construct_UClass_UNetObjectFilterConfig_NoRegister()
{
	return UNetObjectFilterConfig::StaticClass();
}
struct Z_Construct_UClass_UNetObjectFilterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for filter specific configuration.\n * @see FNetObjectFilterDefinition\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ToolTip", "Base class for filter specific configuration.\n@see FNetObjectFilterDefinition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Comment", "/** Can be used to modify when the filter is executed */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ToolTip", "Can be used to modify when the filter is executed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilterConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNetObjectFilterConfig_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNetObjectFilterConfig_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectFilterConfig, FilterType), Z_Construct_UEnum_IrisCore_ENetFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 3594796245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectFilterConfig_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectFilterConfig_Statics::NewProp_FilterType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetObjectFilterConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilterConfig_Statics::ClassParams = {
	&UNetObjectFilterConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetObjectFilterConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterConfig_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectFilterConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectFilterConfig()
{
	if (!Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectFilterConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectFilterConfig>()
{
	return UNetObjectFilterConfig::StaticClass();
}
UNetObjectFilterConfig::UNetObjectFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilterConfig);
UNetObjectFilterConfig::~UNetObjectFilterConfig() {}
// End Class UNetObjectFilterConfig

// Begin Class UNetObjectFilter
void UNetObjectFilter::StaticRegisterNativesUNetObjectFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilter);
UClass* Z_Construct_UClass_UNetObjectFilter_NoRegister()
{
	return UNetObjectFilter::StaticClass();
}
struct Z_Construct_UClass_UNetObjectFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilter_Statics::ClassParams = {
	&UNetObjectFilter::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectFilter()
{
	if (!Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton, Z_Construct_UClass_UNetObjectFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectFilter>()
{
	return UNetObjectFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilter);
UNetObjectFilter::~UNetObjectFilter() {}
// End Class UNetObjectFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENetFilterType_StaticEnum, TEXT("ENetFilterType"), &Z_Registration_Info_UEnum_ENetFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3594796245U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectFilterConfig, UNetObjectFilterConfig::StaticClass, TEXT("UNetObjectFilterConfig"), &Z_Registration_Info_UClass_UNetObjectFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilterConfig), 3648871300U) },
		{ Z_Construct_UClass_UNetObjectFilter, UNetObjectFilter::StaticClass, TEXT("UNetObjectFilter"), &Z_Registration_Info_UClass_UNetObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilter), 2598475574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_605749500(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
