// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationDrag() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAccelerationDrag
void UParticleModuleAccelerationDrag::StaticRegisterNativesUParticleModuleAccelerationDrag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationDrag);
UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister()
{
	return UParticleModuleAccelerationDrag::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Drag" },
		{ "HideCategories", "Object Acceleration Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
		{ "Comment", "/** Per-particle drag coefficient. Evaluted using emitter time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientRaw_MetaData[] = {
		{ "Category", "Drag" },
		{ "Comment", "/** Per-particle drag coefficient. Evaluted using emitter time. */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragCoefficient;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragCoefficientRaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationDrag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficient_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficient_MetaData), NewProp_DragCoefficient_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw = { "DragCoefficientRaw", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficientRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficientRaw_MetaData), NewProp_DragCoefficientRaw_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::ClassParams = {
	&UParticleModuleAccelerationDrag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationDrag>()
{
	return UParticleModuleAccelerationDrag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationDrag);
UParticleModuleAccelerationDrag::~UParticleModuleAccelerationDrag() {}
// End Class UParticleModuleAccelerationDrag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationDrag, UParticleModuleAccelerationDrag::StaticClass, TEXT("UParticleModuleAccelerationDrag"), &Z_Registration_Info_UClass_UParticleModuleAccelerationDrag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationDrag), 3759415070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_2063003711(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
