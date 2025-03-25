// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Net/Core/Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetAnalyticsAggregatorConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NETCORE_API UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig();
NETCORE_API UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig();
UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References

// Begin ScriptStruct FNetAnalyticsDataConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig;
class UScriptStruct* FNetAnalyticsDataConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("NetAnalyticsDataConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FNetAnalyticsDataConfig>()
{
	return FNetAnalyticsDataConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for FNetAnalyticsData - enabling/disabling analytics data, based on DataName\n */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Configuration for FNetAnalyticsData - enabling/disabling analytics data, based on DataName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[] = {
		{ "Comment", "/** The name of the analytics data type (should match analytics stat name) */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "The name of the analytics data type (should match analytics stat name)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether or not the specified analytics data type, is enabled */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Whether or not the specified analytics data type, is enabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataName;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetAnalyticsDataConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetAnalyticsDataConfig, DataName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataName_MetaData), NewProp_DataName_MetaData) };
void Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FNetAnalyticsDataConfig*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetAnalyticsDataConfig), &Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
	nullptr,
	&NewStructOps,
	"NetAnalyticsDataConfig",
	Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers),
	sizeof(FNetAnalyticsDataConfig),
	alignof(FNetAnalyticsDataConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.InnerSingleton;
}
// End ScriptStruct FNetAnalyticsDataConfig

// Begin Class UNetAnalyticsAggregatorConfig
void UNetAnalyticsAggregatorConfig::StaticRegisterNativesUNetAnalyticsAggregatorConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetAnalyticsAggregatorConfig);
UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister()
{
	return UNetAnalyticsAggregatorConfig::StaticClass();
}
struct Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for FNetAnalyticsAggregator - loaded PerObjectConfig, for each NetDriverName\n */" },
		{ "IncludePath", "Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Configuration for FNetAnalyticsAggregator - loaded PerObjectConfig, for each NetDriverName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetAnalyticsData_MetaData[] = {
		{ "Comment", "/** Registers FNetAnalyticsData data holders, by DataName - and specifies whether they are enabled or disabled */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Registers FNetAnalyticsData data holders, by DataName - and specifies whether they are enabled or disabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetAnalyticsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetAnalyticsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetAnalyticsAggregatorConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_Inner = { "NetAnalyticsData", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig, METADATA_PARAMS(0, nullptr) }; // 1530819476
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData = { "NetAnalyticsData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetAnalyticsAggregatorConfig, NetAnalyticsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetAnalyticsData_MetaData), NewProp_NetAnalyticsData_MetaData) }; // 1530819476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::ClassParams = {
	&UNetAnalyticsAggregatorConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers),
	0,
	0x000004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig()
{
	if (!Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton, Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton;
}
template<> NETCORE_API UClass* StaticClass<UNetAnalyticsAggregatorConfig>()
{
	return UNetAnalyticsAggregatorConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetAnalyticsAggregatorConfig);
UNetAnalyticsAggregatorConfig::~UNetAnalyticsAggregatorConfig() {}
// End Class UNetAnalyticsAggregatorConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetAnalyticsDataConfig::StaticStruct, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewStructOps, TEXT("NetAnalyticsDataConfig"), &Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetAnalyticsDataConfig), 1530819476U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetAnalyticsAggregatorConfig, UNetAnalyticsAggregatorConfig::StaticClass, TEXT("UNetAnalyticsAggregatorConfig"), &Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetAnalyticsAggregatorConfig), 2099864835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_3726612469(TEXT("/Script/NetCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
