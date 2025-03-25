// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Size/ParticleModuleSize.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSize() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSize();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSize_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSize
void UParticleModuleSize::StaticRegisterNativesUParticleModuleSize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSize);
UClass* Z_Construct_UClass_UParticleModuleSize_NoRegister()
{
	return UParticleModuleSize::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Size" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSize.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSize_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/**\n\x09 *\x09The initial size that should be used for a particle.\n\x09 *\x09The value is retrieved using the EmitterTime during the spawn of a particle.\n\x09 *\x09It is added to the Size and BaseSize fields of the spawning particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSize.h" },
		{ "ToolTip", "The initial size that should be used for a particle.\nThe value is retrieved using the EmitterTime during the spawn of a particle.\nIt is added to the Size and BaseSize fields of the spawning particle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSize_Statics::NewProp_StartSize = { "StartSize", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSize, StartSize), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSize_MetaData), NewProp_StartSize_MetaData) }; // 1238237137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSize_Statics::NewProp_StartSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSize_Statics::ClassParams = {
	&UParticleModuleSize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSize_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSize_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSize()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSize.OuterSingleton, Z_Construct_UClass_UParticleModuleSize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSize.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSize>()
{
	return UParticleModuleSize::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSize);
UParticleModuleSize::~UParticleModuleSize() {}
// End Class UParticleModuleSize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSize, UParticleModuleSize::StaticClass, TEXT("UParticleModuleSize"), &Z_Registration_Info_UClass_UParticleModuleSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSize), 2550686566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_1790447194(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
