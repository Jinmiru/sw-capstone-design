// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider_QueryParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider_QueryParams() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAIDataProvider_QueryParams
void UAIDataProvider_QueryParams::StaticRegisterNativesUAIDataProvider_QueryParams()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIDataProvider_QueryParams);
UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister()
{
	return UAIDataProvider_QueryParams::StaticClass();
}
struct Z_Construct_UClass_UAIDataProvider_QueryParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "Comment", "/**\n * AIDataProvider_QueryParams is used with environment queries\n *\n * It allows defining simple parameters for running query,\n * which are not tied to any specific pawn, but defined\n * for every query execution.\n */" },
		{ "DisplayName", "Query Params" },
		{ "IncludePath", "DataProviders/AIDataProvider_QueryParams.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
		{ "ToolTip", "AIDataProvider_QueryParams is used with environment queries\n\nIt allows defining simple parameters for running query,\nwhich are not tied to any specific pawn, but defined\nfor every query execution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Arbitrary name this query parameter will be exposed as to outside world (like BT nodes) */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
		{ "ToolTip", "Arbitrary name this query parameter will be exposed as to outside world (like BT nodes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider_QueryParams>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIDataProvider_QueryParams, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIDataProvider_QueryParams, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIDataProvider_QueryParams, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
void Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((UAIDataProvider_QueryParams*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAIDataProvider_QueryParams), &Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAIDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::ClassParams = {
	&UAIDataProvider_QueryParams::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIDataProvider_QueryParams()
{
	if (!Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton, Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIDataProvider_QueryParams>()
{
	return UAIDataProvider_QueryParams::StaticClass();
}
UAIDataProvider_QueryParams::UAIDataProvider_QueryParams(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider_QueryParams);
UAIDataProvider_QueryParams::~UAIDataProvider_QueryParams() {}
// End Class UAIDataProvider_QueryParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIDataProvider_QueryParams, UAIDataProvider_QueryParams::StaticClass, TEXT("UAIDataProvider_QueryParams"), &Z_Registration_Info_UClass_UAIDataProvider_QueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIDataProvider_QueryParams), 2249988835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_1180284050(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
