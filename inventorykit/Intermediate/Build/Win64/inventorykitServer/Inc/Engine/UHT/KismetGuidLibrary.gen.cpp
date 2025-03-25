// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/KismetGuidLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetGuidLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetGuidLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetGuidLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UKismetGuidLibrary Function Conv_GuidToString
struct Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics
{
	struct KismetGuidLibrary_eventConv_GuidToString_Parms
	{
		FGuid InGuid;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Converts a GUID value to a string, in the form 'A-B-C-D' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ScriptMethod", "ToString" },
		{ "ToolTip", "Converts a GUID value to a string, in the form 'A-B-C-D'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGuid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_InGuid = { "InGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventConv_GuidToString_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGuid_MetaData), NewProp_InGuid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventConv_GuidToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_InGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "Conv_GuidToString", nullptr, nullptr, Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::KismetGuidLibrary_eventConv_GuidToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::KismetGuidLibrary_eventConv_GuidToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetGuidLibrary::execConv_GuidToString)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetGuidLibrary::Conv_GuidToString(Z_Param_Out_InGuid);
	P_NATIVE_END;
}
// End Class UKismetGuidLibrary Function Conv_GuidToString

// Begin Class UKismetGuidLibrary Function EqualEqual_GuidGuid
struct Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics
{
	struct KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms
	{
		FGuid A;
		FGuid B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms, A), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms, B), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "EqualEqual_GuidGuid", nullptr, nullptr, Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetGuidLibrary::execEqualEqual_GuidGuid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_A);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetGuidLibrary::EqualEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UKismetGuidLibrary Function EqualEqual_GuidGuid

