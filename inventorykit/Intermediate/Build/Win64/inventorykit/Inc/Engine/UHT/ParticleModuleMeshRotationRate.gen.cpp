// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRate() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleMeshRotationRate
void UParticleModuleMeshRotationRate::StaticRegisterNativesUParticleModuleMeshRotationRate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshRotationRate);
UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister()
{
	return UParticleModuleMeshRotationRate::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Init Mesh Rotation Rate" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotationRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09Initial rotation rate, in rotations per second.\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
		{ "ToolTip", "Initial rotation rate, in rotations per second.\nThe value is retrieved using the EmitterTime." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate = { "StartRotationRate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleMeshRotationRate, StartRotationRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotationRate_MetaData), NewProp_StartRotationRate_MetaData) }; // 1238237137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::ClassParams = {
	&UParticleModuleMeshRotationRate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate()
{
	if (!Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRate>()
{
	return UParticleModuleMeshRotationRate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRate);
UParticleModuleMeshRotationRate::~UParticleModuleMeshRotationRate() {}
// End Class UParticleModuleMeshRotationRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshRotationRate, UParticleModuleMeshRotationRate::StaticClass, TEXT("UParticleModuleMeshRotationRate"), &Z_Registration_Info_UClass_UParticleModuleMeshRotationRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshRotationRate), 3014632035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_1690660263(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
