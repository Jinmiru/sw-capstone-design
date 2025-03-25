// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldGlobal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVectorFieldGlobal
void UParticleModuleVectorFieldGlobal::StaticRegisterNativesUParticleModuleVectorFieldGlobal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldGlobal);
UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister()
{
	return UParticleModuleVectorFieldGlobal::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Global Vector Fields" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalVectorFieldTightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Property override value for global vector field tightness.  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Property override value for global vector field tightness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Global vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Global vector field scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Global vector field tightness override. */" },
		{ "editcondition", "bOverrideGlobalVectorFieldTightness" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Global vector field tightness override." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideGlobalVectorFieldTightness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalVectorFieldTightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldGlobal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_SetBit(void* Obj)
{
	((UParticleModuleVectorFieldGlobal*)Obj)->bOverrideGlobalVectorFieldTightness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness = { "bOverrideGlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleVectorFieldGlobal), &Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGlobalVectorFieldTightness_MetaData), NewProp_bOverrideGlobalVectorFieldTightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale = { "GlobalVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVectorFieldScale_MetaData), NewProp_GlobalVectorFieldScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness = { "GlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldTightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVectorFieldTightness_MetaData), NewProp_GlobalVectorFieldTightness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::ClassParams = {
	&UParticleModuleVectorFieldGlobal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldGlobal>()
{
	return UParticleModuleVectorFieldGlobal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldGlobal);
UParticleModuleVectorFieldGlobal::~UParticleModuleVectorFieldGlobal() {}
// End Class UParticleModuleVectorFieldGlobal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldGlobal, UParticleModuleVectorFieldGlobal::StaticClass, TEXT("UParticleModuleVectorFieldGlobal"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldGlobal), 2260153287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_190918080(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
