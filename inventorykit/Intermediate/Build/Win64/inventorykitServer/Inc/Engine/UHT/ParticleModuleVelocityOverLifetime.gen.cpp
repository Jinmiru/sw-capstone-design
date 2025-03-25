// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityOverLifetime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVelocityOverLifetime
void UParticleModuleVelocityOverLifetime::StaticRegisterNativesUParticleModuleVelocityOverLifetime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocityOverLifetime);
UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime_NoRegister()
{
	return UParticleModuleVelocityOverLifetime::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelOverLife_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09The scaling  value applied to the velocity.\n\x09 *\x09Value is retrieved using the RelativeTime of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
		{ "ToolTip", "The scaling  value applied to the velocity.\nValue is retrieved using the RelativeTime of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Absolute_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09If true, the velocity will be SET to the value from the above dist.\n\x09 *\x09If false, the velocity will be scaled by the above dist.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
		{ "ToolTip", "If true, the velocity will be SET to the value from the above dist.\nIf false, the velocity will be scaled by the above dist." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelOverLife;
	static void NewProp_Absolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Absolute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityOverLifetime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_VelOverLife = { "VelOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVelocityOverLifetime, VelOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelOverLife_MetaData), NewProp_VelOverLife_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute_SetBit(void* Obj)
{
	((UParticleModuleVelocityOverLifetime*)Obj)->Absolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute = { "Absolute", nullptr, (EPropertyFlags)0x0010000000000009, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleVelocityOverLifetime), &Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Absolute_MetaData), NewProp_Absolute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_VelOverLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::ClassParams = {
	&UParticleModuleVelocityOverLifetime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityOverLifetime>()
{
	return UParticleModuleVelocityOverLifetime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityOverLifetime);
UParticleModuleVelocityOverLifetime::~UParticleModuleVelocityOverLifetime() {}
// End Class UParticleModuleVelocityOverLifetime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityOverLifetime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocityOverLifetime, UParticleModuleVelocityOverLifetime::StaticClass, TEXT("UParticleModuleVelocityOverLifetime"), &Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocityOverLifetime), 3388830896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityOverLifetime_h_798251475(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityOverLifetime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityOverLifetime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
