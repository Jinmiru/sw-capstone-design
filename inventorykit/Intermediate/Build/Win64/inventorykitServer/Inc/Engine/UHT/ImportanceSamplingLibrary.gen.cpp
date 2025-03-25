// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/ImportanceSamplingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportanceSamplingLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary();
ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceWeight();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EImportanceWeight
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImportanceWeight;
static UEnum* EImportanceWeight_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceWeight, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceWeight"));
	}
	return Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EImportanceWeight::Type>()
{
	return EImportanceWeight_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EImportanceWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Comment", "/** Importance from alpha channel of texture. */" },
		{ "Alpha.Name", "EImportanceWeight::Alpha" },
		{ "Alpha.ToolTip", "Importance from alpha channel of texture." },
		{ "Blue.Comment", "/** Importance from blue channel of texture. */" },
		{ "Blue.Name", "EImportanceWeight::Blue" },
		{ "Blue.ToolTip", "Importance from blue channel of texture." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Provides different weighting functions for texture importance sampling */" },
		{ "Green.Comment", "/** Importance from green channel of texture. */" },
		{ "Green.Name", "EImportanceWeight::Green" },
		{ "Green.ToolTip", "Importance from green channel of texture." },
		{ "Luminance.Comment", "/** Importance from color luminance. */" },
		{ "Luminance.Name", "EImportanceWeight::Luminance" },
		{ "Luminance.ToolTip", "Importance from color luminance." },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "Red.Comment", "/** Importance from red channel of texture. */" },
		{ "Red.Name", "EImportanceWeight::Red" },
		{ "Red.ToolTip", "Importance from red channel of texture." },
		{ "ToolTip", "Provides different weighting functions for texture importance sampling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EImportanceWeight::Luminance", (int64)EImportanceWeight::Luminance },
		{ "EImportanceWeight::Red", (int64)EImportanceWeight::Red },
		{ "EImportanceWeight::Green", (int64)EImportanceWeight::Green },
		{ "EImportanceWeight::Blue", (int64)EImportanceWeight::Blue },
		{ "EImportanceWeight::Alpha", (int64)EImportanceWeight::Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EImportanceWeight_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EImportanceWeight",
	"EImportanceWeight::Type",
	Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EImportanceWeight()
{
	if (!Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton, Z_Construct_UEnum_Engine_EImportanceWeight_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton;
}
// End Enum EImportanceWeight

// Begin ScriptStruct FImportanceTexture
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportanceTexture;
class UScriptStruct* FImportanceTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportanceTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportanceTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportanceTexture, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ImportanceTexture"));
	}
	return Z_Registration_Info_UScriptStruct_ImportanceTexture.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FImportanceTexture>()
{
	return FImportanceTexture::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImportanceTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Texture processed for importance sampling\n* Holds marginal PDF of the rows, as well as the PDF of each row\n*/" },
		{ "HasNativeBreak", "/Script/Engine.ImportanceSamplingLibrary.BreakImportanceTexture" },
		{ "HasNativeMake", "/Script/Engine.ImportanceSamplingLibrary.MakeImportanceTexture" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Texture processed for importance sampling\nHolds marginal PDF of the rows, as well as the PDF of each row" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Comment", "// active texture dimensions, capped to 1024 x 1024\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "active texture dimensions, capped to 1024 x 1024" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[] = {
		{ "Comment", "// active number of MIP levels\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "active number of MIP levels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarginalCDF_MetaData[] = {
		{ "Comment", "// Unnormalized cumulative density of the image by rows (Size.Y+1)\n// First entry is zero, final entry is the CDF normalization factor\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Unnormalized cumulative density of the image by rows (Size.Y+1)\nFirst entry is zero, final entry is the CDF normalization factor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalCDF_MetaData[] = {
		{ "Comment", "// Unnormalized cumulative probability of each pixel in a row (Size.Y row CDFs of Size.X+1) \n// First entry of each row is zero, final entry in each row is the CDF normalization factor for that row\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Unnormalized cumulative probability of each pixel in a row (Size.Y row CDFs of Size.X+1)\nFirst entry of each row is zero, final entry in each row is the CDF normalization factor for that row" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[] = {
		{ "Comment", "// packed copy of MIP level data for filtered sampling (capped to 1024x1024)\n// local copy seems better than allocating and copying the same data temporarily for each sample\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "packed copy of MIP level data for filtered sampling (capped to 1024x1024)\nlocal copy seems better than allocating and copying the same data temporarily for each sample" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Comment", "// Original texture object for Break function\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Original texture object for Break function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weighting_MetaData[] = {
		{ "Comment", "// Original importance weight for Break function\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Original importance weight for Break function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumMips;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarginalCDF_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarginalCDF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConditionalCDF_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalCDF;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureData;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Weighting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportanceTexture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportanceTexture, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportanceTexture, NumMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumMips_MetaData), NewProp_NumMips_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_Inner = { "MarginalCDF", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF = { "MarginalCDF", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportanceTexture, MarginalCDF), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarginalCDF_MetaData), NewProp_MarginalCDF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_Inner = { "ConditionalCDF", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF = { "ConditionalCDF", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportanceTexture, ConditionalCDF), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionalCDF_MetaData), NewProp_ConditionalCDF_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_Inner = { "TextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportanceTexture, TextureData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureData_MetaData), NewProp_TextureData_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportanceTexture, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting = { "Weighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportanceTexture, Weighting), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weighting_MetaData), NewProp_Weighting_MetaData) }; // 2500292136
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ImportanceTexture",
	Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers),
	sizeof(FImportanceTexture),
	alignof(FImportanceTexture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture()
{
	if (!Z_Registration_Info_UScriptStruct_ImportanceTexture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportanceTexture.InnerSingleton, Z_Construct_UScriptStruct_FImportanceTexture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImportanceTexture.InnerSingleton;
}
// End ScriptStruct FImportanceTexture

// Begin Class UImportanceSamplingLibrary Function BreakImportanceTexture
struct Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics
{
	struct ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms
	{
		FImportanceTexture ImportanceTexture;
		UTexture2D* Texture;
		TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* Get texture used to create an ImportanceTexture object\n\x09* @param ImportanceTexture - The source ImportanceTexture object\n\x09* @outparam Texture - Texture object for this ImportanceTexture.\n\x09* @param WeightingFunc - How to turn the texture data into probability weights\n\x09* @return new ImportanceTexture object for use with ImportanceSample\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Get texture used to create an ImportanceTexture object\n@param ImportanceTexture - The source ImportanceTexture object\n@outparam Texture - Texture object for this ImportanceTexture.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportanceTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportanceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightingFunc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture = { "ImportanceTexture", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, ImportanceTexture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportanceTexture_MetaData), NewProp_ImportanceTexture_MetaData) }; // 940393721
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_WeightingFunc = { "WeightingFunc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(0, nullptr) }; // 2500292136
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_WeightingFunc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "BreakImportanceTexture", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execBreakImportanceTexture)
{
	P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_ImportanceTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_WeightingFunc);
	P_FINISH;
	P_NATIVE_BEGIN;
	UImportanceSamplingLibrary::BreakImportanceTexture(Z_Param_Out_ImportanceTexture,P_ARG_GC_BARRIER(Z_Param_Out_Texture),(TEnumAsByte<EImportanceWeight::Type>&)(Z_Param_Out_WeightingFunc));
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function BreakImportanceTexture

// Begin Class UImportanceSamplingLibrary Function ImportanceSample
struct Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics
{
	struct ImportanceSamplingLibrary_eventImportanceSample_Parms
	{
		FImportanceTexture Texture;
		FVector2D Rand;
		int32 Samples;
		float Intensity;
		FVector2D SamplePosition;
		FLinearColor SampleColor;
		float SampleIntensity;
		float SampleSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* Distribute sample points proportional to Texture2D luminance.\n\x09* @param Rand - Random 2D point with components evenly distributed between 0 and 1\n\x09* @param Samples - Total number of samples that will be used\n\x09* @param Intensity - Total intensity for light\n\x09* @outparam SamplePosition - Importance sampled 2D output texture coordinate (0-1)\n\x09* @outparam SampleColor - Representative color near Position from MIP level for SampleSize\n\x09* @outparam SampleIntensity - Intensity of individual points, scaled by probability and number of samples\n\x09* @outparam SampleSize - Local density of points near Position (scaled for 1x1 texture space)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Distribute sample points proportional to Texture2D luminance.\n@param Rand - Random 2D point with components evenly distributed between 0 and 1\n@param Samples - Total number of samples that will be used\n@param Intensity - Total intensity for light\n@outparam SamplePosition - Importance sampled 2D output texture coordinate (0-1)\n@outparam SampleColor - Representative color near Position from MIP level for SampleSize\n@outparam SampleIntensity - Intensity of individual points, scaled by probability and number of samples\n@outparam SampleSize - Local density of points near Position (scaled for 1x1 texture space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Samples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Texture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) }; // 940393721
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand = { "Rand", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Rand), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rand_MetaData), NewProp_Rand_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Samples), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SamplePosition = { "SamplePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SamplePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleColor = { "SampleColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleIntensity = { "SampleIntensity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleSize = { "SampleSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Samples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SamplePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "ImportanceSample", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::ImportanceSamplingLibrary_eventImportanceSample_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::ImportanceSamplingLibrary_eventImportanceSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execImportanceSample)
{
	P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_Texture);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Rand);
	P_GET_PROPERTY(FIntProperty,Z_Param_Samples);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SamplePosition);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SampleColor);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SampleIntensity);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SampleSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	UImportanceSamplingLibrary::ImportanceSample(Z_Param_Out_Texture,Z_Param_Out_Rand,Z_Param_Samples,Z_Param_Intensity,Z_Param_Out_SamplePosition,Z_Param_Out_SampleColor,Z_Param_Out_SampleIntensity,Z_Param_Out_SampleSize);
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function ImportanceSample

// Begin Class UImportanceSamplingLibrary Function MakeImportanceTexture
struct Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics
{
	struct ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms
	{
		UTexture2D* Texture;
		TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
		FImportanceTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* Create an FImportanceTexture object for texture-driven importance sampling from a 2D RGBA8 texture\n\x09* @param Texture - Texture object to use. Must be RGBA8 format.\n\x09* @param WeightingFunc - How to turn the texture data into probability weights\n\x09* @return new ImportanceTexture object for use with ImportanceSample\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create an FImportanceTexture object for texture-driven importance sampling from a 2D RGBA8 texture\n@param Texture - Texture object to use. Must be RGBA8 format.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightingFunc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_WeightingFunc = { "WeightingFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(0, nullptr) }; // 2500292136
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(0, nullptr) }; // 940393721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_WeightingFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "MakeImportanceTexture", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execMakeImportanceTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_PROPERTY(FByteProperty,Z_Param_WeightingFunc);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FImportanceTexture*)Z_Param__Result=UImportanceSamplingLibrary::MakeImportanceTexture(Z_Param_Texture,EImportanceWeight::Type(Z_Param_WeightingFunc));
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function MakeImportanceTexture

// Begin Class UImportanceSamplingLibrary Function NextSobolCell2D
struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics
{
	struct ImportanceSamplingLibrary_eventNextSobolCell2D_Parms
	{
		int32 Index;
		int32 NumCells;
		FVector2D PreviousValue;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n\x09* @param PreviousValue - The Sobol value for Index-1\n\x09* @return Sobol-distributed random 2D position in the same grid cell\n\x09*/" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_PreviousValue", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 2D position in the same grid cell" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, NumCells), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_NumCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_PreviousValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolCell2D", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::ImportanceSamplingLibrary_eventNextSobolCell2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::ImportanceSamplingLibrary_eventNextSobolCell2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execNextSobolCell2D)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
	P_GET_STRUCT(FVector2D,Z_Param_PreviousValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue);
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function NextSobolCell2D

// Begin Class UImportanceSamplingLibrary Function NextSobolCell3D
struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics
{
	struct ImportanceSamplingLibrary_eventNextSobolCell3D_Parms
	{
		int32 Index;
		int32 NumCells;
		FVector PreviousValue;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n\x09* @param PreviousValue - The Sobol value for Index-1\n\x09* @return Sobol-distributed random 3D position in the same grid cell\n\x09*/" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_PreviousValue", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 3D position in the same grid cell" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, NumCells), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_NumCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_PreviousValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolCell3D", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::ImportanceSamplingLibrary_eventNextSobolCell3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::ImportanceSamplingLibrary_eventNextSobolCell3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execNextSobolCell3D)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
	P_GET_STRUCT(FVector,Z_Param_PreviousValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue);
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function NextSobolCell3D

// Begin Class UImportanceSamplingLibrary Function NextSobolFloat
struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics
{
	struct ImportanceSamplingLibrary_eventNextSobolFloat_Parms
	{
		int32 Index;
		int32 Dimension;
		float PreviousValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param Dimension - Which Sobol dimension (0 to 15)\n\x09* @param PreviousValue - The Sobol value for Index-1\n\x09* @return Sobol-distributed random number between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random number between 0 and 1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dimension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Dimension), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, PreviousValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Dimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_PreviousValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolFloat", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::ImportanceSamplingLibrary_eventNextSobolFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::ImportanceSamplingLibrary_eventNextSobolFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execNextSobolFloat)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Dimension);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_PreviousValue);
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function NextSobolFloat

// Begin Class UImportanceSamplingLibrary Function RandomSobolCell2D
struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics
{
	struct ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms
	{
		int32 Index;
		int32 NumCells;
		FVector2D Cell;
		FVector2D Seed;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point in the cell (starting at 0)\n\x09* @param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n\x09* @param Cell - Give a point from this integer grid cell\n\x09* @param Seed - Random 2D seed (components in the range 0-1) to randomize across multiple sequences\n\x09* @return Sobol-distributed random 2D position in the given grid cell\n\x09*/" },
		{ "CPP_Default_Cell", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_Seed", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 2D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 2D position in the given grid cell" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, NumCells), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Cell), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Seed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_NumCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolCell2D", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execRandomSobolCell2D)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
	P_GET_STRUCT(FVector2D,Z_Param_Cell);
	P_GET_STRUCT(FVector2D,Z_Param_Seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed);
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function RandomSobolCell2D

// Begin Class UImportanceSamplingLibrary Function RandomSobolCell3D
struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics
{
	struct ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms
	{
		int32 Index;
		int32 NumCells;
		FVector Cell;
		FVector Seed;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point in the cell (starting at 0)\n\x09* @param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n\x09* @param Cell - Give a point from this integer grid cell\n\x09* @param Seed - Random 3D seed (components in the range 0-1) to randomize across multiple sequences\n\x09* @return Sobol-distributed random 3D vector in the given grid cell\n\x09*/" },
		{ "CPP_Default_Cell", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_Seed", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 3D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 3D vector in the given grid cell" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, NumCells), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Cell), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Seed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_NumCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolCell3D", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execRandomSobolCell3D)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
	P_GET_STRUCT(FVector,Z_Param_Cell);
	P_GET_STRUCT(FVector,Z_Param_Seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed);
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function RandomSobolCell3D

// Begin Class UImportanceSamplingLibrary Function RandomSobolFloat
struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics
{
	struct ImportanceSamplingLibrary_eventRandomSobolFloat_Parms
	{
		int32 Index;
		int32 Dimension;
		float Seed;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param Dimension - Which Sobol dimension (0 to 15)\n\x09* @param Seed - Random seed (in the range 0-1) to randomize across multiple sequences\n\x09* @return Sobol-distributed random number between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param Seed - Random seed (in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random number between 0 and 1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dimension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Dimension), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Seed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Dimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolFloat", nullptr, nullptr, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::ImportanceSamplingLibrary_eventRandomSobolFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::ImportanceSamplingLibrary_eventRandomSobolFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportanceSamplingLibrary::execRandomSobolFloat)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Dimension);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_Seed);
	P_NATIVE_END;
}
// End Class UImportanceSamplingLibrary Function RandomSobolFloat

// Begin Class UImportanceSamplingLibrary
void UImportanceSamplingLibrary::StaticRegisterNativesUImportanceSamplingLibrary()
{
	UClass* Class = UImportanceSamplingLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakImportanceTexture", &UImportanceSamplingLibrary::execBreakImportanceTexture },
		{ "ImportanceSample", &UImportanceSamplingLibrary::execImportanceSample },
		{ "MakeImportanceTexture", &UImportanceSamplingLibrary::execMakeImportanceTexture },
		{ "NextSobolCell2D", &UImportanceSamplingLibrary::execNextSobolCell2D },
		{ "NextSobolCell3D", &UImportanceSamplingLibrary::execNextSobolCell3D },
		{ "NextSobolFloat", &UImportanceSamplingLibrary::execNextSobolFloat },
		{ "RandomSobolCell2D", &UImportanceSamplingLibrary::execRandomSobolCell2D },
		{ "RandomSobolCell3D", &UImportanceSamplingLibrary::execRandomSobolCell3D },
		{ "RandomSobolFloat", &UImportanceSamplingLibrary::execRandomSobolFloat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportanceSamplingLibrary);
UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister()
{
	return UImportanceSamplingLibrary::StaticClass();
}
struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/ImportanceSamplingLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture, "BreakImportanceTexture" }, // 3231352671
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample, "ImportanceSample" }, // 2480943080
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture, "MakeImportanceTexture" }, // 2677443987
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D, "NextSobolCell2D" }, // 4284731214
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D, "NextSobolCell3D" }, // 1102701869
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat, "NextSobolFloat" }, // 3397067591
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D, "RandomSobolCell2D" }, // 692538183
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D, "RandomSobolCell3D" }, // 2996544729
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat, "RandomSobolFloat" }, // 3821102575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportanceSamplingLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImportanceSamplingLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImportanceSamplingLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportanceSamplingLibrary_Statics::ClassParams = {
	&UImportanceSamplingLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImportanceSamplingLibrary()
{
	if (!Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton, Z_Construct_UClass_UImportanceSamplingLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UImportanceSamplingLibrary>()
{
	return UImportanceSamplingLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImportanceSamplingLibrary);
UImportanceSamplingLibrary::~UImportanceSamplingLibrary() {}
// End Class UImportanceSamplingLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EImportanceWeight_StaticEnum, TEXT("EImportanceWeight"), &Z_Registration_Info_UEnum_EImportanceWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2500292136U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FImportanceTexture::StaticStruct, Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewStructOps, TEXT("ImportanceTexture"), &Z_Registration_Info_UScriptStruct_ImportanceTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportanceTexture), 940393721U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImportanceSamplingLibrary, UImportanceSamplingLibrary::StaticClass, TEXT("UImportanceSamplingLibrary"), &Z_Registration_Info_UClass_UImportanceSamplingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportanceSamplingLibrary), 1880388433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_2624938597(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
