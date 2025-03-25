// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloatParameterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatParameterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionFloatParameterBase
void UDistributionFloatParameterBase::StaticRegisterNativesUDistributionFloatParameterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatParameterBase);
UClass* Z_Construct_UClass_UDistributionFloatParameterBase_NoRegister()
{
	return UDistributionFloatParameterBase::StaticClass();
}
struct Z_Construct_UClass_UDistributionFloatParameterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatParameterBase.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "Comment", "/** todo document */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "Comment", "/** todo document */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "Comment", "/** todo document */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "Comment", "/** todo document */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "Comment", "/** todo document */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamMode_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "Comment", "/** todo document */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinOutput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOutput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatParameterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatParameterBase, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinInput = { "MinInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatParameterBase, MinInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInput_MetaData), NewProp_MinInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxInput = { "MaxInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatParameterBase, MaxInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInput_MetaData), NewProp_MaxInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinOutput = { "MinOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatParameterBase, MinOutput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinOutput_MetaData), NewProp_MinOutput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxOutput = { "MaxOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatParameterBase, MaxOutput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOutput_MetaData), NewProp_MaxOutput_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParamMode = { "ParamMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatParameterBase, ParamMode), Z_Construct_UEnum_Engine_DistributionParamMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamMode_MetaData), NewProp_ParamMode_MetaData) }; // 1310560534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatParameterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParamMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionFloatParameterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionFloatConstant,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::ClassParams = {
	&UDistributionFloatParameterBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionFloatParameterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::PropPointers),
	0,
	0x002830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionFloatParameterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionFloatParameterBase()
{
	if (!Z_Registration_Info_UClass_UDistributionFloatParameterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatParameterBase.OuterSingleton, Z_Construct_UClass_UDistributionFloatParameterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionFloatParameterBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionFloatParameterBase>()
{
	return UDistributionFloatParameterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatParameterBase);
UDistributionFloatParameterBase::~UDistributionFloatParameterBase() {}
// End Class UDistributionFloatParameterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatParameterBase, UDistributionFloatParameterBase::StaticClass, TEXT("UDistributionFloatParameterBase"), &Z_Registration_Info_UClass_UDistributionFloatParameterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatParameterBase), 551753454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_3517952667(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
