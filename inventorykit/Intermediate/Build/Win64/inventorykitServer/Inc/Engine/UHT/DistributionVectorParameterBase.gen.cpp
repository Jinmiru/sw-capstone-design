// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVectorParameterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorParameterBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionVectorParameterBase
void UDistributionVectorParameterBase::StaticRegisterNativesUDistributionVectorParameterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVectorParameterBase);
UClass* Z_Construct_UClass_UDistributionVectorParameterBase_NoRegister()
{
	return UDistributionVectorParameterBase::StaticClass();
}
struct Z_Construct_UClass_UDistributionVectorParameterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorParameterBase.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamModes_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinOutput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxOutput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamModes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorParameterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinInput = { "MinInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MinInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInput_MetaData), NewProp_MinInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxInput = { "MaxInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MaxInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInput_MetaData), NewProp_MaxInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinOutput = { "MinOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MinOutput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinOutput_MetaData), NewProp_MinOutput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxOutput = { "MaxOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MaxOutput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOutput_MetaData), NewProp_MaxOutput_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParamModes = { "ParamModes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ParamModes, UDistributionVectorParameterBase), STRUCT_OFFSET(UDistributionVectorParameterBase, ParamModes), Z_Construct_UEnum_Engine_DistributionParamMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamModes_MetaData), NewProp_ParamModes_MetaData) }; // 1310560534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorParameterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParamModes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionVectorParameterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionVectorConstant,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::ClassParams = {
	&UDistributionVectorParameterBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionVectorParameterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::PropPointers),
	0,
	0x002830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionVectorParameterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionVectorParameterBase()
{
	if (!Z_Registration_Info_UClass_UDistributionVectorParameterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVectorParameterBase.OuterSingleton, Z_Construct_UClass_UDistributionVectorParameterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionVectorParameterBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionVectorParameterBase>()
{
	return UDistributionVectorParameterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorParameterBase);
UDistributionVectorParameterBase::~UDistributionVectorParameterBase() {}
// End Class UDistributionVectorParameterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVectorParameterBase, UDistributionVectorParameterBase::StaticClass, TEXT("UDistributionVectorParameterBase"), &Z_Registration_Info_UClass_UDistributionVectorParameterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVectorParameterBase), 1929812001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_89315026(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
