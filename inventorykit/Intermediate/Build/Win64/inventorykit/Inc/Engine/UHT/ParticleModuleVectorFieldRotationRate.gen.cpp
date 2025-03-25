// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldRotationRate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVectorFieldRotationRate
void UParticleModuleVectorFieldRotationRate::StaticRegisterNativesUParticleModuleVectorFieldRotationRate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldRotationRate);
UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_NoRegister()
{
	return UParticleModuleVectorFieldRotationRate::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "VF Rotation Rate" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Constant rotation rate applied to the local vector field. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
		{ "ToolTip", "Constant rotation rate applied to the local vector field." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldRotationRate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVectorFieldRotationRate, RotationRate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::NewProp_RotationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::ClassParams = {
	&UParticleModuleVectorFieldRotationRate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldRotationRate>()
{
	return UParticleModuleVectorFieldRotationRate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldRotationRate);
UParticleModuleVectorFieldRotationRate::~UParticleModuleVectorFieldRotationRate() {}
// End Class UParticleModuleVectorFieldRotationRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotationRate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldRotationRate, UParticleModuleVectorFieldRotationRate::StaticClass, TEXT("UParticleModuleVectorFieldRotationRate"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldRotationRate), 2201422273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotationRate_h_3823544107(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotationRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotationRate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
