// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ExternalDataLayerInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalDataLayerInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInstance();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UExternalDataLayerInstance
void UExternalDataLayerInstance::StaticRegisterNativesUExternalDataLayerInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalDataLayerInstance);
UClass* Z_Construct_UClass_UExternalDataLayerInstance_NoRegister()
{
	return UExternalDataLayerInstance::StaticClass();
}
struct Z_Construct_UClass_UExternalDataLayerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced Data Layer|Advanced Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Advanced|Runtime Data Layer|Editor Data Layer|Advanced|Runtime Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/ExternalDataLayerInstance.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalDataLayerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExternalDataLayerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataLayerInstanceWithAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalDataLayerInstance_Statics::ClassParams = {
	&UExternalDataLayerInstance::StaticClass,
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
	0x000804A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UExternalDataLayerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExternalDataLayerInstance()
{
	if (!Z_Registration_Info_UClass_UExternalDataLayerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalDataLayerInstance.OuterSingleton, Z_Construct_UClass_UExternalDataLayerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExternalDataLayerInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UExternalDataLayerInstance>()
{
	return UExternalDataLayerInstance::StaticClass();
}
UExternalDataLayerInstance::UExternalDataLayerInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalDataLayerInstance);
UExternalDataLayerInstance::~UExternalDataLayerInstance() {}
// End Class UExternalDataLayerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExternalDataLayerInstance, UExternalDataLayerInstance::StaticClass, TEXT("UExternalDataLayerInstance"), &Z_Registration_Info_UClass_UExternalDataLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalDataLayerInstance), 3658509752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInstance_h_2057288843(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
