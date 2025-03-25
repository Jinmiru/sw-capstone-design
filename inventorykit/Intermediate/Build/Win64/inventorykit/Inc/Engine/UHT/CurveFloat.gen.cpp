// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveFloat() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRuntimeFloatCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeFloatCurve;
class UScriptStruct* FRuntimeFloatCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeFloatCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeFloatCurve"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeFloatCurve>()
{
	return FRuntimeFloatCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorCurveData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[] = {
		{ "Category", "RuntimeFloatCurve" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorCurveData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeFloatCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData = { "EditorCurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeFloatCurve, EditorCurveData), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorCurveData_MetaData), NewProp_EditorCurveData_MetaData) }; // 1340883375
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve = { "ExternalCurve", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeFloatCurve, ExternalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalCurve_MetaData), NewProp_ExternalCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RuntimeFloatCurve",
	Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers),
	sizeof(FRuntimeFloatCurve),
	alignof(FRuntimeFloatCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.InnerSingleton;
}
// End ScriptStruct FRuntimeFloatCurve

// Begin Class UCurveFloat Function GetFloatValue
struct Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics
{
	struct CurveFloat_eventGetFloatValue_Parms
	{
		float InTime;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveFloat, nullptr, "GetFloatValue", nullptr, nullptr, Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::CurveFloat_eventGetFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::CurveFloat_eventGetFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveFloat_GetFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveFloat::execGetFloatValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class UCurveFloat Function GetFloatValue

// Begin Class UCurveFloat
void UCurveFloat::StaticRegisterNativesUCurveFloat()
{
	UClass* Class = UCurveFloat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFloatValue", &UCurveFloat::execGetFloatValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveFloat);
UClass* Z_Construct_UClass_UCurveFloat_NoRegister()
{
	return UCurveFloat::StaticClass();
}
struct Z_Construct_UClass_UCurveFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Curves/CurveFloat.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Keyframe data */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Keyframe data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEventCurve_MetaData[] = {
		{ "Comment", "/** Flag to represent event curve */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Flag to represent event curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
	static void NewProp_bIsEventCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEventCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveFloat_GetFloatValue, "GetFloatValue" }, // 3732320887
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveFloat, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) }; // 1340883375
void Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_SetBit(void* Obj)
{
	((UCurveFloat*)Obj)->bIsEventCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve = { "bIsEventCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCurveFloat), &Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEventCurve_MetaData), NewProp_bIsEventCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveFloat_Statics::ClassParams = {
	&UCurveFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCurveFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveFloat()
{
	if (!Z_Registration_Info_UClass_UCurveFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveFloat.OuterSingleton, Z_Construct_UClass_UCurveFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveFloat.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCurveFloat>()
{
	return UCurveFloat::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFloat);
UCurveFloat::~UCurveFloat() {}
// End Class UCurveFloat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRuntimeFloatCurve::StaticStruct, Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewStructOps, TEXT("RuntimeFloatCurve"), &Z_Registration_Info_UScriptStruct_RuntimeFloatCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeFloatCurve), 762678829U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveFloat, UCurveFloat::StaticClass, TEXT("UCurveFloat"), &Z_Registration_Info_UClass_UCurveFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveFloat), 986519450U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_3579732910(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
