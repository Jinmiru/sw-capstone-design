// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Lightmass/LightmassCharacterIndirectDetailVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassCharacterIndirectDetailVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume();
ENGINE_API UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALightmassCharacterIndirectDetailVolume
void ALightmassCharacterIndirectDetailVolume::StaticRegisterNativesALightmassCharacterIndirectDetailVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightmassCharacterIndirectDetailVolume);
UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister()
{
	return ALightmassCharacterIndirectDetailVolume::StaticClass();
}
struct Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Lightmass/LightmassCharacterIndirectDetailVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassCharacterIndirectDetailVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightmassCharacterIndirectDetailVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::ClassParams = {
	&ALightmassCharacterIndirectDetailVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume()
{
	if (!Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.OuterSingleton, Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALightmassCharacterIndirectDetailVolume>()
{
	return ALightmassCharacterIndirectDetailVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassCharacterIndirectDetailVolume);
ALightmassCharacterIndirectDetailVolume::~ALightmassCharacterIndirectDetailVolume() {}
// End Class ALightmassCharacterIndirectDetailVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume, ALightmassCharacterIndirectDetailVolume::StaticClass, TEXT("ALightmassCharacterIndirectDetailVolume"), &Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightmassCharacterIndirectDetailVolume), 468276623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_395278097(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
