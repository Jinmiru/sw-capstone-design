// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerLoadingPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerLoadingPolicy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerLoadingPolicy();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDataLayerLoadingPolicy
void UDataLayerLoadingPolicy::StaticRegisterNativesUDataLayerLoadingPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerLoadingPolicy);
UClass* Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister()
{
	return UDataLayerLoadingPolicy::StaticClass();
}
struct Z_Construct_UClass_UDataLayerLoadingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerLoadingPolicy.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerLoadingPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerLoadingPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::ClassParams = {
	&UDataLayerLoadingPolicy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerLoadingPolicy()
{
	if (!Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton, Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerLoadingPolicy>()
{
	return UDataLayerLoadingPolicy::StaticClass();
}
UDataLayerLoadingPolicy::UDataLayerLoadingPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerLoadingPolicy);
UDataLayerLoadingPolicy::~UDataLayerLoadingPolicy() {}
// End Class UDataLayerLoadingPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerLoadingPolicy, UDataLayerLoadingPolicy::StaticClass, TEXT("UDataLayerLoadingPolicy"), &Z_Registration_Info_UClass_UDataLayerLoadingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerLoadingPolicy), 2952303243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_1622832166(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
