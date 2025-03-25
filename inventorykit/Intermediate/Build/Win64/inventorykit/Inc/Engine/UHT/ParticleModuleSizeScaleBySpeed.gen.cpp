// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScaleBySpeed() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSizeScaleBySpeed
void UParticleModuleSizeScaleBySpeed::StaticRegisterNativesUParticleModuleSizeScaleBySpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSizeScaleBySpeed);
UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister()
{
	return UParticleModuleSizeScaleBySpeed::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Size By Speed" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScaleBySpeed" },
		{ "Comment", "/** By how much speed affects the size of the particle in each dimension. */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ToolTip", "By how much speed affects the size of the particle in each dimension." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScaleBySpeed" },
		{ "Comment", "/** The maximum amount by which to scale a particle in each dimension. */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ToolTip", "The maximum amount by which to scale a particle in each dimension." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeScaleBySpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, SpeedScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedScale_MetaData), NewProp_SpeedScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, MaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScale_MetaData), NewProp_MaxScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::ClassParams = {
	&UParticleModuleSizeScaleBySpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.OuterSingleton, Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeScaleBySpeed>()
{
	return UParticleModuleSizeScaleBySpeed::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScaleBySpeed);
UParticleModuleSizeScaleBySpeed::~UParticleModuleSizeScaleBySpeed() {}
// End Class UParticleModuleSizeScaleBySpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSizeScaleBySpeed, UParticleModuleSizeScaleBySpeed::StaticClass, TEXT("UParticleModuleSizeScaleBySpeed"), &Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSizeScaleBySpeed), 2674410083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_1292657618(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
