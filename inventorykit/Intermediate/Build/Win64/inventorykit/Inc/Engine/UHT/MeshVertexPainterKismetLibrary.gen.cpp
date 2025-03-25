// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPainterKismetLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMeshVertexPainterKismetLibrary Function PaintVerticesLerpAlongAxis
struct Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics
{
	struct MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		FLinearColor StartColor;
		FLinearColor EndColor;
		EVertexPaintAxis Axis;
		bool bConvertToSRGB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VertexPaint" },
		{ "Comment", "/** Paints vertex colors on a mesh component lerping from the start to the end color along the specified axis. */" },
		{ "CPP_Default_bConvertToSRGB", "true" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ToolTip", "Paints vertex colors on a mesh component lerping from the start to the end color along the specified axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static void NewProp_bConvertToSRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToSRGB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StartColor = { "StartColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, StartColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartColor_MetaData), NewProp_StartColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_EndColor = { "EndColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, EndColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndColor_MetaData), NewProp_EndColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, Axis), Z_Construct_UEnum_Engine_EVertexPaintAxis, METADATA_PARAMS(0, nullptr) }; // 3774337131
void Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB_SetBit(void* Obj)
{
	((MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms*)Obj)->bConvertToSRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB = { "bConvertToSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms), &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StartColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_EndColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, nullptr, "PaintVerticesLerpAlongAxis", nullptr, nullptr, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPainterKismetLibrary::execPaintVerticesLerpAlongAxis)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_StartColor);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_EndColor);
	P_GET_ENUM(EVertexPaintAxis,Z_Param_Axis);
	P_GET_UBOOL(Z_Param_bConvertToSRGB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis(Z_Param_StaticMeshComponent,Z_Param_Out_StartColor,Z_Param_Out_EndColor,EVertexPaintAxis(Z_Param_Axis),Z_Param_bConvertToSRGB);
	P_NATIVE_END;
}
// End Class UMeshVertexPainterKismetLibrary Function PaintVerticesLerpAlongAxis

// Begin Class UMeshVertexPainterKismetLibrary Function PaintVerticesSingleColor
struct Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics
{
	struct MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		FLinearColor FillColor;
		bool bConvertToSRGB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VertexPaint" },
		{ "Comment", "/** Paints vertex colors on a mesh component in a specified color. */" },
		{ "CPP_Default_bConvertToSRGB", "true" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ToolTip", "Paints vertex colors on a mesh component in a specified color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static void NewProp_bConvertToSRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToSRGB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColor_MetaData), NewProp_FillColor_MetaData) };
void Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB_SetBit(void* Obj)
{
	((MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms*)Obj)->bConvertToSRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB = { "bConvertToSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms), &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_FillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, nullptr, "PaintVerticesSingleColor", nullptr, nullptr, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPainterKismetLibrary::execPaintVerticesSingleColor)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FillColor);
	P_GET_UBOOL(Z_Param_bConvertToSRGB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMeshVertexPainterKismetLibrary::PaintVerticesSingleColor(Z_Param_StaticMeshComponent,Z_Param_Out_FillColor,Z_Param_bConvertToSRGB);
	P_NATIVE_END;
}
// End Class UMeshVertexPainterKismetLibrary Function PaintVerticesSingleColor

// Begin Class UMeshVertexPainterKismetLibrary Function RemovePaintedVertices
struct Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics
{
	struct MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VertexPaint" },
		{ "Comment", "/** Removes vertex colors on a mesh component */" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ToolTip", "Removes vertex colors on a mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, nullptr, "RemovePaintedVertices", nullptr, nullptr, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPainterKismetLibrary::execRemovePaintedVertices)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMeshVertexPainterKismetLibrary::RemovePaintedVertices(Z_Param_StaticMeshComponent);
	P_NATIVE_END;
}
// End Class UMeshVertexPainterKismetLibrary Function RemovePaintedVertices

// Begin Class UMeshVertexPainterKismetLibrary
void UMeshVertexPainterKismetLibrary::StaticRegisterNativesUMeshVertexPainterKismetLibrary()
{
	UClass* Class = UMeshVertexPainterKismetLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PaintVerticesLerpAlongAxis", &UMeshVertexPainterKismetLibrary::execPaintVerticesLerpAlongAxis },
		{ "PaintVerticesSingleColor", &UMeshVertexPainterKismetLibrary::execPaintVerticesSingleColor },
		{ "RemovePaintedVertices", &UMeshVertexPainterKismetLibrary::execRemovePaintedVertices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPainterKismetLibrary);
UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister()
{
	return UMeshVertexPainterKismetLibrary::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ScriptName", "MeshVertexPainterLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis, "PaintVerticesLerpAlongAxis" }, // 1235456731
		{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor, "PaintVerticesSingleColor" }, // 1345523592
		{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices, "RemovePaintedVertices" }, // 3768223941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPainterKismetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::ClassParams = {
	&UMeshVertexPainterKismetLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary()
{
	if (!Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.OuterSingleton, Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMeshVertexPainterKismetLibrary>()
{
	return UMeshVertexPainterKismetLibrary::StaticClass();
}
UMeshVertexPainterKismetLibrary::UMeshVertexPainterKismetLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPainterKismetLibrary);
UMeshVertexPainterKismetLibrary::~UMeshVertexPainterKismetLibrary() {}
// End Class UMeshVertexPainterKismetLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshVertexPainterKismetLibrary, UMeshVertexPainterKismetLibrary::StaticClass, TEXT("UMeshVertexPainterKismetLibrary"), &Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPainterKismetLibrary), 547413258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_250965118(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
