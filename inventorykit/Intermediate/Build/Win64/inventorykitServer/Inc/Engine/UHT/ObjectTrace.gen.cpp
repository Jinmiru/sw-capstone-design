// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ObjectTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectTrace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UObjectTraceWorldSubsystem
void UObjectTraceWorldSubsystem::StaticRegisterNativesUObjectTraceWorldSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectTraceWorldSubsystem);
UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister()
{
	return UObjectTraceWorldSubsystem::StaticClass();
}
struct Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// World subsystem used to track world info\n" },
		{ "IncludePath", "ObjectTrace.h" },
		{ "ModuleRelativePath", "Public/ObjectTrace.h" },
		{ "ToolTip", "World subsystem used to track world info" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectTraceWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::ClassParams = {
	&UObjectTraceWorldSubsystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton, Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UObjectTraceWorldSubsystem>()
{
	return UObjectTraceWorldSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectTraceWorldSubsystem);
UObjectTraceWorldSubsystem::~UObjectTraceWorldSubsystem() {}
// End Class UObjectTraceWorldSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectTraceWorldSubsystem, UObjectTraceWorldSubsystem::StaticClass, TEXT("UObjectTraceWorldSubsystem"), &Z_Registration_Info_UClass_UObjectTraceWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectTraceWorldSubsystem), 3597174389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_337181004(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
