// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAccelerationBase
void UParticleModuleAccelerationBase::StaticRegisterNativesUParticleModuleAccelerationBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationBase);
UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister()
{
	return UParticleModuleAccelerationBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAccelerationBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysInWorldSpace_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/**\n\x09 *\x09If true, then treat the acceleration as world-space\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
		{ "ToolTip", "If true, then treat the acceleration as world-space" },
	};
#endif // WITH_METADATA
	static void NewProp_bAlwaysInWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysInWorldSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_SetBit(void* Obj)
{
	((UParticleModuleAccelerationBase*)Obj)->bAlwaysInWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace = { "bAlwaysInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAccelerationBase), &Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysInWorldSpace_MetaData), NewProp_bAlwaysInWorldSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::ClassParams = {
	&UParticleModuleAccelerationBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers),
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAccelerationBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAccelerationBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationBase.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAccelerationBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationBase>()
{
	return UParticleModuleAccelerationBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationBase);
UParticleModuleAccelerationBase::~UParticleModuleAccelerationBase() {}
// End Class UParticleModuleAccelerationBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationBase, UParticleModuleAccelerationBase::StaticClass, TEXT("UParticleModuleAccelerationBase"), &Z_Registration_Info_UClass_UParticleModuleAccelerationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationBase), 1615535473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_1568475648(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
