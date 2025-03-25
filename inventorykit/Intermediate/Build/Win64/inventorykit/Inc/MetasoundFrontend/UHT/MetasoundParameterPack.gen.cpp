// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundFrontend/Public/MetasoundParameterPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundParameterPack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetasoundParameterPack();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetasoundParameterPack_NoRegister();
METASOUNDFRONTEND_API UEnum* Z_Construct_UEnum_MetasoundFrontend_ESetParamResult();
UPackage* Z_Construct_UPackage__Script_MetasoundFrontend();
// End Cross Module References

// Begin Enum ESetParamResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetParamResult;
static UEnum* ESetParamResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESetParamResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESetParamResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("ESetParamResult"));
	}
	return Z_Registration_Info_UEnum_ESetParamResult.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UEnum* StaticEnum<ESetParamResult>()
{
	return ESetParamResult_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundFrontend_ESetParamResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "ESetParamResult::Failed" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
		{ "Succeeded.Name", "ESetParamResult::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESetParamResult::Succeeded", (int64)ESetParamResult::Succeeded },
		{ "ESetParamResult::Failed", (int64)ESetParamResult::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundFrontend_ESetParamResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	"ESetParamResult",
	"ESetParamResult",
	Z_Construct_UEnum_MetasoundFrontend_ESetParamResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_ESetParamResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_ESetParamResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundFrontend_ESetParamResult()
{
	if (!Z_Registration_Info_UEnum_ESetParamResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetParamResult.InnerSingleton, Z_Construct_UEnum_MetasoundFrontend_ESetParamResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESetParamResult.InnerSingleton;
}
// End Enum ESetParamResult

// Begin Class UMetasoundParameterPack Function GetBool
struct Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics
{
	struct MetasoundParameterPack_eventGetBool_Parms
	{
		FName ParameterName;
		ESetParamResult Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetBool_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetBool_Parms, Result), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
void Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventGetBool_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::MetasoundParameterPack_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::MetasoundParameterPack_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execGetBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_ENUM_REF(ESetParamResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_ParameterName,(ESetParamResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function GetBool

// Begin Class UMetasoundParameterPack Function GetFloat
struct Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics
{
	struct MetasoundParameterPack_eventGetFloat_Parms
	{
		FName ParameterName;
		ESetParamResult Result;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetFloat_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetFloat_Parms, Result), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::MetasoundParameterPack_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::MetasoundParameterPack_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execGetFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_ENUM_REF(ESetParamResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_ParameterName,(ESetParamResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function GetFloat

// Begin Class UMetasoundParameterPack Function GetInt
struct Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics
{
	struct MetasoundParameterPack_eventGetInt_Parms
	{
		FName ParameterName;
		ESetParamResult Result;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetInt_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetInt_Parms, Result), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "GetInt", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::MetasoundParameterPack_eventGetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::MetasoundParameterPack_eventGetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_GetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_GetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execGetInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_ENUM_REF(ESetParamResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_ParameterName,(ESetParamResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function GetInt

// Begin Class UMetasoundParameterPack Function GetString
struct Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics
{
	struct MetasoundParameterPack_eventGetString_Parms
	{
		FName ParameterName;
		ESetParamResult Result;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetString_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetString_Parms, Result), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::MetasoundParameterPack_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::MetasoundParameterPack_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execGetString)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_ENUM_REF(ESetParamResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_ParameterName,(ESetParamResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function GetString

// Begin Class UMetasoundParameterPack Function GetTrigger
struct Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics
{
	struct MetasoundParameterPack_eventGetTrigger_Parms
	{
		FName ParameterName;
		ESetParamResult Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetTrigger_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventGetTrigger_Parms, Result), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
void Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventGetTrigger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventGetTrigger_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "GetTrigger", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::MetasoundParameterPack_eventGetTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::MetasoundParameterPack_eventGetTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execGetTrigger)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_ENUM_REF(ESetParamResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTrigger(Z_Param_ParameterName,(ESetParamResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function GetTrigger

// Begin Class UMetasoundParameterPack Function HasBool
struct Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics
{
	struct MetasoundParameterPack_eventHasBool_Parms
	{
		FName ParameterName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventHasBool_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventHasBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventHasBool_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "HasBool", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::MetasoundParameterPack_eventHasBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::MetasoundParameterPack_eventHasBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_HasBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_HasBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execHasBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBool(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function HasBool

// Begin Class UMetasoundParameterPack Function HasFloat
struct Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics
{
	struct MetasoundParameterPack_eventHasFloat_Parms
	{
		FName ParameterName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventHasFloat_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventHasFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventHasFloat_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "HasFloat", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::MetasoundParameterPack_eventHasFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::MetasoundParameterPack_eventHasFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_HasFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_HasFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execHasFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFloat(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function HasFloat

// Begin Class UMetasoundParameterPack Function HasInt
struct Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics
{
	struct MetasoundParameterPack_eventHasInt_Parms
	{
		FName ParameterName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventHasInt_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventHasInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventHasInt_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "HasInt", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::MetasoundParameterPack_eventHasInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::MetasoundParameterPack_eventHasInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_HasInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_HasInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execHasInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasInt(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function HasInt

// Begin Class UMetasoundParameterPack Function HasString
struct Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics
{
	struct MetasoundParameterPack_eventHasString_Parms
	{
		FName ParameterName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventHasString_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventHasString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventHasString_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "HasString", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::MetasoundParameterPack_eventHasString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::MetasoundParameterPack_eventHasString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_HasString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_HasString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execHasString)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasString(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function HasString

// Begin Class UMetasoundParameterPack Function HasTrigger
struct Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics
{
	struct MetasoundParameterPack_eventHasTrigger_Parms
	{
		FName ParameterName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventHasTrigger_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventHasTrigger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventHasTrigger_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "HasTrigger", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::MetasoundParameterPack_eventHasTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::MetasoundParameterPack_eventHasTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execHasTrigger)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTrigger(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function HasTrigger

// Begin Class UMetasoundParameterPack Function MakeMetasoundParameterPack
struct Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics
{
	struct MetasoundParameterPack_eventMakeMetasoundParameterPack_Parms
	{
		UMetasoundParameterPack* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventMakeMetasoundParameterPack_Parms, ReturnValue), Z_Construct_UClass_UMetasoundParameterPack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "MakeMetasoundParameterPack", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::MetasoundParameterPack_eventMakeMetasoundParameterPack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::MetasoundParameterPack_eventMakeMetasoundParameterPack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execMakeMetasoundParameterPack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetasoundParameterPack**)Z_Param__Result=UMetasoundParameterPack::MakeMetasoundParameterPack();
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function MakeMetasoundParameterPack

// Begin Class UMetasoundParameterPack Function SetBool
struct Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics
{
	struct MetasoundParameterPack_eventSetBool_Parms
	{
		FName ParameterName;
		bool InValue;
		bool OnlyIfExists;
		ESetParamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "CPP_Default_OnlyIfExists", "true" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static void NewProp_OnlyIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyIfExists;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetBool_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventSetBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventSetBool_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_OnlyIfExists_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventSetBool_Parms*)Obj)->OnlyIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_OnlyIfExists = { "OnlyIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventSetBool_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_OnlyIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetBool_Parms, ReturnValue), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_OnlyIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "SetBool", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::MetasoundParameterPack_eventSetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::MetasoundParameterPack_eventSetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_SetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_SetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execSetBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_UBOOL(Z_Param_InValue);
	P_GET_UBOOL(Z_Param_OnlyIfExists);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESetParamResult*)Z_Param__Result=P_THIS->SetBool(Z_Param_ParameterName,Z_Param_InValue,Z_Param_OnlyIfExists);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function SetBool

// Begin Class UMetasoundParameterPack Function SetFloat
struct Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics
{
	struct MetasoundParameterPack_eventSetFloat_Parms
	{
		FName ParameterName;
		float InValue;
		bool OnlyIfExists;
		ESetParamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "CPP_Default_OnlyIfExists", "true" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static void NewProp_OnlyIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyIfExists;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetFloat_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetFloat_Parms, InValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_OnlyIfExists_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventSetFloat_Parms*)Obj)->OnlyIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_OnlyIfExists = { "OnlyIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventSetFloat_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_OnlyIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetFloat_Parms, ReturnValue), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_OnlyIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "SetFloat", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::MetasoundParameterPack_eventSetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::MetasoundParameterPack_eventSetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_SetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_SetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execSetFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_GET_UBOOL(Z_Param_OnlyIfExists);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESetParamResult*)Z_Param__Result=P_THIS->SetFloat(Z_Param_ParameterName,Z_Param_InValue,Z_Param_OnlyIfExists);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function SetFloat

// Begin Class UMetasoundParameterPack Function SetInt
struct Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics
{
	struct MetasoundParameterPack_eventSetInt_Parms
	{
		FName ParameterName;
		int32 InValue;
		bool OnlyIfExists;
		ESetParamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "CPP_Default_OnlyIfExists", "true" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static void NewProp_OnlyIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyIfExists;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetInt_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetInt_Parms, InValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_OnlyIfExists_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventSetInt_Parms*)Obj)->OnlyIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_OnlyIfExists = { "OnlyIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventSetInt_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_OnlyIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetInt_Parms, ReturnValue), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_OnlyIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "SetInt", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::MetasoundParameterPack_eventSetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::MetasoundParameterPack_eventSetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_SetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_SetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execSetInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
	P_GET_UBOOL(Z_Param_OnlyIfExists);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESetParamResult*)Z_Param__Result=P_THIS->SetInt(Z_Param_ParameterName,Z_Param_InValue,Z_Param_OnlyIfExists);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function SetInt

// Begin Class UMetasoundParameterPack Function SetString
struct Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics
{
	struct MetasoundParameterPack_eventSetString_Parms
	{
		FName ParameterName;
		FString InValue;
		bool OnlyIfExists;
		ESetParamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "CPP_Default_OnlyIfExists", "true" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static void NewProp_OnlyIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyIfExists;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetString_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_OnlyIfExists_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventSetString_Parms*)Obj)->OnlyIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_OnlyIfExists = { "OnlyIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventSetString_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_OnlyIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetString_Parms, ReturnValue), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_OnlyIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "SetString", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::MetasoundParameterPack_eventSetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::MetasoundParameterPack_eventSetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_SetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_SetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execSetString)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_GET_UBOOL(Z_Param_OnlyIfExists);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESetParamResult*)Z_Param__Result=P_THIS->SetString(Z_Param_ParameterName,Z_Param_InValue,Z_Param_OnlyIfExists);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function SetString

// Begin Class UMetasoundParameterPack Function SetTrigger
struct Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics
{
	struct MetasoundParameterPack_eventSetTrigger_Parms
	{
		FName ParameterName;
		bool OnlyIfExists;
		ESetParamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "CPP_Default_OnlyIfExists", "true" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_OnlyIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyIfExists;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetTrigger_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_OnlyIfExists_SetBit(void* Obj)
{
	((MetasoundParameterPack_eventSetTrigger_Parms*)Obj)->OnlyIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_OnlyIfExists = { "OnlyIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundParameterPack_eventSetTrigger_Parms), &Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_OnlyIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundParameterPack_eventSetTrigger_Parms, ReturnValue), Z_Construct_UEnum_MetasoundFrontend_ESetParamResult, METADATA_PARAMS(0, nullptr) }; // 3323948777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_OnlyIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundParameterPack, nullptr, "SetTrigger", nullptr, nullptr, Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::MetasoundParameterPack_eventSetTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::MetasoundParameterPack_eventSetTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundParameterPack::execSetTrigger)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_UBOOL(Z_Param_OnlyIfExists);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESetParamResult*)Z_Param__Result=P_THIS->SetTrigger(Z_Param_ParameterName,Z_Param_OnlyIfExists);
	P_NATIVE_END;
}
// End Class UMetasoundParameterPack Function SetTrigger

// Begin Class UMetasoundParameterPack
void UMetasoundParameterPack::StaticRegisterNativesUMetasoundParameterPack()
{
	UClass* Class = UMetasoundParameterPack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBool", &UMetasoundParameterPack::execGetBool },
		{ "GetFloat", &UMetasoundParameterPack::execGetFloat },
		{ "GetInt", &UMetasoundParameterPack::execGetInt },
		{ "GetString", &UMetasoundParameterPack::execGetString },
		{ "GetTrigger", &UMetasoundParameterPack::execGetTrigger },
		{ "HasBool", &UMetasoundParameterPack::execHasBool },
		{ "HasFloat", &UMetasoundParameterPack::execHasFloat },
		{ "HasInt", &UMetasoundParameterPack::execHasInt },
		{ "HasString", &UMetasoundParameterPack::execHasString },
		{ "HasTrigger", &UMetasoundParameterPack::execHasTrigger },
		{ "MakeMetasoundParameterPack", &UMetasoundParameterPack::execMakeMetasoundParameterPack },
		{ "SetBool", &UMetasoundParameterPack::execSetBool },
		{ "SetFloat", &UMetasoundParameterPack::execSetFloat },
		{ "SetInt", &UMetasoundParameterPack::execSetInt },
		{ "SetString", &UMetasoundParameterPack::execSetString },
		{ "SetTrigger", &UMetasoundParameterPack::execSetTrigger },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundParameterPack);
UClass* Z_Construct_UClass_UMetasoundParameterPack_NoRegister()
{
	return UMetasoundParameterPack::StaticClass();
}
struct Z_Construct_UClass_UMetasoundParameterPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Here is the UObject BlueprintType that can be used in c++ and blueprint code. It holds a FMetasoundParamStorage \n// instance and can pass it along to the audio system's SetObjectParameter function via an AudioProxy.\n" },
		{ "DisplayName", "MetaSoundParameterPack" },
		{ "IncludePath", "MetasoundParameterPack.h" },
		{ "ModuleRelativePath", "Public/MetasoundParameterPack.h" },
		{ "ToolTip", "Here is the UObject BlueprintType that can be used in c++ and blueprint code. It holds a FMetasoundParamStorage\ninstance and can pass it along to the audio system's SetObjectParameter function via an AudioProxy." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetasoundParameterPack_GetBool, "GetBool" }, // 3073264174
		{ &Z_Construct_UFunction_UMetasoundParameterPack_GetFloat, "GetFloat" }, // 2569703977
		{ &Z_Construct_UFunction_UMetasoundParameterPack_GetInt, "GetInt" }, // 1022523305
		{ &Z_Construct_UFunction_UMetasoundParameterPack_GetString, "GetString" }, // 2315670036
		{ &Z_Construct_UFunction_UMetasoundParameterPack_GetTrigger, "GetTrigger" }, // 3019178384
		{ &Z_Construct_UFunction_UMetasoundParameterPack_HasBool, "HasBool" }, // 898131569
		{ &Z_Construct_UFunction_UMetasoundParameterPack_HasFloat, "HasFloat" }, // 3843790651
		{ &Z_Construct_UFunction_UMetasoundParameterPack_HasInt, "HasInt" }, // 341555624
		{ &Z_Construct_UFunction_UMetasoundParameterPack_HasString, "HasString" }, // 241699962
		{ &Z_Construct_UFunction_UMetasoundParameterPack_HasTrigger, "HasTrigger" }, // 640896475
		{ &Z_Construct_UFunction_UMetasoundParameterPack_MakeMetasoundParameterPack, "MakeMetasoundParameterPack" }, // 481565386
		{ &Z_Construct_UFunction_UMetasoundParameterPack_SetBool, "SetBool" }, // 2588973460
		{ &Z_Construct_UFunction_UMetasoundParameterPack_SetFloat, "SetFloat" }, // 1182025949
		{ &Z_Construct_UFunction_UMetasoundParameterPack_SetInt, "SetInt" }, // 2016808037
		{ &Z_Construct_UFunction_UMetasoundParameterPack_SetString, "SetString" }, // 1204846300
		{ &Z_Construct_UFunction_UMetasoundParameterPack_SetTrigger, "SetTrigger" }, // 4165779566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundParameterPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetasoundParameterPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundParameterPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundParameterPack_Statics::ClassParams = {
	&UMetasoundParameterPack::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundParameterPack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetasoundParameterPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetasoundParameterPack()
{
	if (!Z_Registration_Info_UClass_UMetasoundParameterPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundParameterPack.OuterSingleton, Z_Construct_UClass_UMetasoundParameterPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetasoundParameterPack.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UClass* StaticClass<UMetasoundParameterPack>()
{
	return UMetasoundParameterPack::StaticClass();
}
UMetasoundParameterPack::UMetasoundParameterPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundParameterPack);
UMetasoundParameterPack::~UMetasoundParameterPack() {}
// End Class UMetasoundParameterPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESetParamResult_StaticEnum, TEXT("ESetParamResult"), &Z_Registration_Info_UEnum_ESetParamResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3323948777U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundParameterPack, UMetasoundParameterPack::StaticClass, TEXT("UMetasoundParameterPack"), &Z_Registration_Info_UClass_UMetasoundParameterPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundParameterPack), 1972783443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_695290164(TEXT("/Script/MetasoundFrontend"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
