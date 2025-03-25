// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/ReplicationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationBridge() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UReplicationBridge
void UReplicationBridge::StaticRegisterNativesUReplicationBridge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationBridge);
UClass* Z_Construct_UClass_UReplicationBridge_NoRegister()
{
	return UReplicationBridge::StaticClass();
}
struct Z_Construct_UClass_UReplicationBridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ReplicationBridge.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ReplicationBridge.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReplicationBridge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationBridge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationBridge_Statics::ClassParams = {
	&UReplicationBridge::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicationBridge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplicationBridge()
{
	if (!Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton, Z_Construct_UClass_UReplicationBridge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UReplicationBridge>()
{
	return UReplicationBridge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationBridge);
// End Class UReplicationBridge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationBridge, UReplicationBridge::StaticClass, TEXT("UReplicationBridge"), &Z_Registration_Info_UClass_UReplicationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationBridge), 1001930119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_4128230223(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
