// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Camera/ParticleModuleCameraOffset.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraOffset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EParticleCameraOffsetUpdateMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod;
static UEnum* EParticleCameraOffsetUpdateMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCameraOffsetUpdateMethod"));
	}
	return Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EParticleCameraOffsetUpdateMethod>()
{
	return EParticleCameraOffsetUpdateMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09The update method for the offset\n */" },
		{ "EPCOUM_Additive.DisplayName", "Additive" },
		{ "EPCOUM_Additive.Name", "EPCOUM_Additive" },
		{ "EPCOUM_DirectSet.DisplayName", "Direct Set" },
		{ "EPCOUM_DirectSet.Name", "EPCOUM_DirectSet" },
		{ "EPCOUM_MAX.Name", "EPCOUM_MAX" },
		{ "EPCOUM_Scalar.DisplayName", "Scalar" },
		{ "EPCOUM_Scalar.Name", "EPCOUM_Scalar" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "The update method for the offset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCOUM_DirectSet", (int64)EPCOUM_DirectSet },
		{ "EPCOUM_Additive", (int64)EPCOUM_Additive },
		{ "EPCOUM_Scalar", (int64)EPCOUM_Scalar },
		{ "EPCOUM_MAX", (int64)EPCOUM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EParticleCameraOffsetUpdateMethod",
	"EParticleCameraOffsetUpdateMethod",
	Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod()
{
	if (!Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.InnerSingleton, Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.InnerSingleton;
}
// End Enum EParticleCameraOffsetUpdateMethod

// Begin Class UParticleModuleCameraOffset
void UParticleModuleCameraOffset::StaticRegisterNativesUParticleModuleCameraOffset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleCameraOffset);
UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister()
{
	return UParticleModuleCameraOffset::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleCameraOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Camera Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** \n\x09 *\x09The camera-relative offset to apply to sprite location\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "The camera-relative offset to apply to sprite location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If true, the offset will only be processed at spawn time */" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "If true, the offset will only be processed at spawn time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * How to update the offset for this module.\n\x09 * DirectSet - Set the value directly (overwrite any previous setting)\n\x09 * Additive  - Add the offset of this module to the existing offset\n\x09 * Scalar    - Scale the existing offset by the value of this module\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "How to update the offset for this module.\nDirectSet - Set the value directly (overwrite any previous setting)\nAdditive  - Add the offset of this module to the existing offset\nScalar    - Scale the existing offset by the value of this module" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffset;
	static void NewProp_bSpawnTimeOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCameraOffset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCameraOffset, CameraOffset), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraOffset_MetaData), NewProp_CameraOffset_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit(void* Obj)
{
	((UParticleModuleCameraOffset*)Obj)->bSpawnTimeOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly = { "bSpawnTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCameraOffset), &Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnTimeOnly_MetaData), NewProp_bSpawnTimeOnly_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod = { "UpdateMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCameraOffset, UpdateMethod), Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateMethod_MetaData), NewProp_UpdateMethod_MetaData) }; // 672159136
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleCameraBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams = {
	&UParticleModuleCameraOffset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleCameraOffset()
{
	if (!Z_Registration_Info_UClass_UParticleModuleCameraOffset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleCameraOffset.OuterSingleton, Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleCameraOffset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleCameraOffset>()
{
	return UParticleModuleCameraOffset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraOffset);
UParticleModuleCameraOffset::~UParticleModuleCameraOffset() {}
// End Class UParticleModuleCameraOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EParticleCameraOffsetUpdateMethod_StaticEnum, TEXT("EParticleCameraOffsetUpdateMethod"), &Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 672159136U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleCameraOffset, UParticleModuleCameraOffset::StaticClass, TEXT("UParticleModuleCameraOffset"), &Z_Registration_Info_UClass_UParticleModuleCameraOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleCameraOffset), 662386769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_525955285(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
