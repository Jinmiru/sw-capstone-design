// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationDragScaleOverLife() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAccelerationDragScaleOverLife
void UParticleModuleAccelerationDragScaleOverLife::StaticRegisterNativesUParticleModuleAccelerationDragScaleOverLife()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationDragScaleOverLife);
UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_NoRegister()
{
	return UParticleModuleAccelerationDragScaleOverLife::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Drag Scale/Life" },
		{ "HideCategories", "UObject Acceleration Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragScale_MetaData[] = {
		{ "Comment", "/** Per-particle drag scale. Evaluted using particle relative time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
		{ "ToolTip", "Per-particle drag scale. Evaluted using particle relative time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragScaleRaw_MetaData[] = {
		{ "Category", "Drag" },
		{ "Comment", "/** Per-particle drag scale. Evaluted using particle relative time. */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
		{ "ToolTip", "Per-particle drag scale. Evaluted using particle relative time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragScaleRaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationDragScaleOverLife>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScale = { "DragScale", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAccelerationDragScaleOverLife, DragScale_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragScale_MetaData), NewProp_DragScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScaleRaw = { "DragScaleRaw", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAccelerationDragScaleOverLife, DragScaleRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragScaleRaw_MetaData), NewProp_DragScaleRaw_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScaleRaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::ClassParams = {
	&UParticleModuleAccelerationDragScaleOverLife::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAccelerationDragScaleOverLife.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationDragScaleOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAccelerationDragScaleOverLife.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationDragScaleOverLife>()
{
	return UParticleModuleAccelerationDragScaleOverLife::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationDragScaleOverLife);
UParticleModuleAccelerationDragScaleOverLife::~UParticleModuleAccelerationDragScaleOverLife() {}
// End Class UParticleModuleAccelerationDragScaleOverLife

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDragScaleOverLife_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife, UParticleModuleAccelerationDragScaleOverLife::StaticClass, TEXT("UParticleModuleAccelerationDragScaleOverLife"), &Z_Registration_Info_UClass_UParticleModuleAccelerationDragScaleOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationDragScaleOverLife), 3852521242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDragScaleOverLife_h_1263493848(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDragScaleOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDragScaleOverLife_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
