// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVectorUniform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorUniform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniform();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionVectorUniform
void UDistributionVectorUniform::StaticRegisterNativesUDistributionVectorUniform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVectorUniform);
UClass* Z_Construct_UClass_UDistributionVectorUniform_NoRegister()
{
	return UDistributionVectorUniform::StaticClass();
}
struct Z_Construct_UClass_UDistributionVectorUniform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorUniform.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "Comment", "/** Upper end of FVector magnitude range. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
		{ "ToolTip", "Upper end of FVector magnitude range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "Comment", "/** Lower end of FVector magnitude range. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
		{ "ToolTip", "Lower end of FVector magnitude range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockAxes_MetaData[] = {
		{ "Comment", "/** If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorFlags_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExtremes_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static void NewProp_bLockAxes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAxes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockedAxes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorFlags;
	static void NewProp_bUseExtremes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExtremes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorUniform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorUniform, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorUniform, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
void Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes_SetBit(void* Obj)
{
	((UDistributionVectorUniform*)Obj)->bLockAxes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes = { "bLockAxes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVectorUniform), &Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockAxes_MetaData), NewProp_bLockAxes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorUniform, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedAxes_MetaData), NewProp_LockedAxes_MetaData) }; // 2057503009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_MirrorFlags = { "MirrorFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(MirrorFlags, UDistributionVectorUniform), STRUCT_OFFSET(UDistributionVectorUniform, MirrorFlags), Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorFlags_MetaData), NewProp_MirrorFlags_MetaData) }; // 1880704965
void Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes_SetBit(void* Obj)
{
	((UDistributionVectorUniform*)Obj)->bUseExtremes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes = { "bUseExtremes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVectorUniform), &Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExtremes_MetaData), NewProp_bUseExtremes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorUniform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_LockedAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_MirrorFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionVectorUniform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionVector,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorUniform_Statics::ClassParams = {
	&UDistributionVectorUniform::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionVectorUniform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::PropPointers),
	0,
	0x002830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionVectorUniform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionVectorUniform()
{
	if (!Z_Registration_Info_UClass_UDistributionVectorUniform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVectorUniform.OuterSingleton, Z_Construct_UClass_UDistributionVectorUniform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionVectorUniform.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionVectorUniform>()
{
	return UDistributionVectorUniform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorUniform);
UDistributionVectorUniform::~UDistributionVectorUniform() {}
// End Class UDistributionVectorUniform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVectorUniform, UDistributionVectorUniform::StaticClass, TEXT("UDistributionVectorUniform"), &Z_Registration_Info_UClass_UDistributionVectorUniform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVectorUniform), 73747739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_4083746582(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
