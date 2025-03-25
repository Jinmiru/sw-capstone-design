// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
ENGINE_API UClass* Z_Construct_UClass_UCurveBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCurveBase Function GetTimeRange
struct Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics
{
	struct CurveBase_eventGetTimeRange_Parms
	{
		float MinTime;
		float MaxTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Get the time range across all curves */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "Get the time range across all curves" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MinTime = { "MinTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveBase_eventGetTimeRange_Parms, MinTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveBase_eventGetTimeRange_Parms, MaxTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MinTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MaxTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveBase, nullptr, "GetTimeRange", nullptr, nullptr, Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::CurveBase_eventGetTimeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::CurveBase_eventGetTimeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveBase_GetTimeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveBase::execGetTimeRange)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTimeRange(Z_Param_Out_MinTime,Z_Param_Out_MaxTime);
	P_NATIVE_END;
}
// End Class UCurveBase Function GetTimeRange

// Begin Class UCurveBase Function GetValueRange
struct Z_Construct_UFunction_UCurveBase_GetValueRange_Statics
{
	struct CurveBase_eventGetValueRange_Parms
	{
		float MinValue;
		float MaxValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Get the value range across all curves */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "Get the value range across all curves" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveBase_eventGetValueRange_Parms, MinValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveBase_eventGetValueRange_Parms, MaxValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveBase, nullptr, "GetValueRange", nullptr, nullptr, Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::CurveBase_eventGetValueRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::CurveBase_eventGetValueRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveBase_GetValueRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveBase::execGetValueRange)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinValue);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetValueRange(Z_Param_Out_MinValue,Z_Param_Out_MaxValue);
	P_NATIVE_END;
}
// End Class UCurveBase Function GetValueRange

// Begin Class UCurveBase
void UCurveBase::StaticRegisterNativesUCurveBase()
{
	UClass* Class = UCurveBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTimeRange", &UCurveBase::execGetTimeRange },
		{ "GetValueRange", &UCurveBase::execGetValueRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveBase);
UClass* Z_Construct_UClass_UCurveBase_NoRegister()
{
	return UCurveBase::StaticClass();
}
struct Z_Construct_UClass_UCurveBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a curve of interpolated points to evaluate over a given range\n */" },
		{ "IncludePath", "Curves/CurveBase.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "Defines a curve of interpolated points to evaluate over a given range" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The filename imported to create this object. Relative to this object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveBase_GetTimeRange, "GetTimeRange" }, // 842193472
		{ &Z_Construct_UFunction_UCurveBase_GetValueRange, "GetValueRange" }, // 356755458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveBase_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveBase, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveBase_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveBase, ImportPath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportPath_MetaData), NewProp_ImportPath_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveBase_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveBase_Statics::NewProp_ImportPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UCurveBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveBase_Statics::ClassParams = {
	&UCurveBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCurveBase_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::PropPointers), 0),
	0,
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveBase()
{
	if (!Z_Registration_Info_UClass_UCurveBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveBase.OuterSingleton, Z_Construct_UClass_UCurveBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCurveBase>()
{
	return UCurveBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveBase);
UCurveBase::~UCurveBase() {}
// End Class UCurveBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveBase, UCurveBase::StaticClass, TEXT("UCurveBase"), &Z_Registration_Info_UClass_UCurveBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveBase), 1962249415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_3788121494(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
