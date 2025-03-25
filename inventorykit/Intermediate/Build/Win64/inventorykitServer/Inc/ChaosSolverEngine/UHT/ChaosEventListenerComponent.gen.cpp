// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosEventListenerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosEventListenerComponent() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin Class UChaosEventListenerComponent
void UChaosEventListenerComponent::StaticRegisterNativesUChaosEventListenerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosEventListenerComponent);
UClass* Z_Construct_UClass_UChaosEventListenerComponent_NoRegister()
{
	return UChaosEventListenerComponent::StaticClass();
}
struct Z_Construct_UClass_UChaosEventListenerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Chaos" },
		{ "Comment", "/** \n * Base class for listeners that query and respond to a frame's physics data (collision events, break events, etc).\n */" },
		{ "IncludePath", "Chaos/ChaosEventListenerComponent.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosEventListenerComponent.h" },
		{ "ToolTip", "Base class for listeners that query and respond to a frame's physics data (collision events, break events, etc)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosEventListenerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosEventListenerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventListenerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosEventListenerComponent_Statics::ClassParams = {
	&UChaosEventListenerComponent::StaticClass,
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
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosEventListenerComponent()
{
	if (!Z_Registration_Info_UClass_UChaosEventListenerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosEventListenerComponent.OuterSingleton, Z_Construct_UClass_UChaosEventListenerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosEventListenerComponent.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosEventListenerComponent>()
{
	return UChaosEventListenerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosEventListenerComponent);
UChaosEventListenerComponent::~UChaosEventListenerComponent() {}
// End Class UChaosEventListenerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosEventListenerComponent, UChaosEventListenerComponent::StaticClass, TEXT("UChaosEventListenerComponent"), &Z_Registration_Info_UClass_UChaosEventListenerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosEventListenerComponent), 2641905004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_3499818906(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
