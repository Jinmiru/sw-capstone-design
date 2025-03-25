// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectPreset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundEffectPreset
void USoundEffectPreset::StaticRegisterNativesUSoundEffectPreset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectPreset);
UClass* Z_Construct_UClass_USoundEffectPreset_NoRegister()
{
	return USoundEffectPreset::StaticClass();
}
struct Z_Construct_UClass_USoundEffectPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sound/SoundEffectPreset.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectPreset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoundEffectPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectPreset_Statics::ClassParams = {
	&USoundEffectPreset::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundEffectPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundEffectPreset()
{
	if (!Z_Registration_Info_UClass_USoundEffectPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectPreset.OuterSingleton, Z_Construct_UClass_USoundEffectPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundEffectPreset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundEffectPreset>()
{
	return USoundEffectPreset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectPreset);
// End Class USoundEffectPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundEffectPreset, USoundEffectPreset::StaticClass, TEXT("USoundEffectPreset"), &Z_Registration_Info_UClass_USoundEffectPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectPreset), 1315231561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_3900321575(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
