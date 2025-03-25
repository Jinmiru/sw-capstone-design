// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeSubsystem
void ULandscapeSubsystem::StaticRegisterNativesULandscapeSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSubsystem);
UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister()
{
	return ULandscapeSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULandscapeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/LandscapeSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams = {
	&ULandscapeSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeSubsystem()
{
	if (!Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton, Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSubsystem>()
{
	return ULandscapeSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSubsystem);
// End Class ULandscapeSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSubsystem, ULandscapeSubsystem::StaticClass, TEXT("ULandscapeSubsystem"), &Z_Registration_Info_UClass_ULandscapeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSubsystem), 987977114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_3932113917(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
