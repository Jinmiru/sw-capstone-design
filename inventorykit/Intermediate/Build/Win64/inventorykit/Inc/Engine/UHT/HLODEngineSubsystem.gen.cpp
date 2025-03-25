// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/HLOD/HLODEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODEngineSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UHLODEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UHLODEngineSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHLODEngineSubsystem
void UHLODEngineSubsystem::StaticRegisterNativesUHLODEngineSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODEngineSubsystem);
UClass* Z_Construct_UClass_UHLODEngineSubsystem_NoRegister()
{
	return UHLODEngineSubsystem::StaticClass();
}
struct Z_Construct_UClass_UHLODEngineSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HLOD/HLODEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/HLOD/HLODEngineSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODEngineSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHLODEngineSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODEngineSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODEngineSubsystem_Statics::ClassParams = {
	&UHLODEngineSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODEngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHLODEngineSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHLODEngineSubsystem()
{
	if (!Z_Registration_Info_UClass_UHLODEngineSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODEngineSubsystem.OuterSingleton, Z_Construct_UClass_UHLODEngineSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHLODEngineSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHLODEngineSubsystem>()
{
	return UHLODEngineSubsystem::StaticClass();
}
UHLODEngineSubsystem::UHLODEngineSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODEngineSubsystem);
UHLODEngineSubsystem::~UHLODEngineSubsystem() {}
// End Class UHLODEngineSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHLODEngineSubsystem, UHLODEngineSubsystem::StaticClass, TEXT("UHLODEngineSubsystem"), &Z_Registration_Info_UClass_UHLODEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODEngineSubsystem), 1687629058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_3174866388(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
