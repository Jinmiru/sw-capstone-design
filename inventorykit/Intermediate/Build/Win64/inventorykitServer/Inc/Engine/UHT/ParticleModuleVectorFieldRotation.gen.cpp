// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldRotation() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVectorFieldRotation
void UParticleModuleVectorFieldRotation::StaticRegisterNativesUParticleModuleVectorFieldRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldRotation);
UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation_NoRegister()
{
	return UParticleModuleVectorFieldRotation::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "VF Init Rotation" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInitialRotation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Minimum initial rotation applied to the local vector field. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
		{ "ToolTip", "Minimum initial rotation applied to the local vector field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInitialRotation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Maximum initial rotation applied to the local vector field. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
		{ "ToolTip", "Maximum initial rotation applied to the local vector field." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinInitialRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxInitialRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MinInitialRotation = { "MinInitialRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVectorFieldRotation, MinInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInitialRotation_MetaData), NewProp_MinInitialRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MaxInitialRotation = { "MaxInitialRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVectorFieldRotation, MaxInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInitialRotation_MetaData), NewProp_MaxInitialRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MinInitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MaxInitialRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::ClassParams = {
	&UParticleModuleVectorFieldRotation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldRotation>()
{
	return UParticleModuleVectorFieldRotation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldRotation);
UParticleModuleVectorFieldRotation::~UParticleModuleVectorFieldRotation() {}
// End Class UParticleModuleVectorFieldRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldRotation, UParticleModuleVectorFieldRotation::StaticClass, TEXT("UParticleModuleVectorFieldRotation"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldRotation), 3475719396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotation_h_2316233020(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
