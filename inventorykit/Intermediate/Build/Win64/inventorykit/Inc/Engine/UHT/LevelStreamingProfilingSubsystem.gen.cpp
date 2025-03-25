// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ProfilingDebugging/LevelStreamingProfilingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingProfilingSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingProfilingSubsystem();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingProfilingSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelStreamingProfilingSubsystem
void ULevelStreamingProfilingSubsystem::StaticRegisterNativesULevelStreamingProfilingSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingProfilingSubsystem);
UClass* Z_Construct_UClass_ULevelStreamingProfilingSubsystem_NoRegister()
{
	return ULevelStreamingProfilingSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * This subsystem captures level streaming operations for a specified time and outputs a .tsv (tab separated values) file to the \n * profiling directory containing the amount of time spent loading levels and the time levels spent queuing for theability to load.\n */" },
		{ "IncludePath", "ProfilingDebugging/LevelStreamingProfilingSubsystem.h" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/LevelStreamingProfilingSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This subsystem captures level streaming operations for a specified time and outputs a .tsv (tab separated values) file to the\nprofiling directory containing the amount of time spent loading levels and the time levels spent queuing for theability to load." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingProfilingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics::ClassParams = {
	&ULevelStreamingProfilingSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelStreamingProfilingSubsystem()
{
	if (!Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.OuterSingleton, Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelStreamingProfilingSubsystem>()
{
	return ULevelStreamingProfilingSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingProfilingSubsystem);
// End Class ULevelStreamingProfilingSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingProfilingSubsystem, ULevelStreamingProfilingSubsystem::StaticClass, TEXT("ULevelStreamingProfilingSubsystem"), &Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingProfilingSubsystem), 3857755858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_2232400914(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
