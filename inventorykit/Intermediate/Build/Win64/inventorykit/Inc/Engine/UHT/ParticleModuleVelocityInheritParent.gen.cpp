// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityInheritParent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVelocityInheritParent
void UParticleModuleVelocityInheritParent::StaticRegisterNativesUParticleModuleVelocityInheritParent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocityInheritParent);
UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister()
{
	return UParticleModuleVelocityInheritParent::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Inherit Parent Velocity" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09The scale to apply to the parent velocity prior to adding it to the particle velocity during spawn.\n\x09 *\x09Value is retrieved using the EmitterTime of the emitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
		{ "ToolTip", "The scale to apply to the parent velocity prior to adding it to the particle velocity during spawn.\nValue is retrieved using the EmitterTime of the emitter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityInheritParent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVelocityInheritParent, Scale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) }; // 1238237137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::ClassParams = {
	&UParticleModuleVelocityInheritParent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityInheritParent>()
{
	return UParticleModuleVelocityInheritParent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityInheritParent);
UParticleModuleVelocityInheritParent::~UParticleModuleVelocityInheritParent() {}
// End Class UParticleModuleVelocityInheritParent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocityInheritParent, UParticleModuleVelocityInheritParent::StaticClass, TEXT("UParticleModuleVelocityInheritParent"), &Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocityInheritParent), 3006201350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_3357322982(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
