// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVelocityBase
void UParticleModuleVelocityBase::StaticRegisterNativesUParticleModuleVelocityBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocityBase);
UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister()
{
	return UParticleModuleVelocityBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVelocityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInWorldSpace_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09If true, then treat the velocity as world-space defined.\n\x09 *\x09NOTE: LocalSpace emitters that are moving will see strange results...\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ToolTip", "If true, then treat the velocity as world-space defined.\nNOTE: LocalSpace emitters that are moving will see strange results..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyOwnerScale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** If true, then apply the particle system components scale to the velocity value. */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ToolTip", "If true, then apply the particle system components scale to the velocity value." },
	};
#endif // WITH_METADATA
	static void NewProp_bInWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWorldSpace;
	static void NewProp_bApplyOwnerScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyOwnerScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_SetBit(void* Obj)
{
	((UParticleModuleVelocityBase*)Obj)->bInWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace = { "bInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleVelocityBase), &Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInWorldSpace_MetaData), NewProp_bInWorldSpace_MetaData) };
void Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_SetBit(void* Obj)
{
	((UParticleModuleVelocityBase*)Obj)->bApplyOwnerScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale = { "bApplyOwnerScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleVelocityBase), &Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyOwnerScale_MetaData), NewProp_bApplyOwnerScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVelocityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::ClassParams = {
	&UParticleModuleVelocityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers),
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVelocityBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVelocityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocityBase.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVelocityBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityBase>()
{
	return UParticleModuleVelocityBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityBase);
UParticleModuleVelocityBase::~UParticleModuleVelocityBase() {}
// End Class UParticleModuleVelocityBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocityBase, UParticleModuleVelocityBase::StaticClass, TEXT("UParticleModuleVelocityBase"), &Z_Registration_Info_UClass_UParticleModuleVelocityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocityBase), 634358719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_2578267226(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
