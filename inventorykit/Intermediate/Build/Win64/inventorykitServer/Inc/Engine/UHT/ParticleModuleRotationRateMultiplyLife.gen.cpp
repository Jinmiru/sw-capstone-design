// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRateMultiplyLife() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleRotationRateMultiplyLife
void UParticleModuleRotationRateMultiplyLife::StaticRegisterNativesUParticleModuleRotationRateMultiplyLife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationRateMultiplyLife);
UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_NoRegister()
{
	return UParticleModuleRotationRateMultiplyLife::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Rotation Rate * Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09The scale factor that should be applied to the rotation rate.\n\x09 *\x09The value is retrieved using the RelativeTime of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
		{ "ToolTip", "The scale factor that should be applied to the rotation rate.\nThe value is retrieved using the RelativeTime of the particle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationRateMultiplyLife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier = { "LifeMultiplier", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRotationRateMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeMultiplier_MetaData), NewProp_LifeMultiplier_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::ClassParams = {
	&UParticleModuleRotationRateMultiplyLife::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationRateMultiplyLife>()
{
	return UParticleModuleRotationRateMultiplyLife::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRateMultiplyLife);
UParticleModuleRotationRateMultiplyLife::~UParticleModuleRotationRateMultiplyLife() {}
// End Class UParticleModuleRotationRateMultiplyLife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateMultiplyLife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife, UParticleModuleRotationRateMultiplyLife::StaticClass, TEXT("UParticleModuleRotationRateMultiplyLife"), &Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationRateMultiplyLife), 2895139930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateMultiplyLife_h_3921225608(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateMultiplyLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateMultiplyLife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
