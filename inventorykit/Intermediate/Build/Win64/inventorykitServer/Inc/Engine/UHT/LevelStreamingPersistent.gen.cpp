// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingPersistent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingPersistent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelStreamingPersistent
void ULevelStreamingPersistent::StaticRegisterNativesULevelStreamingPersistent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingPersistent);
UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister()
{
	return ULevelStreamingPersistent::StaticClass();
}
struct Z_Construct_UClass_ULevelStreamingPersistent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelStreamingPersistent.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingPersistent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingPersistent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelStreamingPersistent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingPersistent_Statics::ClassParams = {
	&ULevelStreamingPersistent::StaticClass,
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
	0x008010A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelStreamingPersistent()
{
	if (!Z_Registration_Info_UClass_ULevelStreamingPersistent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingPersistent.OuterSingleton, Z_Construct_UClass_ULevelStreamingPersistent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelStreamingPersistent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelStreamingPersistent>()
{
	return ULevelStreamingPersistent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingPersistent);
ULevelStreamingPersistent::~ULevelStreamingPersistent() {}
// End Class ULevelStreamingPersistent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingPersistent, ULevelStreamingPersistent::StaticClass, TEXT("ULevelStreamingPersistent"), &Z_Registration_Info_UClass_ULevelStreamingPersistent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingPersistent), 3626588774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_2392275393(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