// Begin Class UKismetGuidLibrary Function Invalidate_Guid
struct Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics
{
	struct KismetGuidLibrary_eventInvalidate_Guid_Parms
	{
		FGuid InGuid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Invalidates the given GUID */" },
		{ "DisplayName", "Invalidate Guid" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Invalidates the given GUID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::NewProp_InGuid = { "InGuid", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventInvalidate_Guid_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::NewProp_InGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "Invalidate_Guid", nullptr, nullptr, Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::KismetGuidLibrary_eventInvalidate_Guid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::KismetGuidLibrary_eventInvalidate_Guid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetGuidLibrary::execInvalidate_Guid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKismetGuidLibrary::Invalidate_Guid(Z_Param_Out_InGuid);
	P_NATIVE_END;
}
// End Class UKismetGuidLibrary Function Invalidate_Guid

// Begin Class UKismetGuidLibrary Function IsValid_Guid
struct Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics
{
	struct KismetGuidLibrary_eventIsValid_Guid_Parms
	{
		FGuid InGuid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Checks whether the given GUID is valid */" },
		{ "CompactNodeTitle", "isValid?" },
		{ "DisplayName", "Is Valid Guid" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Checks whether the given GUID is valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGuid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_InGuid = { "InGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventIsValid_Guid_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGuid_MetaData), NewProp_InGuid_MetaData) };
void Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetGuidLibrary_eventIsValid_Guid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventIsValid_Guid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_InGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "IsValid_Guid", nullptr, nullptr, Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::KismetGuidLibrary_eventIsValid_Guid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::KismetGuidLibrary_eventIsValid_Guid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetGuidLibrary::execIsValid_Guid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetGuidLibrary::IsValid_Guid(Z_Param_Out_InGuid);
	P_NATIVE_END;
}
// End Class UKismetGuidLibrary Function IsValid_Guid

// Begin Class UKismetGuidLibrary Function NewGuid
struct Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics
{
	struct KismetGuidLibrary_eventNewGuid_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Guid" },
		{ "Comment", "/** Returns a new unique GUID */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Returns a new unique GUID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventNewGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "NewGuid", nullptr, nullptr, Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::KismetGuidLibrary_eventNewGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::KismetGuidLibrary_eventNewGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NewGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetGuidLibrary::execNewGuid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UKismetGuidLibrary::NewGuid();
	P_NATIVE_END;
}
// End Class UKismetGuidLibrary Function NewGuid

// Begin Class UKismetGuidLibrary Function NotEqual_GuidGuid
struct Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics
{
	struct KismetGuidLibrary_eventNotEqual_GuidGuid_Parms
	{
		FGuid A;
		FGuid B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Returns true if the values are not equal (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms, A), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms, B), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetGuidLibrary_eventNotEqual_GuidGuid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "NotEqual_GuidGuid", nullptr, nullptr, Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::KismetGuidLibrary_eventNotEqual_GuidGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::KismetGuidLibrary_eventNotEqual_GuidGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetGuidLibrary::execNotEqual_GuidGuid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_A);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetGuidLibrary::NotEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UKismetGuidLibrary Function NotEqual_GuidGuid

// Begin Class UKismetGuidLibrary Function Parse_StringToGuid
struct Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics
{
	struct KismetGuidLibrary_eventParse_StringToGuid_Parms
	{
		FString GuidString;
		FGuid OutGuid;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Converts a String of format EGuidFormats to a Guid. Returns Guid OutGuid, Returns bool Success */" },
		{ "DisplayName", "Parse String to Guid" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Converts a String of format EGuidFormats to a Guid. Returns Guid OutGuid, Returns bool Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuidString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GuidString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGuid;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_GuidString = { "GuidString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventParse_StringToGuid_Parms, GuidString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuidString_MetaData), NewProp_GuidString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_OutGuid = { "OutGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetGuidLibrary_eventParse_StringToGuid_Parms, OutGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success_SetBit(void* Obj)
{
	((KismetGuidLibrary_eventParse_StringToGuid_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventParse_StringToGuid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_GuidString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_OutGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "Parse_StringToGuid", nullptr, nullptr, Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::KismetGuidLibrary_eventParse_StringToGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::KismetGuidLibrary_eventParse_StringToGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetGuidLibrary::execParse_StringToGuid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GuidString);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutGuid);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKismetGuidLibrary::Parse_StringToGuid(Z_Param_GuidString,Z_Param_Out_OutGuid,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UKismetGuidLibrary Function Parse_StringToGuid

// Begin Class UKismetGuidLibrary
void UKismetGuidLibrary::StaticRegisterNativesUKismetGuidLibrary()
{
	UClass* Class = UKismetGuidLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_GuidToString", &UKismetGuidLibrary::execConv_GuidToString },
		{ "EqualEqual_GuidGuid", &UKismetGuidLibrary::execEqualEqual_GuidGuid },
		{ "Invalidate_Guid", &UKismetGuidLibrary::execInvalidate_Guid },
		{ "IsValid_Guid", &UKismetGuidLibrary::execIsValid_Guid },
		{ "NewGuid", &UKismetGuidLibrary::execNewGuid },
		{ "NotEqual_GuidGuid", &UKismetGuidLibrary::execNotEqual_GuidGuid },
		{ "Parse_StringToGuid", &UKismetGuidLibrary::execParse_StringToGuid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetGuidLibrary);
UClass* Z_Construct_UClass_UKismetGuidLibrary_NoRegister()
{
	return UKismetGuidLibrary::StaticClass();
}
struct Z_Construct_UClass_UKismetGuidLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetGuidLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ScriptName", "GuidLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString, "Conv_GuidToString" }, // 3894956443
		{ &Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid, "EqualEqual_GuidGuid" }, // 3224805706
		{ &Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid, "Invalidate_Guid" }, // 2263367651
		{ &Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid, "IsValid_Guid" }, // 2974124216
		{ &Z_Construct_UFunction_UKismetGuidLibrary_NewGuid, "NewGuid" }, // 3417494103
		{ &Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid, "NotEqual_GuidGuid" }, // 3627892504
		{ &Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid, "Parse_StringToGuid" }, // 2588085066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetGuidLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKismetGuidLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetGuidLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetGuidLibrary_Statics::ClassParams = {
	&UKismetGuidLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetGuidLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKismetGuidLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKismetGuidLibrary()
{
	if (!Z_Registration_Info_UClass_UKismetGuidLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetGuidLibrary.OuterSingleton, Z_Construct_UClass_UKismetGuidLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKismetGuidLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UKismetGuidLibrary>()
{
	return UKismetGuidLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetGuidLibrary);
UKismetGuidLibrary::~UKismetGuidLibrary() {}
// End Class UKismetGuidLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKismetGuidLibrary, UKismetGuidLibrary::StaticClass, TEXT("UKismetGuidLibrary"), &Z_Registration_Info_UClass_UKismetGuidLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetGuidLibrary), 897770442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_3351689012(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
