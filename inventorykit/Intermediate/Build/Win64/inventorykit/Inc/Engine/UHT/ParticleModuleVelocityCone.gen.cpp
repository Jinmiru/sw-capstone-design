// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityCone.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityCone() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityCone();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityCone_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVelocityCone
void UParticleModuleVelocityCone::StaticRegisterNativesUParticleModuleVelocityCone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocityCone);
UClass* Z_Construct_UClass_UParticleModuleVelocityCone_NoRegister()
{
	return UParticleModuleVelocityCone::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVelocityCone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity Cone" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Cone" },
		{ "Comment", "/** The Min value represents the inner cone angle value and the Max value represents the outer cone angle value. */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ToolTip", "The Min value represents the inner cone angle value and the Max value represents the outer cone angle value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Cone" },
		{ "Comment", "/** The initial velocity of the particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ToolTip", "The initial velocity of the particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Cone" },
		{ "Comment", "/** The direction FVector of the cone. */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ToolTip", "The direction FVector of the cone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityCone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVelocityCone, Angle), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVelocityCone, Velocity), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVelocityCone, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityCone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVelocityCone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::ClassParams = {
	&UParticleModuleVelocityCone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVelocityCone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVelocityCone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVelocityCone()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVelocityCone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocityCone.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocityCone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVelocityCone.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityCone>()
{
	return UParticleModuleVelocityCone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityCone);
UParticleModuleVelocityCone::~UParticleModuleVelocityCone() {}
// End Class UParticleModuleVelocityCone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityCone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocityCone, UParticleModuleVelocityCone::StaticClass, TEXT("UParticleModuleVelocityCone"), &Z_Registration_Info_UClass_UParticleModuleVelocityCone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocityCone), 870884006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityCone_h_2266153168(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityCone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityCone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
