// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRate.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRate() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRate();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleRotationRate
void UParticleModuleRotationRate::StaticRegisterNativesUParticleModuleRotationRate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationRate);
UClass* Z_Construct_UClass_UParticleModuleRotationRate_NoRegister()
{
	return UParticleModuleRotationRate::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRotationRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Rotation Rate" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRate.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotationRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** \n\x09 *\x09Initial rotation rate, in rotations per second.\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRate.h" },
		{ "ToolTip", "Initial rotation rate, in rotations per second.\nThe value is retrieved using the EmitterTime." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationRate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRotationRate_Statics::NewProp_StartRotationRate = { "StartRotationRate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRotationRate, StartRotationRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotationRate_MetaData), NewProp_StartRotationRate_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRotationRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotationRate_Statics::NewProp_StartRotationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleRotationRate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationRate_Statics::ClassParams = {
	&UParticleModuleRotationRate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleRotationRate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRotationRate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRotationRate()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRotationRate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationRate.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationRate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRotationRate.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationRate>()
{
	return UParticleModuleRotationRate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRate);
UParticleModuleRotationRate::~UParticleModuleRotationRate() {}
// End Class UParticleModuleRotationRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationRate, UParticleModuleRotationRate::StaticClass, TEXT("UParticleModuleRotationRate"), &Z_Registration_Info_UClass_UParticleModuleRotationRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationRate), 862602485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_h_3076348189(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
