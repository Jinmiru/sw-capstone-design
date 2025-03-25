// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ActorDescContainerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDescContainerSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UActorDescContainerSubsystem
void UActorDescContainerSubsystem::StaticRegisterNativesUActorDescContainerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorDescContainerSubsystem);
UClass* Z_Construct_UClass_UActorDescContainerSubsystem_NoRegister()
{
	return UActorDescContainerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UActorDescContainerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ActorDescContainerSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ActorDescContainerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorDescContainerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorDescContainerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorDescContainerSubsystem_Statics::ClassParams = {
	&UActorDescContainerSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorDescContainerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorDescContainerSubsystem()
{
	if (!Z_Registration_Info_UClass_UActorDescContainerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorDescContainerSubsystem.OuterSingleton, Z_Construct_UClass_UActorDescContainerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorDescContainerSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorDescContainerSubsystem>()
{
	return UActorDescContainerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorDescContainerSubsystem);
UActorDescContainerSubsystem::~UActorDescContainerSubsystem() {}
// End Class UActorDescContainerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorDescContainerSubsystem, UActorDescContainerSubsystem::StaticClass, TEXT("UActorDescContainerSubsystem"), &Z_Registration_Info_UClass_UActorDescContainerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorDescContainerSubsystem), 2984329816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_2919408261(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
