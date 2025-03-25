// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationFactory() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin Class UClothingSimulationFactory
void UClothingSimulationFactory::StaticRegisterNativesUClothingSimulationFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingSimulationFactory);
UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister()
{
	return UClothingSimulationFactory::StaticClass();
}
struct Z_Construct_UClass_UClothingSimulationFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Any clothing simulation factory should derive from this interface object to interact with the engine\n" },
		{ "IncludePath", "ClothingSimulationFactory.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationFactory.h" },
		{ "ToolTip", "Any clothing simulation factory should derive from this interface object to interact with the engine" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothingSimulationFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationFactory_Statics::ClassParams = {
	&UClothingSimulationFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothingSimulationFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothingSimulationFactory()
{
	if (!Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton, Z_Construct_UClass_UClothingSimulationFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingSimulationFactory>()
{
	return UClothingSimulationFactory::StaticClass();
}
UClothingSimulationFactory::UClothingSimulationFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationFactory);
UClothingSimulationFactory::~UClothingSimulationFactory() {}
// End Class UClothingSimulationFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothingSimulationFactory, UClothingSimulationFactory::StaticClass, TEXT("UClothingSimulationFactory"), &Z_Registration_Info_UClass_UClothingSimulationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingSimulationFactory), 1031721917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_3742078987(TEXT("/Script/ClothingSystemRuntimeInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
