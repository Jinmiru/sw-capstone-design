// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/ImageCore/Public/ImageCoreBP.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
IMAGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTexture2D Function Blueprint_GetCPUCopy
struct Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics
{
	struct Texture2D_eventBlueprint_GetCPUCopy_Parms
	{
		FSharedImageConstRefBlueprint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "DisplayName", "GetCPUCopy" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture2D_eventBlueprint_GetCPUCopy_Parms, ReturnValue), Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint, METADATA_PARAMS(0, nullptr) }; // 1357901518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, nullptr, "Blueprint_GetCPUCopy", nullptr, nullptr, Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::Texture2D_eventBlueprint_GetCPUCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::Texture2D_eventBlueprint_GetCPUCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexture2D::execBlueprint_GetCPUCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSharedImageConstRefBlueprint*)Z_Param__Result=P_THIS->Blueprint_GetCPUCopy();
	P_NATIVE_END;
}
// End Class UTexture2D Function Blueprint_GetCPUCopy

// Begin Class UTexture2D Function Blueprint_GetSizeX
struct Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics
{
	struct Texture2D_eventBlueprint_GetSizeX_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "Comment", "/**\n\x09 * Gets the X size of the texture, in pixels\n\x09 */" },
		{ "DisplayName", "GetSizeX" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Gets the X size of the texture, in pixels" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, nullptr, "Blueprint_GetSizeX", nullptr, nullptr, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Texture2D_eventBlueprint_GetSizeX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Texture2D_eventBlueprint_GetSizeX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexture2D::execBlueprint_GetSizeX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Blueprint_GetSizeX();
	P_NATIVE_END;
}
// End Class UTexture2D Function Blueprint_GetSizeX

// Begin Class UTexture2D Function Blueprint_GetSizeY
struct Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics
{
	struct Texture2D_eventBlueprint_GetSizeY_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "Comment", "/**\n\x09 * Gets the Y size of the texture, in pixels\n\x09 */" },
		{ "DisplayName", "GetSizeY" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Gets the Y size of the texture, in pixels" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, nullptr, "Blueprint_GetSizeY", nullptr, nullptr, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Texture2D_eventBlueprint_GetSizeY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Texture2D_eventBlueprint_GetSizeY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexture2D::execBlueprint_GetSizeY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Blueprint_GetSizeY();
	P_NATIVE_END;
}
// End Class UTexture2D Function Blueprint_GetSizeY

// Begin Class UTexture2D
void UTexture2D::StaticRegisterNativesUTexture2D()
{
	UClass* Class = UTexture2D::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Blueprint_GetCPUCopy", &UTexture2D::execBlueprint_GetCPUCopy },
		{ "Blueprint_GetSizeX", &UTexture2D::execBlueprint_GetSizeX },
		{ "Blueprint_GetSizeY", &UTexture2D::execBlueprint_GetSizeY },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2D);
UClass* Z_Construct_UClass_UTexture2D_NoRegister()
{
	return UTexture2D::StaticClass();
}
struct Z_Construct_UClass_UTexture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstResourceMemMip_MetaData[] = {
		{ "Comment", "/** keep track of first mip level used for ResourceMem creation */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "keep track of first mip level used for ResourceMem creation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTemporarilyDisableStreaming_MetaData[] = {
		{ "Comment", "/** True if streaming is temporarily disabled so we can update subregions of this texture's resource \n\x09without streaming clobbering it. Automatically cleared before saving. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "True if streaming is temporarily disabled so we can update subregions of this texture's resource\n      without streaming clobbering it. Automatically cleared before saving." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenPaintedInEditor_MetaData[] = {
		{ "Comment", "/** Whether the texture has been painted in the editor.\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Whether the texture has been painted in the editor." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the X axis.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the Y axis.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedSize_MetaData[] = {
		{ "Comment", "/**\n\x09 * The imported size of the texture. Only valid on cooked builds when texture source is not\n\x09 * available. Access ONLY via the GetImportedSize() accessor!\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The imported size of the texture. Only valid on cooked builds when texture source is not\navailable. Access ONLY via the GetImportedSize() accessor!" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUCopyTexture_MetaData[] = {
		{ "Comment", "/** If we ever show the CPU accessible image in the editor we'll need a transient texture with\n\x09* those bits in it. If we don't have a CPU copy, then this is null. Use the GetCPUCopyTexture to\n\x09* access as it's created on demand.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "If we ever show the CPU accessible image in the editor we'll need a transient texture with\nthose bits in it. If we don't have a CPU copy, then this is null. Use the GetCPUCopyTexture to\naccess as it's created on demand." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstResourceMemMip;
	static void NewProp_bTemporarilyDisableStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTemporarilyDisableStreaming;
#if WITH_EDITORONLY_DATA
	static void NewProp_bHasBeenPaintedInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenPaintedInEditor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportedSize;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CPUCopyTexture;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy, "Blueprint_GetCPUCopy" }, // 4191119270
		{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX, "Blueprint_GetSizeX" }, // 541882582
		{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY, "Blueprint_GetSizeY" }, // 4117886249
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip = { "FirstResourceMemMip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2D, FirstResourceMemMip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstResourceMemMip_MetaData), NewProp_FirstResourceMemMip_MetaData) };
void Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_SetBit(void* Obj)
{
	((UTexture2D*)Obj)->bTemporarilyDisableStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming = { "bTemporarilyDisableStreaming", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTemporarilyDisableStreaming_MetaData), NewProp_bTemporarilyDisableStreaming_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_SetBit(void* Obj)
{
	((UTexture2D*)Obj)->bHasBeenPaintedInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor = { "bHasBeenPaintedInEditor", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenPaintedInEditor_MetaData), NewProp_bHasBeenPaintedInEditor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize = { "ImportedSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2D, ImportedSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedSize_MetaData), NewProp_ImportedSize_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_CPUCopyTexture = { "CPUCopyTexture", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2D, CPUCopyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUCopyTexture_MetaData), NewProp_CPUCopyTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_CPUCopyTexture,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTexture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2D_Statics::ClassParams = {
	&UTexture2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTexture2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTexture2D()
{
	if (!Z_Registration_Info_UClass_UTexture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2D.OuterSingleton, Z_Construct_UClass_UTexture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTexture2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTexture2D>()
{
	return UTexture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2D);
UTexture2D::~UTexture2D() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2D)
// End Class UTexture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2D, UTexture2D::StaticClass, TEXT("UTexture2D"), &Z_Registration_Info_UClass_UTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2D), 3169982430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_2443865638(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
