// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocity.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocity() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVelocity
void UParticleModuleVelocity::StaticRegisterNativesUParticleModuleVelocity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocity);
UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister()
{
	return UParticleModuleVelocity::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Velocity" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** \n\x09 *\x09The velocity to apply to a particle when it is spawned.\n\x09 *\x09Value is retrieved using the EmitterTime of the emitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ToolTip", "The velocity to apply to a particle when it is spawned.\nValue is retrieved using the EmitterTime of the emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartVelocityRadial_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** \n\x09 *\x09The velocity to apply to a particle along its radial direction.\n\x09 *\x09""Direction is determined by subtracting the location of the emitter from the particle location at spawn.\n\x09 *\x09Value is retrieved using the EmitterTime of the emitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ToolTip", "The velocity to apply to a particle along its radial direction.\nDirection is determined by subtracting the location of the emitter from the particle location at spawn.\nValue is retrieved using the EmitterTime of the emitter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartVelocityRadial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity = { "StartVelocity", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocity), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartVelocity_MetaData), NewProp_StartVelocity_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial = { "StartVelocityRadial", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocityRadial), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartVelocityRadial_MetaData), NewProp_StartVelocityRadial_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVelocity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocity_Statics::ClassParams = {
	&UParticleModuleVelocity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVelocity()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVelocity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocity.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVelocity.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocity>()
{
	return UParticleModuleVelocity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocity);
UParticleModuleVelocity::~UParticleModuleVelocity() {}
// End Class UParticleModuleVelocity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocity, UParticleModuleVelocity::StaticClass, TEXT("UParticleModuleVelocity"), &Z_Registration_Info_UClass_UParticleModuleVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocity), 4105527653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_95615885(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
