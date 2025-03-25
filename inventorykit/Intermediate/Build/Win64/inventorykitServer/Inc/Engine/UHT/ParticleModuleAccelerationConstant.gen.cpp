// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationConstant() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAccelerationConstant
void UParticleModuleAccelerationConstant::StaticRegisterNativesUParticleModuleAccelerationConstant()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationConstant);
UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister()
{
	return UParticleModuleAccelerationConstant::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Const Acceleration" },
		{ "HideCategories", "Object Acceleration Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "ParticleModuleAccelerationConstant" },
		{ "Comment", "/** Constant acceleration for particles in this system. */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
		{ "ToolTip", "Constant acceleration for particles in this system." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationConstant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAccelerationConstant, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::NewProp_Acceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::ClassParams = {
	&UParticleModuleAccelerationConstant::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationConstant>()
{
	return UParticleModuleAccelerationConstant::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationConstant);
UParticleModuleAccelerationConstant::~UParticleModuleAccelerationConstant() {}
// End Class UParticleModuleAccelerationConstant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationConstant, UParticleModuleAccelerationConstant::StaticClass, TEXT("UParticleModuleAccelerationConstant"), &Z_Registration_Info_UClass_UParticleModuleAccelerationConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationConstant), 425144224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_4040310722(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
