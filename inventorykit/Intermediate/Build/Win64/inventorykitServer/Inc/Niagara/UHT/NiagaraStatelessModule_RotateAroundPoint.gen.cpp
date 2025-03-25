// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_RotateAroundPoint() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_RotateAroundPoint
void UNiagaraStatelessModule_RotateAroundPoint::StaticRegisterNativesUNiagaraStatelessModule_RotateAroundPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_RotateAroundPoint);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_NoRegister()
{
	return UNiagaraStatelessModule_RotateAroundPoint::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Rotate Around Point" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateMin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateMax_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPhaseMin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPhaseMax_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_RotateAroundPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialPhaseMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialPhaseMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_RotateAroundPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RateMin = { "RateMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_RotateAroundPoint, RateMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateMin_MetaData), NewProp_RateMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RateMax = { "RateMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_RotateAroundPoint, RateMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateMax_MetaData), NewProp_RateMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RadiusMin = { "RadiusMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_RotateAroundPoint, RadiusMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusMin_MetaData), NewProp_RadiusMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RadiusMax = { "RadiusMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_RotateAroundPoint, RadiusMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusMax_MetaData), NewProp_RadiusMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_InitialPhaseMin = { "InitialPhaseMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_RotateAroundPoint, InitialPhaseMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPhaseMin_MetaData), NewProp_InitialPhaseMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_InitialPhaseMax = { "InitialPhaseMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_RotateAroundPoint, InitialPhaseMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPhaseMax_MetaData), NewProp_InitialPhaseMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RateMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RateMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RadiusMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_RadiusMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_InitialPhaseMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::NewProp_InitialPhaseMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::ClassParams = {
	&UNiagaraStatelessModule_RotateAroundPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_RotateAroundPoint>()
{
	return UNiagaraStatelessModule_RotateAroundPoint::StaticClass();
}
UNiagaraStatelessModule_RotateAroundPoint::UNiagaraStatelessModule_RotateAroundPoint() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_RotateAroundPoint);
UNiagaraStatelessModule_RotateAroundPoint::~UNiagaraStatelessModule_RotateAroundPoint() {}
// End Class UNiagaraStatelessModule_RotateAroundPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_RotateAroundPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint, UNiagaraStatelessModule_RotateAroundPoint::StaticClass, TEXT("UNiagaraStatelessModule_RotateAroundPoint"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_RotateAroundPoint), 862744029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_RotateAroundPoint_h_348233334(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_RotateAroundPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_RotateAroundPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
