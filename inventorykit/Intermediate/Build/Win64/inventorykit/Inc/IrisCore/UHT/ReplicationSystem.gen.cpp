// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/ReplicationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationSystem();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UReplicationSystem
void UReplicationSystem::StaticRegisterNativesUReplicationSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationSystem);
UClass* Z_Construct_UClass_UReplicationSystem_NoRegister()
{
	return UReplicationSystem::StaticClass();
}
struct Z_Construct_UClass_UReplicationSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ReplicationSystem.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ReplicationSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBridge_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ReplicationSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicationBridge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReplicationSystem_Statics::NewProp_ReplicationBridge = { "ReplicationBridge", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicationSystem, ReplicationBridge), Z_Construct_UClass_UReplicationBridge_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationBridge_MetaData), NewProp_ReplicationBridge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationSystem_Statics::NewProp_ReplicationBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReplicationSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationSystem_Statics::ClassParams = {
	&UReplicationSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReplicationSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationSystem_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicationSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplicationSystem()
{
	if (!Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton, Z_Construct_UClass_UReplicationSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UReplicationSystem>()
{
	return UReplicationSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationSystem);
// End Class UReplicationSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationSystem, UReplicationSystem::StaticClass, TEXT("UReplicationSystem"), &Z_Registration_Info_UClass_UReplicationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationSystem), 2484593482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_1852843750(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
