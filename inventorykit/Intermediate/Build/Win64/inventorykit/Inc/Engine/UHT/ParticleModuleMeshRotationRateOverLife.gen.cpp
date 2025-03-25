// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRateOverLife() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleMeshRotationRateOverLife
void UParticleModuleMeshRotationRateOverLife::StaticRegisterNativesUParticleModuleMeshRotationRateOverLife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshRotationRateOverLife);
UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister()
{
	return UParticleModuleMeshRotationRateOverLife::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Rotation Rate over Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09The rotation rate desired.\n\x09 *\x09The value is retrieved using the RelativeTime of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ToolTip", "The rotation rate desired.\nThe value is retrieved using the RelativeTime of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleRotRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09If true, scale the current rotation rate by the value retrieved.\n\x09 *\x09Otherwise, set the rotation rate to the value retrieved.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ToolTip", "If true, scale the current rotation rate by the value retrieved.\nOtherwise, set the rotation rate to the value retrieved." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotRate;
	static void NewProp_bScaleRotRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleRotRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRateOverLife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate = { "RotRate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleMeshRotationRateOverLife, RotRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotRate_MetaData), NewProp_RotRate_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_SetBit(void* Obj)
{
	((UParticleModuleMeshRotationRateOverLife*)Obj)->bScaleRotRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate = { "bScaleRotRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleMeshRotationRateOverLife), &Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleRotRate_MetaData), NewProp_bScaleRotRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::ClassParams = {
	&UParticleModuleMeshRotationRateOverLife::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife()
{
	if (!Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRateOverLife>()
{
	return UParticleModuleMeshRotationRateOverLife::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRateOverLife);
UParticleModuleMeshRotationRateOverLife::~UParticleModuleMeshRotationRateOverLife() {}
// End Class UParticleModuleMeshRotationRateOverLife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife, UParticleModuleMeshRotationRateOverLife::StaticClass, TEXT("UParticleModuleMeshRotationRateOverLife"), &Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshRotationRateOverLife), 2472957902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_2387562861(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
