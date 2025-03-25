// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMetricsCore/Public/WorldMetricsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMetricsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_WorldMetricsCore();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricInterface_NoRegister();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsExtension_NoRegister();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsSubsystem();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister();
// End Cross Module References

// Begin Class UWorldMetricsSubsystem
void UWorldMetricsSubsystem::StaticRegisterNativesUWorldMetricsSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMetricsSubsystem);
UClass* Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister()
{
	return UWorldMetricsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UWorldMetricsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World metrics subsystem\n *\n * This subsystem provides an interface to add and remove world metrics implementing the UWorldMetricInterface class.\n *\n * - Added metrics get automatically updated by the subsystem's ticker.\n * - The subsystem becomes an owner of all added metrics. The user is responsible for removing them when no longer\n *   needed so they can be garbage collected.\n * - Metrics can have extensions to add shared functionality.\n * - Extensions implement the UWorldMetricsExtension class and use Acquire/Release semantics. They can be acquired by\n *   either metrics or extensions. Initialization and deinitialization are the ideal phases to do so.\n * - The subsystem solely owns extensions and can automatically remove them for garbage collection whenever they are no\n *   longer acquired by any metric or extension.\n */" },
		{ "IncludePath", "WorldMetricsSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldMetricsSubsystem.h" },
		{ "ToolTip", "World metrics subsystem\n\nThis subsystem provides an interface to add and remove world metrics implementing the UWorldMetricInterface class.\n\n- Added metrics get automatically updated by the subsystem's ticker.\n- The subsystem becomes an owner of all added metrics. The user is responsible for removing them when no longer\n  needed so they can be garbage collected.\n- Metrics can have extensions to add shared functionality.\n- Extensions implement the UWorldMetricsExtension class and use Acquire/Release semantics. They can be acquired by\n  either metrics or extensions. Initialization and deinitialization are the ideal phases to do so.\n- The subsystem solely owns extensions and can automatically remove them for garbage collection whenever they are no\n  longer acquired by any metric or extension." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metrics_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldMetricsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldMetricsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRateInSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldMetricsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmUpFrames_MetaData[] = {
		{ "Comment", "/** The number of frames the subsystem waits to update added metrics after their initialization. */" },
		{ "ModuleRelativePath", "Public/WorldMetricsSubsystem.h" },
		{ "ToolTip", "The number of frames the subsystem waits to update added metrics after their initialization." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Metrics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Metrics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Extensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateRateInSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarmUpFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMetricsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Metrics_Inner = { "Metrics", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldMetricInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Metrics = { "Metrics", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldMetricsSubsystem, Metrics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metrics_MetaData), NewProp_Metrics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldMetricsExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldMetricsSubsystem, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extensions_MetaData), NewProp_Extensions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_UpdateRateInSeconds = { "UpdateRateInSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldMetricsSubsystem, UpdateRateInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRateInSeconds_MetaData), NewProp_UpdateRateInSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_WarmUpFrames = { "WarmUpFrames", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldMetricsSubsystem, WarmUpFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmUpFrames_MetaData), NewProp_WarmUpFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldMetricsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Metrics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Metrics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Extensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_Extensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_UpdateRateInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMetricsSubsystem_Statics::NewProp_WarmUpFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldMetricsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMetricsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMetricsSubsystem_Statics::ClassParams = {
	&UWorldMetricsSubsystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldMetricsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsSubsystem_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMetricsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMetricsSubsystem()
{
	if (!Z_Registration_Info_UClass_UWorldMetricsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMetricsSubsystem.OuterSingleton, Z_Construct_UClass_UWorldMetricsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMetricsSubsystem.OuterSingleton;
}
template<> WORLDMETRICSCORE_API UClass* StaticClass<UWorldMetricsSubsystem>()
{
	return UWorldMetricsSubsystem::StaticClass();
}
UWorldMetricsSubsystem::UWorldMetricsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMetricsSubsystem);
UWorldMetricsSubsystem::~UWorldMetricsSubsystem() {}
// End Class UWorldMetricsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMetricsSubsystem, UWorldMetricsSubsystem::StaticClass, TEXT("UWorldMetricsSubsystem"), &Z_Registration_Info_UClass_UWorldMetricsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMetricsSubsystem), 321925029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_1340249560(TEXT("/Script/WorldMetricsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
