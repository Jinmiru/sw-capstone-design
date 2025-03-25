// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloatUniform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatUniform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionFloatUniform
void UDistributionFloatUniform::StaticRegisterNativesUDistributionFloatUniform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatUniform);
UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister()
{
	return UDistributionFloatUniform::StaticClass();
}
struct Z_Construct_UClass_UDistributionFloatUniform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatUniform.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "DistributionFloatUniform" },
		{ "Comment", "/** Low end of output float distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
		{ "ToolTip", "Low end of output float distribution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "DistributionFloatUniform" },
		{ "Comment", "/** High end of output float distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
		{ "ToolTip", "High end of output float distribution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatUniform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatUniform, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatUniform, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionFloatUniform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatUniform_Statics::ClassParams = {
	&UDistributionFloatUniform::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers),
	0,
	0x002830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionFloatUniform()
{
	if (!Z_Registration_Info_UClass_UDistributionFloatUniform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatUniform.OuterSingleton, Z_Construct_UClass_UDistributionFloatUniform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionFloatUniform.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionFloatUniform>()
{
	return UDistributionFloatUniform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatUniform);
UDistributionFloatUniform::~UDistributionFloatUniform() {}
// End Class UDistributionFloatUniform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatUniform, UDistributionFloatUniform::StaticClass, TEXT("UDistributionFloatUniform"), &Z_Registration_Info_UClass_UDistributionFloatUniform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatUniform), 3562456489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_3990390594(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
