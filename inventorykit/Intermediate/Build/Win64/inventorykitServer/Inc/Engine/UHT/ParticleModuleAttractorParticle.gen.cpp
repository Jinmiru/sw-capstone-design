// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorParticle.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorParticle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorParticle();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorParticle_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAttractorParticleSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod;
static UEnum* EAttractorParticleSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAttractorParticleSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAttractorParticleSelectionMethod>()
{
	return EAttractorParticleSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EAPSM_MAX.Name", "EAPSM_MAX" },
		{ "EAPSM_Random.DisplayName", "Random" },
		{ "EAPSM_Random.Name", "EAPSM_Random" },
		{ "EAPSM_Sequential.DisplayName", "Sequential" },
		{ "EAPSM_Sequential.Name", "EAPSM_Sequential" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAPSM_Random", (int64)EAPSM_Random },
		{ "EAPSM_Sequential", (int64)EAPSM_Sequential },
		{ "EAPSM_MAX", (int64)EAPSM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAttractorParticleSelectionMethod",
	"EAttractorParticleSelectionMethod",
	Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.InnerSingleton;
}
// End Enum EAttractorParticleSelectionMethod

// Begin Class UParticleModuleAttractorParticle
void UParticleModuleAttractorParticle::StaticRegisterNativesUParticleModuleAttractorParticle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorParticle);
UClass* Z_Construct_UClass_UParticleModuleAttractorParticle_NoRegister()
{
	return UParticleModuleAttractorParticle::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAttractorParticle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Particle Attractor" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The source emitter for attractors\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The source emitter for attractors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The radial range of the attraction around the source particle.\n\x09 *\x09Particle-life relative.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The radial range of the attraction around the source particle.\nParticle-life relative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStrengthByDistance_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The strength curve is a function of distance or of time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The strength curve is a function of distance or of time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The strength of the attraction (negative values repel).\n\x09 *\x09Particle-life relative if StrengthByDistance is false.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The strength of the attraction (negative values repel).\nParticle-life relative if StrengthByDistance is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectBaseVelocity_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, the velocity adjustment will be applied to the base velocity.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "If true, the velocity adjustment will be applied to the base velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *\x09The method to use when selecting an attractor target particle from the emitter.\n\x09 *\x09One of the following:\n\x09 *\x09Random\x09\x09- Randomly select a particle from the source emitter.  \n\x09 *\x09Sequential  - Select a particle using a sequential order. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The method to use when selecting an attractor target particle from the emitter.\nOne of the following:\nRandom          - Randomly select a particle from the source emitter.\nSequential  - Select a particle using a sequential order." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenewSource_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09Whether the particle should grab a new particle if it's source expires.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "Whether the particle should grab a new particle if it's source expires." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritSourceVel_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09Whether the particle should inherit the source veloctiy if it expires.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "Whether the particle should inherit the source veloctiy if it expires." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static void NewProp_bStrengthByDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrengthByDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static void NewProp_bAffectBaseVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectBaseVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
	static void NewProp_bRenewSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenewSource;
	static void NewProp_bInheritSourceVel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritSourceVel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastSelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorParticle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000002000009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorParticle, EmitterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterName_MetaData), NewProp_EmitterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorParticle, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance_SetBit(void* Obj)
{
	((UParticleModuleAttractorParticle*)Obj)->bStrengthByDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance = { "bStrengthByDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStrengthByDistance_MetaData), NewProp_bStrengthByDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorParticle, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity_SetBit(void* Obj)
{
	((UParticleModuleAttractorParticle*)Obj)->bAffectBaseVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity = { "bAffectBaseVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectBaseVelocity_MetaData), NewProp_bAffectBaseVelocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorParticle, SelectionMethod), Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMethod_MetaData), NewProp_SelectionMethod_MetaData) }; // 2076230025
void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource_SetBit(void* Obj)
{
	((UParticleModuleAttractorParticle*)Obj)->bRenewSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource = { "bRenewSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenewSource_MetaData), NewProp_bRenewSource_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel_SetBit(void* Obj)
{
	((UParticleModuleAttractorParticle*)Obj)->bInheritSourceVel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel = { "bInheritSourceVel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritSourceVel_MetaData), NewProp_bInheritSourceVel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_LastSelIndex = { "LastSelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorParticle, LastSelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSelIndex_MetaData), NewProp_LastSelIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_EmitterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_SelectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_LastSelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::ClassParams = {
	&UParticleModuleAttractorParticle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAttractorParticle()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAttractorParticle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorParticle.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAttractorParticle.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorParticle>()
{
	return UParticleModuleAttractorParticle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorParticle);
UParticleModuleAttractorParticle::~UParticleModuleAttractorParticle() {}
// End Class UParticleModuleAttractorParticle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttractorParticleSelectionMethod_StaticEnum, TEXT("EAttractorParticleSelectionMethod"), &Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2076230025U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorParticle, UParticleModuleAttractorParticle::StaticClass, TEXT("UParticleModuleAttractorParticle"), &Z_Registration_Info_UClass_UParticleModuleAttractorParticle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorParticle), 1679117272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_2030534746(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
