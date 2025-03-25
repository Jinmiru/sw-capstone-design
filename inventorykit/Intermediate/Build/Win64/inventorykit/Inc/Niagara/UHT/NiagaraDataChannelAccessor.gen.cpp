// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataChannelAccessor.h"
#include "Niagara/Public/NiagaraDataChannelPublic.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelAccessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataChannelReader Function InitAccess
struct Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics
{
	struct NiagaraDataChannelReader_eventInitAccess_Parms
	{
		FNiagaraDataChannelSearchParameters SearchParams;
		bool bReadPrevFrameData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/** Call before each access to the data channel to grab the correct data to read. */" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
		{ "ToolTip", "Call before each access to the data channel to grab the correct data to read." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
	static void NewProp_bReadPrevFrameData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadPrevFrameData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventInitAccess_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 133002555
void Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_bReadPrevFrameData_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventInitAccess_Parms*)Obj)->bReadPrevFrameData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_bReadPrevFrameData = { "bReadPrevFrameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventInitAccess_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_bReadPrevFrameData_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventInitAccess_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventInitAccess_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_SearchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_bReadPrevFrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "InitAccess", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NiagaraDataChannelReader_eventInitAccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NiagaraDataChannelReader_eventInitAccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execInitAccess)
{
	P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
	P_GET_UBOOL(Z_Param_bReadPrevFrameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitAccess(Z_Param_SearchParams,Z_Param_bReadPrevFrameData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function InitAccess

// Begin Class UNiagaraDataChannelReader Function Num
struct Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics
{
	struct NiagaraDataChannelReader_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "Num", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::NiagaraDataChannelReader_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::NiagaraDataChannelReader_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function Num

// Begin Class UNiagaraDataChannelReader Function ReadBool
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics
{
	struct NiagaraDataChannelReader_eventReadBool_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadBool_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadBool_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadBool_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadBool_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadBool_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadBool", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NiagaraDataChannelReader_eventReadBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NiagaraDataChannelReader_eventReadBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadBool(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadBool

// Begin Class UNiagaraDataChannelReader Function ReadEnum
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics
{
	struct NiagaraDataChannelReader_eventReadEnum_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadEnum_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadEnum_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadEnum_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadEnum_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadEnum", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NiagaraDataChannelReader_eventReadEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::NiagaraDataChannelReader_eventReadEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadEnum)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->ReadEnum(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadEnum

// Begin Class UNiagaraDataChannelReader Function ReadFloat
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics
{
	struct NiagaraDataChannelReader_eventReadFloat_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadFloat_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadFloat_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadFloat_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadFloat", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NiagaraDataChannelReader_eventReadFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NiagaraDataChannelReader_eventReadFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadFloat

// Begin Class UNiagaraDataChannelReader Function ReadID
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics
{
	struct NiagaraDataChannelReader_eventReadID_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FNiagaraID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadID_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadID_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadID_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadID_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadID_Parms, ReturnValue), Z_Construct_UScriptStruct_FNiagaraID, METADATA_PARAMS(0, nullptr) }; // 978329198
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadID", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NiagaraDataChannelReader_eventReadID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::NiagaraDataChannelReader_eventReadID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadID)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNiagaraID*)Z_Param__Result=P_THIS->ReadID(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadID

// Begin Class UNiagaraDataChannelReader Function ReadInt
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics
{
	struct NiagaraDataChannelReader_eventReadInt_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadInt_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadInt_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadInt_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadInt", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NiagaraDataChannelReader_eventReadInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NiagaraDataChannelReader_eventReadInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ReadInt(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadInt

// Begin Class UNiagaraDataChannelReader Function ReadLinearColor
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics
{
	struct NiagaraDataChannelReader_eventReadLinearColor_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadLinearColor_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadLinearColor_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadLinearColor_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadLinearColor_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadLinearColor", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NiagaraDataChannelReader_eventReadLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NiagaraDataChannelReader_eventReadLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadLinearColor)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->ReadLinearColor(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadLinearColor

// Begin Class UNiagaraDataChannelReader Function ReadPosition
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics
{
	struct NiagaraDataChannelReader_eventReadPosition_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadPosition_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadPosition_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadPosition_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadPosition_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadPosition", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NiagaraDataChannelReader_eventReadPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::NiagaraDataChannelReader_eventReadPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadPosition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ReadPosition(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadPosition

// Begin Class UNiagaraDataChannelReader Function ReadQuat
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics
{
	struct NiagaraDataChannelReader_eventReadQuat_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadQuat_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadQuat_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadQuat_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadQuat_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadQuat", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NiagaraDataChannelReader_eventReadQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NiagaraDataChannelReader_eventReadQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadQuat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->ReadQuat(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadQuat

// Begin Class UNiagaraDataChannelReader Function ReadSpawnInfo
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics
{
	struct NiagaraDataChannelReader_eventReadSpawnInfo_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FNiagaraSpawnInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadSpawnInfo_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadSpawnInfo_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadSpawnInfo_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadSpawnInfo_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadSpawnInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FNiagaraSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 3526298124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadSpawnInfo", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NiagaraDataChannelReader_eventReadSpawnInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::NiagaraDataChannelReader_eventReadSpawnInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadSpawnInfo)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNiagaraSpawnInfo*)Z_Param__Result=P_THIS->ReadSpawnInfo(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadSpawnInfo

// Begin Class UNiagaraDataChannelReader Function ReadVector
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics
{
	struct NiagaraDataChannelReader_eventReadVector_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadVector_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadVector_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadVector", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NiagaraDataChannelReader_eventReadVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NiagaraDataChannelReader_eventReadVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadVector)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ReadVector(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadVector

// Begin Class UNiagaraDataChannelReader Function ReadVector2D
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics
{
	struct NiagaraDataChannelReader_eventReadVector2D_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector2D_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector2D_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadVector2D_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadVector2D_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadVector2D", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NiagaraDataChannelReader_eventReadVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NiagaraDataChannelReader_eventReadVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadVector2D)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->ReadVector2D(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadVector2D

// Begin Class UNiagaraDataChannelReader Function ReadVector4
struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics
{
	struct NiagaraDataChannelReader_eventReadVector4_Parms
	{
		FName VarName;
		int32 Index;
		bool IsValid;
		FVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector4_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector4_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((NiagaraDataChannelReader_eventReadVector4_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadVector4_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadVector4", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NiagaraDataChannelReader_eventReadVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NiagaraDataChannelReader_eventReadVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadVector4)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4*)Z_Param__Result=P_THIS->ReadVector4(Z_Param_VarName,Z_Param_Index,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelReader Function ReadVector4

// Begin Class UNiagaraDataChannelReader
void UNiagaraDataChannelReader::StaticRegisterNativesUNiagaraDataChannelReader()
{
	UClass* Class = UNiagaraDataChannelReader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitAccess", &UNiagaraDataChannelReader::execInitAccess },
		{ "Num", &UNiagaraDataChannelReader::execNum },
		{ "ReadBool", &UNiagaraDataChannelReader::execReadBool },
		{ "ReadEnum", &UNiagaraDataChannelReader::execReadEnum },
		{ "ReadFloat", &UNiagaraDataChannelReader::execReadFloat },
		{ "ReadID", &UNiagaraDataChannelReader::execReadID },
		{ "ReadInt", &UNiagaraDataChannelReader::execReadInt },
		{ "ReadLinearColor", &UNiagaraDataChannelReader::execReadLinearColor },
		{ "ReadPosition", &UNiagaraDataChannelReader::execReadPosition },
		{ "ReadQuat", &UNiagaraDataChannelReader::execReadQuat },
		{ "ReadSpawnInfo", &UNiagaraDataChannelReader::execReadSpawnInfo },
		{ "ReadVector", &UNiagaraDataChannelReader::execReadVector },
		{ "ReadVector2D", &UNiagaraDataChannelReader::execReadVector2D },
		{ "ReadVector4", &UNiagaraDataChannelReader::execReadVector4 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelReader);
UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister()
{
	return UNiagaraDataChannelReader::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannelReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \nInitial simple API for reading and writing data in a data channel from game code / BP. \nLikely to be replaced in the near future with a custom BP node and a helper struct.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannelAccessor.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
		{ "ToolTip", "Initial simple API for reading and writing data in a data channel from game code / BP.\nLikely to be replaced in the near future with a custom BP node and a helper struct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess, "InitAccess" }, // 1336323232
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_Num, "Num" }, // 4071960051
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool, "ReadBool" }, // 1659022769
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadEnum, "ReadEnum" }, // 667948880
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat, "ReadFloat" }, // 1505568629
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadID, "ReadID" }, // 424126112
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt, "ReadInt" }, // 725065744
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor, "ReadLinearColor" }, // 1625907052
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadPosition, "ReadPosition" }, // 234671367
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat, "ReadQuat" }, // 1123643434
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadSpawnInfo, "ReadSpawnInfo" }, // 176177337
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector, "ReadVector" }, // 2912468045
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D, "ReadVector2D" }, // 3676495556
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4, "ReadVector4" }, // 1239391735
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannelReader_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelReader, Owner), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelReader_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataChannelReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelReader_Statics::ClassParams = {
	&UNiagaraDataChannelReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataChannelReader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannelReader()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannelReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelReader.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannelReader.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelReader>()
{
	return UNiagaraDataChannelReader::StaticClass();
}
UNiagaraDataChannelReader::UNiagaraDataChannelReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelReader);
UNiagaraDataChannelReader::~UNiagaraDataChannelReader() {}
// End Class UNiagaraDataChannelReader

// Begin Class UNiagaraDataChannelWriter Function InitWrite
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics
{
	struct NiagaraDataChannelWriter_eventInitWrite_Parms
	{
		FNiagaraDataChannelSearchParameters SearchParams;
		int32 Count;
		bool bVisibleToGame;
		bool bVisibleToCPU;
		bool bVisibleToGPU;
		FString DebugSource;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DebugSource" },
		{ "AutoCreateRefTerm", "DebugSource" },
		{ "bVisibleToCPU", "true" },
		{ "bVisibleToGame", "true" },
		{ "bVisibleToGPU", "true" },
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/** Call before each batch of writes to allocate the data we'll be writing to. */" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
		{ "ToolTip", "Call before each batch of writes to allocate the data we'll be writing to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bVisibleToGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGame;
	static void NewProp_bVisibleToCPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToCPU;
	static void NewProp_bVisibleToGPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGPU;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugSource;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventInitWrite_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 133002555
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventInitWrite_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame_SetBit(void* Obj)
{
	((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->bVisibleToGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame = { "bVisibleToGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU_SetBit(void* Obj)
{
	((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->bVisibleToCPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU = { "bVisibleToCPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU_SetBit(void* Obj)
{
	((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->bVisibleToGPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU = { "bVisibleToGPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_DebugSource = { "DebugSource", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventInitWrite_Parms, DebugSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSource_MetaData), NewProp_DebugSource_MetaData) };
void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_SearchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_DebugSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "InitWrite", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NiagaraDataChannelWriter_eventInitWrite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NiagaraDataChannelWriter_eventInitWrite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execInitWrite)
{
	P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bVisibleToGame);
	P_GET_UBOOL(Z_Param_bVisibleToCPU);
	P_GET_UBOOL(Z_Param_bVisibleToGPU);
	P_GET_PROPERTY(FStrProperty,Z_Param_DebugSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitWrite(Z_Param_SearchParams,Z_Param_Count,Z_Param_bVisibleToGame,Z_Param_bVisibleToCPU,Z_Param_bVisibleToGPU,Z_Param_DebugSource);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function InitWrite

// Begin Class UNiagaraDataChannelWriter Function Num
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics
{
	struct NiagaraDataChannelWriter_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "Num", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::NiagaraDataChannelWriter_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::NiagaraDataChannelWriter_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function Num

// Begin Class UNiagaraDataChannelWriter Function WriteBool
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics
{
	struct NiagaraDataChannelWriter_eventWriteBool_Parms
	{
		FName VarName;
		int32 Index;
		bool InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_InData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteBool_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteBool_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData_SetBit(void* Obj)
{
	((NiagaraDataChannelWriter_eventWriteBool_Parms*)Obj)->InData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventWriteBool_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteBool", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NiagaraDataChannelWriter_eventWriteBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NiagaraDataChannelWriter_eventWriteBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL(Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteBool(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteBool

// Begin Class UNiagaraDataChannelWriter Function WriteEnum
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics
{
	struct NiagaraDataChannelWriter_eventWriteEnum_Parms
	{
		FName VarName;
		int32 Index;
		uint8 InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteEnum_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteEnum_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteEnum_Parms, InData), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteEnum", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NiagaraDataChannelWriter_eventWriteEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::NiagaraDataChannelWriter_eventWriteEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteEnum)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FByteProperty,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteEnum(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteEnum

// Begin Class UNiagaraDataChannelWriter Function WriteFloat
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics
{
	struct NiagaraDataChannelWriter_eventWriteFloat_Parms
	{
		FName VarName;
		int32 Index;
		double InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteFloat_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteFloat_Parms, InData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteFloat", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NiagaraDataChannelWriter_eventWriteFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NiagaraDataChannelWriter_eventWriteFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteFloat(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteFloat

// Begin Class UNiagaraDataChannelWriter Function WriteID
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics
{
	struct NiagaraDataChannelWriter_eventWriteID_Parms
	{
		FName VarName;
		int32 Index;
		FNiagaraID InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteID_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteID_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteID_Parms, InData), Z_Construct_UScriptStruct_FNiagaraID, METADATA_PARAMS(0, nullptr) }; // 978329198
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteID", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NiagaraDataChannelWriter_eventWriteID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::NiagaraDataChannelWriter_eventWriteID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteID)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FNiagaraID,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteID(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteID

// Begin Class UNiagaraDataChannelWriter Function WriteInt
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics
{
	struct NiagaraDataChannelWriter_eventWriteInt_Parms
	{
		FName VarName;
		int32 Index;
		int32 InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteInt_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteInt_Parms, InData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteInt", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NiagaraDataChannelWriter_eventWriteInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NiagaraDataChannelWriter_eventWriteInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteInt(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteInt

// Begin Class UNiagaraDataChannelWriter Function WriteLinearColor
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics
{
	struct NiagaraDataChannelWriter_eventWriteLinearColor_Parms
	{
		FName VarName;
		int32 Index;
		FLinearColor InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteLinearColor_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteLinearColor_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteLinearColor_Parms, InData), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteLinearColor", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NiagaraDataChannelWriter_eventWriteLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NiagaraDataChannelWriter_eventWriteLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteLinearColor)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FLinearColor,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteLinearColor(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteLinearColor

// Begin Class UNiagaraDataChannelWriter Function WritePosition
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics
{
	struct NiagaraDataChannelWriter_eventWritePosition_Parms
	{
		FName VarName;
		int32 Index;
		FVector InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWritePosition_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWritePosition_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWritePosition_Parms, InData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WritePosition", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NiagaraDataChannelWriter_eventWritePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::NiagaraDataChannelWriter_eventWritePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWritePosition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WritePosition(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WritePosition

// Begin Class UNiagaraDataChannelWriter Function WriteQuat
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics
{
	struct NiagaraDataChannelWriter_eventWriteQuat_Parms
	{
		FName VarName;
		int32 Index;
		FQuat InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteQuat_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteQuat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteQuat_Parms, InData), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteQuat", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NiagaraDataChannelWriter_eventWriteQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NiagaraDataChannelWriter_eventWriteQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteQuat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FQuat,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteQuat(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteQuat

// Begin Class UNiagaraDataChannelWriter Function WriteSpawnInfo
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics
{
	struct NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms
	{
		FName VarName;
		int32 Index;
		FNiagaraSpawnInfo InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms, InData), Z_Construct_UScriptStruct_FNiagaraSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 3526298124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteSpawnInfo", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteSpawnInfo)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FNiagaraSpawnInfo,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteSpawnInfo(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteSpawnInfo

// Begin Class UNiagaraDataChannelWriter Function WriteVector
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics
{
	struct NiagaraDataChannelWriter_eventWriteVector_Parms
	{
		FName VarName;
		int32 Index;
		FVector InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector_Parms, InData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteVector", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NiagaraDataChannelWriter_eventWriteVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NiagaraDataChannelWriter_eventWriteVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteVector)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteVector(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteVector

// Begin Class UNiagaraDataChannelWriter Function WriteVector2D
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics
{
	struct NiagaraDataChannelWriter_eventWriteVector2D_Parms
	{
		FName VarName;
		int32 Index;
		FVector2D InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector2D_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector2D_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector2D_Parms, InData), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteVector2D", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NiagaraDataChannelWriter_eventWriteVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NiagaraDataChannelWriter_eventWriteVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteVector2D)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector2D,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteVector2D(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteVector2D

// Begin Class UNiagaraDataChannelWriter Function WriteVector4
struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics
{
	struct NiagaraDataChannelWriter_eventWriteVector4_Parms
	{
		FName VarName;
		int32 Index;
		FVector4 InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector4_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector4_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector4_Parms, InData), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteVector4", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NiagaraDataChannelWriter_eventWriteVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NiagaraDataChannelWriter_eventWriteVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteVector4)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector4,Z_Param_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteVector4(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelWriter Function WriteVector4

// Begin Class UNiagaraDataChannelWriter
void UNiagaraDataChannelWriter::StaticRegisterNativesUNiagaraDataChannelWriter()
{
	UClass* Class = UNiagaraDataChannelWriter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitWrite", &UNiagaraDataChannelWriter::execInitWrite },
		{ "Num", &UNiagaraDataChannelWriter::execNum },
		{ "WriteBool", &UNiagaraDataChannelWriter::execWriteBool },
		{ "WriteEnum", &UNiagaraDataChannelWriter::execWriteEnum },
		{ "WriteFloat", &UNiagaraDataChannelWriter::execWriteFloat },
		{ "WriteID", &UNiagaraDataChannelWriter::execWriteID },
		{ "WriteInt", &UNiagaraDataChannelWriter::execWriteInt },
		{ "WriteLinearColor", &UNiagaraDataChannelWriter::execWriteLinearColor },
		{ "WritePosition", &UNiagaraDataChannelWriter::execWritePosition },
		{ "WriteQuat", &UNiagaraDataChannelWriter::execWriteQuat },
		{ "WriteSpawnInfo", &UNiagaraDataChannelWriter::execWriteSpawnInfo },
		{ "WriteVector", &UNiagaraDataChannelWriter::execWriteVector },
		{ "WriteVector2D", &UNiagaraDataChannelWriter::execWriteVector2D },
		{ "WriteVector4", &UNiagaraDataChannelWriter::execWriteVector4 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelWriter);
UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister()
{
	return UNiagaraDataChannelWriter::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannelWriter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannelAccessor.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAccessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite, "InitWrite" }, // 1588999157
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_Num, "Num" }, // 439115139
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool, "WriteBool" }, // 2429790260
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteEnum, "WriteEnum" }, // 3764553444
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat, "WriteFloat" }, // 1476560065
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteID, "WriteID" }, // 2733897613
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt, "WriteInt" }, // 1726470546
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor, "WriteLinearColor" }, // 41044791
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WritePosition, "WritePosition" }, // 4256569392
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat, "WriteQuat" }, // 1355076185
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo, "WriteSpawnInfo" }, // 2628456454
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector, "WriteVector" }, // 2210054825
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D, "WriteVector2D" }, // 3096823556
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4, "WriteVector4" }, // 2560537243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelWriter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelWriter, Owner), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::ClassParams = {
	&UNiagaraDataChannelWriter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannelWriter()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannelWriter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelWriter.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannelWriter.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelWriter>()
{
	return UNiagaraDataChannelWriter::StaticClass();
}
UNiagaraDataChannelWriter::UNiagaraDataChannelWriter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelWriter);
UNiagaraDataChannelWriter::~UNiagaraDataChannelWriter() {}
// End Class UNiagaraDataChannelWriter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelReader, UNiagaraDataChannelReader::StaticClass, TEXT("UNiagaraDataChannelReader"), &Z_Registration_Info_UClass_UNiagaraDataChannelReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelReader), 2145516518U) },
		{ Z_Construct_UClass_UNiagaraDataChannelWriter, UNiagaraDataChannelWriter::StaticClass, TEXT("UNiagaraDataChannelWriter"), &Z_Registration_Info_UClass_UNiagaraDataChannelWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelWriter), 3707726822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_3517660889(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
