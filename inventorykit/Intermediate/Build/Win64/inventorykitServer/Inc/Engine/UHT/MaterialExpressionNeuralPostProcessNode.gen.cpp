// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionNeuralPostProcessNode.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNeuralPostProcessNode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENeuralIndexType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ENeuralIndexType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralIndexType;
static UEnum* ENeuralIndexType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENeuralIndexType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENeuralIndexType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralIndexType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENeuralIndexType"));
	}
	return Z_Registration_Info_UEnum_ENeuralIndexType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENeuralIndexType>()
{
	return ENeuralIndexType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENeuralIndexType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "NIT_BufferIndex.Comment", "/** Buffer index UV in LayerId (batch) x Channels x Height x Wdith*/" },
		{ "NIT_BufferIndex.DisplayName", "Buffer Index" },
		{ "NIT_BufferIndex.Name", "NIT_BufferIndex" },
		{ "NIT_BufferIndex.ToolTip", "Buffer index UV in LayerId (batch) x Channels x Height x Wdith" },
		{ "NIT_TextureIndex.Comment", "/** Texture index UV in 0...1 range*/" },
		{ "NIT_TextureIndex.DisplayName", "Texture Index" },
		{ "NIT_TextureIndex.Name", "NIT_TextureIndex" },
		{ "NIT_TextureIndex.ToolTip", "Texture index UV in 0...1 range" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NIT_TextureIndex", (int64)NIT_TextureIndex },
		{ "NIT_BufferIndex", (int64)NIT_BufferIndex },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENeuralIndexType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENeuralIndexType",
	"ENeuralIndexType",
	Z_Construct_UEnum_Engine_ENeuralIndexType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralIndexType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENeuralIndexType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENeuralIndexType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENeuralIndexType()
{
	if (!Z_Registration_Info_UEnum_ENeuralIndexType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralIndexType.InnerSingleton, Z_Construct_UEnum_Engine_ENeuralIndexType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENeuralIndexType.InnerSingleton;
}
// End Enum ENeuralIndexType

// Begin Class UMaterialExpressionNeuralNetworkInput
void UMaterialExpressionNeuralNetworkInput::StaticRegisterNativesUMaterialExpressionNeuralNetworkInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNeuralNetworkInput);
UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_NoRegister()
{
	return UMaterialExpressionNeuralNetworkInput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Coordinate to read values:\n\x09\x09\x09Texture index (float4): Batch[ignored], StartChannel[int,0], ViewportUV in 0..1 range\n\x09\x09\x09""Buffer  index (float4): Batch[int,0], StartChannel[int,0], WidthHeight[ViewportUV] in 0..1 range\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Coordinate to read values:\n                 Texture index (float4): Batch[ignored], StartChannel[int,0], ViewportUV in 0..1 range\n                 Buffer  index (float4): Batch[int,0], StartChannel[int,0], WidthHeight[ViewportUV] in 0..1 range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input0_MetaData[] = {
		{ "Comment", "/** First input node for neural post processing in post process material*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "ToolTip", "First input node for neural post processing in post process material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Comment", "/** Input is ignored if Mask is zero. \n\x09\x09TODO: Used to optimize performance\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Input is ignored if Mask is zero.\n              TODO: Used to optimize performance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeuralIndexType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/**Indexing type: write to the texture or buffer */" },
		{ "DisplayName", "Index Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "ToolTip", "Indexing type: write to the texture or buffer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NeuralIndexType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNeuralNetworkInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNeuralNetworkInput, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_Input0 = { "Input0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNeuralNetworkInput, Input0), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input0_MetaData), NewProp_Input0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNeuralNetworkInput, Mask), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_NeuralIndexType = { "NeuralIndexType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNeuralNetworkInput, NeuralIndexType), Z_Construct_UEnum_Engine_ENeuralIndexType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeuralIndexType_MetaData), NewProp_NeuralIndexType_MetaData) }; // 2785452450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_Input0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::NewProp_NeuralIndexType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::ClassParams = {
	&UMaterialExpressionNeuralNetworkInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNeuralNetworkInput>()
{
	return UMaterialExpressionNeuralNetworkInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNeuralNetworkInput);
UMaterialExpressionNeuralNetworkInput::~UMaterialExpressionNeuralNetworkInput() {}
// End Class UMaterialExpressionNeuralNetworkInput

// Begin Class UMaterialExpressionNeuralNetworkOutput
void UMaterialExpressionNeuralNetworkOutput::StaticRegisterNativesUMaterialExpressionNeuralNetworkOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNeuralNetworkOutput);
UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_NoRegister()
{
	return UMaterialExpressionNeuralNetworkOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// The input node that holds the output from the neural network to the post process material \n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "ToolTip", "The input node that holds the output from the neural network to the post process material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "Comment", "/** \n\x09*\x09""Coordinate to store the values:\n\x09\x09\x09Texture index (float4): Batch[ignored], StartChannel[int,0], ViewportUV in 0..1 range \n\x09\x09\x09""Buffer  index (float4): Batch[int,0], StartChannel[int,0], WidthHeight[ViewportUV] in 0..1 range\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Coordinate to store the values:\n                 Texture index (float4): Batch[ignored], StartChannel[int,0], ViewportUV in 0..1 range\n                 Buffer  index (float4): Batch[int,0], StartChannel[int,0], WidthHeight[ViewportUV] in 0..1 range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeuralIndexType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/**Indexing type: read from the texture or buffer. \n\x09\x09Texture index is valid only when the first 2 dimension of the input and output dimension matches.\n\x09*/" },
		{ "DisplayName", "Index Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNeuralPostProcessNode.h" },
		{ "ToolTip", "Indexing type: read from the texture or buffer.\n               Texture index is valid only when the first 2 dimension of the input and output dimension matches." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NeuralIndexType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNeuralNetworkOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNeuralNetworkOutput, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::NewProp_NeuralIndexType = { "NeuralIndexType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNeuralNetworkOutput, NeuralIndexType), Z_Construct_UEnum_Engine_ENeuralIndexType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeuralIndexType_MetaData), NewProp_NeuralIndexType_MetaData) }; // 2785452450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::NewProp_NeuralIndexType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::ClassParams = {
	&UMaterialExpressionNeuralNetworkOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNeuralNetworkOutput>()
{
	return UMaterialExpressionNeuralNetworkOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNeuralNetworkOutput);
UMaterialExpressionNeuralNetworkOutput::~UMaterialExpressionNeuralNetworkOutput() {}
// End Class UMaterialExpressionNeuralNetworkOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENeuralIndexType_StaticEnum, TEXT("ENeuralIndexType"), &Z_Registration_Info_UEnum_ENeuralIndexType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2785452450U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput, UMaterialExpressionNeuralNetworkInput::StaticClass, TEXT("UMaterialExpressionNeuralNetworkInput"), &Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNeuralNetworkInput), 4138027197U) },
		{ Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput, UMaterialExpressionNeuralNetworkOutput::StaticClass, TEXT("UMaterialExpressionNeuralNetworkOutput"), &Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNeuralNetworkOutput), 860145849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_3165458178(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
