// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Location/ParticleModuleSourceMovement.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSourceMovement() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSourceMovement
void UParticleModuleSourceMovement::StaticRegisterNativesUParticleModuleSourceMovement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSourceMovement);
UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister()
{
	return UParticleModuleSourceMovement::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSourceMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Source Movement" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleSourceMovement.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMovementScale_MetaData[] = {
		{ "Category", "SourceMovement" },
		{ "Comment", "/** \n\x09 *\x09The scale factor to apply to the source movement before adding to the particle location.\n\x09 *\x09The value is looked up using the particles RELATIVE time [0..1].\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
		{ "ToolTip", "The scale factor to apply to the source movement before adding to the particle location.\nThe value is looked up using the particles RELATIVE time [0..1]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMovementScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSourceMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale = { "SourceMovementScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSourceMovement, SourceMovementScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMovementScale_MetaData), NewProp_SourceMovementScale_MetaData) }; // 1238237137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSourceMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSourceMovement_Statics::ClassParams = {
	&UParticleModuleSourceMovement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSourceMovement()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSourceMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSourceMovement.OuterSingleton, Z_Construct_UClass_UParticleModuleSourceMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSourceMovement.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSourceMovement>()
{
	return UParticleModuleSourceMovement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSourceMovement);
UParticleModuleSourceMovement::~UParticleModuleSourceMovement() {}
// End Class UParticleModuleSourceMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSourceMovement, UParticleModuleSourceMovement::StaticClass, TEXT("UParticleModuleSourceMovement"), &Z_Registration_Info_UClass_UParticleModuleSourceMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSourceMovement), 2346881901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_3223521710(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
