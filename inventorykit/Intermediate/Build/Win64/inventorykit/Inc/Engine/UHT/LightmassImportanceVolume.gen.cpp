// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Lightmass/LightmassImportanceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassImportanceVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume();
ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALightmassImportanceVolume
void ALightmassImportanceVolume::StaticRegisterNativesALightmassImportanceVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightmassImportanceVolume);
UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister()
{
	return ALightmassImportanceVolume::StaticClass();
}
struct Z_Construct_UClass_ALightmassImportanceVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Lightmass/LightmassImportanceVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassImportanceVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightmassImportanceVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALightmassImportanceVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassImportanceVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightmassImportanceVolume_Statics::ClassParams = {
	&ALightmassImportanceVolume::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightmassImportanceVolume()
{
	if (!Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton, Z_Construct_UClass_ALightmassImportanceVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALightmassImportanceVolume>()
{
	return ALightmassImportanceVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassImportanceVolume);
ALightmassImportanceVolume::~ALightmassImportanceVolume() {}
// End Class ALightmassImportanceVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightmassImportanceVolume, ALightmassImportanceVolume::StaticClass, TEXT("ALightmassImportanceVolume"), &Z_Registration_Info_UClass_ALightmassImportanceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightmassImportanceVolume), 3089141744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_4183571172(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
