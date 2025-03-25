// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Trail/ParticleModuleTrailSource.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTrailSource() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETrail2SourceMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrail2SourceMethod;
static UEnum* ETrail2SourceMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrail2SourceMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrail2SourceMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrail2SourceMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETrail2SourceMethod"));
	}
	return Z_Registration_Info_UEnum_ETrail2SourceMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETrail2SourceMethod>()
{
	return ETrail2SourceMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "PET2SRCM_Actor.Comment", "/** Actor\x09\x09- use the actor as the source.\n\x09 *\x09The name of the actor should be set in SourceName.\n\x09 */" },
		{ "PET2SRCM_Actor.Name", "PET2SRCM_Actor" },
		{ "PET2SRCM_Actor.ToolTip", "Actor          - use the actor as the source.\n    The name of the actor should be set in SourceName." },
		{ "PET2SRCM_Default.Comment", "/** Default\x09- use the emitter position. \n\x09 *\x09This is the fallback for when other modes can't be resolved.\n\x09 */" },
		{ "PET2SRCM_Default.Name", "PET2SRCM_Default" },
		{ "PET2SRCM_Default.ToolTip", "Default        - use the emitter position.\n    This is the fallback for when other modes can't be resolved." },
		{ "PET2SRCM_MAX.Name", "PET2SRCM_MAX" },
		{ "PET2SRCM_Particle.Comment", "/** Particle\x09- use the particles from a given emitter in the system.\x09\x09\n\x09 *\x09The name of the emitter should be set in SourceName.\n\x09 */" },
		{ "PET2SRCM_Particle.Name", "PET2SRCM_Particle" },
		{ "PET2SRCM_Particle.ToolTip", "Particle       - use the particles from a given emitter in the system.\n    The name of the emitter should be set in SourceName." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PET2SRCM_Default", (int64)PET2SRCM_Default },
		{ "PET2SRCM_Particle", (int64)PET2SRCM_Particle },
		{ "PET2SRCM_Actor", (int64)PET2SRCM_Actor },
		{ "PET2SRCM_MAX", (int64)PET2SRCM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETrail2SourceMethod",
	"ETrail2SourceMethod",
	Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod()
{
	if (!Z_Registration_Info_UEnum_ETrail2SourceMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrail2SourceMethod.InnerSingleton, Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrail2SourceMethod.InnerSingleton;
}
// End Enum ETrail2SourceMethod

// Begin Class UParticleModuleTrailSource
void UParticleModuleTrailSource::StaticRegisterNativesUParticleModuleTrailSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTrailSource);
UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister()
{
	return UParticleModuleTrailSource::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleTrailSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Source" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The source method for the trail. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The source method for the trail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the source - either the emitter or Actor. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The name of the source - either the emitter or Actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStrength_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The strength of the tangent from the source point for each Trail. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The strength of the tangent from the source point for each Trail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockSourceStength_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Whether to lock the source to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetCount_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/**\n\x09 *\x09SourceOffsetCount\n\x09 *\x09The number of source offsets that can be expected to be found on the instance.\n\x09 *\x09These must be named\n\x09 *\x09\x09TrailSourceOffset#\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "SourceOffsetCount\nThe number of source offsets that can be expected to be found on the instance.\nThese must be named\n        TrailSourceOffset#" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetDefaults_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** \n\x09 *\x09""Default offsets from the source(s). \n\x09 *\x09If there are < SourceOffsetCount slots, the grabbing of values will simply wrap.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Default offsets from the source(s).\nIf there are < SourceOffsetCount slots, the grabbing of values will simply wrap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/**\x09Particle selection method, when using the SourceMethod of Particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Particle selection method, when using the SourceMethod of Particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRotation_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/**\x09Interhit particle rotation - only valid for SourceMethod of PET2SRCM_Particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Interhit particle rotation - only valid for SourceMethod of PET2SRCM_Particle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMethod;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStrength;
	static void NewProp_bLockSourceStength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockSourceStength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceOffsetCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceOffsetDefaults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceOffsetDefaults;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
	static void NewProp_bInheritRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTrailSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod = { "SourceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceMethod), Z_Construct_UEnum_Engine_ETrail2SourceMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMethod_MetaData), NewProp_SourceMethod_MetaData) }; // 166888496
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength = { "SourceStrength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStrength_MetaData), NewProp_SourceStrength_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_SetBit(void* Obj)
{
	((UParticleModuleTrailSource*)Obj)->bLockSourceStength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength = { "bLockSourceStength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTrailSource), &Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockSourceStength_MetaData), NewProp_bLockSourceStength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount = { "SourceOffsetCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceOffsetCount_MetaData), NewProp_SourceOffsetCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_Inner = { "SourceOffsetDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults = { "SourceOffsetDefaults", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetDefaults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceOffsetDefaults_MetaData), NewProp_SourceOffsetDefaults_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SelectionMethod), Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMethod_MetaData), NewProp_SelectionMethod_MetaData) }; // 4274561990
void Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_SetBit(void* Obj)
{
	((UParticleModuleTrailSource*)Obj)->bInheritRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation = { "bInheritRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTrailSource), &Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritRotation_MetaData), NewProp_bInheritRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleTrailSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleTrailBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::ClassParams = {
	&UParticleModuleTrailSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleTrailSource()
{
	if (!Z_Registration_Info_UClass_UParticleModuleTrailSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTrailSource.OuterSingleton, Z_Construct_UClass_UParticleModuleTrailSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleTrailSource.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleTrailSource>()
{
	return UParticleModuleTrailSource::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTrailSource);
UParticleModuleTrailSource::~UParticleModuleTrailSource() {}
// End Class UParticleModuleTrailSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETrail2SourceMethod_StaticEnum, TEXT("ETrail2SourceMethod"), &Z_Registration_Info_UEnum_ETrail2SourceMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 166888496U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTrailSource, UParticleModuleTrailSource::StaticClass, TEXT("UParticleModuleTrailSource"), &Z_Registration_Info_UClass_UParticleModuleTrailSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTrailSource), 1691549889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_3170389881(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
