// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundOutput() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundGeneratorOutput();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundOutputBlueprintAccess();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundOutputBlueprintAccess_NoRegister();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundOutput();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin ScriptStruct FMetaSoundOutput
static_assert(std::is_polymorphic<FMetaSoundOutput>() == std::is_polymorphic<FSoundGeneratorOutput>(), "USTRUCT FMetaSoundOutput cannot be polymorphic unless super FSoundGeneratorOutput is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundOutput;
class UScriptStruct* FMetaSoundOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundOutput, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundOutput"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundOutput.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundOutput>()
{
	return FMetaSoundOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Exposes the value of an output on a FMetasoundGenerator.\n */" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
		{ "ToolTip", "Exposes the value of an output on a FMetasoundGenerator." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	Z_Construct_UScriptStruct_FSoundGeneratorOutput,
	&NewStructOps,
	"MetaSoundOutput",
	nullptr,
	0,
	sizeof(FMetaSoundOutput),
	alignof(FMetaSoundOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundOutput()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundOutput.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundOutput.InnerSingleton;
}
// End ScriptStruct FMetaSoundOutput

// Begin Class UMetasoundOutputBlueprintAccess Function GetBool
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics
{
	struct MetasoundOutputBlueprintAccess_eventGetBool_Parms
	{
		FMetaSoundOutput Output;
		bool Success;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetBool_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_Success_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventGetBool_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventGetBool_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventGetBool_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::MetasoundOutputBlueprintAccess_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::MetasoundOutputBlueprintAccess_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execGetBool)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMetasoundOutputBlueprintAccess::GetBool(Z_Param_Out_Output,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function GetBool

// Begin Class UMetasoundOutputBlueprintAccess Function GetFloat
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics
{
	struct MetasoundOutputBlueprintAccess_eventGetFloat_Parms
	{
		FMetaSoundOutput Output;
		bool Success;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetFloat_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_Success_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventGetFloat_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventGetFloat_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::MetasoundOutputBlueprintAccess_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::MetasoundOutputBlueprintAccess_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execGetFloat)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMetasoundOutputBlueprintAccess::GetFloat(Z_Param_Out_Output,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function GetFloat

// Begin Class UMetasoundOutputBlueprintAccess Function GetInt32
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics
{
	struct MetasoundOutputBlueprintAccess_eventGetInt32_Parms
	{
		FMetaSoundOutput Output;
		bool Success;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetInt32_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_Success_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventGetInt32_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventGetInt32_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "GetInt32", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::MetasoundOutputBlueprintAccess_eventGetInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::MetasoundOutputBlueprintAccess_eventGetInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execGetInt32)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMetasoundOutputBlueprintAccess::GetInt32(Z_Param_Out_Output,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function GetInt32

// Begin Class UMetasoundOutputBlueprintAccess Function GetString
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics
{
	struct MetasoundOutputBlueprintAccess_eventGetString_Parms
	{
		FMetaSoundOutput Output;
		bool Success;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetString_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_Success_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventGetString_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventGetString_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::MetasoundOutputBlueprintAccess_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::MetasoundOutputBlueprintAccess_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execGetString)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMetasoundOutputBlueprintAccess::GetString(Z_Param_Out_Output,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function GetString

// Begin Class UMetasoundOutputBlueprintAccess Function GetTimeSeconds
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics
{
	struct MetasoundOutputBlueprintAccess_eventGetTimeSeconds_Parms
	{
		FMetaSoundOutput Output;
		bool Success;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetTimeSeconds_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_Success_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventGetTimeSeconds_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventGetTimeSeconds_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventGetTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "GetTimeSeconds", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::MetasoundOutputBlueprintAccess_eventGetTimeSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::MetasoundOutputBlueprintAccess_eventGetTimeSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execGetTimeSeconds)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UMetasoundOutputBlueprintAccess::GetTimeSeconds(Z_Param_Out_Output,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function GetTimeSeconds

// Begin Class UMetasoundOutputBlueprintAccess Function IsBool
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics
{
	struct MetasoundOutputBlueprintAccess_eventIsBool_Parms
	{
		FMetaSoundOutput Output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventIsBool_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventIsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventIsBool_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "IsBool", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::MetasoundOutputBlueprintAccess_eventIsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::MetasoundOutputBlueprintAccess_eventIsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execIsBool)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMetasoundOutputBlueprintAccess::IsBool(Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function IsBool

// Begin Class UMetasoundOutputBlueprintAccess Function IsFloat
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics
{
	struct MetasoundOutputBlueprintAccess_eventIsFloat_Parms
	{
		FMetaSoundOutput Output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventIsFloat_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventIsFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventIsFloat_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "IsFloat", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::MetasoundOutputBlueprintAccess_eventIsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::MetasoundOutputBlueprintAccess_eventIsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execIsFloat)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMetasoundOutputBlueprintAccess::IsFloat(Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function IsFloat

// Begin Class UMetasoundOutputBlueprintAccess Function IsInt32
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics
{
	struct MetasoundOutputBlueprintAccess_eventIsInt32_Parms
	{
		FMetaSoundOutput Output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventIsInt32_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventIsInt32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventIsInt32_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "IsInt32", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::MetasoundOutputBlueprintAccess_eventIsInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::MetasoundOutputBlueprintAccess_eventIsInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execIsInt32)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMetasoundOutputBlueprintAccess::IsInt32(Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function IsInt32

// Begin Class UMetasoundOutputBlueprintAccess Function IsString
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics
{
	struct MetasoundOutputBlueprintAccess_eventIsString_Parms
	{
		FMetaSoundOutput Output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventIsString_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventIsString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventIsString_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "IsString", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::MetasoundOutputBlueprintAccess_eventIsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::MetasoundOutputBlueprintAccess_eventIsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execIsString)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMetasoundOutputBlueprintAccess::IsString(Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function IsString

// Begin Class UMetasoundOutputBlueprintAccess Function IsTime
struct Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics
{
	struct MetasoundOutputBlueprintAccess_eventIsTime_Parms
	{
		FMetaSoundOutput Output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSoundOutput" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetasoundOutputBlueprintAccess_eventIsTime_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1311356036
void Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetasoundOutputBlueprintAccess_eventIsTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetasoundOutputBlueprintAccess_eventIsTime_Parms), &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundOutputBlueprintAccess, nullptr, "IsTime", nullptr, nullptr, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::MetasoundOutputBlueprintAccess_eventIsTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::MetasoundOutputBlueprintAccess_eventIsTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetasoundOutputBlueprintAccess::execIsTime)
{
	P_GET_STRUCT_REF(FMetaSoundOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMetasoundOutputBlueprintAccess::IsTime(Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Class UMetasoundOutputBlueprintAccess Function IsTime

// Begin Class UMetasoundOutputBlueprintAccess
void UMetasoundOutputBlueprintAccess::StaticRegisterNativesUMetasoundOutputBlueprintAccess()
{
	UClass* Class = UMetasoundOutputBlueprintAccess::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBool", &UMetasoundOutputBlueprintAccess::execGetBool },
		{ "GetFloat", &UMetasoundOutputBlueprintAccess::execGetFloat },
		{ "GetInt32", &UMetasoundOutputBlueprintAccess::execGetInt32 },
		{ "GetString", &UMetasoundOutputBlueprintAccess::execGetString },
		{ "GetTimeSeconds", &UMetasoundOutputBlueprintAccess::execGetTimeSeconds },
		{ "IsBool", &UMetasoundOutputBlueprintAccess::execIsBool },
		{ "IsFloat", &UMetasoundOutputBlueprintAccess::execIsFloat },
		{ "IsInt32", &UMetasoundOutputBlueprintAccess::execIsInt32 },
		{ "IsString", &UMetasoundOutputBlueprintAccess::execIsString },
		{ "IsTime", &UMetasoundOutputBlueprintAccess::execIsTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundOutputBlueprintAccess);
UClass* Z_Construct_UClass_UMetasoundOutputBlueprintAccess_NoRegister()
{
	return UMetasoundOutputBlueprintAccess::StaticClass();
}
struct Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint support for core types. If you want to support more core types, add them here.\n * If you want to support types introduced in other plugins, create a blueprint library in that plugin.\n */" },
		{ "IncludePath", "MetasoundOutput.h" },
		{ "ModuleRelativePath", "Public/MetasoundOutput.h" },
		{ "ToolTip", "Blueprint support for core types. If you want to support more core types, add them here.\nIf you want to support types introduced in other plugins, create a blueprint library in that plugin." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetBool, "GetBool" }, // 385820410
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetFloat, "GetFloat" }, // 1969133363
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetInt32, "GetInt32" }, // 476912220
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetString, "GetString" }, // 1083642675
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_GetTimeSeconds, "GetTimeSeconds" }, // 736832405
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsBool, "IsBool" }, // 554564382
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsFloat, "IsFloat" }, // 908143366
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsInt32, "IsInt32" }, // 3802142479
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsString, "IsString" }, // 3881170990
		{ &Z_Construct_UFunction_UMetasoundOutputBlueprintAccess_IsTime, "IsTime" }, // 2893030955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundOutputBlueprintAccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics::ClassParams = {
	&UMetasoundOutputBlueprintAccess::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetasoundOutputBlueprintAccess()
{
	if (!Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.OuterSingleton, Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetasoundOutputBlueprintAccess>()
{
	return UMetasoundOutputBlueprintAccess::StaticClass();
}
UMetasoundOutputBlueprintAccess::UMetasoundOutputBlueprintAccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundOutputBlueprintAccess);
UMetasoundOutputBlueprintAccess::~UMetasoundOutputBlueprintAccess() {}
// End Class UMetasoundOutputBlueprintAccess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetaSoundOutput::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundOutput_Statics::NewStructOps, TEXT("MetaSoundOutput"), &Z_Registration_Info_UScriptStruct_MetaSoundOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundOutput), 1311356036U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundOutputBlueprintAccess, UMetasoundOutputBlueprintAccess::StaticClass, TEXT("UMetasoundOutputBlueprintAccess"), &Z_Registration_Info_UClass_UMetasoundOutputBlueprintAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundOutputBlueprintAccess), 3916518301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_2127479790(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
