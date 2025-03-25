// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloatConstantCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatConstantCurve() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionFloatConstantCurve
void UDistributionFloatConstantCurve::StaticRegisterNativesUDistributionFloatConstantCurve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatConstantCurve);
UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister()
{
	return UDistributionFloatConstantCurve::StaticClass();
}
struct Z_Construct_UClass_UDistributionFloatConstantCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatConstantCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstantCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionFloatConstantCurve" },
		{ "Comment", "/** Keyframe data for how output constant varies over time. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstantCurve.h" },
		{ "ToolTip", "Keyframe data for how output constant varies over time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatConstantCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatConstantCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantCurve_MetaData), NewProp_ConstantCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::NewProp_ConstantCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::ClassParams = {
	&UDistributionFloatConstantCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::PropPointers),
	0,
	0x002830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionFloatConstantCurve()
{
	if (!Z_Registration_Info_UClass_UDistributionFloatConstantCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatConstantCurve.OuterSingleton, Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionFloatConstantCurve.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionFloatConstantCurve>()
{
	return UDistributionFloatConstantCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatConstantCurve);
UDistributionFloatConstantCurve::~UDistributionFloatConstantCurve() {}
// End Class UDistributionFloatConstantCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatConstantCurve, UDistributionFloatConstantCurve::StaticClass, TEXT("UDistributionFloatConstantCurve"), &Z_Registration_Info_UClass_UDistributionFloatConstantCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatConstantCurve), 289380168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_1015822584(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
