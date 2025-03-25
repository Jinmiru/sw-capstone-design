// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/NetworkMetricsConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkMetricsConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsConfig();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsConfig_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkMetricEnableMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkMetricConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ENetworkMetricEnableMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkMetricEnableMode;
static UEnum* ENetworkMetricEnableMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkMetricEnableMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkMetricEnableMode"));
	}
	return Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENetworkMetricEnableMode>()
{
	return ENetworkMetricEnableMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EnableForAllReplication.Name", "ENetworkMetricEnableMode::EnableForAllReplication" },
		{ "EnableForIrisOnly.Name", "ENetworkMetricEnableMode::EnableForIrisOnly" },
		{ "EnableForNonIrisOnly.Name", "ENetworkMetricEnableMode::EnableForNonIrisOnly" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsConfig.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENetworkMetricEnableMode::EnableForAllReplication", (int64)ENetworkMetricEnableMode::EnableForAllReplication },
		{ "ENetworkMetricEnableMode::EnableForIrisOnly", (int64)ENetworkMetricEnableMode::EnableForIrisOnly },
		{ "ENetworkMetricEnableMode::EnableForNonIrisOnly", (int64)ENetworkMetricEnableMode::EnableForNonIrisOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENetworkMetricEnableMode",
	"ENetworkMetricEnableMode",
	Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENetworkMetricEnableMode()
{
	if (!Z_Registration_Info_UEnum_ENetworkMetricEnableMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkMetricEnableMode.InnerSingleton, Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENetworkMetricEnableMode.InnerSingleton;
}
// End Enum ENetworkMetricEnableMode

// Begin ScriptStruct FNetworkMetricConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkMetricConfig;
class UScriptStruct* FNetworkMetricConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkMetricConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkMetricConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkMetricConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkMetricConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkMetricConfig>()
{
	return FNetworkMetricConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetricName_MetaData[] = {
		{ "Comment", "/** The name of the metric to register the listener. */" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsConfig.h" },
		{ "ToolTip", "The name of the metric to register the listener." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Comment", "/** A sub-class of UNetworkMetricBaseListener. */" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsConfig.h" },
		{ "ToolTip", "A sub-class of UNetworkMetricBaseListener." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MetricName;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnableMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnableMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkMetricConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_MetricName = { "MetricName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkMetricConfig, MetricName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetricName_MetaData), NewProp_MetricName_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkMetricConfig, Class), Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_EnableMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_EnableMode = { "EnableMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkMetricConfig, EnableMode), Z_Construct_UEnum_Engine_ENetworkMetricEnableMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableMode_MetaData), NewProp_EnableMode_MetaData) }; // 1359470474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_MetricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_EnableMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewProp_EnableMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkMetricConfig",
	Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::PropPointers),
	sizeof(FNetworkMetricConfig),
	alignof(FNetworkMetricConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkMetricConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkMetricConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkMetricConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkMetricConfig.InnerSingleton;
}
// End ScriptStruct FNetworkMetricConfig

// Begin Class UNetworkMetricsConfig
void UNetworkMetricsConfig::StaticRegisterNativesUNetworkMetricsConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkMetricsConfig);
UClass* Z_Construct_UClass_UNetworkMetricsConfig_NoRegister()
{
	return UNetworkMetricsConfig::StaticClass();
}
struct Z_Construct_UClass_UNetworkMetricsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/NetworkMetricsConfig.h" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Listeners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Listeners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkMetricsConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkMetricsConfig_Statics::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetworkMetricConfig, METADATA_PARAMS(0, nullptr) }; // 2077562499
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetworkMetricsConfig_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkMetricsConfig, Listeners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Listeners_MetaData), NewProp_Listeners_MetaData) }; // 2077562499
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkMetricsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkMetricsConfig_Statics::NewProp_Listeners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkMetricsConfig_Statics::NewProp_Listeners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetworkMetricsConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkMetricsConfig_Statics::ClassParams = {
	&UNetworkMetricsConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetworkMetricsConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsConfig_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkMetricsConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkMetricsConfig()
{
	if (!Z_Registration_Info_UClass_UNetworkMetricsConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkMetricsConfig.OuterSingleton, Z_Construct_UClass_UNetworkMetricsConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkMetricsConfig.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkMetricsConfig>()
{
	return UNetworkMetricsConfig::StaticClass();
}
UNetworkMetricsConfig::UNetworkMetricsConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkMetricsConfig);
UNetworkMetricsConfig::~UNetworkMetricsConfig() {}
// End Class UNetworkMetricsConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENetworkMetricEnableMode_StaticEnum, TEXT("ENetworkMetricEnableMode"), &Z_Registration_Info_UEnum_ENetworkMetricEnableMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1359470474U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetworkMetricConfig::StaticStruct, Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewStructOps, TEXT("NetworkMetricConfig"), &Z_Registration_Info_UScriptStruct_NetworkMetricConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkMetricConfig), 2077562499U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkMetricsConfig, UNetworkMetricsConfig::StaticClass, TEXT("UNetworkMetricsConfig"), &Z_Registration_Info_UClass_UNetworkMetricsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkMetricsConfig), 2089293511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_33436263(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
