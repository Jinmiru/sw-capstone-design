// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingAlwaysLoaded.h"
#include "Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingAlwaysLoaded() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelStreamingAlwaysLoaded
void ULevelStreamingAlwaysLoaded::StaticRegisterNativesULevelStreamingAlwaysLoaded()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingAlwaysLoaded);
UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded_NoRegister()
{
	return ULevelStreamingAlwaysLoaded::StaticClass();
}
struct Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelStreamingAlwaysLoaded.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingAlwaysLoaded.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingAlwaysLoaded>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::ClassParams = {
	&ULevelStreamingAlwaysLoaded::StaticClass,
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
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded()
{
	if (!Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.OuterSingleton, Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelStreamingAlwaysLoaded>()
{
	return ULevelStreamingAlwaysLoaded::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingAlwaysLoaded);
ULevelStreamingAlwaysLoaded::~ULevelStreamingAlwaysLoaded() {}
// End Class ULevelStreamingAlwaysLoaded

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingAlwaysLoaded, ULevelStreamingAlwaysLoaded::StaticClass, TEXT("ULevelStreamingAlwaysLoaded"), &Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingAlwaysLoaded), 143965054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_475747135(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
