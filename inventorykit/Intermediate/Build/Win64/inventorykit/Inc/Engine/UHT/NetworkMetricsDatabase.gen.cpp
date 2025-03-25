// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/NetworkMetricsDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkMetricsDatabase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsBaseListener();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsCSV();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsCSV_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsDatabase();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsPerfCounters();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsPerfCounters_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsStats();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsStats_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNetworkMetricsDatabase
void UNetworkMetricsDatabase::StaticRegisterNativesUNetworkMetricsDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkMetricsDatabase);
UClass* Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister()
{
	return UNetworkMetricsDatabase::StaticClass();
}
struct Z_Construct_UClass_UNetworkMetricsDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::Net\n" },
		{ "IncludePath", "Net/NetworkMetricsDatabase.h" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsDatabase.h" },
		{ "ToolTip", "namespace UE::Net" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkMetricsDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkMetricsDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkMetricsDatabase_Statics::ClassParams = {
	&UNetworkMetricsDatabase::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkMetricsDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkMetricsDatabase()
{
	if (!Z_Registration_Info_UClass_UNetworkMetricsDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkMetricsDatabase.OuterSingleton, Z_Construct_UClass_UNetworkMetricsDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkMetricsDatabase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkMetricsDatabase>()
{
	return UNetworkMetricsDatabase::StaticClass();
}
UNetworkMetricsDatabase::UNetworkMetricsDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkMetricsDatabase);
UNetworkMetricsDatabase::~UNetworkMetricsDatabase() {}
// End Class UNetworkMetricsDatabase

// Begin Class UNetworkMetricsBaseListener
void UNetworkMetricsBaseListener::StaticRegisterNativesUNetworkMetricsBaseListener()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkMetricsBaseListener);
UClass* Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister()
{
	return UNetworkMetricsBaseListener::StaticClass();
}
struct Z_Construct_UClass_UNetworkMetricsBaseListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * An abstract class for metrics listeners that are registered with FNetworkMetricsDatabase.\n * \n * Listeners are the recommended method for reading the current value of metrics from FNetworkMetricsDatabase.\n * \n * Begin by creating a sub-class of UNetworkMetricsBaseListener that overrides the Report() function. This function will be called \n * by FNetworkMetricsDatabase::ProcessListeners() once a frame and will be provided an array of metrics that are registered \n * with FNetworkMetricsDatabase::Register():\n *\n * UCLASS()\n * class UNetworkMetricsMyListener : public UNetworkMetricsBaseListener\n * {\n *\x09\x09GENERATED_BODY()\n * public:\n *\x09\x09virtual ~UNetworkMetricsMyListener() = default;\n * \n *\x09\x09void Report(const TArray<UE::Net::FNetworkMetricSnapshot>& Stats)\n *\x09\x09{\n *\x09\x09\x09""for (const UE::Net::FNetworkMetric<int64>& Metric : Snapshot.MetricInts)\n *\x09\x09\x09{\n *\x09\x09\x09\x09// Do something with integer metrics...\n *\x09\x09\x09}\n *\n *\x09\x09\x09""for (const UE::Net::FNetworkMetric<float>& Metric : Snapshot.MetricFloats)\n *\x09\x09\x09{\n *\x09\x09\x09\x09// Do something with floating point metrics...\n *\x09\x09\x09}\n *\x09\x09}\n * };\n *\n * Listeners can either be registered explicitly using FNetworkMetricsDatabase::Register() or through the engine configuration files. A configuration \n * file is the prefered way to register a listener because it allows metrics reporting to be configured without rebuilding the application.\n *\n * This is an example configuration from an ini file (e.g. DefaultEngine.ini) that registers metrics with the example listener above:\n * \n * [/Script/Engine.NetworkMetricsConfig]\n * +Listeners=(MetricName=ExampleMetric1, ClassName=/Script/Engine.NetworkMetricsMyListener)\n * \n * All sub-classes of UNetworkMetricsBaseListener can set a time interval between calls to Report(). This is a useful method for limiting the rate\n * at which metrics need to be recorded (e.g. you may only want to report metrics to an external analytics services every 60 seconds). This time interval\n * can be set by calling UNetworkMetricsBaseListener::SetInterval() or in a configuration file by setting the IntervalSeconds property on the\n * listener sub-class.\n * \n * This is an example configuration from an ini file (e.g. DefaultEngine.ini) that sets the interval between calling UNetworkMetricsMyListener::Report()\n * to 1 second:\n * \n * [/Script/Engine.NetworkMetricsMyListener]\n * IntervalSeconds=1\n */" },
		{ "IncludePath", "Net/NetworkMetricsDatabase.h" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsDatabase.h" },
		{ "ToolTip", "An abstract class for metrics listeners that are registered with FNetworkMetricsDatabase.\n\nListeners are the recommended method for reading the current value of metrics from FNetworkMetricsDatabase.\n\nBegin by creating a sub-class of UNetworkMetricsBaseListener that overrides the Report() function. This function will be called\nby FNetworkMetricsDatabase::ProcessListeners() once a frame and will be provided an array of metrics that are registered\nwith FNetworkMetricsDatabase::Register():\n\nUCLASS()\nclass UNetworkMetricsMyListener : public UNetworkMetricsBaseListener\n{\n            GENERATED_BODY()\npublic:\n            virtual ~UNetworkMetricsMyListener() = default;\n\n            void Report(const TArray<UE::Net::FNetworkMetricSnapshot>& Stats)\n            {\n                    for (const UE::Net::FNetworkMetric<int64>& Metric : Snapshot.MetricInts)\n                    {\n                            // Do something with integer metrics...\n                    }\n\n                    for (const UE::Net::FNetworkMetric<float>& Metric : Snapshot.MetricFloats)\n                    {\n                            // Do something with floating point metrics...\n                    }\n            }\n};\n\nListeners can either be registered explicitly using FNetworkMetricsDatabase::Register() or through the engine configuration files. A configuration\nfile is the prefered way to register a listener because it allows metrics reporting to be configured without rebuilding the application.\n\nThis is an example configuration from an ini file (e.g. DefaultEngine.ini) that registers metrics with the example listener above:\n\n[/Script/Engine.NetworkMetricsConfig]\n+Listeners=(MetricName=ExampleMetric1, ClassName=/Script/Engine.NetworkMetricsMyListener)\n\nAll sub-classes of UNetworkMetricsBaseListener can set a time interval between calls to Report(). This is a useful method for limiting the rate\nat which metrics need to be recorded (e.g. you may only want to report metrics to an external analytics services every 60 seconds). This time interval\ncan be set by calling UNetworkMetricsBaseListener::SetInterval() or in a configuration file by setting the IntervalSeconds property on the\nlistener sub-class.\n\nThis is an example configuration from an ini file (e.g. DefaultEngine.ini) that sets the interval between calling UNetworkMetricsMyListener::Report()\nto 1 second:\n\n[/Script/Engine.NetworkMetricsMyListener]\nIntervalSeconds=1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntervalSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntervalSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkMetricsBaseListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::NewProp_IntervalSeconds = { "IntervalSeconds", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkMetricsBaseListener, IntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntervalSeconds_MetaData), NewProp_IntervalSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::NewProp_IntervalSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::ClassParams = {
	&UNetworkMetricsBaseListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::PropPointers),
	0,
	0x001000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkMetricsBaseListener()
{
	if (!Z_Registration_Info_UClass_UNetworkMetricsBaseListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkMetricsBaseListener.OuterSingleton, Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkMetricsBaseListener.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkMetricsBaseListener>()
{
	return UNetworkMetricsBaseListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkMetricsBaseListener);
// End Class UNetworkMetricsBaseListener

// Begin Class UNetworkMetricsCSV
void UNetworkMetricsCSV::StaticRegisterNativesUNetworkMetricsCSV()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkMetricsCSV);
UClass* Z_Construct_UClass_UNetworkMetricsCSV_NoRegister()
{
	return UNetworkMetricsCSV::StaticClass();
}
struct Z_Construct_UClass_UNetworkMetricsCSV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A metrics listener that reports an array of metrics to CSV.\n * \n * The function SetCategory() is expected to be called before the listener is registered with\n * FNetworkMetricsDatabase::Register(). This function will associate the instance of UNetworkMetricsCSV\n * with a category of values in CSV.\n * \n * To use UNetworkMetricsCSV in a configuration file, a sub-class of UNetworkMetricsCSV must be \n * created that calls SetCategory() from the constructor to provide the CSV category to use.\n * \n * UCLASS()\n * class UNetworkMetricsCSV_ExampleCategory : public UNetworkMetricsCSV\n * {\n *\x09\x09GENERATED_BODY()\n * public:\n *\x09\x09virtual ~UNetworkMetricsCSV_ExampleCategory() = default;\n * \n *\x09\x09UNetworkMetricsCSV_ExampleCategory() : UNetworkMetricsCSV()\n *\x09\x09{\n *\x09\x09\x09SetCategory(\"ExampleCategory\");\n *\x09\x09}\n * };\n * \n * This sub-class can then be used in the configuration file when registering a listener:\n * \n *\x09[/Script/Engine.NetworkMetricsConfig]\n *\x09+Listeners=(MetricName=ExampleMetric, ClassName=/Script/Engine.NetworkMetricsCSV_ExampleCategory)\n * \n * If the base UNetworkMetricsCSV class is used in the configuration file, CSV stats will be recorded to the default 'Networking' category.\n */" },
		{ "IncludePath", "Net/NetworkMetricsDatabase.h" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsDatabase.h" },
		{ "ToolTip", "A metrics listener that reports an array of metrics to CSV.\n\nThe function SetCategory() is expected to be called before the listener is registered with\nFNetworkMetricsDatabase::Register(). This function will associate the instance of UNetworkMetricsCSV\nwith a category of values in CSV.\n\nTo use UNetworkMetricsCSV in a configuration file, a sub-class of UNetworkMetricsCSV must be\ncreated that calls SetCategory() from the constructor to provide the CSV category to use.\n\nUCLASS()\nclass UNetworkMetricsCSV_ExampleCategory : public UNetworkMetricsCSV\n{\n            GENERATED_BODY()\npublic:\n            virtual ~UNetworkMetricsCSV_ExampleCategory() = default;\n\n            UNetworkMetricsCSV_ExampleCategory() : UNetworkMetricsCSV()\n            {\n                    SetCategory(\"ExampleCategory\");\n            }\n};\n\nThis sub-class can then be used in the configuration file when registering a listener:\n\n    [/Script/Engine.NetworkMetricsConfig]\n    +Listeners=(MetricName=ExampleMetric, ClassName=/Script/Engine.NetworkMetricsCSV_ExampleCategory)\n\nIf the base UNetworkMetricsCSV class is used in the configuration file, CSV stats will be recorded to the default 'Networking' category." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkMetricsCSV>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkMetricsCSV_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetworkMetricsBaseListener,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsCSV_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkMetricsCSV_Statics::ClassParams = {
	&UNetworkMetricsCSV::StaticClass,
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
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsCSV_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkMetricsCSV_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkMetricsCSV()
{
	if (!Z_Registration_Info_UClass_UNetworkMetricsCSV.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkMetricsCSV.OuterSingleton, Z_Construct_UClass_UNetworkMetricsCSV_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkMetricsCSV.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkMetricsCSV>()
{
	return UNetworkMetricsCSV::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkMetricsCSV);
// End Class UNetworkMetricsCSV

// Begin Class UNetworkMetricsPerfCounters
void UNetworkMetricsPerfCounters::StaticRegisterNativesUNetworkMetricsPerfCounters()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkMetricsPerfCounters);
UClass* Z_Construct_UClass_UNetworkMetricsPerfCounters_NoRegister()
{
	return UNetworkMetricsPerfCounters::StaticClass();
}
struct Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A metrics listener that reports an array of metrics to PerfCounters.\n * \n * To use UNetworkMetricsPerfCounters in a configuration file, the class must be used when registering a listener:\n * \n *\x09[/Script/Engine.NetworkMetricsConfig]\n *\x09+Listeners=(MetricName=ExampleMetric, ClassName=/Script/Engine.NetworkMetricsPerfCounters)\n */" },
		{ "IncludePath", "Net/NetworkMetricsDatabase.h" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsDatabase.h" },
		{ "ToolTip", "A metrics listener that reports an array of metrics to PerfCounters.\n\nTo use UNetworkMetricsPerfCounters in a configuration file, the class must be used when registering a listener:\n\n    [/Script/Engine.NetworkMetricsConfig]\n    +Listeners=(MetricName=ExampleMetric, ClassName=/Script/Engine.NetworkMetricsPerfCounters)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkMetricsPerfCounters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetworkMetricsBaseListener,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics::ClassParams = {
	&UNetworkMetricsPerfCounters::StaticClass,
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
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkMetricsPerfCounters()
{
	if (!Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.OuterSingleton, Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkMetricsPerfCounters>()
{
	return UNetworkMetricsPerfCounters::StaticClass();
}
UNetworkMetricsPerfCounters::UNetworkMetricsPerfCounters() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkMetricsPerfCounters);
// End Class UNetworkMetricsPerfCounters

// Begin Class UNetworkMetricsStats
void UNetworkMetricsStats::StaticRegisterNativesUNetworkMetricsStats()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkMetricsStats);
UClass* Z_Construct_UClass_UNetworkMetricsStats_NoRegister()
{
	return UNetworkMetricsStats::StaticClass();
}
struct Z_Construct_UClass_UNetworkMetricsStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A metrics listener that reports a metric to a single Stat. \n * \n * The function SetStatName() is expected to be called before the listener is registered with\n * FNetworkMetricsDatabase::Register(). This function will associate the instance of UNetworkMetricStats\n * with a specific Stat.\n * \n * Since each instance of this class is associated with a single Stat it can only be registered\n * as a listener to a single metric in FNetworkMetricsDatabase.\n * \n * UNetworkMetricsStats is not intended to be used from configuration files!\n */" },
		{ "IncludePath", "Net/NetworkMetricsDatabase.h" },
		{ "ModuleRelativePath", "Public/Net/NetworkMetricsDatabase.h" },
		{ "ToolTip", "A metrics listener that reports a metric to a single Stat.\n\nThe function SetStatName() is expected to be called before the listener is registered with\nFNetworkMetricsDatabase::Register(). This function will associate the instance of UNetworkMetricStats\nwith a specific Stat.\n\nSince each instance of this class is associated with a single Stat it can only be registered\nas a listener to a single metric in FNetworkMetricsDatabase.\n\nUNetworkMetricsStats is not intended to be used from configuration files!" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkMetricsStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkMetricsStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetworkMetricsBaseListener,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkMetricsStats_Statics::ClassParams = {
	&UNetworkMetricsStats::StaticClass,
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
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkMetricsStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkMetricsStats()
{
	if (!Z_Registration_Info_UClass_UNetworkMetricsStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkMetricsStats.OuterSingleton, Z_Construct_UClass_UNetworkMetricsStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkMetricsStats.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkMetricsStats>()
{
	return UNetworkMetricsStats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkMetricsStats);
// End Class UNetworkMetricsStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkMetricsDatabase, UNetworkMetricsDatabase::StaticClass, TEXT("UNetworkMetricsDatabase"), &Z_Registration_Info_UClass_UNetworkMetricsDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkMetricsDatabase), 691142917U) },
		{ Z_Construct_UClass_UNetworkMetricsBaseListener, UNetworkMetricsBaseListener::StaticClass, TEXT("UNetworkMetricsBaseListener"), &Z_Registration_Info_UClass_UNetworkMetricsBaseListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkMetricsBaseListener), 4114626530U) },
		{ Z_Construct_UClass_UNetworkMetricsCSV, UNetworkMetricsCSV::StaticClass, TEXT("UNetworkMetricsCSV"), &Z_Registration_Info_UClass_UNetworkMetricsCSV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkMetricsCSV), 588347477U) },
		{ Z_Construct_UClass_UNetworkMetricsPerfCounters, UNetworkMetricsPerfCounters::StaticClass, TEXT("UNetworkMetricsPerfCounters"), &Z_Registration_Info_UClass_UNetworkMetricsPerfCounters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkMetricsPerfCounters), 3737929247U) },
		{ Z_Construct_UClass_UNetworkMetricsStats, UNetworkMetricsStats::StaticClass, TEXT("UNetworkMetricsStats"), &Z_Registration_Info_UClass_UNetworkMetricsStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkMetricsStats), 2412199935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_3340875573(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
