// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ExternalDataLayerInjectionPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalDataLayerInjectionPolicy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInjectionPolicy();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UExternalDataLayerInjectionPolicy
void UExternalDataLayerInjectionPolicy::StaticRegisterNativesUExternalDataLayerInjectionPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalDataLayerInjectionPolicy);
UClass* Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister()
{
	return UExternalDataLayerInjectionPolicy::StaticClass();
}
struct Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/DataLayer/ExternalDataLayerInjectionPolicy.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerInjectionPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalDataLayerInjectionPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics::ClassParams = {
	&UExternalDataLayerInjectionPolicy::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExternalDataLayerInjectionPolicy()
{
	if (!Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.OuterSingleton, Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UExternalDataLayerInjectionPolicy>()
{
	return UExternalDataLayerInjectionPolicy::StaticClass();
}
UExternalDataLayerInjectionPolicy::UExternalDataLayerInjectionPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalDataLayerInjectionPolicy);
UExternalDataLayerInjectionPolicy::~UExternalDataLayerInjectionPolicy() {}
// End Class UExternalDataLayerInjectionPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExternalDataLayerInjectionPolicy, UExternalDataLayerInjectionPolicy::StaticClass, TEXT("UExternalDataLayerInjectionPolicy"), &Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalDataLayerInjectionPolicy), 2763248226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_2492525950(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
