// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ImageWriteQueue/Public/ImageWriteBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageWriteBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
IMAGEWRITEQUEUE_API UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary();
IMAGEWRITEQUEUE_API UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister();
IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
IMAGEWRITEQUEUE_API UFunction* Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature();
IMAGEWRITEQUEUE_API UScriptStruct* Z_Construct_UScriptStruct_FImageWriteOptions();
UPackage* Z_Construct_UPackage__Script_ImageWriteQueue();
// End Cross Module References

// Begin Delegate FOnImageWriteComplete
struct Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics
{
	struct _Script_ImageWriteQueue_eventOnImageWriteComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms), &Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImageWriteQueue, nullptr, "OnImageWriteComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnImageWriteComplete_DelegateWrapper(const FScriptDelegate& OnImageWriteComplete, bool bSuccess)
{
	struct _Script_ImageWriteQueue_eventOnImageWriteComplete_Parms
	{
		bool bSuccess;
	};
	_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnImageWriteComplete.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnImageWriteComplete

// Begin ScriptStruct FImageWriteOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageWriteOptions;
class UScriptStruct* FImageWriteOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageWriteOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageWriteOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageWriteOptions, (UObject*)Z_Construct_UPackage__Script_ImageWriteQueue(), TEXT("ImageWriteOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ImageWriteOptions.OuterSingleton;
}
template<> IMAGEWRITEQUEUE_API UScriptStruct* StaticStruct<FImageWriteOptions>()
{
	return FImageWriteOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImageWriteOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options specific to writing image files to disk\n */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Options specific to writing image files to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** The desired output image format to write to disk */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "The desired output image format to write to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** A callback to invoke when the image has been written, or there was an error */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "A callback to invoke when the image has been written, or there was an error" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** An image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100. */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "An image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteFile_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** Whether to overwrite the image if it already exists */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Whether to overwrite the image if it already exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAsync_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** Whether to perform the writing asynchronously, or to block the game thread until it is complete */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Whether to perform the writing asynchronously, or to block the game thread until it is complete" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
	static void NewProp_bOverwriteFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteFile;
	static void NewProp_bAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageWriteOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageWriteOptions, Format), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 3760367723
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageWriteOptions, OnComplete), Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3934133593
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageWriteOptions, CompressionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionQuality_MetaData), NewProp_CompressionQuality_MetaData) };
void Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_SetBit(void* Obj)
{
	((FImageWriteOptions*)Obj)->bOverwriteFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile = { "bOverwriteFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImageWriteOptions), &Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverwriteFile_MetaData), NewProp_bOverwriteFile_MetaData) };
void Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_SetBit(void* Obj)
{
	((FImageWriteOptions*)Obj)->bAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImageWriteOptions), &Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAsync_MetaData), NewProp_bAsync_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImageWriteQueue,
	nullptr,
	&NewStructOps,
	"ImageWriteOptions",
	Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers),
	sizeof(FImageWriteOptions),
	alignof(FImageWriteOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImageWriteOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ImageWriteOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageWriteOptions.InnerSingleton, Z_Construct_UScriptStruct_FImageWriteOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImageWriteOptions.InnerSingleton;
}
// End ScriptStruct FImageWriteOptions

// Begin Class UImageWriteBlueprintLibrary Function ExportToDisk
struct Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics
{
	struct ImageWriteBlueprintLibrary_eventExportToDisk_Parms
	{
		UTexture* Texture;
		FString Filename;
		FImageWriteOptions Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09 * Export the specified texture to disk\n\x09 *\n\x09 * @param Texture         The texture or render target to export\n\x09 * @param Filename        The filename on disk to save as\n\x09 * @param Options         Parameters defining the various export options\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Export the specified texture to disk\n\n@param Texture         The texture or render target to export\n@param Filename        The filename on disk to save as\n@param Options         Parameters defining the various export options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Options), Z_Construct_UScriptStruct_FImageWriteOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 2186047593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageWriteBlueprintLibrary, nullptr, "ExportToDisk", nullptr, nullptr, Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::ImageWriteBlueprintLibrary_eventExportToDisk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::ImageWriteBlueprintLibrary_eventExportToDisk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImageWriteBlueprintLibrary::execExportToDisk)
{
	P_GET_OBJECT(UTexture,Z_Param_Texture);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_STRUCT_REF(FImageWriteOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	UImageWriteBlueprintLibrary::ExportToDisk(Z_Param_Texture,Z_Param_Filename,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UImageWriteBlueprintLibrary Function ExportToDisk

// Begin Class UImageWriteBlueprintLibrary
void UImageWriteBlueprintLibrary::StaticRegisterNativesUImageWriteBlueprintLibrary()
{
	UClass* Class = UImageWriteBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportToDisk", &UImageWriteBlueprintLibrary::execExportToDisk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageWriteBlueprintLibrary);
UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister()
{
	return UImageWriteBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing utility methods for writing images on a global async queue\n */" },
		{ "IncludePath", "ImageWriteBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Function library containing utility methods for writing images on a global async queue" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk, "ExportToDisk" }, // 1962454830
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageWriteBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ImageWriteQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::ClassParams = {
	&UImageWriteBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton;
}
template<> IMAGEWRITEQUEUE_API UClass* StaticClass<UImageWriteBlueprintLibrary>()
{
	return UImageWriteBlueprintLibrary::StaticClass();
}
UImageWriteBlueprintLibrary::UImageWriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageWriteBlueprintLibrary);
UImageWriteBlueprintLibrary::~UImageWriteBlueprintLibrary() {}
// End Class UImageWriteBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FImageWriteOptions::StaticStruct, Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewStructOps, TEXT("ImageWriteOptions"), &Z_Registration_Info_UScriptStruct_ImageWriteOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageWriteOptions), 2186047593U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImageWriteBlueprintLibrary, UImageWriteBlueprintLibrary::StaticClass, TEXT("UImageWriteBlueprintLibrary"), &Z_Registration_Info_UClass_UImageWriteBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageWriteBlueprintLibrary), 522962089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_593855948(TEXT("/Script/ImageWriteQueue"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
