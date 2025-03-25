// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCloth/Public/ChaosCloth/ChaosClothingSimulationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothingSimulationFactory() {}

// Begin Cross Module References
CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationFactory();
CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References

// Begin Class UChaosClothingSimulationFactory
void UChaosClothingSimulationFactory::StaticRegisterNativesUChaosClothingSimulationFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothingSimulationFactory);
UClass* Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister()
{
	return UChaosClothingSimulationFactory::StaticClass();
}
struct Z_Construct_UClass_UChaosClothingSimulationFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationFactory.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingSimulationFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClothingSimulationFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::ClassParams = {
	&UChaosClothingSimulationFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosClothingSimulationFactory()
{
	if (!Z_Registration_Info_UClass_UChaosClothingSimulationFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothingSimulationFactory.OuterSingleton, Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosClothingSimulationFactory.OuterSingleton;
}
template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingSimulationFactory>()
{
	return UChaosClothingSimulationFactory::StaticClass();
}
UChaosClothingSimulationFactory::UChaosClothingSimulationFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingSimulationFactory);
UChaosClothingSimulationFactory::~UChaosClothingSimulationFactory() {}
// End Class UChaosClothingSimulationFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothingSimulationFactory, UChaosClothingSimulationFactory::StaticClass, TEXT("UChaosClothingSimulationFactory"), &Z_Registration_Info_UClass_UChaosClothingSimulationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothingSimulationFactory), 2683710217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_3555868019(TEXT("/Script/ChaosCloth"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
