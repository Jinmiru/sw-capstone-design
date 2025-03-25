// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloatUniformCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatUniformCurve() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector2D();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniformCurve();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionFloatUniformCurve
void UDistributionFloatUniformCurve::StaticRegisterNativesUDistributionFloatUniformCurve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatUniformCurve);
UClass* Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister()
{
	return UDistributionFloatUniformCurve::StaticClass();
}
struct Z_Construct_UClass_UDistributionFloatUniformCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatUniformCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniformCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionFloatUniformCurve" },
		{ "Comment", "/** Keyframe data for how output constant varies over time. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniformCurve.h" },
		{ "ToolTip", "Keyframe data for how output constant varies over time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatUniformCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatUniformCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantCurve_MetaData), NewProp_ConstantCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::ClassParams = {
	&UDistributionFloatUniformCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers),
	0,
	0x002830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionFloatUniformCurve()
{
	if (!Z_Registration_Info_UClass_UDistributionFloatUniformCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatUniformCurve.OuterSingleton, Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionFloatUniformCurve.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionFloatUniformCurve>()
{
	return UDistributionFloatUniformCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatUniformCurve);
UDistributionFloatUniformCurve::~UDistributionFloatUniformCurve() {}
// End Class UDistributionFloatUniformCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatUniformCurve, UDistributionFloatUniformCurve::StaticClass, TEXT("UDistributionFloatUniformCurve"), &Z_Registration_Info_UClass_UDistributionFloatUniformCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatUniformCurve), 2136252686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_3101851420(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
