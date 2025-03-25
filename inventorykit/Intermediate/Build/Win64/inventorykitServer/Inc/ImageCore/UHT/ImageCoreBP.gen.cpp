// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ImageCore/Public/ImageCoreBP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageCoreBP() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
IMAGECORE_API UClass* Z_Construct_UClass_USharedImageConstRefBlueprintFns();
IMAGECORE_API UClass* Z_Construct_UClass_USharedImageConstRefBlueprintFns_NoRegister();
IMAGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint();
UPackage* Z_Construct_UPackage__Script_ImageCore();
// End Cross Module References

// Begin ScriptStruct FSharedImageConstRefBlueprint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint;
class UScriptStruct* FSharedImageConstRefBlueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, (UObject*)Z_Construct_UPackage__Script_ImageCore(), TEXT("SharedImageConstRefBlueprint"));
	}
	return Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint.OuterSingleton;
}
template<> IMAGECORE_API UScriptStruct* StaticStruct<FSharedImageConstRefBlueprint>()
{
	return FSharedImageConstRefBlueprint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*  Exposes a FSharedImage to blueprint in an unalterable way.\n*/" },
		{ "DisplayName", "FSharedImageConst" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
		{ "ToolTip", "Exposes a FSharedImage to blueprint in an unalterable way." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedImageConstRefBlueprint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImageCore,
	nullptr,
	&NewStructOps,
	"SharedImageConstRefBlueprint",
	nullptr,
	0,
	sizeof(FSharedImageConstRefBlueprint),
	alignof(FSharedImageConstRefBlueprint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint()
{
	if (!Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint.InnerSingleton, Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint.InnerSingleton;
}
// End ScriptStruct FSharedImageConstRefBlueprint

// Begin Class USharedImageConstRefBlueprintFns Function GetHeight
struct Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics
{
	struct SharedImageConstRefBlueprintFns_eventGetHeight_Parms
	{
		FSharedImageConstRefBlueprint Image;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SharedImage" },
		{ "Comment", "// Returns -1 if Image is invalid\n" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
		{ "ToolTip", "Returns -1 if Image is invalid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetHeight_Parms, Image), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1357901518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USharedImageConstRefBlueprintFns, nullptr, "GetHeight", nullptr, nullptr, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::SharedImageConstRefBlueprintFns_eventGetHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::SharedImageConstRefBlueprintFns_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USharedImageConstRefBlueprintFns::execGetHeight)
{
	P_GET_STRUCT_REF(FSharedImageConstRefBlueprint,Z_Param_Out_Image);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USharedImageConstRefBlueprintFns::GetHeight(Z_Param_Out_Image);
	P_NATIVE_END;
}
// End Class USharedImageConstRefBlueprintFns Function GetHeight

// Begin Class USharedImageConstRefBlueprintFns Function GetPixelLinearColor
struct Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics
{
	struct SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms
	{
		FSharedImageConstRefBlueprint Image;
		int32 X;
		int32 Y;
		bool bValid;
		FLinearColor FailureColor;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SharedImage" },
		{ "Comment", "/**\n\x09*\x09Returns the color value for the given pixel. If the input position is invalid, the format is invalid,\n\x09*\x09or the reference isn't set, bValid will be false and the function will return FailureColor. The color\n\x09*\x09is converted using the image's gamma space in to linear space.\n\x09* \n\x09*\x09""Do not use this for full image processing as it will be extremely slow, contact support if you need such\n\x09*\x09""functionality.\n\x09*/" },
		{ "CPP_Default_FailureColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
		{ "ToolTip", "Returns the color value for the given pixel. If the input position is invalid, the format is invalid,\nor the reference isn't set, bValid will be false and the function will return FailureColor. The color\nis converted using the image's gamma space in to linear space.\n\nDo not use this for full image processing as it will be extremely slow, contact support if you need such\nfunctionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms, Image), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1357901518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms, Y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms), &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_FailureColor = { "FailureColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms, FailureColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_bValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_FailureColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USharedImageConstRefBlueprintFns, nullptr, "GetPixelLinearColor", nullptr, nullptr, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::SharedImageConstRefBlueprintFns_eventGetPixelLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USharedImageConstRefBlueprintFns::execGetPixelLinearColor)
{
	P_GET_STRUCT_REF(FSharedImageConstRefBlueprint,Z_Param_Out_Image);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_UBOOL_REF(Z_Param_Out_bValid);
	P_GET_STRUCT(FLinearColor,Z_Param_FailureColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=USharedImageConstRefBlueprintFns::GetPixelLinearColor(Z_Param_Out_Image,Z_Param_X,Z_Param_Y,Z_Param_Out_bValid,Z_Param_FailureColor);
	P_NATIVE_END;
}
// End Class USharedImageConstRefBlueprintFns Function GetPixelLinearColor

// Begin Class USharedImageConstRefBlueprintFns Function GetPixelValue
struct Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics
{
	struct SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms
	{
		FSharedImageConstRefBlueprint Image;
		int32 X;
		int32 Y;
		bool bValid;
		FVector4f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SharedImage" },
		{ "Comment", "/**\n\x09*\x09Returns the value in the texture for the given pixel as a float vector. If the input position is invalid, the format is invalid,\n\x09*\x09or the reference isn't set, bValid will be false and the function will return FVector4(0,0,0,0).\n\x09* \n\x09*\x09Pixel values are directly returned with no gamma transformation to allow for lookup tables. Also note that\n\x09*\x09""8 bit formats that you might normally expect to be normalized to 0..1 will return their values directly as 0..256.\n\x09*\n\x09*\x09This supports all image formats. \n\x09* \n\x09*\x09G8 is replicated to X/Y/Z/1.\n\x09*\x09R16/R32 is returned as R/0/0/1.\n\x09* \n\x09*\x09""Do not use this for full image processing as it will be extremely slow, contact support if you need such\n\x09*\x09""functionality.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
		{ "ToolTip", "Returns the value in the texture for the given pixel as a float vector. If the input position is invalid, the format is invalid,\nor the reference isn't set, bValid will be false and the function will return FVector4(0,0,0,0).\n\nPixel values are directly returned with no gamma transformation to allow for lookup tables. Also note that\n8 bit formats that you might normally expect to be normalized to 0..1 will return their values directly as 0..256.\n\nThis supports all image formats.\n\nG8 is replicated to X/Y/Z/1.\nR16/R32 is returned as R/0/0/1.\n\nDo not use this for full image processing as it will be extremely slow, contact support if you need such\nfunctionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms, Image), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1357901518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms, Y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms), &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_bValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USharedImageConstRefBlueprintFns, nullptr, "GetPixelValue", nullptr, nullptr, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::SharedImageConstRefBlueprintFns_eventGetPixelValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USharedImageConstRefBlueprintFns::execGetPixelValue)
{
	P_GET_STRUCT_REF(FSharedImageConstRefBlueprint,Z_Param_Out_Image);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_UBOOL_REF(Z_Param_Out_bValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4f*)Z_Param__Result=USharedImageConstRefBlueprintFns::GetPixelValue(Z_Param_Out_Image,Z_Param_X,Z_Param_Y,Z_Param_Out_bValid);
	P_NATIVE_END;
}
// End Class USharedImageConstRefBlueprintFns Function GetPixelValue

// Begin Class USharedImageConstRefBlueprintFns Function GetSize
struct Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics
{
	struct SharedImageConstRefBlueprintFns_eventGetSize_Parms
	{
		FSharedImageConstRefBlueprint Image;
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SharedImage" },
		{ "Comment", "// Returns (-1, -1) if Image is invalid\n" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
		{ "ToolTip", "Returns (-1, -1) if Image is invalid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetSize_Parms, Image), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1357901518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USharedImageConstRefBlueprintFns, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::SharedImageConstRefBlueprintFns_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::SharedImageConstRefBlueprintFns_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USharedImageConstRefBlueprintFns::execGetSize)
{
	P_GET_STRUCT_REF(FSharedImageConstRefBlueprint,Z_Param_Out_Image);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=USharedImageConstRefBlueprintFns::GetSize(Z_Param_Out_Image);
	P_NATIVE_END;
}
// End Class USharedImageConstRefBlueprintFns Function GetSize

// Begin Class USharedImageConstRefBlueprintFns Function GetWidth
struct Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics
{
	struct SharedImageConstRefBlueprintFns_eventGetWidth_Parms
	{
		FSharedImageConstRefBlueprint Image;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SharedImage" },
		{ "Comment", "// Returns -1 if Image is invalid\n" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
		{ "ToolTip", "Returns -1 if Image is invalid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetWidth_Parms, Image), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1357901518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USharedImageConstRefBlueprintFns, nullptr, "GetWidth", nullptr, nullptr, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::SharedImageConstRefBlueprintFns_eventGetWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::SharedImageConstRefBlueprintFns_eventGetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USharedImageConstRefBlueprintFns::execGetWidth)
{
	P_GET_STRUCT_REF(FSharedImageConstRefBlueprint,Z_Param_Out_Image);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USharedImageConstRefBlueprintFns::GetWidth(Z_Param_Out_Image);
	P_NATIVE_END;
}
// End Class USharedImageConstRefBlueprintFns Function GetWidth

// Begin Class USharedImageConstRefBlueprintFns Function IsValid
struct Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics
{
	struct SharedImageConstRefBlueprintFns_eventIsValid_Parms
	{
		FSharedImageConstRefBlueprint Image;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SharedImage" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SharedImageConstRefBlueprintFns_eventIsValid_Parms, Image), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1357901518
void Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SharedImageConstRefBlueprintFns_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SharedImageConstRefBlueprintFns_eventIsValid_Parms), &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USharedImageConstRefBlueprintFns, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::SharedImageConstRefBlueprintFns_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::SharedImageConstRefBlueprintFns_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USharedImageConstRefBlueprintFns::execIsValid)
{
	P_GET_STRUCT_REF(FSharedImageConstRefBlueprint,Z_Param_Out_Image);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USharedImageConstRefBlueprintFns::IsValid(Z_Param_Out_Image);
	P_NATIVE_END;
}
// End Class USharedImageConstRefBlueprintFns Function IsValid

// Begin Class USharedImageConstRefBlueprintFns
void USharedImageConstRefBlueprintFns::StaticRegisterNativesUSharedImageConstRefBlueprintFns()
{
	UClass* Class = USharedImageConstRefBlueprintFns::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeight", &USharedImageConstRefBlueprintFns::execGetHeight },
		{ "GetPixelLinearColor", &USharedImageConstRefBlueprintFns::execGetPixelLinearColor },
		{ "GetPixelValue", &USharedImageConstRefBlueprintFns::execGetPixelValue },
		{ "GetSize", &USharedImageConstRefBlueprintFns::execGetSize },
		{ "GetWidth", &USharedImageConstRefBlueprintFns::execGetWidth },
		{ "IsValid", &USharedImageConstRefBlueprintFns::execIsValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedImageConstRefBlueprintFns);
UClass* Z_Construct_UClass_USharedImageConstRefBlueprintFns_NoRegister()
{
	return USharedImageConstRefBlueprintFns::StaticClass();
}
struct Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ImageCoreBP.h" },
		{ "ModuleRelativePath", "Public/ImageCoreBP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetHeight, "GetHeight" }, // 1906627954
		{ &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelLinearColor, "GetPixelLinearColor" }, // 1362767369
		{ &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetPixelValue, "GetPixelValue" }, // 2473092389
		{ &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetSize, "GetSize" }, // 978162676
		{ &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_GetWidth, "GetWidth" }, // 3379232038
		{ &Z_Construct_UFunction_USharedImageConstRefBlueprintFns_IsValid, "IsValid" }, // 3617521980
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedImageConstRefBlueprintFns>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ImageCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics::ClassParams = {
	&USharedImageConstRefBlueprintFns::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics::Class_MetaDataParams), Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USharedImageConstRefBlueprintFns()
{
	if (!Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.OuterSingleton, Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.OuterSingleton;
}
template<> IMAGECORE_API UClass* StaticClass<USharedImageConstRefBlueprintFns>()
{
	return USharedImageConstRefBlueprintFns::StaticClass();
}
USharedImageConstRefBlueprintFns::USharedImageConstRefBlueprintFns(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USharedImageConstRefBlueprintFns);
USharedImageConstRefBlueprintFns::~USharedImageConstRefBlueprintFns() {}
// End Class USharedImageConstRefBlueprintFns

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSharedImageConstRefBlueprint::StaticStruct, Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics::NewStructOps, TEXT("SharedImageConstRefBlueprint"), &Z_Registration_Info_UScriptStruct_SharedImageConstRefBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedImageConstRefBlueprint), 1357901518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USharedImageConstRefBlueprintFns, USharedImageConstRefBlueprintFns::StaticClass, TEXT("USharedImageConstRefBlueprintFns"), &Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedImageConstRefBlueprintFns), 2888825797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_1164982418(TEXT("/Script/ImageCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
