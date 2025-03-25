// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldScaleOverLife() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVectorFieldScaleOverLife
void UParticleModuleVectorFieldScaleOverLife::StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldScaleOverLife);
UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister()
{
	return UParticleModuleVectorFieldScaleOverLife::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "VF Scale/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLife_MetaData[] = {
		{ "Comment", "/** Per-particle vector field scale. Evaluated using particle relative time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLifeRaw_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Per-particle vector field scale. Evaluated using particle relative time. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VectorFieldScaleOverLife;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorFieldScaleOverLifeRaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldScaleOverLife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife = { "VectorFieldScaleOverLife", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLife_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorFieldScaleOverLife_MetaData), NewProp_VectorFieldScaleOverLife_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw = { "VectorFieldScaleOverLifeRaw", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLifeRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorFieldScaleOverLifeRaw_MetaData), NewProp_VectorFieldScaleOverLifeRaw_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::ClassParams = {
	&UParticleModuleVectorFieldScaleOverLife::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldScaleOverLife>()
{
	return UParticleModuleVectorFieldScaleOverLife::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldScaleOverLife);
UParticleModuleVectorFieldScaleOverLife::~UParticleModuleVectorFieldScaleOverLife() {}
// End Class UParticleModuleVectorFieldScaleOverLife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife, UParticleModuleVectorFieldScaleOverLife::StaticClass, TEXT("UParticleModuleVectorFieldScaleOverLife"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldScaleOverLife), 906278289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_118067476(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
