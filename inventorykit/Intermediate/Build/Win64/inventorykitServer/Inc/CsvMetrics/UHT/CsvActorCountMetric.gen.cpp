// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CsvMetrics/Public/CsvActorCountMetric.h"
#include "WorldMetricsCore/Public/WorldMetricsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCsvActorCountMetric() {}

// Begin Cross Module References
CSVMETRICS_API UClass* Z_Construct_UClass_UCsvActorCountMetric();
CSVMETRICS_API UClass* Z_Construct_UClass_UCsvActorCountMetric_NoRegister();
UPackage* Z_Construct_UPackage__Script_CsvMetrics();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricInterface();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_NoRegister();
// End Cross Module References

// Begin Class UCsvActorCountMetric
void UCsvActorCountMetric::StaticRegisterNativesUCsvActorCountMetric()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCsvActorCountMetric);
UClass* Z_Construct_UClass_UCsvActorCountMetric_NoRegister()
{
	return UCsvActorCountMetric::StaticClass();
}
struct Z_Construct_UClass_UCsvActorCountMetric_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World actor count metric\n *\n * This metrics provides a basic actor counter sorting the world's actors into categories.\n * On update it writes the actor counts to CSV if the CSV profiler is available.\n */" },
		{ "IncludePath", "CsvActorCountMetric.h" },
		{ "ModuleRelativePath", "Public/CsvActorCountMetric.h" },
		{ "ToolTip", "World actor count metric\n\nThis metrics provides a basic actor counter sorting the world's actors into categories.\nOn update it writes the actor counts to CSV if the CSV profiler is available." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCsvActorCountMetric>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCsvActorCountMetric_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldMetricInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CsvMetrics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCsvActorCountMetric_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCsvActorCountMetric_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_NoRegister, (int32)VTABLE_OFFSET(UCsvActorCountMetric, IWorldMetricsActorTrackerSubscriber), false },  // 3673731538
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCsvActorCountMetric_Statics::ClassParams = {
	&UCsvActorCountMetric::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCsvActorCountMetric_Statics::Class_MetaDataParams), Z_Construct_UClass_UCsvActorCountMetric_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCsvActorCountMetric()
{
	if (!Z_Registration_Info_UClass_UCsvActorCountMetric.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCsvActorCountMetric.OuterSingleton, Z_Construct_UClass_UCsvActorCountMetric_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCsvActorCountMetric.OuterSingleton;
}
template<> CSVMETRICS_API UClass* StaticClass<UCsvActorCountMetric>()
{
	return UCsvActorCountMetric::StaticClass();
}
UCsvActorCountMetric::UCsvActorCountMetric(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCsvActorCountMetric);
UCsvActorCountMetric::~UCsvActorCountMetric() {}
// End Class UCsvActorCountMetric

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCsvActorCountMetric, UCsvActorCountMetric::StaticClass, TEXT("UCsvActorCountMetric"), &Z_Registration_Info_UClass_UCsvActorCountMetric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCsvActorCountMetric), 1552151716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_1295848814(TEXT("/Script/CsvMetrics"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
