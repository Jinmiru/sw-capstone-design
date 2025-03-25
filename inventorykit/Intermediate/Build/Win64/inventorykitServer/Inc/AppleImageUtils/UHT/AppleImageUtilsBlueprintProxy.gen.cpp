// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleImageUtils/Public/AppleImageUtilsBlueprintProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleImageUtilsBlueprintProxy() {}

// Begin Cross Module References
APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy();
APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister();
APPLEIMAGEUTILS_API UEnum* Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection();
APPLEIMAGEUTILS_API UFunction* Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature();
APPLEIMAGEUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_AppleImageUtils();
// End Cross Module References

// Begin ScriptStruct FAppleImageUtilsImageConversionResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult;
class UScriptStruct* FAppleImageUtilsImageConversionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult, (UObject*)Z_Construct_UPackage__Script_AppleImageUtils(), TEXT("AppleImageUtilsImageConversionResult"));
	}
	return Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult.OuterSingleton;
}
template<> APPLEIMAGEUTILS_API UScriptStruct* StaticStruct<FAppleImageUtilsImageConversionResult>()
{
	return FAppleImageUtilsImageConversionResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "Category", "Image Conversion" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageData_MetaData[] = {
		{ "Category", "Image Conversion" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleImageUtilsImageConversionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAppleImageUtilsImageConversionResult, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData_Inner = { "ImageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAppleImageUtilsImageConversionResult, ImageData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageData_MetaData), NewProp_ImageData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewProp_ImageData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AppleImageUtils,
	nullptr,
	&NewStructOps,
	"AppleImageUtilsImageConversionResult",
	Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::PropPointers),
	sizeof(FAppleImageUtilsImageConversionResult),
	alignof(FAppleImageUtilsImageConversionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult()
{
	if (!Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult.InnerSingleton, Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult.InnerSingleton;
}
// End ScriptStruct FAppleImageUtilsImageConversionResult

// Begin Delegate FAppleImageConversionDelegate
struct Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics
{
	struct _Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms
	{
		FAppleImageUtilsImageConversionResult ConversionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::NewProp_ConversionResult = { "ConversionResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms, ConversionResult), Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionResult_MetaData), NewProp_ConversionResult_MetaData) }; // 2666488047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::NewProp_ConversionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AppleImageUtils, nullptr, "AppleImageConversionDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::_Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::_Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAppleImageConversionDelegate_DelegateWrapper(const FMulticastScriptDelegate& AppleImageConversionDelegate, FAppleImageUtilsImageConversionResult const& ConversionResult)
{
	struct _Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms
	{
		FAppleImageUtilsImageConversionResult ConversionResult;
	};
	_Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms Parms;
	Parms.ConversionResult=ConversionResult;
	AppleImageConversionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAppleImageConversionDelegate

// Begin Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToHEIF
struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics
{
	struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms
	{
		UTexture* SourceImage;
		int32 Quality;
		bool bWantColor;
		bool bUseGpu;
		float Scale;
		ETextureRotationDirection Rotate;
		UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of HEIF data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the HEIF is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Quality", "85" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To HEIF" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of HEIF data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the HEIF is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static void NewProp_bWantColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
	static void NewProp_bUseGpu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, Quality), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms*)Obj)->bWantColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms*)Obj)->bUseGpu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(0, nullptr) }; // 3276516778
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_SourceImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bWantColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_bUseGpu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_Rotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToHEIF", nullptr, nullptr, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToHEIF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToHEIF)
{
	P_GET_OBJECT(UTexture,Z_Param_SourceImage);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_GET_UBOOL(Z_Param_bWantColor);
	P_GET_UBOOL(Z_Param_bUseGpu);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(Z_Param_SourceImage,Z_Param_Quality,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
	P_NATIVE_END;
}
// End Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToHEIF

// Begin Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToJPEG
struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics
{
	struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms
	{
		UTexture* SourceImage;
		int32 Quality;
		bool bWantColor;
		bool bUseGpu;
		float Scale;
		ETextureRotationDirection Rotate;
		UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of JPEG data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the JPEG is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Quality", "85" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To JPEG" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of JPEG data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the JPEG is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static void NewProp_bWantColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
	static void NewProp_bUseGpu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, Quality), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms*)Obj)->bWantColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms*)Obj)->bUseGpu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(0, nullptr) }; // 3276516778
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_SourceImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bWantColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_bUseGpu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_Rotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToJPEG", nullptr, nullptr, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToJPEG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToJPEG)
{
	P_GET_OBJECT(UTexture,Z_Param_SourceImage);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_GET_UBOOL(Z_Param_bWantColor);
	P_GET_UBOOL(Z_Param_bUseGpu);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(Z_Param_SourceImage,Z_Param_Quality,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
	P_NATIVE_END;
}
// End Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToJPEG

// Begin Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToPNG
struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics
{
	struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms
	{
		UTexture* SourceImage;
		bool bWantColor;
		bool bUseGpu;
		float Scale;
		ETextureRotationDirection Rotate;
		UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of TIFF data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the PNG is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To PNG" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of TIFF data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the PNG is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
	static void NewProp_bWantColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
	static void NewProp_bUseGpu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms*)Obj)->bWantColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms*)Obj)->bUseGpu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(0, nullptr) }; // 3276516778
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_SourceImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bWantColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_bUseGpu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_Rotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToPNG", nullptr, nullptr, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToPNG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToPNG)
{
	P_GET_OBJECT(UTexture,Z_Param_SourceImage);
	P_GET_UBOOL(Z_Param_bWantColor);
	P_GET_UBOOL(Z_Param_bUseGpu);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(Z_Param_SourceImage,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
	P_NATIVE_END;
}
// End Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToPNG

// Begin Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToTIFF
struct Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics
{
	struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms
	{
		UTexture* SourceImage;
		bool bWantColor;
		bool bUseGpu;
		float Scale;
		ETextureRotationDirection Rotate;
		UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image Conversion" },
		{ "Comment", "/**\n\x09 * Converts a image to an array of TIFF data in a background task\n\x09 *\n\x09 * @param SourceImage the image to compress\n\x09 * @param Quality the quality level to compress to\n\x09 * @param bWantColor whether the TIFF is color (true) or monochrome (false)\n\x09 * @param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n\x09 * @param Scale whether to scale the image before conversion, defaults to no scaling\n\x09 * @param Rotate a direction to rotate the image in during conversion, defaults to none\n\x09 */" },
		{ "CPP_Default_bUseGpu", "true" },
		{ "CPP_Default_bWantColor", "true" },
		{ "CPP_Default_Rotate", "None" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DisplayName", "Convert To TIFF" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
		{ "ToolTip", "Converts a image to an array of TIFF data in a background task\n\n@param SourceImage the image to compress\n@param Quality the quality level to compress to\n@param bWantColor whether the TIFF is color (true) or monochrome (false)\n@param bUseGpu whether to use the GPU (true) or the CPU (false) to compress\n@param Scale whether to scale the image before conversion, defaults to no scaling\n@param Rotate a direction to rotate the image in during conversion, defaults to none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
	static void NewProp_bWantColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantColor;
	static void NewProp_bUseGpu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGpu;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms*)Obj)->bWantColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor = { "bWantColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu_SetBit(void* Obj)
{
	((AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms*)Obj)->bUseGpu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu = { "bUseGpu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms), &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, Rotate), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(0, nullptr) }; // 3276516778
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms, ReturnValue), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_SourceImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bWantColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_bUseGpu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_Rotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForConvertToTIFF", nullptr, nullptr, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::AppleImageUtilsBaseAsyncTaskBlueprintProxy_eventCreateProxyObjectForConvertToTIFF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToTIFF)
{
	P_GET_OBJECT(UTexture,Z_Param_SourceImage);
	P_GET_UBOOL(Z_Param_bWantColor);
	P_GET_UBOOL(Z_Param_bUseGpu);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_ENUM(ETextureRotationDirection,Z_Param_Rotate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAppleImageUtilsBaseAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(Z_Param_SourceImage,Z_Param_bWantColor,Z_Param_bUseGpu,Z_Param_Scale,ETextureRotationDirection(Z_Param_Rotate));
	P_NATIVE_END;
}
// End Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy Function CreateProxyObjectForConvertToTIFF

// Begin Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy
void UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy()
{
	UClass* Class = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForConvertToHEIF", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToHEIF },
		{ "CreateProxyObjectForConvertToJPEG", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToJPEG },
		{ "CreateProxyObjectForConvertToPNG", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToPNG },
		{ "CreateProxyObjectForConvertToTIFF", &UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToTIFF },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleImageUtilsBaseAsyncTaskBlueprintProxy);
UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister()
{
	return UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass();
}
struct Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AppleImageUtilsBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionResult_MetaData[] = {
		{ "Category", "Image Conversion" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsBlueprintProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, "CreateProxyObjectForConvertToHEIF" }, // 3067442395
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, "CreateProxyObjectForConvertToJPEG" }, // 797614715
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, "CreateProxyObjectForConvertToPNG" }, // 4176747352
		{ &Z_Construct_UFunction_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, "CreateProxyObjectForConvertToTIFF" }, // 3109139121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4265902089
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, OnFailure), Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 4265902089
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_ConversionResult = { "ConversionResult", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult), Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionResult_MetaData), NewProp_ConversionResult_MetaData) }; // 2666488047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::NewProp_ConversionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AppleImageUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::ClassParams = {
	&UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy()
{
	if (!Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.OuterSingleton;
}
template<> APPLEIMAGEUTILS_API UClass* StaticClass<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>()
{
	return UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleImageUtilsBaseAsyncTaskBlueprintProxy);
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::~UAppleImageUtilsBaseAsyncTaskBlueprintProxy() {}
// End Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAppleImageUtilsImageConversionResult::StaticStruct, Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics::NewStructOps, TEXT("AppleImageUtilsImageConversionResult"), &Z_Registration_Info_UScriptStruct_AppleImageUtilsImageConversionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppleImageUtilsImageConversionResult), 2666488047U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass, TEXT("UAppleImageUtilsBaseAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy), 827799987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_1973596526(TEXT("/Script/AppleImageUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
