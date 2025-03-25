// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Rotation/ParticleModuleMeshRotation.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleMeshRotation
void UParticleModuleMeshRotation::StaticRegisterNativesUParticleModuleMeshRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshRotation);
UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister()
{
	return UParticleModuleMeshRotation::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleMeshRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Init Mesh Rotation" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09Initial rotation in ROTATIONS PER SECOND (1 = 360 degrees).\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ToolTip", "Initial rotation in ROTATIONS PER SECOND (1 = 360 degrees).\nThe value is retrieved using the EmitterTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritParent_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** If true, apply the parents rotation as well. */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ToolTip", "If true, apply the parents rotation as well." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static void NewProp_bInheritParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleMeshRotation, StartRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_SetBit(void* Obj)
{
	((UParticleModuleMeshRotation*)Obj)->bInheritParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent = { "bInheritParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleMeshRotation), &Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritParent_MetaData), NewProp_bInheritParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::ClassParams = {
	&UParticleModuleMeshRotation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleMeshRotation()
{
	if (!Z_Registration_Info_UClass_UParticleModuleMeshRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshRotation.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleMeshRotation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotation>()
{
	return UParticleModuleMeshRotation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotation);
UParticleModuleMeshRotation::~UParticleModuleMeshRotation() {}
// End Class UParticleModuleMeshRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshRotation, UParticleModuleMeshRotation::StaticClass, TEXT("UParticleModuleMeshRotation"), &Z_Registration_Info_UClass_UParticleModuleMeshRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshRotation), 261937966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_2241618475(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
