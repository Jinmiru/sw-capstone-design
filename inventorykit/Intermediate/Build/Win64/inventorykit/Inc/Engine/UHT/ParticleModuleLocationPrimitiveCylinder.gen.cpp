// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveCylinder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_CylinderHeightAxis();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum CylinderHeightAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CylinderHeightAxis;
static UEnum* CylinderHeightAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CylinderHeightAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CylinderHeightAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_CylinderHeightAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CylinderHeightAxis"));
	}
	return Z_Registration_Info_UEnum_CylinderHeightAxis.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<CylinderHeightAxis>()
{
	return CylinderHeightAxis_StaticEnum();
}
struct Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "PMLPC_HEIGHTAXIS_MAX.Name", "PMLPC_HEIGHTAXIS_MAX" },
		{ "PMLPC_HEIGHTAXIS_X.DisplayName", "X" },
		{ "PMLPC_HEIGHTAXIS_X.Name", "PMLPC_HEIGHTAXIS_X" },
		{ "PMLPC_HEIGHTAXIS_Y.DisplayName", "Y" },
		{ "PMLPC_HEIGHTAXIS_Y.Name", "PMLPC_HEIGHTAXIS_Y" },
		{ "PMLPC_HEIGHTAXIS_Z.DisplayName", "Z" },
		{ "PMLPC_HEIGHTAXIS_Z.Name", "PMLPC_HEIGHTAXIS_Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PMLPC_HEIGHTAXIS_X", (int64)PMLPC_HEIGHTAXIS_X },
		{ "PMLPC_HEIGHTAXIS_Y", (int64)PMLPC_HEIGHTAXIS_Y },
		{ "PMLPC_HEIGHTAXIS_Z", (int64)PMLPC_HEIGHTAXIS_Z },
		{ "PMLPC_HEIGHTAXIS_MAX", (int64)PMLPC_HEIGHTAXIS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"CylinderHeightAxis",
	"CylinderHeightAxis",
	Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_CylinderHeightAxis()
{
	if (!Z_Registration_Info_UEnum_CylinderHeightAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CylinderHeightAxis.InnerSingleton, Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CylinderHeightAxis.InnerSingleton;
}
// End Enum CylinderHeightAxis

// Begin Class UParticleModuleLocationPrimitiveCylinder
void UParticleModuleLocationPrimitiveCylinder::StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationPrimitiveCylinder);
UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister()
{
	return UParticleModuleLocationPrimitiveCylinder::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Cylinder" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialVelocity_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** If true, get the particle velocity form the radial distance inside the primitive. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "If true, get the particle velocity form the radial distance inside the primitive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The radius of the cylinder. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "The radius of the cylinder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartHeight_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The height of the cylinder, centered about the location. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "The height of the cylinder, centered about the location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightAxis_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 * Determine the particle system axis that should represent the height of the cylinder.\n\x09 * Can be one of the following:\n\x09 *   PMLPC_HEIGHTAXIS_X - Orient the height along the particle system X-axis.\n\x09 *   PMLPC_HEIGHTAXIS_Y - Orient the height along the particle system Y-axis.\n\x09 *   PMLPC_HEIGHTAXIS_Z - Orient the height along the particle system Z-axis.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "Determine the particle system axis that should represent the height of the cylinder.\nCan be one of the following:\n  PMLPC_HEIGHTAXIS_X - Orient the height along the particle system X-axis.\n  PMLPC_HEIGHTAXIS_Y - Orient the height along the particle system Y-axis.\n  PMLPC_HEIGHTAXIS_Z - Orient the height along the particle system Z-axis." },
	};
#endif // WITH_METADATA
	static void NewProp_RadialVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RadialVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeightAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationPrimitiveCylinder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity_SetBit(void* Obj)
{
	((UParticleModuleLocationPrimitiveCylinder*)Obj)->RadialVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity = { "RadialVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveCylinder), &Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialVelocity_MetaData), NewProp_RadialVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartRadius = { "StartRadius", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, StartRadius), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRadius_MetaData), NewProp_StartRadius_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartHeight = { "StartHeight", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, StartHeight), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartHeight_MetaData), NewProp_StartHeight_MetaData) }; // 3711494764
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_HeightAxis = { "HeightAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, HeightAxis), Z_Construct_UEnum_Engine_CylinderHeightAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightAxis_MetaData), NewProp_HeightAxis_MetaData) }; // 3856419385
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_HeightAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationPrimitiveBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::ClassParams = {
	&UParticleModuleLocationPrimitiveCylinder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationPrimitiveCylinder>()
{
	return UParticleModuleLocationPrimitiveCylinder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveCylinder);
UParticleModuleLocationPrimitiveCylinder::~UParticleModuleLocationPrimitiveCylinder() {}
// End Class UParticleModuleLocationPrimitiveCylinder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CylinderHeightAxis_StaticEnum, TEXT("CylinderHeightAxis"), &Z_Registration_Info_UEnum_CylinderHeightAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3856419385U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder, UParticleModuleLocationPrimitiveCylinder::StaticClass, TEXT("UParticleModuleLocationPrimitiveCylinder"), &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationPrimitiveCylinder), 3254592457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_3179640598(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
