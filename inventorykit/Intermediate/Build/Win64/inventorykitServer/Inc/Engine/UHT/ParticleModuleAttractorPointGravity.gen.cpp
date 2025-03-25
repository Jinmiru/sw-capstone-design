// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorPointGravity() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAttractorPointGravity
void UParticleModuleAttractorPointGravity::StaticRegisterNativesUParticleModuleAttractorPointGravity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorPointGravity);
UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister()
{
	return UParticleModuleAttractorPointGravity::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Point Gravity" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "PointGravitySource" },
		{ "Comment", "/** The position of the point gravity source. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The position of the point gravity source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "PointGravitySource" },
		{ "Comment", "/** The distance at which the influence of the point begins to falloff. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The distance at which the influence of the point begins to falloff." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Comment", "/** The strength of the point source. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The strength of the point source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthRaw_MetaData[] = {
		{ "Category", "PointGravitySource" },
		{ "Comment", "/** The strength of the point source. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The strength of the point source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrengthRaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorPointGravity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Strength_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_StrengthRaw = { "StrengthRaw", nullptr, (EPropertyFlags)0x0010008002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, StrengthRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthRaw_MetaData), NewProp_StrengthRaw_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_StrengthRaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::ClassParams = {
	&UParticleModuleAttractorPointGravity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorPointGravity>()
{
	return UParticleModuleAttractorPointGravity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorPointGravity);
UParticleModuleAttractorPointGravity::~UParticleModuleAttractorPointGravity() {}
// End Class UParticleModuleAttractorPointGravity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorPointGravity, UParticleModuleAttractorPointGravity::StaticClass, TEXT("UParticleModuleAttractorPointGravity"), &Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorPointGravity), 2583099813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_4225218169(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
