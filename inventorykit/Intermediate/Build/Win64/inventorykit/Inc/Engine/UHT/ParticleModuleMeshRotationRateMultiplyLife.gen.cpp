// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRateMultiplyLife() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleMeshRotationRateMultiplyLife
void UParticleModuleMeshRotationRateMultiplyLife::StaticRegisterNativesUParticleModuleMeshRotationRateMultiplyLife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshRotationRateMultiplyLife);
UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_NoRegister()
{
	return UParticleModuleMeshRotationRateMultiplyLife::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Rotation Rate * Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09The scale factor that should be applied to the rotation rate.\n\x09 *\x09The value is retrieved using the RelativeTime of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
		{ "ToolTip", "The scale factor that should be applied to the rotation rate.\nThe value is retrieved using the RelativeTime of the particle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRateMultiplyLife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier = { "LifeMultiplier", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleMeshRotationRateMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeMultiplier_MetaData), NewProp_LifeMultiplier_MetaData) }; // 1238237137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::ClassParams = {
	&UParticleModuleMeshRotationRateMultiplyLife::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife()
{
	if (!Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRateMultiplyLife>()
{
	return UParticleModuleMeshRotationRateMultiplyLife::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRateMultiplyLife);
UParticleModuleMeshRotationRateMultiplyLife::~UParticleModuleMeshRotationRateMultiplyLife() {}
// End Class UParticleModuleMeshRotationRateMultiplyLife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateMultiplyLife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife, UParticleModuleMeshRotationRateMultiplyLife::StaticClass, TEXT("UParticleModuleMeshRotationRateMultiplyLife"), &Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshRotationRateMultiplyLife), 3975753712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateMultiplyLife_h_1392018224(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateMultiplyLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateMultiplyLife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
