// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/CurveEdPresetCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEdPresetCurve() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve();
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDEPRECATED_CurveEdPresetCurve
void UDEPRECATED_CurveEdPresetCurve::StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_CurveEdPresetCurve);
UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister()
{
	return UDEPRECATED_CurveEdPresetCurve::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Curves/CurveEdPresetCurve.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveEdPresetCurve.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_CurveEdPresetCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::ClassParams = {
	&UDEPRECATED_CurveEdPresetCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x020002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton, Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDEPRECATED_CurveEdPresetCurve>()
{
	return UDEPRECATED_CurveEdPresetCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_CurveEdPresetCurve);
UDEPRECATED_CurveEdPresetCurve::~UDEPRECATED_CurveEdPresetCurve() {}
// End Class UDEPRECATED_CurveEdPresetCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve, UDEPRECATED_CurveEdPresetCurve::StaticClass, TEXT("UDEPRECATED_CurveEdPresetCurve"), &Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_CurveEdPresetCurve), 65007727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_3908551626(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
