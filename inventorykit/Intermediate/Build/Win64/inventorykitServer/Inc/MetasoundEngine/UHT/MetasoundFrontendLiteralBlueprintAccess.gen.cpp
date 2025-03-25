// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundFrontendLiteralBlueprintAccess.h"
#include "MetasoundFrontend/Public/MetasoundFrontendLiteral.h"
#include "Runtime/AudioExtensions/Public/AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundFrontendLiteralBlueprintAccess() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_NoRegister();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendLiteral();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateBoolArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolArrayMetaSoundLiteral_Parms
	{
		TArray<bool> Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Bool Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bool Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateBoolArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateBoolArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateBoolArrayMetaSoundLiteral(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateBoolArrayMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateBoolMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolMetaSoundLiteral_Parms
	{
		bool Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Bool Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bool Literal" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolMetaSoundLiteral_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolMetaSoundLiteral_Parms), &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateBoolMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateBoolMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateBoolMetaSoundLiteral)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateBoolMetaSoundLiteral(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateBoolMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateFloatArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatArrayMetaSoundLiteral_Parms
	{
		TArray<float> Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Float Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Float Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateFloatArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateFloatArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateFloatArrayMetaSoundLiteral(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateFloatArrayMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateFloatMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatMetaSoundLiteral_Parms
	{
		float Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Float Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Float Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatMetaSoundLiteral_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateFloatMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateFloatMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateFloatMetaSoundLiteral)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateFloatMetaSoundLiteral(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateFloatMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateIntArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateIntArrayMetaSoundLiteral_Parms
	{
		TArray<int32> Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Int Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Int32 Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateIntArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateIntArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateIntArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateIntArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateIntArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateIntArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateIntArrayMetaSoundLiteral(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateIntArrayMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateIntMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateIntMetaSoundLiteral_Parms
	{
		int32 Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Int Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Int32 Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateIntMetaSoundLiteral_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateIntMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateIntMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateIntMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateIntMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateIntMetaSoundLiteral)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateIntMetaSoundLiteral(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateIntMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateMetaSoundLiteralFromParam
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateMetaSoundLiteralFromParam_Parms
	{
		FAudioParameter Param;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Literal From AudioParameter" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Param Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Param;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateMetaSoundLiteralFromParam_Parms, Param), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_MetaData), NewProp_Param_MetaData) }; // 2092353974
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateMetaSoundLiteralFromParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateMetaSoundLiteralFromParam", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateMetaSoundLiteralFromParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateMetaSoundLiteralFromParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromParam)
{
	P_GET_STRUCT_REF(FAudioParameter,Z_Param_Out_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromParam(Z_Param_Out_Param);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateMetaSoundLiteralFromParam

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateObjectArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectArrayMetaSoundLiteral_Parms
	{
		TArray<UObject*> Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Object Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Object Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateObjectArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateObjectArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateObjectArrayMetaSoundLiteral(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateObjectArrayMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateObjectMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectMetaSoundLiteral_Parms
	{
		UObject* Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound Object Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Object Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectMetaSoundLiteral_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateObjectMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateObjectMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateObjectMetaSoundLiteral)
{
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateObjectMetaSoundLiteral(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateObjectMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateStringArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateStringArrayMetaSoundLiteral_Parms
	{
		TArray<FString> Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound String Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateStringArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateStringArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateStringArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateStringArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateStringArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateStringArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateStringArrayMetaSoundLiteral(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateStringArrayMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess Function CreateStringMetaSoundLiteral
struct Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics
{
	struct MetasoundFrontendLiteralBlueprintAccess_eventCreateStringMetaSoundLiteral_Parms
	{
		FString Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound" },
		{ "DisplayName", "Create MetaSound String Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateStringMetaSoundLiteral_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundFrontendLiteralBlueprintAccess_eventCreateStringMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, nullptr, "CreateStringMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateStringMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::MetasoundFrontendLiteralBlueprintAccess_eventCreateStringMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundFrontendLiteralBlueprintAccess::execCreateStringMetaSoundLiteral)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=UMetasoundFrontendLiteralBlueprintAccess::CreateStringMetaSoundLiteral(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMetasoundFrontendLiteralBlueprintAccess Function CreateStringMetaSoundLiteral

// Begin Class UMetasoundFrontendLiteralBlueprintAccess
void UMetasoundFrontendLiteralBlueprintAccess::StaticRegisterNativesUMetasoundFrontendLiteralBlueprintAccess()
{
	UClass* Class = UMetasoundFrontendLiteralBlueprintAccess::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBoolArrayMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateBoolArrayMetaSoundLiteral },
		{ "CreateBoolMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateBoolMetaSoundLiteral },
		{ "CreateFloatArrayMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateFloatArrayMetaSoundLiteral },
		{ "CreateFloatMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateFloatMetaSoundLiteral },
		{ "CreateIntArrayMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateIntArrayMetaSoundLiteral },
		{ "CreateIntMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateIntMetaSoundLiteral },
		{ "CreateMetaSoundLiteralFromParam", &UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromParam },
		{ "CreateObjectArrayMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateObjectArrayMetaSoundLiteral },
		{ "CreateObjectMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateObjectMetaSoundLiteral },
		{ "CreateStringArrayMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateStringArrayMetaSoundLiteral },
		{ "CreateStringMetaSoundLiteral", &UMetasoundFrontendLiteralBlueprintAccess::execCreateStringMetaSoundLiteral },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundFrontendLiteralBlueprintAccess);
UClass* Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_NoRegister()
{
	return UMetasoundFrontendLiteralBlueprintAccess::StaticClass();
}
struct Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint support for FMetasoundFrontendLiteral\n */" },
		{ "IncludePath", "MetasoundFrontendLiteralBlueprintAccess.h" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteralBlueprintAccess.h" },
		{ "ToolTip", "Blueprint support for FMetasoundFrontendLiteral" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolArrayMetaSoundLiteral, "CreateBoolArrayMetaSoundLiteral" }, // 3735045679
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateBoolMetaSoundLiteral, "CreateBoolMetaSoundLiteral" }, // 2669851385
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatArrayMetaSoundLiteral, "CreateFloatArrayMetaSoundLiteral" }, // 4078749071
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateFloatMetaSoundLiteral, "CreateFloatMetaSoundLiteral" }, // 1958804798
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntArrayMetaSoundLiteral, "CreateIntArrayMetaSoundLiteral" }, // 3614595879
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateIntMetaSoundLiteral, "CreateIntMetaSoundLiteral" }, // 2170604587
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateMetaSoundLiteralFromParam, "CreateMetaSoundLiteralFromParam" }, // 28257168
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectArrayMetaSoundLiteral, "CreateObjectArrayMetaSoundLiteral" }, // 2968339441
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateObjectMetaSoundLiteral, "CreateObjectMetaSoundLiteral" }, // 2791497989
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringArrayMetaSoundLiteral, "CreateStringArrayMetaSoundLiteral" }, // 86268390
		{ &Z_Construct_UFunction_UMetasoundFrontendLiteralBlueprintAccess_CreateStringMetaSoundLiteral, "CreateStringMetaSoundLiteral" }, // 1074908472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundFrontendLiteralBlueprintAccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics::ClassParams = {
	&UMetasoundFrontendLiteralBlueprintAccess::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess()
{
	if (!Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.OuterSingleton, Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetasoundFrontendLiteralBlueprintAccess>()
{
	return UMetasoundFrontendLiteralBlueprintAccess::StaticClass();
}
UMetasoundFrontendLiteralBlueprintAccess::UMetasoundFrontendLiteralBlueprintAccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundFrontendLiteralBlueprintAccess);
UMetasoundFrontendLiteralBlueprintAccess::~UMetasoundFrontendLiteralBlueprintAccess() {}
// End Class UMetasoundFrontendLiteralBlueprintAccess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess, UMetasoundFrontendLiteralBlueprintAccess::StaticClass, TEXT("UMetasoundFrontendLiteralBlueprintAccess"), &Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundFrontendLiteralBlueprintAccess), 2798174317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_1971679090(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundFrontendLiteralBlueprintAccess_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
