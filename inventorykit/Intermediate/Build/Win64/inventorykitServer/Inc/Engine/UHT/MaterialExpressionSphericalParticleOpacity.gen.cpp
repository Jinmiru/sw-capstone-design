// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSphericalParticleOpacity.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphericalParticleOpacity() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSphericalParticleOpacity
void UMaterialExpressionSphericalParticleOpacity::StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSphericalParticleOpacity);
UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister()
{
	return UMaterialExpressionSphericalParticleOpacity::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstantDensity' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantDensity_MetaData[] = {
		{ "Category", "MaterialExpressionSphericalParticleOpacity" },
		{ "Comment", "/** Constant density of the particle sphere.  Will be overridden if Density is connected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "OverridingInputProperty", "Density" },
		{ "ToolTip", "Constant density of the particle sphere.  Will be overridden if Density is connected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSphericalParticleOpacity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, Density), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity = { "ConstantDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, ConstantDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantDensity_MetaData), NewProp_ConstantDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::ClassParams = {
	&UMaterialExpressionSphericalParticleOpacity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSphericalParticleOpacity>()
{
	return UMaterialExpressionSphericalParticleOpacity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphericalParticleOpacity);
UMaterialExpressionSphericalParticleOpacity::~UMaterialExpressionSphericalParticleOpacity() {}
// End Class UMaterialExpressionSphericalParticleOpacity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity, UMaterialExpressionSphericalParticleOpacity::StaticClass, TEXT("UMaterialExpressionSphericalParticleOpacity"), &Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSphericalParticleOpacity), 3598163219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_2036386840(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
