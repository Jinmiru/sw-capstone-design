// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Color/ParticleModuleColorScaleOverLife.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorScaleOverLife() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleColorScaleOverLife
void UParticleModuleColorScaleOverLife::StaticRegisterNativesUParticleModuleColorScaleOverLife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleColorScaleOverLife);
UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister()
{
	return UParticleModuleColorScaleOverLife::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Scale Color / Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The scale factor for the color.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "The scale factor for the color." },
		{ "TreatAsColor", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The scale factor for the alpha.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "The scale factor for the alpha." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitterTime_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Whether it is EmitterTime or ParticleTime related.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "Whether it is EmitterTime or ParticleTime related." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleOverLife;
	static void NewProp_bEmitterTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitterTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorScaleOverLife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife = { "ColorScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorScaleOverLife_MetaData), NewProp_ColorScaleOverLife_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife = { "AlphaScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, AlphaScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleOverLife_MetaData), NewProp_AlphaScaleOverLife_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_SetBit(void* Obj)
{
	((UParticleModuleColorScaleOverLife*)Obj)->bEmitterTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime = { "bEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleColorScaleOverLife), &Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitterTime_MetaData), NewProp_bEmitterTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::ClassParams = {
	&UParticleModuleColorScaleOverLife::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife()
{
	if (!Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleColorScaleOverLife>()
{
	return UParticleModuleColorScaleOverLife::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorScaleOverLife);
UParticleModuleColorScaleOverLife::~UParticleModuleColorScaleOverLife() {}
// End Class UParticleModuleColorScaleOverLife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleColorScaleOverLife, UParticleModuleColorScaleOverLife::StaticClass, TEXT("UParticleModuleColorScaleOverLife"), &Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleColorScaleOverLife), 2152204928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_1647217389(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
