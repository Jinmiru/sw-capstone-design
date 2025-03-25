// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Subsystems/GameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UGameInstanceSubsystem
void UGameInstanceSubsystem::StaticRegisterNativesUGameInstanceSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstanceSubsystem);
UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister()
{
	return UGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGameInstanceSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the game instance\n */" },
		{ "IncludePath", "Subsystems/GameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GameInstanceSubsystem.h" },
		{ "ToolTip", "UGameInstanceSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the game instance" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceSubsystem_Statics::ClassParams = {
	&UGameInstanceSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInstanceSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UGameInstanceSubsystem>()
{
	return UGameInstanceSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceSubsystem);
UGameInstanceSubsystem::~UGameInstanceSubsystem() {}
// End Class UGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstanceSubsystem, UGameInstanceSubsystem::StaticClass, TEXT("UGameInstanceSubsystem"), &Z_Registration_Info_UClass_UGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstanceSubsystem), 1153664620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_2105902526(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
