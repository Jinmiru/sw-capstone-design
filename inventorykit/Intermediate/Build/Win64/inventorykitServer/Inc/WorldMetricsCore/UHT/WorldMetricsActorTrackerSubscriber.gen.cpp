// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMetricsCore/Public/WorldMetricsActorTrackerSubscriber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMetricsActorTrackerSubscriber() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_WorldMetricsCore();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_NoRegister();
// End Cross Module References

// Begin Interface UWorldMetricsActorTrackerSubscriber
void UWorldMetricsActorTrackerSubscriber::StaticRegisterNativesUWorldMetricsActorTrackerSubscriber()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMetricsActorTrackerSubscriber);
UClass* Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_NoRegister()
{
	return UWorldMetricsActorTrackerSubscriber::StaticClass();
}
struct Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldMetricsActorTrackerSubscriber.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldMetricsActorTrackerSubscriber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMetricsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics::ClassParams = {
	&UWorldMetricsActorTrackerSubscriber::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber()
{
	if (!Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.OuterSingleton, Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.OuterSingleton;
}
template<> WORLDMETRICSCORE_API UClass* StaticClass<UWorldMetricsActorTrackerSubscriber>()
{
	return UWorldMetricsActorTrackerSubscriber::StaticClass();
}
UWorldMetricsActorTrackerSubscriber::UWorldMetricsActorTrackerSubscriber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMetricsActorTrackerSubscriber);
UWorldMetricsActorTrackerSubscriber::~UWorldMetricsActorTrackerSubscriber() {}
// End Interface UWorldMetricsActorTrackerSubscriber

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber, UWorldMetricsActorTrackerSubscriber::StaticClass, TEXT("UWorldMetricsActorTrackerSubscriber"), &Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMetricsActorTrackerSubscriber), 3673731538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_280772619(TEXT("/Script/WorldMetricsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
