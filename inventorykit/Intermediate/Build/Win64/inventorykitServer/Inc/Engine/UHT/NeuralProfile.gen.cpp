// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/NeuralProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralProfile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector4();
ENGINE_API UClass* Z_Construct_UClass_UNeuralProfile();
ENGINE_API UClass* Z_Construct_UClass_UNeuralProfile_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENeuralModelTileType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENeuralProfileFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETileOverlapResolveType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralProfileStruct();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ENeuralProfileFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralProfileFormat;
static UEnum* ENeuralProfileFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralProfileFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENeuralProfileFormat"));
	}
	return Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENeuralProfileFormat>()
{
	return ENeuralProfileFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "Type16.DisplayName", "16bit" },
		{ "Type16.Name", "ENeuralProfileFormat::Type16" },
		{ "Type32.DisplayName", "32bit" },
		{ "Type32.Name", "ENeuralProfileFormat::Type32" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENeuralProfileFormat::Type32", (int64)ENeuralProfileFormat::Type32 },
		{ "ENeuralProfileFormat::Type16", (int64)ENeuralProfileFormat::Type16 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENeuralProfileFormat",
	"ENeuralProfileFormat",
	Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENeuralProfileFormat()
{
	if (!Z_Registration_Info_UEnum_ENeuralProfileFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralProfileFormat.InnerSingleton, Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENeuralProfileFormat.InnerSingleton;
}
// End Enum ENeuralProfileFormat

// Begin Enum ENeuralModelTileType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralModelTileType;
static UEnum* ENeuralModelTileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralModelTileType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENeuralModelTileType"));
	}
	return Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENeuralModelTileType>()
{
	return ENeuralModelTileType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Create tiled buffers in batch dimension automatically, where each tile runs the neural model\n\x09""e.g., if the model input dimension is (1x3x200x200) and the used buffer size of the post processing\n\x09is 1000x1000, then 5x5 tiles ((5x5)x3x200x200) will be run and recombined.\n\x09*/" },
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "ENeuralModelTileType::Auto" },
		{ "Auto.ToolTip", "Create tiled buffers in batch dimension automatically, where each tile runs the neural model\n      e.g., if the model input dimension is (1x3x200x200) and the used buffer size of the post processing\n      is 1000x1000, then 5x5 tiles ((5x5)x3x200x200) will be run and recombined." },
		{ "BlueprintType", "true" },
		{ "EightByEight.DisplayName", "8x8" },
		{ "EightByEight.Name", "ENeuralModelTileType::EightByEight" },
		{ "FourByFour.DisplayName", "4x4" },
		{ "FourByFour.Name", "ENeuralModelTileType::FourByFour" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "OneByOne.Comment", "/** The NNE model is loaded and used as it is. No dimension augmentation. E.g.,\nif the input texture has different dimensions, it will be scaled down before application*/" },
		{ "OneByOne.DisplayName", "1x1" },
		{ "OneByOne.Name", "ENeuralModelTileType::OneByOne" },
		{ "OneByOne.ToolTip", "The NNE model is loaded and used as it is. No dimension augmentation. E.g.,\nif the input texture has different dimensions, it will be scaled down before application" },
		{ "TwoByTwo.DisplayName", "2x2" },
		{ "TwoByTwo.Name", "ENeuralModelTileType::TwoByTwo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENeuralModelTileType::OneByOne", (int64)ENeuralModelTileType::OneByOne },
		{ "ENeuralModelTileType::TwoByTwo", (int64)ENeuralModelTileType::TwoByTwo },
		{ "ENeuralModelTileType::FourByFour", (int64)ENeuralModelTileType::FourByFour },
		{ "ENeuralModelTileType::EightByEight", (int64)ENeuralModelTileType::EightByEight },
		{ "ENeuralModelTileType::Auto", (int64)ENeuralModelTileType::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENeuralModelTileType",
	"ENeuralModelTileType",
	Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENeuralModelTileType()
{
	if (!Z_Registration_Info_UEnum_ENeuralModelTileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralModelTileType.InnerSingleton, Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENeuralModelTileType.InnerSingleton;
}
// End Enum ENeuralModelTileType

// Begin Enum ETileOverlapResolveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETileOverlapResolveType;
static UEnum* ETileOverlapResolveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETileOverlapResolveType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETileOverlapResolveType"));
	}
	return Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETileOverlapResolveType>()
{
	return ETileOverlapResolveType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Feathering.Comment", "/** Overlapped regions are blended linearly to adjecent tiles*/" },
		{ "Feathering.DisplayName", "Feathering" },
		{ "Feathering.Name", "ETileOverlapResolveType::Feathering" },
		{ "Feathering.ToolTip", "Overlapped regions are blended linearly to adjecent tiles" },
		{ "Ignore.Comment", "/** Overlapped tile regions have no contribution to adjecent tiles*/" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "ETileOverlapResolveType::Ignore" },
		{ "Ignore.ToolTip", "Overlapped tile regions have no contribution to adjecent tiles" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETileOverlapResolveType::Ignore", (int64)ETileOverlapResolveType::Ignore },
		{ "ETileOverlapResolveType::Feathering", (int64)ETileOverlapResolveType::Feathering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETileOverlapResolveType",
	"ETileOverlapResolveType",
	Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETileOverlapResolveType()
{
	if (!Z_Registration_Info_UEnum_ETileOverlapResolveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETileOverlapResolveType.InnerSingleton, Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETileOverlapResolveType.InnerSingleton;
}
// End Enum ETileOverlapResolveType

// Begin Enum ENeuralProfileRuntimeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralProfileRuntimeType;
static UEnum* ENeuralProfileRuntimeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENeuralProfileRuntimeType"));
	}
	return Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENeuralProfileRuntimeType>()
{
	return ENeuralProfileRuntimeType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ENeuralProfileRuntimeType::MAX" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "NNERuntimeRDGDml.DisplayName", "NNERuntimeRDGDml" },
		{ "NNERuntimeRDGDml.Name", "ENeuralProfileRuntimeType::NNERuntimeRDGDml" },
		{ "NNERuntimeRDGHlsl.Comment", "/** Does not have full operator support*/" },
		{ "NNERuntimeRDGHlsl.DisplayName", "NNERuntimeRDGHlsl" },
		{ "NNERuntimeRDGHlsl.Name", "ENeuralProfileRuntimeType::NNERuntimeRDGHlsl" },
		{ "NNERuntimeRDGHlsl.ToolTip", "Does not have full operator support" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENeuralProfileRuntimeType::NNERuntimeRDGDml", (int64)ENeuralProfileRuntimeType::NNERuntimeRDGDml },
		{ "ENeuralProfileRuntimeType::NNERuntimeRDGHlsl", (int64)ENeuralProfileRuntimeType::NNERuntimeRDGHlsl },
		{ "ENeuralProfileRuntimeType::MAX", (int64)ENeuralProfileRuntimeType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENeuralProfileRuntimeType",
	"ENeuralProfileRuntimeType",
	Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType()
{
	if (!Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.InnerSingleton, Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.InnerSingleton;
}
// End Enum ENeuralProfileRuntimeType

// Begin ScriptStruct FNeuralProfileStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralProfileStruct;
class UScriptStruct* FNeuralProfileStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralProfileStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralProfileStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralProfileStruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NeuralProfileStruct"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralProfileStruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNeuralProfileStruct>()
{
	return FNeuralProfileStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// struct with all the settings we want in UNeuralProfile, separate to make it easer to pass this data around in the engine.\n" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "struct with all the settings we want in UNeuralProfile, separate to make it easer to pass this data around in the engine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFormat_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/**\n\x09 * Define the expected input format, if any output from material is not this format, a custom conversion\n\x09 * will be applied for this conversion.\n\x09 */" },
		{ "DisplayName", "Input Format" },
		{ "editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Define the expected input format, if any output from material is not this format, a custom conversion\nwill be applied for this conversion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/**\n\x09 * Define the expected output format. A conversion between the output format and the actual format will\n\x09 * be applied automatically.\n\x09 */" },
		{ "DisplayName", "Output Format" },
		{ "editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Define the expected output format. A conversion between the output format and the actual format will\nbe applied automatically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeType_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "//runtime type (support \"NNERuntimeRDGDml\" only at this moment)\n" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "runtime type (support \"NNERuntimeRDGDml\" only at this moment)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NNEModelData_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Stores the NNEModelData imported from e.g., onnx model */" },
		{ "DisplayName", "NNE Model Data" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Stores the NNEModelData imported from e.g., onnx model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDimension_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Input dimension of the NNEModelData model */" },
		{ "DisplayName", "Input Dimension" },
		{ "editcondition", "false" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Input dimension of the NNEModelData model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputDimension_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Output dimension of the NNEModelData model */" },
		{ "DisplayName", "Output Dimension" },
		{ "editcondition", "false" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Output dimension of the NNEModelData model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatchSizeOverride_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Used to override the batch size if the batch dimension is dynamic (-1)*/" },
		{ "DisplayName", "Batch Size" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Used to override the batch size if the batch dimension is dynamic (-1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "/** Total tiles used. Each tile will be executed by 1 batch */" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Total tiles used. Each tile will be executed by 1 batch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileOverlap_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "/** Tile border overlaps (Left|Right, Top|Bottom). The larger this value, the more tiles are required to cover the whole screen when TileSize is Auto.*/" },
		{ "DisplayName", "Border Overlaps" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "Tile border overlaps (Left|Right, Top|Bottom). The larger this value, the more tiles are required to cover the whole screen when TileSize is Auto." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileOverlapResolveType_MetaData[] = {
		{ "Category", "Tile" },
		{ "DisplayName", "Overlap Resolve Type" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RuntimeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RuntimeType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NNEModelData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDimension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDimension;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BatchSizeOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileOverlap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileOverlapResolveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileOverlapResolveType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralProfileStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_InputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_InputFormat = { "InputFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, InputFormat), Z_Construct_UEnum_Engine_ENeuralProfileFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFormat_MetaData), NewProp_InputFormat_MetaData) }; // 1040624301
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_OutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, OutputFormat), Z_Construct_UEnum_Engine_ENeuralProfileFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFormat_MetaData), NewProp_OutputFormat_MetaData) }; // 1040624301
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_RuntimeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_RuntimeType = { "RuntimeType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, RuntimeType), Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeType_MetaData), NewProp_RuntimeType_MetaData) }; // 1842572277
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_NNEModelData = { "NNEModelData", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, NNEModelData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NNEModelData_MetaData), NewProp_NNEModelData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_InputDimension = { "InputDimension", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, InputDimension), Z_Construct_UScriptStruct_FIntVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDimension_MetaData), NewProp_InputDimension_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_OutputDimension = { "OutputDimension", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, OutputDimension), Z_Construct_UScriptStruct_FIntVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputDimension_MetaData), NewProp_OutputDimension_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_BatchSizeOverride = { "BatchSizeOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, BatchSizeOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatchSizeOverride_MetaData), NewProp_BatchSizeOverride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, TileSize), Z_Construct_UEnum_Engine_ENeuralModelTileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) }; // 2068302770
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileOverlap = { "TileOverlap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, TileOverlap), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileOverlap_MetaData), NewProp_TileOverlap_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileOverlapResolveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileOverlapResolveType = { "TileOverlapResolveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralProfileStruct, TileOverlapResolveType), Z_Construct_UEnum_Engine_ETileOverlapResolveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileOverlapResolveType_MetaData), NewProp_TileOverlapResolveType_MetaData) }; // 3329954483
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_InputFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_InputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_OutputFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_OutputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_RuntimeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_RuntimeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_NNEModelData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_InputDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_OutputDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_BatchSizeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileOverlapResolveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewProp_TileOverlapResolveType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NeuralProfileStruct",
	Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::PropPointers),
	sizeof(FNeuralProfileStruct),
	alignof(FNeuralProfileStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNeuralProfileStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralProfileStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralProfileStruct.InnerSingleton, Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NeuralProfileStruct.InnerSingleton;
}
// End ScriptStruct FNeuralProfileStruct

// Begin Class UNeuralProfile
void UNeuralProfile::StaticRegisterNativesUNeuralProfile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralProfile);
UClass* Z_Construct_UClass_UNeuralProfile_NoRegister()
{
	return UNeuralProfile::StaticClass();
}
struct Z_Construct_UClass_UNeuralProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "NeuralProfile" },
		{ "Comment", "/**\n * This class represents assets that stores the neural network model data and the conversion from/to the model.\n *\n * Neural network model profile typically consist of a neural network model data and the config of preprocessing/post-processing\n * of applying this neural network model.\n */" },
		{ "IncludePath", "Engine/NeuralProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ToolTip", "This class represents assets that stores the neural network model data and the conversion from/to the model.\n\nNeural network model profile typically consist of a neural network model data and the config of preprocessing/post-processing\nof applying this neural network model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "UNeuralProfile" },
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NeuralProfile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuralProfile_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuralProfile, Settings), Z_Construct_UScriptStruct_FNeuralProfileStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 682742468
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuralProfile_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuralProfile, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralProfile_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralProfile_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNeuralProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralProfile_Statics::ClassParams = {
	&UNeuralProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNeuralProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralProfile_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeuralProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNeuralProfile()
{
	if (!Z_Registration_Info_UClass_UNeuralProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralProfile.OuterSingleton, Z_Construct_UClass_UNeuralProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeuralProfile.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNeuralProfile>()
{
	return UNeuralProfile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralProfile);
UNeuralProfile::~UNeuralProfile() {}
// End Class UNeuralProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENeuralProfileFormat_StaticEnum, TEXT("ENeuralProfileFormat"), &Z_Registration_Info_UEnum_ENeuralProfileFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1040624301U) },
		{ ENeuralModelTileType_StaticEnum, TEXT("ENeuralModelTileType"), &Z_Registration_Info_UEnum_ENeuralModelTileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2068302770U) },
		{ ETileOverlapResolveType_StaticEnum, TEXT("ETileOverlapResolveType"), &Z_Registration_Info_UEnum_ETileOverlapResolveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3329954483U) },
		{ ENeuralProfileRuntimeType_StaticEnum, TEXT("ENeuralProfileRuntimeType"), &Z_Registration_Info_UEnum_ENeuralProfileRuntimeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1842572277U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNeuralProfileStruct::StaticStruct, Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewStructOps, TEXT("NeuralProfileStruct"), &Z_Registration_Info_UScriptStruct_NeuralProfileStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralProfileStruct), 682742468U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralProfile, UNeuralProfile::StaticClass, TEXT("UNeuralProfile"), &Z_Registration_Info_UClass_UNeuralProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralProfile), 2744303368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_1832510281(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
