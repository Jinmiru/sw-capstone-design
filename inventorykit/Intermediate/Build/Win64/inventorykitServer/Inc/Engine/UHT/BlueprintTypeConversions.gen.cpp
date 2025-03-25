// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Internal/Kismet/BlueprintTypeConversions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintTypeConversions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintTypeConversions();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintTypeConversions_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBlueprintTypeConversions Function ConvertArrayType
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics
{
	struct BlueprintTypeConversions_eventConvertArrayType_Parms
	{
		TArray<int32> InArray;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Container conversions\n" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
		{ "ToolTip", "Container conversions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertArrayType_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertArrayType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertArrayType", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::BlueprintTypeConversions_eventConvertArrayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::BlueprintTypeConversions_eventConvertArrayType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertArrayType

// Begin Class UBlueprintTypeConversions Function ConvertFBox2dToFBox2f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics
{
	struct BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFBox2dToFBox2f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFBox2dToFBox2f

// Begin Class UBlueprintTypeConversions Function ConvertFBox2fToFBox2d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics
{
	struct BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFBox2fToFBox2d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFBox2fToFBox2d

// Begin Class UBlueprintTypeConversions Function ConvertFMatrix44dToFMatrix44f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics
{
	struct BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFMatrix44dToFMatrix44f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFMatrix44dToFMatrix44f

// Begin Class UBlueprintTypeConversions Function ConvertFMatrix44fToFMatrix44d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics
{
	struct BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFMatrix44fToFMatrix44d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFMatrix44fToFMatrix44d

// Begin Class UBlueprintTypeConversions Function ConvertFPlane4dToFPlane4f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics
{
	struct BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFPlane4dToFPlane4f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFPlane4dToFPlane4f

// Begin Class UBlueprintTypeConversions Function ConvertFPlane4fToFPlane4d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics
{
	struct BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFPlane4fToFPlane4d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFPlane4fToFPlane4d

// Begin Class UBlueprintTypeConversions Function ConvertFQuat4dToFQuat4f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics
{
	struct BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFQuat4dToFQuat4f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFQuat4dToFQuat4f

// Begin Class UBlueprintTypeConversions Function ConvertFQuat4fToFQuat4d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics
{
	struct BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFQuat4fToFQuat4d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFQuat4fToFQuat4d

// Begin Class UBlueprintTypeConversions Function ConvertFRotator3dToFRotator3f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics
{
	struct BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFRotator3dToFRotator3f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFRotator3dToFRotator3f

// Begin Class UBlueprintTypeConversions Function ConvertFRotator3fToFRotator3d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics
{
	struct BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFRotator3fToFRotator3d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFRotator3fToFRotator3d

// Begin Class UBlueprintTypeConversions Function ConvertFTransform3dToFTransform3f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics
{
	struct BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFTransform3dToFTransform3f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFTransform3dToFTransform3f

// Begin Class UBlueprintTypeConversions Function ConvertFTransform3fToFTransform3d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics
{
	struct BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFTransform3fToFTransform3d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFTransform3fToFTransform3d

// Begin Class UBlueprintTypeConversions Function ConvertFVector2dToFVector2f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics
{
	struct BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector2dToFVector2f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFVector2dToFVector2f

// Begin Class UBlueprintTypeConversions Function ConvertFVector2fToFVector2d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics
{
	struct BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector2fToFVector2d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFVector2fToFVector2d

// Begin Class UBlueprintTypeConversions Function ConvertFVector3dToFVector3f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics
{
	struct BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector3dToFVector3f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFVector3dToFVector3f

// Begin Class UBlueprintTypeConversions Function ConvertFVector3fToFVector3d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics
{
	struct BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector3fToFVector3d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFVector3fToFVector3d

// Begin Class UBlueprintTypeConversions Function ConvertFVector4dToFVector4f
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics
{
	struct BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector4dToFVector4f", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFVector4dToFVector4f

// Begin Class UBlueprintTypeConversions Function ConvertFVector4fToFVector4d
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics
{
	struct BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms
	{
		int32 InFromData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms, InFromData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_InFromData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector4fToFVector4d", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertFVector4fToFVector4d

// Begin Class UBlueprintTypeConversions Function ConvertMapType
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics
{
	struct BlueprintTypeConversions_eventConvertMapType_Parms
	{
		TMap<int32,int32> InMap;
		TMap<int32,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_ValueProp = { "InMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_Key_KeyProp = { "InMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap = { "InMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertMapType_Parms, InMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMap_MetaData), NewProp_InMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertMapType_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertMapType", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::BlueprintTypeConversions_eventConvertMapType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::BlueprintTypeConversions_eventConvertMapType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertMapType

// Begin Class UBlueprintTypeConversions Function ConvertSetType
struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics
{
	struct BlueprintTypeConversions_eventConvertSetType_Parms
	{
		TSet<int32> InSet;
		TSet<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet_ElementProp = { "InSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet = { "InSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertSetType_Parms, InSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSet_MetaData), NewProp_InSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertSetType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertSetType", nullptr, nullptr, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::BlueprintTypeConversions_eventConvertSetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::BlueprintTypeConversions_eventConvertSetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintTypeConversions Function ConvertSetType

// Begin Class UBlueprintTypeConversions
void UBlueprintTypeConversions::StaticRegisterNativesUBlueprintTypeConversions()
{
	UClass* Class = UBlueprintTypeConversions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertArrayType", &UBlueprintTypeConversions::execConvertArrayType },
		{ "ConvertFBox2dToFBox2f", &UBlueprintTypeConversions::execConvertFBox2dToFBox2f },
		{ "ConvertFBox2fToFBox2d", &UBlueprintTypeConversions::execConvertFBox2fToFBox2d },
		{ "ConvertFMatrix44dToFMatrix44f", &UBlueprintTypeConversions::execConvertFMatrix44dToFMatrix44f },
		{ "ConvertFMatrix44fToFMatrix44d", &UBlueprintTypeConversions::execConvertFMatrix44fToFMatrix44d },
		{ "ConvertFPlane4dToFPlane4f", &UBlueprintTypeConversions::execConvertFPlane4dToFPlane4f },
		{ "ConvertFPlane4fToFPlane4d", &UBlueprintTypeConversions::execConvertFPlane4fToFPlane4d },
		{ "ConvertFQuat4dToFQuat4f", &UBlueprintTypeConversions::execConvertFQuat4dToFQuat4f },
		{ "ConvertFQuat4fToFQuat4d", &UBlueprintTypeConversions::execConvertFQuat4fToFQuat4d },
		{ "ConvertFRotator3dToFRotator3f", &UBlueprintTypeConversions::execConvertFRotator3dToFRotator3f },
		{ "ConvertFRotator3fToFRotator3d", &UBlueprintTypeConversions::execConvertFRotator3fToFRotator3d },
		{ "ConvertFTransform3dToFTransform3f", &UBlueprintTypeConversions::execConvertFTransform3dToFTransform3f },
		{ "ConvertFTransform3fToFTransform3d", &UBlueprintTypeConversions::execConvertFTransform3fToFTransform3d },
		{ "ConvertFVector2dToFVector2f", &UBlueprintTypeConversions::execConvertFVector2dToFVector2f },
		{ "ConvertFVector2fToFVector2d", &UBlueprintTypeConversions::execConvertFVector2fToFVector2d },
		{ "ConvertFVector3dToFVector3f", &UBlueprintTypeConversions::execConvertFVector3dToFVector3f },
		{ "ConvertFVector3fToFVector3d", &UBlueprintTypeConversions::execConvertFVector3fToFVector3d },
		{ "ConvertFVector4dToFVector4f", &UBlueprintTypeConversions::execConvertFVector4dToFVector4f },
		{ "ConvertFVector4fToFVector4d", &UBlueprintTypeConversions::execConvertFVector4fToFVector4d },
		{ "ConvertMapType", &UBlueprintTypeConversions::execConvertMapType },
		{ "ConvertSetType", &UBlueprintTypeConversions::execConvertSetType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintTypeConversions);
UClass* Z_Construct_UClass_UBlueprintTypeConversions_NoRegister()
{
	return UBlueprintTypeConversions::StaticClass();
}
struct Z_Construct_UClass_UBlueprintTypeConversions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/BlueprintTypeConversions.h" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType, "ConvertArrayType" }, // 2731722417
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f, "ConvertFBox2dToFBox2f" }, // 3123441362
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d, "ConvertFBox2fToFBox2d" }, // 4142604387
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f, "ConvertFMatrix44dToFMatrix44f" }, // 2414227444
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d, "ConvertFMatrix44fToFMatrix44d" }, // 412098657
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f, "ConvertFPlane4dToFPlane4f" }, // 4163492031
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d, "ConvertFPlane4fToFPlane4d" }, // 3059358660
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f, "ConvertFQuat4dToFQuat4f" }, // 2874720463
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d, "ConvertFQuat4fToFQuat4d" }, // 3280554635
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f, "ConvertFRotator3dToFRotator3f" }, // 1529407727
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d, "ConvertFRotator3fToFRotator3d" }, // 1393574692
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f, "ConvertFTransform3dToFTransform3f" }, // 2464610480
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d, "ConvertFTransform3fToFTransform3d" }, // 554130055
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f, "ConvertFVector2dToFVector2f" }, // 121338940
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d, "ConvertFVector2fToFVector2d" }, // 1027238889
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f, "ConvertFVector3dToFVector3f" }, // 1153075972
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d, "ConvertFVector3fToFVector3d" }, // 438943307
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f, "ConvertFVector4dToFVector4f" }, // 2017718255
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d, "ConvertFVector4fToFVector4d" }, // 1006824358
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType, "ConvertMapType" }, // 3528844846
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType, "ConvertSetType" }, // 1387684223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintTypeConversions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintTypeConversions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintTypeConversions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintTypeConversions_Statics::ClassParams = {
	&UBlueprintTypeConversions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintTypeConversions_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintTypeConversions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintTypeConversions()
{
	if (!Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton, Z_Construct_UClass_UBlueprintTypeConversions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlueprintTypeConversions>()
{
	return UBlueprintTypeConversions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintTypeConversions);
UBlueprintTypeConversions::~UBlueprintTypeConversions() {}
// End Class UBlueprintTypeConversions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintTypeConversions, UBlueprintTypeConversions::StaticClass, TEXT("UBlueprintTypeConversions"), &Z_Registration_Info_UClass_UBlueprintTypeConversions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintTypeConversions), 3855894044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_2162739877(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
