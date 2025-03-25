// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Subsystems/EngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UEngineSubsystem
void UEngineSubsystem::StaticRegisterNativesUEngineSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineSubsystem);
UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister()
{
	return UEngineSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEngineSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEngineSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the Engine\n *\n * UEngineSubsystems are dynamic and will be initialized when the module is loaded if necessary.\n * This means that after StartupModule() is called on the module containing a subsystem,\n * the subsystem collection with instantiate and initialize the subsystem automatically.\n * If the subsystem collection is created post module load then the instances will be created at\n * collection initialization time.\n */" },
		{ "IncludePath", "Subsystems/EngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/EngineSubsystem.h" },
		{ "ToolTip", "UEngineSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the Engine\n\nUEngineSubsystems are dynamic and will be initialized when the module is loaded if necessary.\nThis means that after StartupModule() is called on the module containing a subsystem,\nthe subsystem collection with instantiate and initialize the subsystem automatically.\nIf the subsystem collection is created post module load then the instances will be created at\ncollection initialization time." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEngineSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineSubsystem_Statics::ClassParams = {
	&UEngineSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEngineSubsystem()
{
	if (!Z_Registration_Info_UClass_UEngineSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineSubsystem.OuterSingleton, Z_Construct_UClass_UEngineSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngineSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEngineSubsystem>()
{
	return UEngineSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineSubsystem);
UEngineSubsystem::~UEngineSubsystem() {}
// End Class UEngineSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngineSubsystem, UEngineSubsystem::StaticClass, TEXT("UEngineSubsystem"), &Z_Registration_Info_UClass_UEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineSubsystem), 3567680782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_47960752(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
