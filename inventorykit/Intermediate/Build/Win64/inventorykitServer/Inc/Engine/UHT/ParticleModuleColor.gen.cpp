// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Color/ParticleModuleColor.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleColor
void UParticleModuleColor::StaticRegisterNativesUParticleModuleColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleColor);
UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister()
{
	return UParticleModuleColor::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Color" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColor.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Initial color for a particle as a function of Emitter time. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "Initial color for a particle as a function of Emitter time." },
		{ "TreatAsColor", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Initial alpha for a particle as a function of Emitter time. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "Initial alpha for a particle as a function of Emitter time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If true, the alpha value will be clamped to the [0..1] range. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "If true, the alpha value will be clamped to the [0..1] range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartAlpha;
	static void NewProp_bClampAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor = { "StartColor", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleColor, StartColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartColor_MetaData), NewProp_StartColor_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha = { "StartAlpha", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleColor, StartAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAlpha_MetaData), NewProp_StartAlpha_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_SetBit(void* Obj)
{
	((UParticleModuleColor*)Obj)->bClampAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha = { "bClampAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleColor), &Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampAlpha_MetaData), NewProp_bClampAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColor_Statics::ClassParams = {
	&UParticleModuleColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleColor()
{
	if (!Z_Registration_Info_UClass_UParticleModuleColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleColor.OuterSingleton, Z_Construct_UClass_UParticleModuleColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleColor>()
{
	return UParticleModuleColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColor);
UParticleModuleColor::~UParticleModuleColor() {}
// End Class UParticleModuleColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleColor, UParticleModuleColor::StaticClass, TEXT("UParticleModuleColor"), &Z_Registration_Info_UClass_UParticleModuleColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleColor), 616817594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_1124094574(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
