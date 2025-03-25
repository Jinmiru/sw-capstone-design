// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMetricsCore/Public/WorldMetricInterface.h"
#include "WorldMetricsCore/Public/WorldMetricsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMetricInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WorldMetricsCore();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricInterface();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricInterface_NoRegister();
// End Cross Module References

// Begin Class UWorldMetricInterface
void UWorldMetricInterface::StaticRegisterNativesUWorldMetricInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMetricInterface);
UClass* Z_Construct_UClass_UWorldMetricInterface_NoRegister()
{
	return UWorldMetricInterface::StaticClass();
}
struct Z_Construct_UClass_UWorldMetricInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World metric's interface\n *\n * This is the required interface class to implement world metrics.\n */" },
		{ "IncludePath", "WorldMetricInterface.h" },
		{ "ModuleRelativePath", "Public/WorldMetricInterface.h" },
		{ "ToolTip", "World metric's interface\n\nThis is the required interface class to implement world metrics." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMetricInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldMetricInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMetricsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMetricInterface_Statics::ClassParams = {
	&UWorldMetricInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMetricInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMetricInterface()
{
	if (!Z_Registration_Info_UClass_UWorldMetricInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMetricInterface.OuterSingleton, Z_Construct_UClass_UWorldMetricInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMetricInterface.OuterSingleton;
}
template<> WORLDMETRICSCORE_API UClass* StaticClass<UWorldMetricInterface>()
{
	return UWorldMetricInterface::StaticClass();
}
UWorldMetricInterface::UWorldMetricInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMetricInterface);
UWorldMetricInterface::~UWorldMetricInterface() {}
// End Class UWorldMetricInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMetricInterface, UWorldMetricInterface::StaticClass, TEXT("UWorldMetricInterface"), &Z_Registration_Info_UClass_UWorldMetricInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMetricInterface), 3452964660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_3328483386(TEXT("/Script/WorldMetricsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
