// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/NetConnectionFaultRecovery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnectionFaultRecovery() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetFaultConfig();
ENGINE_API UClass* Z_Construct_UClass_UNetFaultConfig_NoRegister();
NETCORE_API UClass* Z_Construct_UClass_UEscalationManagerConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNetFaultConfig
void UNetFaultConfig::StaticRegisterNativesUNetFaultConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetFaultConfig);
UClass* Z_Construct_UClass_UNetFaultConfig_NoRegister()
{
	return UNetFaultConfig::StaticClass();
}
struct Z_Construct_UClass_UNetFaultConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration class for FNetFaultState state escalation configuration\n */" },
		{ "IncludePath", "Net/NetConnectionFaultRecovery.h" },
		{ "ModuleRelativePath", "Public/Net/NetConnectionFaultRecovery.h" },
		{ "ToolTip", "Configuration class for FNetFaultState state escalation configuration" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetFaultConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetFaultConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEscalationManagerConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetFaultConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetFaultConfig_Statics::ClassParams = {
	&UNetFaultConfig::StaticClass,
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
	0x000004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetFaultConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetFaultConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetFaultConfig()
{
	if (!Z_Registration_Info_UClass_UNetFaultConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetFaultConfig.OuterSingleton, Z_Construct_UClass_UNetFaultConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetFaultConfig.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetFaultConfig>()
{
	return UNetFaultConfig::StaticClass();
}
UNetFaultConfig::UNetFaultConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetFaultConfig);
UNetFaultConfig::~UNetFaultConfig() {}
// End Class UNetFaultConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetFaultConfig, UNetFaultConfig::StaticClass, TEXT("UNetFaultConfig"), &Z_Registration_Info_UClass_UNetFaultConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetFaultConfig), 3660499314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_4077153922(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
