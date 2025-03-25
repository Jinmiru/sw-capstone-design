// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetObjectPrioritizerConfig
void UNetObjectPrioritizerConfig::StaticRegisterNativesUNetObjectPrioritizerConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectPrioritizerConfig);
UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister()
{
	return UNetObjectPrioritizerConfig::StaticClass();
}
struct Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for prioritizer specific configuration.\n * @see FNetObjectPrioritizerDefinition\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ToolTip", "Base class for prioritizer specific configuration.\n@see FNetObjectPrioritizerDefinition" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectPrioritizerConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::ClassParams = {
	&UNetObjectPrioritizerConfig::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig()
{
	if (!Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton, Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectPrioritizerConfig>()
{
	return UNetObjectPrioritizerConfig::StaticClass();
}
UNetObjectPrioritizerConfig::UNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectPrioritizerConfig);
UNetObjectPrioritizerConfig::~UNetObjectPrioritizerConfig() {}
// End Class UNetObjectPrioritizerConfig

// Begin Class UNetObjectPrioritizer
void UNetObjectPrioritizer::StaticRegisterNativesUNetObjectPrioritizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectPrioritizer);
UClass* Z_Construct_UClass_UNetObjectPrioritizer_NoRegister()
{
	return UNetObjectPrioritizer::StaticClass();
}
struct Z_Construct_UClass_UNetObjectPrioritizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NetObjectPrioritizers are responsible for determining how important it is to replicate an object. Priorities should be at least 0.0f, \n * meaning no need to replicate. At 1.0f objects are being considered for replication. Priorities are acumulated per object and connection \n * until it's replicated, at which point the priority is reset to zero. Bandwidth constraints and other factors may cause a highly prioritized \n * object to still not be replicated to a particular connection a certain frame. There is no mechanism to force an object to be replicated a \n * certain frame, but the priority is a major factor in the decision.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ToolTip", "NetObjectPrioritizers are responsible for determining how important it is to replicate an object. Priorities should be at least 0.0f,\nmeaning no need to replicate. At 1.0f objects are being considered for replication. Priorities are acumulated per object and connection\nuntil it's replicated, at which point the priority is reset to zero. Bandwidth constraints and other factors may cause a highly prioritized\nobject to still not be replicated to a particular connection a certain frame. There is no mechanism to force an object to be replicated a\ncertain frame, but the priority is a major factor in the decision." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectPrioritizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectPrioritizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectPrioritizer_Statics::ClassParams = {
	&UNetObjectPrioritizer::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectPrioritizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectPrioritizer()
{
	if (!Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton, Z_Construct_UClass_UNetObjectPrioritizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectPrioritizer>()
{
	return UNetObjectPrioritizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectPrioritizer);
UNetObjectPrioritizer::~UNetObjectPrioritizer() {}
// End Class UNetObjectPrioritizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectPrioritizerConfig, UNetObjectPrioritizerConfig::StaticClass, TEXT("UNetObjectPrioritizerConfig"), &Z_Registration_Info_UClass_UNetObjectPrioritizerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectPrioritizerConfig), 2747478010U) },
		{ Z_Construct_UClass_UNetObjectPrioritizer, UNetObjectPrioritizer::StaticClass, TEXT("UNetObjectPrioritizer"), &Z_Registration_Info_UClass_UNetObjectPrioritizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectPrioritizer), 3003741559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_1600912790(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
