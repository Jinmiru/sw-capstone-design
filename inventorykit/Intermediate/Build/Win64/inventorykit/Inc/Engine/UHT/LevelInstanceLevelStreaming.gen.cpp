// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceLevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceLevelStreaming() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstance();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelStreamingLevelInstance
void ULevelStreamingLevelInstance::StaticRegisterNativesULevelStreamingLevelInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingLevelInstance);
UClass* Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister()
{
	return ULevelStreamingLevelInstance::StaticClass();
}
struct Z_Construct_UClass_ULevelStreamingLevelInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceLevelStreaming.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceLevelStreaming.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingLevelInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevelStreamingDynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::ClassParams = {
	&ULevelStreamingLevelInstance::StaticClass,
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
	0x008810A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelStreamingLevelInstance()
{
	if (!Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton, Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelStreamingLevelInstance>()
{
	return ULevelStreamingLevelInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingLevelInstance);
ULevelStreamingLevelInstance::~ULevelStreamingLevelInstance() {}
// End Class ULevelStreamingLevelInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingLevelInstance, ULevelStreamingLevelInstance::StaticClass, TEXT("ULevelStreamingLevelInstance"), &Z_Registration_Info_UClass_ULevelStreamingLevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingLevelInstance), 3470913940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_677983256(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
