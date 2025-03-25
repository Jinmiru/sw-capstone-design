// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/Subsystems/NetworkSubsystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetworkSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UNetworkSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNetworkSubsystem
void UNetworkSubsystem::StaticRegisterNativesUNetworkSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkSubsystem);
UClass* Z_Construct_UClass_UNetworkSubsystem_NoRegister()
{
	return UNetworkSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNetworkSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/Subsystems/NetworkSubsystem.h" },
		{ "ModuleRelativePath", "Public/Net/Subsystems/NetworkSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkSubsystem_Statics::ClassParams = {
	&UNetworkSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkSubsystem()
{
	if (!Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton, Z_Construct_UClass_UNetworkSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkSubsystem>()
{
	return UNetworkSubsystem::StaticClass();
}
UNetworkSubsystem::UNetworkSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkSubsystem);
UNetworkSubsystem::~UNetworkSubsystem() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetworkSubsystem)
// End Class UNetworkSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkSubsystem, UNetworkSubsystem::StaticClass, TEXT("UNetworkSubsystem"), &Z_Registration_Info_UClass_UNetworkSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkSubsystem), 3918607528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_239743677(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
