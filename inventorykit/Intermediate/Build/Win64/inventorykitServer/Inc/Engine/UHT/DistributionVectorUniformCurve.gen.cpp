// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVectorUniformCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorUniformCurve() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveTwoVectors();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniformCurve();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionVectorUniformCurve
void UDistributionVectorUniformCurve::StaticRegisterNativesUDistributionVectorUniformCurve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVectorUniformCurve);
UClass* Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister()
{
	return UDistributionVectorUniformCurve::StaticClass();
}
struct Z_Construct_UClass_UDistributionVectorUniformCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorUniformCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "Comment", "/** Keyframe data for how output constant varies over time. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
		{ "ToolTip", "Keyframe data for how output constant varies over time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockAxes1_MetaData[] = {
		{ "Comment", "/** If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockAxes2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorFlags_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExtremes_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
	static void NewProp_bLockAxes1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAxes1;
	static void NewProp_bLockAxes2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAxes2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockedAxes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorFlags;
	static void NewProp_bUseExtremes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExtremes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorUniformCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorUniformCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveTwoVectors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantCurve_MetaData), NewProp_ConstantCurve_MetaData) };
void Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1_SetBit(void* Obj)
{
	((UDistributionVectorUniformCurve*)Obj)->bLockAxes1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1 = { "bLockAxes1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVectorUniformCurve), &Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockAxes1_MetaData), NewProp_bLockAxes1_MetaData) };
void Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2_SetBit(void* Obj)
{
	((UDistributionVectorUniformCurve*)Obj)->bLockAxes2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2 = { "bLockAxes2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVectorUniformCurve), &Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockAxes2_MetaData), NewProp_bLockAxes2_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LockedAxes, UDistributionVectorUniformCurve), STRUCT_OFFSET(UDistributionVectorUniformCurve, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedAxes_MetaData), NewProp_LockedAxes_MetaData) }; // 2057503009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_MirrorFlags = { "MirrorFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(MirrorFlags, UDistributionVectorUniformCurve), STRUCT_OFFSET(UDistributionVectorUniformCurve, MirrorFlags), Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorFlags_MetaData), NewProp_MirrorFlags_MetaData) }; // 1880704965
void Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes_SetBit(void* Obj)
{
	((UDistributionVectorUniformCurve*)Obj)->bUseExtremes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes = { "bUseExtremes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVectorUniformCurve), &Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExtremes_MetaData), NewProp_bUseExtremes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_ConstantCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_LockedAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_MirrorFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionVector,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::ClassParams = {
	&UDistributionVectorUniformCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::PropPointers),
	0,
	0x002830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionVectorUniformCurve()
{
	if (!Z_Registration_Info_UClass_UDistributionVectorUniformCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVectorUniformCurve.OuterSingleton, Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionVectorUniformCurve.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionVectorUniformCurve>()
{
	return UDistributionVectorUniformCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorUniformCurve);
UDistributionVectorUniformCurve::~UDistributionVectorUniformCurve() {}
// End Class UDistributionVectorUniformCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVectorUniformCurve, UDistributionVectorUniformCurve::StaticClass, TEXT("UDistributionVectorUniformCurve"), &Z_Registration_Info_UClass_UDistributionVectorUniformCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVectorUniformCurve), 2830939067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_138223094(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
