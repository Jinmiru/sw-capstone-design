// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetNodeHelperLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetNodeHelperLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UKismetNodeHelperLibrary Function BitIsMarked
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics
{
	struct KismetNodeHelperLibrary_eventBitIsMarked_Parms
	{
		int32 Data;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Returns whether the bit at index \"Index\" is set or not in the data\n\x09 *\n\x09 * @param Data - The integer containing the bits that are being tested against\n\x09 * @param Index - The bit index into the Data that we are inquiring\n\x09 * @return  - Whether the bit at index \"Index\" is set or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Returns whether the bit at index \"Index\" is set or not in the data\n\n@param Data - The integer containing the bits that are being tested against\n@param Index - The bit index into the Data that we are inquiring\n@return  - Whether the bit at index \"Index\" is set or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventBitIsMarked_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventBitIsMarked_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetNodeHelperLibrary_eventBitIsMarked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventBitIsMarked_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "BitIsMarked", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::KismetNodeHelperLibrary_eventBitIsMarked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::KismetNodeHelperLibrary_eventBitIsMarked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execBitIsMarked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::BitIsMarked(Z_Param_Data,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function BitIsMarked

// Begin Class UKismetNodeHelperLibrary Function ClearAllBits
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics
{
	struct KismetNodeHelperLibrary_eventClearAllBits_Parms
	{
		int32 Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Clears all of the bit in the data\n\x09 *\n\x09 * @param Data - The integer containing the bits that are being cleared\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Clears all of the bit in the data\n\n@param Data - The integer containing the bits that are being cleared" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearAllBits_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "ClearAllBits", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::KismetNodeHelperLibrary_eventClearAllBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::KismetNodeHelperLibrary_eventClearAllBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execClearAllBits)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKismetNodeHelperLibrary::ClearAllBits(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function ClearAllBits

// Begin Class UKismetNodeHelperLibrary Function ClearBit
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics
{
	struct KismetNodeHelperLibrary_eventClearBit_Parms
	{
		int32 Data;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Clears the bit at index \"Index\" in the data\n\x09 *\n\x09 * @param Data - The integer containing the bits that are being cleared\n\x09 * @param Index - The bit index into the Data that we are clearing\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Clears the bit at index \"Index\" in the data\n\n@param Data - The integer containing the bits that are being cleared\n@param Index - The bit index into the Data that we are clearing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearBit_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearBit_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "ClearBit", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::KismetNodeHelperLibrary_eventClearBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::KismetNodeHelperLibrary_eventClearBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execClearBit)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKismetNodeHelperLibrary::ClearBit(Z_Param_Out_Data,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function ClearBit

// Begin Class UKismetNodeHelperLibrary Function GetEnumeratorName
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics
{
	struct KismetNodeHelperLibrary_eventGetEnumeratorName_Parms
	{
		const UEnum* Enum;
		uint8 EnumeratorValue;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Gets enumerator name.\n\x09 *\n\x09 * @param Enum - Enumeration\n\x09 * @param EnumeratorValue - Value of searched enumeration\n\x09 * @return - name of the searched enumerator, or NAME_None\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets enumerator name.\n\n@param Enum - Enumeration\n@param EnumeratorValue - Value of searched enumeration\n@return - name of the searched enumerator, or NAME_None" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_EnumeratorValue = { "EnumeratorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_Enum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_EnumeratorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetEnumeratorName", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::KismetNodeHelperLibrary_eventGetEnumeratorName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::KismetNodeHelperLibrary_eventGetEnumeratorName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execGetEnumeratorName)
{
	P_GET_OBJECT(UEnum,Z_Param_Enum);
	P_GET_PROPERTY(FByteProperty,Z_Param_EnumeratorValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorName(Z_Param_Enum,Z_Param_EnumeratorValue);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function GetEnumeratorName

// Begin Class UKismetNodeHelperLibrary Function GetEnumeratorUserFriendlyName
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics
{
	struct KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms
	{
		const UEnum* Enum;
		uint8 EnumeratorValue;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Gets enumerator name as FString. Use DeisplayName when possible.\n\x09 *\n\x09 * @param Enum - Enumeration\n\x09 * @param EnumeratorValue - Value of searched enumeration\n\x09 * @return - name of the searched enumerator, or NAME_None\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets enumerator name as FString. Use DeisplayName when possible.\n\n@param Enum - Enumeration\n@param EnumeratorValue - Value of searched enumeration\n@return - name of the searched enumerator, or NAME_None" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_EnumeratorValue = { "EnumeratorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_Enum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_EnumeratorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetEnumeratorUserFriendlyName", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execGetEnumeratorUserFriendlyName)
{
	P_GET_OBJECT(UEnum,Z_Param_Enum);
	P_GET_PROPERTY(FByteProperty,Z_Param_EnumeratorValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(Z_Param_Enum,Z_Param_EnumeratorValue);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function GetEnumeratorUserFriendlyName

// Begin Class UKismetNodeHelperLibrary Function GetEnumeratorValueFromIndex
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics
{
	struct KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms
	{
		const UEnum* Enum;
		uint8 EnumeratorIndex;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * @param Enum - Enumeration\n\x09 * @param EnumeratorIndex - Input index\n\x09 * @return - The value of the enumerator, or INDEX_NONE\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "@param Enum - Enumeration\n@param EnumeratorIndex - Input index\n@return - The value of the enumerator, or INDEX_NONE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumeratorIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_EnumeratorIndex = { "EnumeratorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, EnumeratorIndex), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_Enum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_EnumeratorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetEnumeratorValueFromIndex", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execGetEnumeratorValueFromIndex)
{
	P_GET_OBJECT(UEnum,Z_Param_Enum);
	P_GET_PROPERTY(FByteProperty,Z_Param_EnumeratorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(Z_Param_Enum,Z_Param_EnumeratorIndex);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function GetEnumeratorValueFromIndex

// Begin Class UKismetNodeHelperLibrary Function GetFirstUnmarkedBit
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics
{
	struct KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms
	{
		int32 Data;
		int32 StartIdx;
		int32 NumBits;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Gets the first index not already marked starting from a specific index and returns the bit index selected\n\x09 *\n\x09 * @param Data - The integer containing the bits that are being set\n\x09 * @param StartIdx - The index to start looking for an available index from\n\x09 * @param NumBits - The logical number of bits we want to track\n\x09 * @return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets the first index not already marked starting from a specific index and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param StartIdx - The index to start looking for an available index from\n@param NumBits - The logical number of bits we want to track\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_StartIdx = { "StartIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, NumBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_StartIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_NumBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetFirstUnmarkedBit", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execGetFirstUnmarkedBit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIdx);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumBits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetFirstUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function GetFirstUnmarkedBit

// Begin Class UKismetNodeHelperLibrary Function GetRandomUnmarkedBit
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics
{
	struct KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms
	{
		int32 Data;
		int32 StartIdx;
		int32 NumBits;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Gets a random not already marked bit and returns the bit index selected\n\x09 *\n\x09 * @param Data - The integer containing the bits that are being set\n\x09 * @param NumBits - The logical number of bits we want to track\n\x09 * @return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Gets a random not already marked bit and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param NumBits - The logical number of bits we want to track\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_StartIdx = { "StartIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, NumBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_StartIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_NumBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetRandomUnmarkedBit", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execGetRandomUnmarkedBit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIdx);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumBits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetRandomUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function GetRandomUnmarkedBit

// Begin Class UKismetNodeHelperLibrary Function GetUnmarkedBit
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics
{
	struct KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms
	{
		int32 Data;
		int32 StartIdx;
		int32 NumBits;
		bool bRandom;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Gets an already unmarked bit and returns the bit index selected\n\x09 *\n\x09 * @param Data - The integer containing the bits that are being set\n\x09 * @param StartIdx - The index to start with when determining the selection'\n\x09 * @param NumBits - The logical number of bits we want to track\n\x09 * @param bRandom - Whether to select a random index or not\n\x09 * @return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "Gets an already unmarked bit and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param StartIdx - The index to start with when determining the selection'\n@param NumBits - The logical number of bits we want to track\n@param bRandom - Whether to select a random index or not\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBits;
	static void NewProp_bRandom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_StartIdx = { "StartIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, NumBits), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom_SetBit(void* Obj)
{
	((KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms*)Obj)->bRandom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom = { "bRandom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_StartIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_NumBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetUnmarkedBit", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execGetUnmarkedBit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIdx);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumBits);
	P_GET_UBOOL(Z_Param_bRandom);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKismetNodeHelperLibrary::GetUnmarkedBit(Z_Param_Data,Z_Param_StartIdx,Z_Param_NumBits,Z_Param_bRandom);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function GetUnmarkedBit

// Begin Class UKismetNodeHelperLibrary Function GetValidValue
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics
{
	struct KismetNodeHelperLibrary_eventGetValidValue_Parms
	{
		const UEnum* Enum;
		uint8 EnumeratorValue;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * @param Enum - Enumeration\n\x09 * @param EnumeratorIndex - Input value\n\x09 * @return - if EnumeratorIndex is valid return EnumeratorIndex, otherwise return MAX value of Enum\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "@param Enum - Enumeration\n@param EnumeratorIndex - Input value\n@return - if EnumeratorIndex is valid return EnumeratorIndex, otherwise return MAX value of Enum" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_EnumeratorValue = { "EnumeratorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_Enum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_EnumeratorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetValidValue", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::KismetNodeHelperLibrary_eventGetValidValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::KismetNodeHelperLibrary_eventGetValidValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execGetValidValue)
{
	P_GET_OBJECT(UEnum,Z_Param_Enum);
	P_GET_PROPERTY(FByteProperty,Z_Param_EnumeratorValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UKismetNodeHelperLibrary::GetValidValue(Z_Param_Enum,Z_Param_EnumeratorValue);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function GetValidValue

// Begin Class UKismetNodeHelperLibrary Function HasMarkedBit
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics
{
	struct KismetNodeHelperLibrary_eventHasMarkedBit_Parms
	{
		int32 Data;
		int32 NumBits;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Returns whether there exists a marked bit in the data\n\x09 *\n\x09 * @param Data - The data being tested against\n\x09 * @param NumBits - The logical number of bits we want to track\n\x09 * @return - Whether there is a bit marked in the data\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Returns whether there exists a marked bit in the data\n\n@param Data - The data being tested against\n@param NumBits - The logical number of bits we want to track\n@return - Whether there is a bit marked in the data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBits;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasMarkedBit_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasMarkedBit_Parms, NumBits), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetNodeHelperLibrary_eventHasMarkedBit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventHasMarkedBit_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_NumBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "HasMarkedBit", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::KismetNodeHelperLibrary_eventHasMarkedBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::KismetNodeHelperLibrary_eventHasMarkedBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execHasMarkedBit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumBits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::HasMarkedBit(Z_Param_Data,Z_Param_NumBits);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function HasMarkedBit

// Begin Class UKismetNodeHelperLibrary Function HasUnmarkedBit
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics
{
	struct KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms
	{
		int32 Data;
		int32 NumBits;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Returns whether there exists an unmarked bit in the data\n\x09 *\n\x09 * @param Data - The data being tested against\n\x09 * @param NumBits - The logical number of bits we want to track\n\x09 * @return - Whether there is a bit not marked in the data\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Returns whether there exists an unmarked bit in the data\n\n@param Data - The data being tested against\n@param NumBits - The logical number of bits we want to track\n@return - Whether there is a bit not marked in the data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBits;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms, NumBits), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_NumBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "HasUnmarkedBit", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execHasUnmarkedBit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumBits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetNodeHelperLibrary::HasUnmarkedBit(Z_Param_Data,Z_Param_NumBits);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function HasUnmarkedBit

// Begin Class UKismetNodeHelperLibrary Function MarkBit
struct Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics
{
	struct KismetNodeHelperLibrary_eventMarkBit_Parms
	{
		int32 Data;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Sets the bit at index \"Index\" in the data\n\x09 *\n\x09 * @param Data - The integer containing the bits that are being set\n\x09 * @param Index - The bit index into the Data that we are setting\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Sets the bit at index \"Index\" in the data\n\n@param Data - The integer containing the bits that are being set\n@param Index - The bit index into the Data that we are setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventMarkBit_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventMarkBit_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "MarkBit", nullptr, nullptr, Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::KismetNodeHelperLibrary_eventMarkBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::KismetNodeHelperLibrary_eventMarkBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetNodeHelperLibrary::execMarkBit)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKismetNodeHelperLibrary::MarkBit(Z_Param_Out_Data,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UKismetNodeHelperLibrary Function MarkBit

// Begin Class UKismetNodeHelperLibrary
void UKismetNodeHelperLibrary::StaticRegisterNativesUKismetNodeHelperLibrary()
{
	UClass* Class = UKismetNodeHelperLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BitIsMarked", &UKismetNodeHelperLibrary::execBitIsMarked },
		{ "ClearAllBits", &UKismetNodeHelperLibrary::execClearAllBits },
		{ "ClearBit", &UKismetNodeHelperLibrary::execClearBit },
		{ "GetEnumeratorName", &UKismetNodeHelperLibrary::execGetEnumeratorName },
		{ "GetEnumeratorUserFriendlyName", &UKismetNodeHelperLibrary::execGetEnumeratorUserFriendlyName },
		{ "GetEnumeratorValueFromIndex", &UKismetNodeHelperLibrary::execGetEnumeratorValueFromIndex },
		{ "GetFirstUnmarkedBit", &UKismetNodeHelperLibrary::execGetFirstUnmarkedBit },
		{ "GetRandomUnmarkedBit", &UKismetNodeHelperLibrary::execGetRandomUnmarkedBit },
		{ "GetUnmarkedBit", &UKismetNodeHelperLibrary::execGetUnmarkedBit },
		{ "GetValidValue", &UKismetNodeHelperLibrary::execGetValidValue },
		{ "HasMarkedBit", &UKismetNodeHelperLibrary::execHasMarkedBit },
		{ "HasUnmarkedBit", &UKismetNodeHelperLibrary::execHasUnmarkedBit },
		{ "MarkBit", &UKismetNodeHelperLibrary::execMarkBit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetNodeHelperLibrary);
UClass* Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister()
{
	return UKismetNodeHelperLibrary::StaticClass();
}
struct Z_Construct_UClass_UKismetNodeHelperLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetNodeHelperLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked, "BitIsMarked" }, // 2556115060
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits, "ClearAllBits" }, // 3255126934
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit, "ClearBit" }, // 4243547
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName, "GetEnumeratorName" }, // 4157788386
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName, "GetEnumeratorUserFriendlyName" }, // 2933918376
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex, "GetEnumeratorValueFromIndex" }, // 3629434407
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit, "GetFirstUnmarkedBit" }, // 1741532416
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit, "GetRandomUnmarkedBit" }, // 2854129710
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit, "GetUnmarkedBit" }, // 1919665168
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue, "GetValidValue" }, // 1475829705
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit, "HasMarkedBit" }, // 2030818992
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit, "HasUnmarkedBit" }, // 4169965600
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit, "MarkBit" }, // 2618860307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetNodeHelperLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::ClassParams = {
	&UKismetNodeHelperLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKismetNodeHelperLibrary()
{
	if (!Z_Registration_Info_UClass_UKismetNodeHelperLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetNodeHelperLibrary.OuterSingleton, Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKismetNodeHelperLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UKismetNodeHelperLibrary>()
{
	return UKismetNodeHelperLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetNodeHelperLibrary);
UKismetNodeHelperLibrary::~UKismetNodeHelperLibrary() {}
// End Class UKismetNodeHelperLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKismetNodeHelperLibrary, UKismetNodeHelperLibrary::StaticClass, TEXT("UKismetNodeHelperLibrary"), &Z_Registration_Info_UClass_UKismetNodeHelperLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetNodeHelperLibrary), 189705113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_527138377(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
