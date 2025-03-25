// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationDriver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver();
ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver();
ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UReplicationDriver
void UReplicationDriver::StaticRegisterNativesUReplicationDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationDriver);
UClass* Z_Construct_UClass_UReplicationDriver_NoRegister()
{
	return UReplicationDriver::StaticClass();
}
struct Z_Construct_UClass_UReplicationDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ReplicationDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicationDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReplicationDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationDriver_Statics::ClassParams = {
	&UReplicationDriver::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplicationDriver()
{
	if (!Z_Registration_Info_UClass_UReplicationDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationDriver.OuterSingleton, Z_Construct_UClass_UReplicationDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicationDriver.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UReplicationDriver>()
{
	return UReplicationDriver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationDriver);
UReplicationDriver::~UReplicationDriver() {}
// End Class UReplicationDriver

// Begin Class UReplicationConnectionDriver
void UReplicationConnectionDriver::StaticRegisterNativesUReplicationConnectionDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationConnectionDriver);
UClass* Z_Construct_UClass_UReplicationConnectionDriver_NoRegister()
{
	return UReplicationConnectionDriver::StaticClass();
}
struct Z_Construct_UClass_UReplicationConnectionDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Class/interface for replication extension that is per connection. It is up to the replication driver to create and associate these with a UNetConnection */" },
		{ "IncludePath", "Engine/ReplicationDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicationDriver.h" },
		{ "ToolTip", "Class/interface for replication extension that is per connection. It is up to the replication driver to create and associate these with a UNetConnection" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationConnectionDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReplicationConnectionDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationConnectionDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationConnectionDriver_Statics::ClassParams = {
	&UReplicationConnectionDriver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplicationConnectionDriver()
{
	if (!Z_Registration_Info_UClass_UReplicationConnectionDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationConnectionDriver.OuterSingleton, Z_Construct_UClass_UReplicationConnectionDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicationConnectionDriver.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UReplicationConnectionDriver>()
{
	return UReplicationConnectionDriver::StaticClass();
}
UReplicationConnectionDriver::UReplicationConnectionDriver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationConnectionDriver);
UReplicationConnectionDriver::~UReplicationConnectionDriver() {}
// End Class UReplicationConnectionDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationDriver, UReplicationDriver::StaticClass, TEXT("UReplicationDriver"), &Z_Registration_Info_UClass_UReplicationDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationDriver), 65850798U) },
		{ Z_Construct_UClass_UReplicationConnectionDriver, UReplicationConnectionDriver::StaticClass, TEXT("UReplicationConnectionDriver"), &Z_Registration_Info_UClass_UReplicationConnectionDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationConnectionDriver), 2330230388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_3990587885(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
