// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMetricsCore/Public/WorldMetricsExtension.h"
#include "WorldMetricsCore/Public/WorldMetricsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMetricsExtension() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WorldMetricsCore();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsExtension();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsExtension_NoRegister();
// End Cross Module References

// Begin Class UWorldMetricsExtension
void UWorldMetricsExtension::StaticRegisterNativesUWorldMetricsExtension()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMetricsExtension);
UClass* Z_Construct_UClass_UWorldMetricsExtension_NoRegister()
{
	return UWorldMetricsExtension::StaticClass();
}
struct Z_Construct_UClass_UWorldMetricsExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for an extension for the World Metrics subsystem.\n *\n * World Metrics subsystem extensions provide custom data/functionality to world metrics and other extensions (one to\n * many) and have the following characteristics:\n * 1. Unique: there can only be a single instance of each extension class.\n * 2. Exclusively managed and owned by the  World Metrics subsystem.. These should never be created directly.\n * 3. Implement acquired/release semantics. The World Metrics subsystem automatically initializes extensions on\n * acquisition and deinitializes them on release. The subsystem may deallocate an extension that have no acquisitions.\n */" },
		{ "IncludePath", "WorldMetricsExtension.h" },
		{ "ModuleRelativePath", "Public/WorldMetricsExtension.h" },
		{ "ToolTip", "Base class for an extension for the World Metrics subsystem.\n\nWorld Metrics subsystem extensions provide custom data/functionality to world metrics and other extensions (one to\nmany) and have the following characteristics:\n1. Unique: there can only be a single instance of each extension class.\n2. Exclusively managed and owned by the  World Metrics subsystem.. These should never be created directly.\n3. Implement acquired/release semantics. The World Metrics subsystem automatically initializes extensions on\nacquisition and deinitializes them on release. The subsystem may deallocate an extension that have no acquisitions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMetricsExtension>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldMetricsExtension_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMetricsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsExtension_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMetricsExtension_Statics::ClassParams = {
	&UWorldMetricsExtension::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMetricsExtension_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMetricsExtension()
{
	if (!Z_Registration_Info_UClass_UWorldMetricsExtension.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMetricsExtension.OuterSingleton, Z_Construct_UClass_UWorldMetricsExtension_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMetricsExtension.OuterSingleton;
}
template<> WORLDMETRICSCORE_API UClass* StaticClass<UWorldMetricsExtension>()
{
	return UWorldMetricsExtension::StaticClass();
}
UWorldMetricsExtension::UWorldMetricsExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMetricsExtension);
UWorldMetricsExtension::~UWorldMetricsExtension() {}
// End Class UWorldMetricsExtension

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMetricsExtension, UWorldMetricsExtension::StaticClass, TEXT("UWorldMetricsExtension"), &Z_Registration_Info_UClass_UWorldMetricsExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMetricsExtension), 4206868246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_4269120847(TEXT("/Script/WorldMetricsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
