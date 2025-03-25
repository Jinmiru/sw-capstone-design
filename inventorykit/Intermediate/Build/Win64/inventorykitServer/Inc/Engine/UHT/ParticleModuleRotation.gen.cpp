// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotation.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotation();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleRotation
void UParticleModuleRotation::StaticRegisterNativesUParticleModuleRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotation);
UClass* Z_Construct_UClass_UParticleModuleRotation_NoRegister()
{
	return UParticleModuleRotation::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Rotation" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleRotation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09Initial rotation of the particle (1 = 360 degrees).\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotation.h" },
		{ "ToolTip", "Initial rotation of the particle (1 = 360 degrees).\nThe value is retrieved using the EmitterTime." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRotation_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRotation, StartRotation), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotation_Statics::NewProp_StartRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotation_Statics::ClassParams = {
	&UParticleModuleRotation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotation_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRotation()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotation.OuterSingleton, Z_Construct_UClass_UParticleModuleRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRotation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRotation>()
{
	return UParticleModuleRotation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotation);
UParticleModuleRotation::~UParticleModuleRotation() {}
// End Class UParticleModuleRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotation, UParticleModuleRotation::StaticClass, TEXT("UParticleModuleRotation"), &Z_Registration_Info_UClass_UParticleModuleRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotation), 1891300145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_1276207093(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
