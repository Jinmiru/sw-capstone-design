// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationEmitter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitter();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ELocationEmitterSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod;
static UEnum* ELocationEmitterSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELocationEmitterSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELocationEmitterSelectionMethod>()
{
	return ELocationEmitterSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ELESM_MAX.Name", "ELESM_MAX" },
		{ "ELESM_Random.Name", "ELESM_Random" },
		{ "ELESM_Sequential.Name", "ELESM_Sequential" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELESM_Random", (int64)ELESM_Random },
		{ "ELESM_Sequential", (int64)ELESM_Sequential },
		{ "ELESM_MAX", (int64)ELESM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELocationEmitterSelectionMethod",
	"ELocationEmitterSelectionMethod",
	Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod.InnerSingleton, Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod.InnerSingleton;
}
// End Enum ELocationEmitterSelectionMethod

// Begin Class UParticleModuleLocationEmitter
void UParticleModuleLocationEmitter::StaticRegisterNativesUParticleModuleLocationEmitter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationEmitter);
UClass* Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister()
{
	return UParticleModuleLocationEmitter::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLocationEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Emitter Initial Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The name of the emitter to use that the source location for particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "The name of the emitter to use that the source location for particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** \n\x09 *\x09The method to use when selecting a spawn target particle from the emitter.\n\x09 *\x09""Can be one of the following:\n\x09 *\x09\x09""ELESM_Random\x09\x09Randomly select a particle from the source emitter.\n\x09 *\x09\x09""ELESM_Sequential\x09Step through each particle from the source emitter in order.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "The method to use when selecting a spawn target particle from the emitter.\nCan be one of the following:\n        ELESM_Random            Randomly select a particle from the source emitter.\n        ELESM_Sequential        Step through each particle from the source emitter in order." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritSourceVelocity_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** If true, the spawned particle should inherit the velocity of the source particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "If true, the spawned particle should inherit the velocity of the source particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritSourceVelocityScale_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amount to scale the source velocity by when inheriting it. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "Amount to scale the source velocity by when inheriting it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritSourceRotation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** If true, the spawned particle should inherit the rotation of the source particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "If true, the spawned particle should inherit the rotation of the source particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritSourceRotationScale_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amount to scale the source rotation by when inheriting it. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "Amount to scale the source rotation by when inheriting it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
	static void NewProp_InheritSourceVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InheritSourceVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritSourceVelocityScale;
	static void NewProp_bInheritSourceRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritSourceRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritSourceRotationScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000002000009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, EmitterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterName_MetaData), NewProp_EmitterName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, SelectionMethod), Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMethod_MetaData), NewProp_SelectionMethod_MetaData) }; // 1780835915
void Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_SetBit(void* Obj)
{
	((UParticleModuleLocationEmitter*)Obj)->InheritSourceVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity = { "InheritSourceVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationEmitter), &Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritSourceVelocity_MetaData), NewProp_InheritSourceVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale = { "InheritSourceVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, InheritSourceVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritSourceVelocityScale_MetaData), NewProp_InheritSourceVelocityScale_MetaData) };
void Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_SetBit(void* Obj)
{
	((UParticleModuleLocationEmitter*)Obj)->bInheritSourceRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation = { "bInheritSourceRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleLocationEmitter), &Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritSourceRotation_MetaData), NewProp_bInheritSourceRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale = { "InheritSourceRotationScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, InheritSourceRotationScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritSourceRotationScale_MetaData), NewProp_InheritSourceRotationScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::ClassParams = {
	&UParticleModuleLocationEmitter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLocationEmitter()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLocationEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationEmitter.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLocationEmitter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationEmitter>()
{
	return UParticleModuleLocationEmitter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationEmitter);
UParticleModuleLocationEmitter::~UParticleModuleLocationEmitter() {}
// End Class UParticleModuleLocationEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocationEmitterSelectionMethod_StaticEnum, TEXT("ELocationEmitterSelectionMethod"), &Z_Registration_Info_UEnum_ELocationEmitterSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1780835915U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationEmitter, UParticleModuleLocationEmitter::StaticClass, TEXT("UParticleModuleLocationEmitter"), &Z_Registration_Info_UClass_UParticleModuleLocationEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationEmitter), 2870378934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_515687171(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
