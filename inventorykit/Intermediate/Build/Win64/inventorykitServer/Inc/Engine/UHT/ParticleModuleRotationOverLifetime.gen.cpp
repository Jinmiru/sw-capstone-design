// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationOverLifetime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleRotationOverLifetime
void UParticleModuleRotationOverLifetime::StaticRegisterNativesUParticleModuleRotationOverLifetime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationOverLifetime);
UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime_NoRegister()
{
	return UParticleModuleRotationOverLifetime::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Rotation/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOverLife_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** \n\x09 *\x09The rotation of the particle (1.0 = 360 degrees).\n\x09 *\x09The value is retrieved using the RelativeTime of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
		{ "ToolTip", "The rotation of the particle (1.0 = 360 degrees).\nThe value is retrieved using the RelativeTime of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09If true,  the particle rotation is multiplied by the value retrieved from RotationOverLife.\n\x09 *\x09If false, the particle rotation is incremented by the value retrieved from RotationOverLife.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
		{ "ToolTip", "If true,  the particle rotation is multiplied by the value retrieved from RotationOverLife.\nIf false, the particle rotation is incremented by the value retrieved from RotationOverLife." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOverLife;
	static void NewProp_Scale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationOverLifetime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::NewProp_RotationOverLife = { "RotationOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRotationOverLifetime, RotationOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOverLife_MetaData), NewProp_RotationOverLife_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::NewProp_Scale_SetBit(void* Obj)
{
	((UParticleModuleRotationOverLifetime*)Obj)->Scale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRotationOverLifetime), &Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::NewProp_Scale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::NewProp_RotationOverLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::ClassParams = {
	&UParticleModuleRotationOverLifetime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationOverLifetime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationOverLifetime>()
{
	return UParticleModuleRotationOverLifetime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationOverLifetime);
UParticleModuleRotationOverLifetime::~UParticleModuleRotationOverLifetime() {}
// End Class UParticleModuleRotationOverLifetime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationOverLifetime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationOverLifetime, UParticleModuleRotationOverLifetime::StaticClass, TEXT("UParticleModuleRotationOverLifetime"), &Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationOverLifetime), 2066422254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationOverLifetime_h_1046950645(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationOverLifetime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationOverLifetime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
