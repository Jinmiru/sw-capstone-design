// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosDebugDrawComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDebugDrawComponent() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawComponent();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin Class UChaosDebugDrawComponent
void UChaosDebugDrawComponent::StaticRegisterNativesUChaosDebugDrawComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosDebugDrawComponent);
UClass* Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister()
{
	return UChaosDebugDrawComponent::StaticClass();
}
struct Z_Construct_UClass_UChaosDebugDrawComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Chaos" },
		{ "IncludePath", "Chaos/ChaosDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosDebugDrawComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosDebugDrawComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosDebugDrawComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDebugDrawComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosDebugDrawComponent_Statics::ClassParams = {
	&UChaosDebugDrawComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosDebugDrawComponent()
{
	if (!Z_Registration_Info_UClass_UChaosDebugDrawComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UChaosDebugDrawComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosDebugDrawComponent.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosDebugDrawComponent>()
{
	return UChaosDebugDrawComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosDebugDrawComponent);
UChaosDebugDrawComponent::~UChaosDebugDrawComponent() {}
// End Class UChaosDebugDrawComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosDebugDrawComponent, UChaosDebugDrawComponent::StaticClass, TEXT("UChaosDebugDrawComponent"), &Z_Registration_Info_UClass_UChaosDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosDebugDrawComponent), 1954941600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_576971079(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
