// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/SlateBlueprintLibrary.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary();
UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class USlateBlueprintLibrary Function AbsoluteToLocal
struct Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics
{
	struct SlateBlueprintLibrary_eventAbsoluteToLocal_Parms
	{
		FGeometry Geometry;
		FVector2D AbsoluteCoordinate;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return Transforms AbsoluteCoordinate into the local space of this Geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return Transforms AbsoluteCoordinate into the local space of this Geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_AbsoluteCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "AbsoluteToLocal", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::SlateBlueprintLibrary_eventAbsoluteToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::SlateBlueprintLibrary_eventAbsoluteToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execAbsoluteToLocal)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_STRUCT(FVector2D,Z_Param_AbsoluteCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::AbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteCoordinate);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function AbsoluteToLocal

// Begin Class USlateBlueprintLibrary Function AbsoluteToViewport
struct Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics
{
	struct SlateBlueprintLibrary_eventAbsoluteToViewport_Parms
	{
		UObject* WorldContextObject;
		FVector2D AbsoluteDesktopCoordinate;
		FVector2D PixelPosition;
		FVector2D ViewportPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.\n\x09 *\n\x09 * @param PixelPosition The position in the game's viewport, usable for line traces and\n\x09 * other uses where you need a coordinate in the space of viewport resolution units.\n\x09 * @param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\n\x09 * to add another widget to the viewport at the same position in viewport space as this location, this is\n\x09 * what you would use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteDesktopCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_AbsoluteDesktopCoordinate = { "AbsoluteDesktopCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, AbsoluteDesktopCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_PixelPosition = { "PixelPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_AbsoluteDesktopCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_PixelPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_ViewportPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "AbsoluteToViewport", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::SlateBlueprintLibrary_eventAbsoluteToViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::SlateBlueprintLibrary_eventAbsoluteToViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execAbsoluteToViewport)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector2D,Z_Param_AbsoluteDesktopCoordinate);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USlateBlueprintLibrary::AbsoluteToViewport(Z_Param_WorldContextObject,Z_Param_AbsoluteDesktopCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function AbsoluteToViewport

// Begin Class USlateBlueprintLibrary Function EqualEqual_SlateBrush
struct Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics
{
	struct SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms
	{
		FSlateBrush A;
		FSlateBrush B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SlateBrush" },
		{ "Comment", "/** Returns whether brushes A and B are identical. */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (SlateBrush)" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns whether brushes A and B are identical." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, A), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, B), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1704263518
void Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "EqualEqual_SlateBrush", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execEqualEqual_SlateBrush)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_A);
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USlateBlueprintLibrary::EqualEqual_SlateBrush(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function EqualEqual_SlateBrush

// Begin Class USlateBlueprintLibrary Function GetAbsoluteSize
struct Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics
{
	struct SlateBlueprintLibrary_eventGetAbsoluteSize_Parms
	{
		FGeometry Geometry;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the size of the geometry in absolute space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the size of the geometry in absolute space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetAbsoluteSize", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::SlateBlueprintLibrary_eventGetAbsoluteSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::SlateBlueprintLibrary_eventGetAbsoluteSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execGetAbsoluteSize)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetAbsoluteSize(Z_Param_Out_Geometry);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function GetAbsoluteSize

// Begin Class USlateBlueprintLibrary Function GetLocalSize
struct Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics
{
	struct SlateBlueprintLibrary_eventGetLocalSize_Parms
	{
		FGeometry Geometry;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the size of the geometry in local space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the size of the geometry in local space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetLocalSize", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::SlateBlueprintLibrary_eventGetLocalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::SlateBlueprintLibrary_eventGetLocalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execGetLocalSize)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalSize(Z_Param_Out_Geometry);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function GetLocalSize

// Begin Class USlateBlueprintLibrary Function GetLocalTopLeft
struct Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics
{
	struct SlateBlueprintLibrary_eventGetLocalTopLeft_Parms
	{
		FGeometry Geometry;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the local top/left of the geometry in local space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the local top/left of the geometry in local space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalTopLeft_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalTopLeft_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetLocalTopLeft", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::SlateBlueprintLibrary_eventGetLocalTopLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::SlateBlueprintLibrary_eventGetLocalTopLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execGetLocalTopLeft)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalTopLeft(Z_Param_Out_Geometry);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function GetLocalTopLeft

// Begin Class USlateBlueprintLibrary Function IsUnderLocation
struct Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics
{
	struct SlateBlueprintLibrary_eventIsUnderLocation_Parms
	{
		FGeometry Geometry;
		FVector2D AbsoluteCoordinate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return true if the provided location in absolute coordinates is within the bounds of this geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return true if the provided location in absolute coordinates is within the bounds of this geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteCoordinate_MetaData), NewProp_AbsoluteCoordinate_MetaData) };
void Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SlateBlueprintLibrary_eventIsUnderLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventIsUnderLocation_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "IsUnderLocation", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::SlateBlueprintLibrary_eventIsUnderLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::SlateBlueprintLibrary_eventIsUnderLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execIsUnderLocation)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USlateBlueprintLibrary::IsUnderLocation(Z_Param_Out_Geometry,Z_Param_Out_AbsoluteCoordinate);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function IsUnderLocation

// Begin Class USlateBlueprintLibrary Function LocalToAbsolute
struct Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics
{
	struct SlateBlueprintLibrary_eventLocalToAbsolute_Parms
	{
		FGeometry Geometry;
		FVector2D LocalCoordinate;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates local coordinates into absolute coordinates\n\x09 *\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return  Absolute coordinates\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates local coordinates into absolute coordinates\n\nAbsolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return  Absolute coordinates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_LocalCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "LocalToAbsolute", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::SlateBlueprintLibrary_eventLocalToAbsolute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::SlateBlueprintLibrary_eventLocalToAbsolute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execLocalToAbsolute)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::LocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalCoordinate);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function LocalToAbsolute

// Begin Class USlateBlueprintLibrary Function LocalToViewport
struct Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics
{
	struct SlateBlueprintLibrary_eventLocalToViewport_Parms
	{
		UObject* WorldContextObject;
		FGeometry Geometry;
		FVector2D LocalCoordinate;
		FVector2D PixelPosition;
		FVector2D ViewportPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates local coordinate of the geometry provided into local viewport coordinates.\n\x09 *\n\x09 * @param PixelPosition The position in the game's viewport, usable for line traces and \n\x09 * other uses where you need a coordinate in the space of viewport resolution units.\n\x09 * @param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\n\x09 * to add another widget to the viewport at the same position in viewport space as this location, this is\n\x09 * what you would use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates local coordinate of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_PixelPosition = { "PixelPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_LocalCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_PixelPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_ViewportPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "LocalToViewport", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::SlateBlueprintLibrary_eventLocalToViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::SlateBlueprintLibrary_eventLocalToViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execLocalToViewport)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USlateBlueprintLibrary::LocalToViewport(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_LocalCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function LocalToViewport

// Begin Class USlateBlueprintLibrary Function ScreenToViewport
struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics
{
	struct SlateBlueprintLibrary_eventScreenToViewport_Parms
	{
		UObject* WorldContextObject;
		FVector2D ScreenPosition;
		FVector2D ViewportPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into the local space of the viewport widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into the local space of the viewport widget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ViewportPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToViewport", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::SlateBlueprintLibrary_eventScreenToViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::SlateBlueprintLibrary_eventScreenToViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToViewport)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USlateBlueprintLibrary::ScreenToViewport(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_ViewportPosition);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function ScreenToViewport

// Begin Class USlateBlueprintLibrary Function ScreenToWidgetAbsolute
struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics
{
	struct SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms
	{
		UObject* WorldContextObject;
		FVector2D ScreenPosition;
		FVector2D AbsoluteCoordinate;
		bool bIncludeWindowPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into absolute application coordinates.\n\x09 * If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).\n\x09 */" },
		{ "CPP_Default_bIncludeWindowPosition", "false" },
		{ "DisplayName", "ScreenToAbsolute" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into absolute application coordinates.\nIf bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
	static void NewProp_bIncludeWindowPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeWindowPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition_SetBit(void* Obj)
{
	((SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms*)Obj)->bIncludeWindowPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition = { "bIncludeWindowPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_ScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_AbsoluteCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToWidgetAbsolute", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToWidgetAbsolute)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate);
	P_GET_UBOOL(Z_Param_bIncludeWindowPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USlateBlueprintLibrary::ScreenToWidgetAbsolute(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_AbsoluteCoordinate,Z_Param_bIncludeWindowPosition);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function ScreenToWidgetAbsolute

// Begin Class USlateBlueprintLibrary Function ScreenToWidgetLocal
struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics
{
	struct SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms
	{
		UObject* WorldContextObject;
		FGeometry Geometry;
		FVector2D ScreenPosition;
		FVector2D LocalCoordinate;
		bool bIncludeWindowPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into the local space of a widget with the given geometry. \n\x09 * If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).\n\x09 */" },
		{ "CPP_Default_bIncludeWindowPosition", "false" },
		{ "DisplayName", "ScreenToLocal" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into the local space of a widget with the given geometry.\nIf bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode)." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
	static void NewProp_bIncludeWindowPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeWindowPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition_SetBit(void* Obj)
{
	((SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms*)Obj)->bIncludeWindowPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition = { "bIncludeWindowPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_ScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_LocalCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToWidgetLocal", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToWidgetLocal)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalCoordinate);
	P_GET_UBOOL(Z_Param_bIncludeWindowPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USlateBlueprintLibrary::ScreenToWidgetLocal(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_ScreenPosition,Z_Param_Out_LocalCoordinate,Z_Param_bIncludeWindowPosition);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function ScreenToWidgetLocal

// Begin Class USlateBlueprintLibrary Function TransformScalarAbsoluteToLocal
struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics
{
	struct SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms
	{
		FGeometry Geometry;
		float AbsoluteScalar;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_AbsoluteScalar = { "AbsoluteScalar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, AbsoluteScalar), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_AbsoluteScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformScalarAbsoluteToLocal", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformScalarAbsoluteToLocal)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AbsoluteScalar);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteScalar);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function TransformScalarAbsoluteToLocal

// Begin Class USlateBlueprintLibrary Function TransformScalarLocalToAbsolute
struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics
{
	struct SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms
	{
		FGeometry Geometry;
		float LocalScalar;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_LocalScalar = { "LocalScalar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, LocalScalar), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_LocalScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformScalarLocalToAbsolute", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformScalarLocalToAbsolute)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LocalScalar);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalScalar);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function TransformScalarLocalToAbsolute

// Begin Class USlateBlueprintLibrary Function TransformVectorAbsoluteToLocal
struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics
{
	struct SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms
	{
		FGeometry Geometry;
		FVector2D AbsoluteVector;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_AbsoluteVector = { "AbsoluteVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, AbsoluteVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_AbsoluteVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformVectorAbsoluteToLocal", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformVectorAbsoluteToLocal)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_STRUCT(FVector2D,Z_Param_AbsoluteVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteVector);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function TransformVectorAbsoluteToLocal

// Begin Class USlateBlueprintLibrary Function TransformVectorLocalToAbsolute
struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics
{
	struct SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms
	{
		FGeometry Geometry;
		FVector2D LocalVector;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_LocalVector = { "LocalVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, LocalVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_LocalVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformVectorLocalToAbsolute", nullptr, nullptr, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformVectorLocalToAbsolute)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
	P_GET_STRUCT(FVector2D,Z_Param_LocalVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalVector);
	P_NATIVE_END;
}
// End Class USlateBlueprintLibrary Function TransformVectorLocalToAbsolute

// Begin Class USlateBlueprintLibrary
void USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary()
{
	UClass* Class = USlateBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AbsoluteToLocal", &USlateBlueprintLibrary::execAbsoluteToLocal },
		{ "AbsoluteToViewport", &USlateBlueprintLibrary::execAbsoluteToViewport },
		{ "EqualEqual_SlateBrush", &USlateBlueprintLibrary::execEqualEqual_SlateBrush },
		{ "GetAbsoluteSize", &USlateBlueprintLibrary::execGetAbsoluteSize },
		{ "GetLocalSize", &USlateBlueprintLibrary::execGetLocalSize },
		{ "GetLocalTopLeft", &USlateBlueprintLibrary::execGetLocalTopLeft },
		{ "IsUnderLocation", &USlateBlueprintLibrary::execIsUnderLocation },
		{ "LocalToAbsolute", &USlateBlueprintLibrary::execLocalToAbsolute },
		{ "LocalToViewport", &USlateBlueprintLibrary::execLocalToViewport },
		{ "ScreenToViewport", &USlateBlueprintLibrary::execScreenToViewport },
		{ "ScreenToWidgetAbsolute", &USlateBlueprintLibrary::execScreenToWidgetAbsolute },
		{ "ScreenToWidgetLocal", &USlateBlueprintLibrary::execScreenToWidgetLocal },
		{ "TransformScalarAbsoluteToLocal", &USlateBlueprintLibrary::execTransformScalarAbsoluteToLocal },
		{ "TransformScalarLocalToAbsolute", &USlateBlueprintLibrary::execTransformScalarLocalToAbsolute },
		{ "TransformVectorAbsoluteToLocal", &USlateBlueprintLibrary::execTransformVectorAbsoluteToLocal },
		{ "TransformVectorLocalToAbsolute", &USlateBlueprintLibrary::execTransformVectorLocalToAbsolute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateBlueprintLibrary);
UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister()
{
	return USlateBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_USlateBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/SlateBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ScriptName", "SlateLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal, "AbsoluteToLocal" }, // 3273990913
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport, "AbsoluteToViewport" }, // 2691814409
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush, "EqualEqual_SlateBrush" }, // 2468689714
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize, "GetAbsoluteSize" }, // 3625560532
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize, "GetLocalSize" }, // 2947726396
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft, "GetLocalTopLeft" }, // 1784691343
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation, "IsUnderLocation" }, // 3842986651
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute, "LocalToAbsolute" }, // 1838464920
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport, "LocalToViewport" }, // 651023351
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport, "ScreenToViewport" }, // 907292346
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute, "ScreenToWidgetAbsolute" }, // 3844854967
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal, "ScreenToWidgetLocal" }, // 2967229035
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal, "TransformScalarAbsoluteToLocal" }, // 485415624
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute, "TransformScalarLocalToAbsolute" }, // 1915123004
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal, "TransformVectorAbsoluteToLocal" }, // 3337075245
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute, "TransformVectorLocalToAbsolute" }, // 1228219525
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlateBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateBlueprintLibrary_Statics::ClassParams = {
	&USlateBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USlateBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USlateBlueprintLibrary>()
{
	return USlateBlueprintLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBlueprintLibrary);
USlateBlueprintLibrary::~USlateBlueprintLibrary() {}
// End Class USlateBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateBlueprintLibrary, USlateBlueprintLibrary::StaticClass, TEXT("USlateBlueprintLibrary"), &Z_Registration_Info_UClass_USlateBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateBlueprintLibrary), 1968703528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_1356261034(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
