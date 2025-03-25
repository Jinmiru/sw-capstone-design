// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeMultiplyLife() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSizeMultiplyLife
void UParticleModuleSizeMultiplyLife::StaticRegisterNativesUParticleModuleSizeMultiplyLife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSizeMultiplyLife);
UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister()
{
	return UParticleModuleSizeMultiplyLife::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Size By Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/**\n\x09 *\x09The scale factor for the size that should be used for a particle.\n\x09 *\x09The value is retrieved using the RelativeTime of the particle during its update.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "The scale factor for the size that should be used for a particle.\nThe value is retrieved using the RelativeTime of the particle during its update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyX_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** \n\x09 *\x09If true, the X-component of the scale factor will be applied to the particle size X-component.\n\x09 *\x09If false, the X-component is left unaltered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the X-component of the scale factor will be applied to the particle size X-component.\nIf false, the X-component is left unaltered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyY_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** \n\x09 *\x09If true, the Y-component of the scale factor will be applied to the particle size Y-component.\n\x09 *\x09If false, the Y-component is left unaltered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the Y-component of the scale factor will be applied to the particle size Y-component.\nIf false, the Y-component is left unaltered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyZ_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** \n\x09 *\x09If true, the Z-component of the scale factor will be applied to the particle size Z-component.\n\x09 *\x09If false, the Z-component is left unaltered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the Z-component of the scale factor will be applied to the particle size Z-component.\nIf false, the Z-component is left unaltered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier;
	static void NewProp_MultiplyX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiplyX;
	static void NewProp_MultiplyY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiplyY;
	static void NewProp_MultiplyZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiplyZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeMultiplyLife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier = { "LifeMultiplier", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSizeMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeMultiplier_MetaData), NewProp_LifeMultiplier_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_SetBit(void* Obj)
{
	((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX = { "MultiplyX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplyX_MetaData), NewProp_MultiplyX_MetaData) };
void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_SetBit(void* Obj)
{
	((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY = { "MultiplyY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplyY_MetaData), NewProp_MultiplyY_MetaData) };
void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_SetBit(void* Obj)
{
	((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ = { "MultiplyZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplyZ_MetaData), NewProp_MultiplyZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::ClassParams = {
	&UParticleModuleSizeMultiplyLife::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.OuterSingleton, Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeMultiplyLife>()
{
	return UParticleModuleSizeMultiplyLife::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeMultiplyLife);
UParticleModuleSizeMultiplyLife::~UParticleModuleSizeMultiplyLife() {}
// End Class UParticleModuleSizeMultiplyLife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSizeMultiplyLife, UParticleModuleSizeMultiplyLife::StaticClass, TEXT("UParticleModuleSizeMultiplyLife"), &Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSizeMultiplyLife), 3865688114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_1812944329(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
