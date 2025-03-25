// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CsvMetrics/Public/CsvMetricsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCsvMetricsSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CSVMETRICS_API UClass* Z_Construct_UClass_UCsvMetricsSubsystem();
CSVMETRICS_API UClass* Z_Construct_UClass_UCsvMetricsSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_CsvMetrics();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricInterface_NoRegister();
// End Cross Module References

// Begin Class UCsvMetricsSubsystem
void UCsvMetricsSubsystem::StaticRegisterNativesUCsvMetricsSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCsvMetricsSubsystem);
UClass* Z_Construct_UClass_UCsvMetricsSubsystem_NoRegister()
{
	return UCsvMetricsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCsvMetricsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Csv metrics subsystem\n *\n * This subsystem registers/unregisters its CSV metric collection whenever a CSV profiler capture is performed.\n */" },
		{ "IncludePath", "CsvMetricsSubsystem.h" },
		{ "ModuleRelativePath", "Public/CsvMetricsSubsystem.h" },
		{ "ToolTip", "Csv metrics subsystem\n\nThis subsystem registers/unregisters its CSV metric collection whenever a CSV profiler capture is performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetricClasses_MetaData[] = {
		{ "Comment", "/** The CSV metric collection to add/remove when a CSV profiler capture stats/ends. */" },
		{ "ModuleRelativePath", "Public/CsvMetricsSubsystem.h" },
		{ "ToolTip", "The CSV metric collection to add/remove when a CSV profiler capture stats/ends." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MetricClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetricClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCsvMetricsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCsvMetricsSubsystem_Statics::NewProp_MetricClasses_Inner = { "MetricClasses", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldMetricInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCsvMetricsSubsystem_Statics::NewProp_MetricClasses = { "MetricClasses", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCsvMetricsSubsystem, MetricClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetricClasses_MetaData), NewProp_MetricClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCsvMetricsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCsvMetricsSubsystem_Statics::NewProp_MetricClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCsvMetricsSubsystem_Statics::NewProp_MetricClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCsvMetricsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCsvMetricsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CsvMetrics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCsvMetricsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCsvMetricsSubsystem_Statics::ClassParams = {
	&UCsvMetricsSubsystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCsvMetricsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCsvMetricsSubsystem_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCsvMetricsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCsvMetricsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCsvMetricsSubsystem()
{
	if (!Z_Registration_Info_UClass_UCsvMetricsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCsvMetricsSubsystem.OuterSingleton, Z_Construct_UClass_UCsvMetricsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCsvMetricsSubsystem.OuterSingleton;
}
template<> CSVMETRICS_API UClass* StaticClass<UCsvMetricsSubsystem>()
{
	return UCsvMetricsSubsystem::StaticClass();
}
UCsvMetricsSubsystem::UCsvMetricsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCsvMetricsSubsystem);
UCsvMetricsSubsystem::~UCsvMetricsSubsystem() {}
// End Class UCsvMetricsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCsvMetricsSubsystem, UCsvMetricsSubsystem::StaticClass, TEXT("UCsvMetricsSubsystem"), &Z_Registration_Info_UClass_UCsvMetricsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCsvMetricsSubsystem), 3634067882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_1961052896(TEXT("/Script/CsvMetrics"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
