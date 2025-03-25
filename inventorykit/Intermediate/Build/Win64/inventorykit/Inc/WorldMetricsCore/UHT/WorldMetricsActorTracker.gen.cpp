// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMetricsCore/Public/WorldMetricsActorTracker.h"
#include "WorldMetricsCore/Public/WorldMetricsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMetricsActorTracker() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WorldMetricsCore();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsActorTracker();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsExtension();
// End Cross Module References

// Begin Class UWorldMetricsActorTracker
void UWorldMetricsActorTracker::StaticRegisterNativesUWorldMetricsActorTracker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMetricsActorTracker);
UClass* Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister()
{
	return UWorldMetricsActorTracker::StaticClass();
}
struct Z_Construct_UClass_UWorldMetricsActorTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor tracker class\n *\n * This class provides a tracking context for actors added and removed from the world. For an actor to be considered\n * added to the world, it must have all its components registered. This class provides two ways of usage:\n * - Polling mode: accessible through ForEachActorInWorld.\n * - Subscriber mode: this mode is enabled through acquire/release semantics. When acquired, the actor tracker\n * subscribes to the world's PostRegisterAllActorComponents and PreUnregisterAllActorComponentsRegistered events\n * tracking all unique actors. In addition, metrics implementing IWorldMetricsActorTrackerSubscriber receive actor\n * addition and removal notifications.\n */" },
		{ "IncludePath", "WorldMetricsActorTracker.h" },
		{ "ModuleRelativePath", "Public/WorldMetricsActorTracker.h" },
		{ "ToolTip", "Actor tracker class\n\nThis class provides a tracking context for actors added and removed from the world. For an actor to be considered\nadded to the world, it must have all its components registered. This class provides two ways of usage:\n- Polling mode: accessible through ForEachActorInWorld.\n- Subscriber mode: this mode is enabled through acquire/release semantics. When acquired, the actor tracker\nsubscribes to the world's PostRegisterAllActorComponents and PreUnregisterAllActorComponentsRegistered events\ntracking all unique actors. In addition, metrics implementing IWorldMetricsActorTrackerSubscriber receive actor\naddition and removal notifications." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMetricsActorTracker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldMetricsActorTracker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldMetricsExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMetricsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsActorTracker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMetricsActorTracker_Statics::ClassParams = {
	&UWorldMetricsActorTracker::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMetricsActorTracker_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMetricsActorTracker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMetricsActorTracker()
{
	if (!Z_Registration_Info_UClass_UWorldMetricsActorTracker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMetricsActorTracker.OuterSingleton, Z_Construct_UClass_UWorldMetricsActorTracker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMetricsActorTracker.OuterSingleton;
}
template<> WORLDMETRICSCORE_API UClass* StaticClass<UWorldMetricsActorTracker>()
{
	return UWorldMetricsActorTracker::StaticClass();
}
UWorldMetricsActorTracker::UWorldMetricsActorTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMetricsActorTracker);
UWorldMetricsActorTracker::~UWorldMetricsActorTracker() {}
// End Class UWorldMetricsActorTracker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMetricsActorTracker, UWorldMetricsActorTracker::StaticClass, TEXT("UWorldMetricsActorTracker"), &Z_Registration_Info_UClass_UWorldMetricsActorTracker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMetricsActorTracker), 2388117669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_3216586893(TEXT("/Script/WorldMetricsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
