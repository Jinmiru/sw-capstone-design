// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveProcedural.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveProcedural() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundWave();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundWaveProcedural
void USoundWaveProcedural::StaticRegisterNativesUSoundWaveProcedural()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundWaveProcedural);
UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister()
{
	return USoundWaveProcedural::StaticClass();
}
struct Z_Construct_UClass_USoundWaveProcedural_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundWaveProcedural.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveProcedural.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWaveProcedural>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoundWaveProcedural_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWave,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWaveProcedural_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundWaveProcedural_Statics::ClassParams = {
	&USoundWaveProcedural::StaticClass,
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
	0x008810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundWaveProcedural()
{
	if (!Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton, Z_Construct_UClass_USoundWaveProcedural_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundWaveProcedural>()
{
	return USoundWaveProcedural::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWaveProcedural);
USoundWaveProcedural::~USoundWaveProcedural() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWaveProcedural)
// End Class USoundWaveProcedural

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundWaveProcedural, USoundWaveProcedural::StaticClass, TEXT("USoundWaveProcedural"), &Z_Registration_Info_UClass_USoundWaveProcedural, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundWaveProcedural), 1094178373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_2883936791(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
