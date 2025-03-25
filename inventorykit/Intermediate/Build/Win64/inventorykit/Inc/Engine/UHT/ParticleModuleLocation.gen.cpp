// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Location/ParticleModuleLocation.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleLocation
void UParticleModuleLocation::StaticRegisterNativesUParticleModuleLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocation);
UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister()
{
	return UParticleModuleLocation::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** \n\x09 *\x09The location the particle should be emitted.\n\x09 *\x09Relative in local space to the emitter by default.\n\x09 *\x09Relative in world space as a WorldOffset module or when the emitter's UseLocalSpace is off.\n\x09 *\x09Retrieved using the EmitterTime at the spawn of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "The location the particle should be emitted.\nRelative in local space to the emitter by default.\nRelative in world space as a WorldOffset module or when the emitter's UseLocalSpace is off.\nRetrieved using the EmitterTime at the spawn of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributeOverNPoints_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *  When set to a non-zero value this will force the particles to only spawn on evenly distributed\n\x09 *  positions between the two points specified.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "When set to a non-zero value this will force the particles to only spawn on evenly distributed\npositions between the two points specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributeThreshold_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *  When DistributeOverNPoints is set to a non-zero value, this specifies the ratio of particles spawned\n\x09 *  that should use the distribution.  (For example setting this to 1 will cause all the particles to\n\x09 *  be distributed evenly whereas .75 would cause 1/4 of the particles to be randomly placed).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "When DistributeOverNPoints is set to a non-zero value, this specifies the ratio of particles spawned\nthat should use the distribution.  (For example setting this to 1 will cause all the particles to\nbe distributed evenly whereas .75 would cause 1/4 of the particles to be randomly placed)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistributeOverNPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistributeThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocation, StartLocation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) }; // 1238237137
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints = { "DistributeOverNPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocation, DistributeOverNPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributeOverNPoints_MetaData), NewProp_DistributeOverNPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold = { "DistributeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocation, DistributeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributeThreshold_MetaData), NewProp_DistributeThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocation_Statics::ClassParams = {
	&UParticleModuleLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLocation()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocation.OuterSingleton, Z_Construct_UClass_UParticleModuleLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLocation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLocation>()
{
	return UParticleModuleLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocation);
UParticleModuleLocation::~UParticleModuleLocation() {}
// End Class UParticleModuleLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocation, UParticleModuleLocation::StaticClass, TEXT("UParticleModuleLocation"), &Z_Registration_Info_UClass_UParticleModuleLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocation), 912223610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_3208528509(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
