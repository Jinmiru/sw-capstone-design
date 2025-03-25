// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeScale.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScale() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSizeScale
void UParticleModuleSizeScale::StaticRegisterNativesUParticleModuleSizeScale()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSizeScale);
UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister()
{
	return UParticleModuleSizeScale::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSizeScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Size Scale" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeScale.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/**\n\x09 *\x09The amount the BaseSize should be scaled before being used as the size of the particle. \n\x09 *\x09The value is retrieved using the RelativeTime of the particle during its update.\n\x09 *\x09NOTE: this module overrides any size adjustments made prior to this module in that frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "The amount the BaseSize should be scaled before being used as the size of the particle.\nThe value is retrieved using the RelativeTime of the particle during its update.\nNOTE: this module overrides any size adjustments made prior to this module in that frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableX_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableY_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableZ_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeScale;
	static void NewProp_EnableX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableX;
	static void NewProp_EnableY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableY;
	static void NewProp_EnableZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeScale>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale = { "SizeScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSizeScale, SizeScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeScale_MetaData), NewProp_SizeScale_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_SetBit(void* Obj)
{
	((UParticleModuleSizeScale*)Obj)->EnableX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX = { "EnableX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableX_MetaData), NewProp_EnableX_MetaData) };
void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_SetBit(void* Obj)
{
	((UParticleModuleSizeScale*)Obj)->EnableY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY = { "EnableY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableY_MetaData), NewProp_EnableY_MetaData) };
void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_SetBit(void* Obj)
{
	((UParticleModuleSizeScale*)Obj)->EnableZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ = { "EnableZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableZ_MetaData), NewProp_EnableZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSizeScale_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::ClassParams = {
	&UParticleModuleSizeScale::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSizeScale()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSizeScale.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSizeScale.OuterSingleton, Z_Construct_UClass_UParticleModuleSizeScale_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSizeScale.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeScale>()
{
	return UParticleModuleSizeScale::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScale);
UParticleModuleSizeScale::~UParticleModuleSizeScale() {}
// End Class UParticleModuleSizeScale

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSizeScale, UParticleModuleSizeScale::StaticClass, TEXT("UParticleModuleSizeScale"), &Z_Registration_Info_UClass_UParticleModuleSizeScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSizeScale), 1083427379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_996746722(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
