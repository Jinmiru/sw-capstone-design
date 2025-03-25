// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationOverLifetime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAccelerationOverLifetime
void UParticleModuleAccelerationOverLifetime::StaticRegisterNativesUParticleModuleAccelerationOverLifetime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationOverLifetime);
UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister()
{
	return UParticleModuleAccelerationOverLifetime::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelOverLife_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/** \n\x09 *\x09The acceleration of the particle over its lifetime.\n\x09 *\x09Value is obtained using the RelativeTime of the partice.\n\x09 *\x09The current and base velocity values of the particle \n\x09 *\x09""are then updated using the formula \n\x09 *\x09\x09velocity += acceleration* DeltaTime\n\x09 *\x09where DeltaTime is the time passed since the last frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
		{ "ToolTip", "The acceleration of the particle over its lifetime.\nValue is obtained using the RelativeTime of the partice.\nThe current and base velocity values of the particle\nare then updated using the formula\n        velocity += acceleration* DeltaTime\nwhere DeltaTime is the time passed since the last frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelOverLife;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationOverLifetime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife = { "AccelOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAccelerationOverLifetime, AccelOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelOverLife_MetaData), NewProp_AccelOverLife_MetaData) }; // 1238237137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::ClassParams = {
	&UParticleModuleAccelerationOverLifetime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationOverLifetime>()
{
	return UParticleModuleAccelerationOverLifetime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationOverLifetime);
UParticleModuleAccelerationOverLifetime::~UParticleModuleAccelerationOverLifetime() {}
// End Class UParticleModuleAccelerationOverLifetime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationOverLifetime, UParticleModuleAccelerationOverLifetime::StaticClass, TEXT("UParticleModuleAccelerationOverLifetime"), &Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationOverLifetime), 2690237838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_3473248336(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
