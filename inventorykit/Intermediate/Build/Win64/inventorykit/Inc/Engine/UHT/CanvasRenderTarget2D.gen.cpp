// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CanvasRenderTarget2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasRenderTarget2D() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnCanvasRenderTargetUpdate
struct Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnCanvasRenderTargetUpdate_Parms
	{
		UCanvas* Canvas;
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** This delegate is assignable through Blueprint and has similar functionality to the above. */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "This delegate is assignable through Blueprint and has similar functionality to the above." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnCanvasRenderTargetUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCanvasRenderTargetUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnCanvasRenderTargetUpdate, UCanvas* Canvas, int32 Width, int32 Height)
{
	struct _Script_Engine_eventOnCanvasRenderTargetUpdate_Parms
	{
		UCanvas* Canvas;
		int32 Width;
		int32 Height;
	};
	_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms Parms;
	Parms.Canvas=Canvas;
	Parms.Width=Width;
	Parms.Height=Height;
	OnCanvasRenderTargetUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCanvasRenderTargetUpdate

// Begin Class UCanvasRenderTarget2D Function CreateCanvasRenderTarget2D
struct Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics
{
	struct CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass;
		int32 Width;
		int32 Height;
		UCanvasRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Creates a new canvas render target and initializes it to the specified dimensions\n\x09 *\n\x09 * @param\x09WorldContextObject\x09The world where this render target will be rendered for\n\x09 * @param\x09""CanvasRenderTarget2DClass\x09""Class of the render target.  Unless you want to use a special sub-class, you can simply pass UCanvasRenderTarget2D::StaticClass() here.\n\x09 * @param\x09Width\x09\x09\x09\x09Width of the render target.\n\x09 * @param\x09Height\x09\x09\x09\x09Height of the render target.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09\x09Returns the instanced render target.\n\x09 */" },
		{ "CPP_Default_Height", "1024" },
		{ "CPP_Default_Width", "1024" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Creates a new canvas render target and initializes it to the specified dimensions\n\n@param       WorldContextObject      The world where this render target will be rendered for\n@param       CanvasRenderTarget2DClass       Class of the render target.  Unless you want to use a special sub-class, you can simply pass UCanvasRenderTarget2D::StaticClass() here.\n@param       Width                           Width of the render target.\n@param       Height                          Height of the render target.\n\n@return                                              Returns the instanced render target." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CanvasRenderTarget2DClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_CanvasRenderTarget2DClass = { "CanvasRenderTarget2DClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, CanvasRenderTarget2DClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_CanvasRenderTarget2DClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "CreateCanvasRenderTarget2D", nullptr, nullptr, Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasRenderTarget2D::execCreateCanvasRenderTarget2D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_CanvasRenderTarget2DClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCanvasRenderTarget2D**)Z_Param__Result=UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(Z_Param_WorldContextObject,Z_Param_CanvasRenderTarget2DClass,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UCanvasRenderTarget2D Function CreateCanvasRenderTarget2D

// Begin Class UCanvasRenderTarget2D Function GetSampleCount
struct Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics
{
	struct CanvasRenderTarget2D_eventGetSampleCount_Parms
	{
		ETextureRenderTargetSampleCount ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventGetSampleCount_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount, METADATA_PARAMS(0, nullptr) }; // 4230546061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "GetSampleCount", nullptr, nullptr, Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::CanvasRenderTarget2D_eventGetSampleCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::CanvasRenderTarget2D_eventGetSampleCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasRenderTarget2D::execGetSampleCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETextureRenderTargetSampleCount*)Z_Param__Result=P_THIS->GetSampleCount();
	P_NATIVE_END;
}
// End Class UCanvasRenderTarget2D Function GetSampleCount

// Begin Class UCanvasRenderTarget2D Function GetSize
struct Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics
{
	struct CanvasRenderTarget2D_eventGetSize_Parms
	{
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Gets a specific render target's size from the global map of canvas render targets.\n\x09 *\n\x09 * @param\x09Width\x09Output variable for the render target's width\n\x09 * @param\x09Height\x09Output variable for the render target's height\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Gets a specific render target's size from the global map of canvas render targets.\n\n@param       Width   Output variable for the render target's width\n@param       Height  Output variable for the render target's height" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventGetSize_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventGetSize_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::CanvasRenderTarget2D_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::CanvasRenderTarget2D_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasRenderTarget2D::execGetSize)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSize(Z_Param_Out_Width,Z_Param_Out_Height);
	P_NATIVE_END;
}
// End Class UCanvasRenderTarget2D Function GetSize

// Begin Class UCanvasRenderTarget2D Function ReceiveUpdate
struct CanvasRenderTarget2D_eventReceiveUpdate_Parms
{
	UCanvas* Canvas;
	int32 Width;
	int32 Height;
};
static FName NAME_UCanvasRenderTarget2D_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
void UCanvasRenderTarget2D::ReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height)
{
	CanvasRenderTarget2D_eventReceiveUpdate_Parms Parms;
	Parms.Canvas=Canvas;
	Parms.Width=Width;
	Parms.Height=Height;
	ProcessEvent(FindFunctionChecked(NAME_UCanvasRenderTarget2D_ReceiveUpdate),&Parms);
}
struct Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Allows a Blueprint to implement how this Canvas Render Target 2D should be updated.\n\x09 *\n\x09 * @param\x09""Canvas\x09\x09\x09\x09""Canvas object that can be used to paint to the render target\n\x09 * @param\x09Width\x09\x09\x09\x09Width of the render target.\n\x09 * @param\x09Height\x09\x09\x09\x09Height of the render target.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Allows a Blueprint to implement how this Canvas Render Target 2D should be updated.\n\n@param       Canvas                          Canvas object that can be used to paint to the render target\n@param       Width                           Width of the render target.\n@param       Height                          Height of the render target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "ReceiveUpdate", nullptr, nullptr, Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::PropPointers), sizeof(CanvasRenderTarget2D_eventReceiveUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CanvasRenderTarget2D_eventReceiveUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCanvasRenderTarget2D Function ReceiveUpdate

// Begin Class UCanvasRenderTarget2D Function SetSampleCount
struct Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics
{
	struct CanvasRenderTarget2D_eventSetSampleCount_Parms
	{
		ETextureRenderTargetSampleCount InSampleCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSampleCount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSampleCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::NewProp_InSampleCount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::NewProp_InSampleCount = { "InSampleCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasRenderTarget2D_eventSetSampleCount_Parms, InSampleCount), Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount, METADATA_PARAMS(0, nullptr) }; // 4230546061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::NewProp_InSampleCount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::NewProp_InSampleCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "SetSampleCount", nullptr, nullptr, Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::CanvasRenderTarget2D_eventSetSampleCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::CanvasRenderTarget2D_eventSetSampleCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasRenderTarget2D::execSetSampleCount)
{
	P_GET_ENUM(ETextureRenderTargetSampleCount,Z_Param_InSampleCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSampleCount(ETextureRenderTargetSampleCount(Z_Param_InSampleCount));
	P_NATIVE_END;
}
// End Class UCanvasRenderTarget2D Function SetSampleCount

// Begin Class UCanvasRenderTarget2D Function UpdateResource
struct Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/**\n\x09 * Updates the the canvas render target texture's resource. This is where the render target will create or \n\x09 * find a canvas object to use.  It also calls UpdateResourceImmediate() to clear the render target texture \n\x09 * from the deferred rendering list, to stop the texture from being cleared the next frame. From there it\n\x09 * will ask the rendering thread to set up the RHI viewport. The canvas is then set up for rendering and \n\x09 * then the user's update delegate is called.  The canvas is then flushed and the RHI resolves the \n\x09 * texture to make it available for rendering.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Updates the the canvas render target texture's resource. This is where the render target will create or\nfind a canvas object to use.  It also calls UpdateResourceImmediate() to clear the render target texture\nfrom the deferred rendering list, to stop the texture from being cleared the next frame. From there it\nwill ask the rendering thread to set up the RHI viewport. The canvas is then set up for rendering and\nthen the user's update delegate is called.  The canvas is then flushed and the RHI resolves the\ntexture to make it available for rendering." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, nullptr, "UpdateResource", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasRenderTarget2D::execUpdateResource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateResource();
	P_NATIVE_END;
}
// End Class UCanvasRenderTarget2D Function UpdateResource

// Begin Class UCanvasRenderTarget2D
void UCanvasRenderTarget2D::StaticRegisterNativesUCanvasRenderTarget2D()
{
	UClass* Class = UCanvasRenderTarget2D::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateCanvasRenderTarget2D", &UCanvasRenderTarget2D::execCreateCanvasRenderTarget2D },
		{ "GetSampleCount", &UCanvasRenderTarget2D::execGetSampleCount },
		{ "GetSize", &UCanvasRenderTarget2D::execGetSize },
		{ "SetSampleCount", &UCanvasRenderTarget2D::execSetSampleCount },
		{ "UpdateResource", &UCanvasRenderTarget2D::execUpdateResource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanvasRenderTarget2D);
UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister()
{
	return UCanvasRenderTarget2D::StaticClass();
}
struct Z_Construct_UClass_UCanvasRenderTarget2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * CanvasRenderTarget2D is 2D render target which exposes a Canvas interface to allow you to draw elements onto \n * it directly.  Use CreateCanvasRenderTarget2D() to create a render target texture by unique name, then\n * bind a function to the OnCanvasRenderTargetUpdate delegate which will be called when the render target is\n * updated.  If you need to repaint your canvas every single frame, simply call UpdateResource() on it from a Tick\n * function.  Also, remember to hold onto your new canvas render target with a reference so that it doesn't get\n * garbage collected.\n */" },
		{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
		{ "IncludePath", "Engine/CanvasRenderTarget2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "CanvasRenderTarget2D is 2D render target which exposes a Canvas interface to allow you to draw elements onto\nit directly.  Use CreateCanvasRenderTarget2D() to create a render target texture by unique name, then\nbind a function to the OnCanvasRenderTargetUpdate delegate which will be called when the render target is\nupdated.  If you need to repaint your canvas every single frame, simply call UpdateResource() on it from a Tick\nfunction.  Also, remember to hold onto your new canvas render target with a reference so that it doesn't get\ngarbage collected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCanvasRenderTargetUpdate_MetaData[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "Comment", "/** Called when this Canvas Render Target is asked to update its texture resource. */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "Called when this Canvas Render Target is asked to update its texture resource." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Comment", "/* The world this render target will be used with */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "The world this render target will be used with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetSampleCount" },
		{ "BlueprintSetter", "SetSampleCount" },
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** MSAA sample count. */" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "MSAA sample count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData[] = {
		{ "Comment", "// If true, clear the render target to green whenever OnReceiveUpdate() is called.  (Defaults to true.)\n// If false, the render target will retain whatever values it had, allowing the user to update only areas that\n// have changed.\n" },
		{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
		{ "ToolTip", "If true, clear the render target to green whenever OnReceiveUpdate() is called.  (Defaults to true.)\nIf false, the render target will retain whatever values it had, allowing the user to update only areas that\nhave changed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCanvasRenderTargetUpdate;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleCount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleCount;
	static void NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearRenderTargetOnReceiveUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D, "CreateCanvasRenderTarget2D" }, // 3185607473
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_GetSampleCount, "GetSampleCount" }, // 24399425
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize, "GetSize" }, // 1953616416
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate, "ReceiveUpdate" }, // 2965323565
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_SetSampleCount, "SetSampleCount" }, // 3117624966
		{ &Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource, "UpdateResource" }, // 1300907865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasRenderTarget2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_OnCanvasRenderTargetUpdate = { "OnCanvasRenderTargetUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanvasRenderTarget2D, OnCanvasRenderTargetUpdate), Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCanvasRenderTargetUpdate_MetaData), NewProp_OnCanvasRenderTargetUpdate_MetaData) }; // 3501959909
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanvasRenderTarget2D, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_SampleCount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_SampleCount = { "SampleCount", nullptr, (EPropertyFlags)0x00200d0000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanvasRenderTarget2D, SampleCount), Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleCount_MetaData), NewProp_SampleCount_MetaData) }; // 4230546061
void Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit(void* Obj)
{
	((UCanvasRenderTarget2D*)Obj)->bShouldClearRenderTargetOnReceiveUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate = { "bShouldClearRenderTargetOnReceiveUpdate", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCanvasRenderTarget2D), &Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData), NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasRenderTarget2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_OnCanvasRenderTargetUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_SampleCount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_SampleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2D_Statics::NewProp_bShouldClearRenderTargetOnReceiveUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCanvasRenderTarget2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanvasRenderTarget2D_Statics::ClassParams = {
	&UCanvasRenderTarget2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCanvasRenderTarget2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanvasRenderTarget2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanvasRenderTarget2D()
{
	if (!Z_Registration_Info_UClass_UCanvasRenderTarget2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanvasRenderTarget2D.OuterSingleton, Z_Construct_UClass_UCanvasRenderTarget2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanvasRenderTarget2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCanvasRenderTarget2D>()
{
	return UCanvasRenderTarget2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasRenderTarget2D);
UCanvasRenderTarget2D::~UCanvasRenderTarget2D() {}
// End Class UCanvasRenderTarget2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanvasRenderTarget2D, UCanvasRenderTarget2D::StaticClass, TEXT("UCanvasRenderTarget2D"), &Z_Registration_Info_UClass_UCanvasRenderTarget2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvasRenderTarget2D), 1565384996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_539718445(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
