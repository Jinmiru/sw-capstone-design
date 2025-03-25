// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Prioritization/LocationBasedNetObjectPrioritizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationBasedNetObjectPrioritizer() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer();
IRISCORE_API UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class ULocationBasedNetObjectPrioritizer
void ULocationBasedNetObjectPrioritizer::StaticRegisterNativesULocationBasedNetObjectPrioritizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationBasedNetObjectPrioritizer);
UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_NoRegister()
{
	return ULocationBasedNetObjectPrioritizer::StaticClass();
}
struct Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/LocationBasedNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/LocationBasedNetObjectPrioritizer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationBasedNetObjectPrioritizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizer,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::ClassParams = {
	&ULocationBasedNetObjectPrioritizer::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer()
{
	if (!Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton, Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<ULocationBasedNetObjectPrioritizer>()
{
	return ULocationBasedNetObjectPrioritizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationBasedNetObjectPrioritizer);
ULocationBasedNetObjectPrioritizer::~ULocationBasedNetObjectPrioritizer() {}
// End Class ULocationBasedNetObjectPrioritizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocationBasedNetObjectPrioritizer, ULocationBasedNetObjectPrioritizer::StaticClass, TEXT("ULocationBasedNetObjectPrioritizer"), &Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationBasedNetObjectPrioritizer), 2894616763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_3461915586(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
