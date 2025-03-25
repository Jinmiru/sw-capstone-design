// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpression() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialExpressionCollection();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FExpressionInput
struct Z_Construct_UScriptStruct_FExpressionInput_Statics
{
	struct FExpressionInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FExpressionInput) < MAX_uint16);
	static_assert(alignof(FExpressionInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//@warning: FExpressionInput is mirrored in MaterialShared.h and manually \"subclassed\" in Material.h (FMaterialInput)\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "@warning: FExpressionInput is mirrored in MaterialShared.h and manually \"subclassed\" in Material.h (FMaterialInput)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "Comment", "/** UMaterial expression that this input is connected to, or NULL if not connected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "UMaterial expression that this input is connected to, or NULL if not connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[] = {
		{ "Comment", "/** Index into Expression's outputs array that this input is connected to. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Index into Expression's outputs array that this input is connected to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Comment", "/** \n\x09 * optional FName of the input.  \n\x09 * Note that this is the only member which is not derived from the output currently connected. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "optional FName of the input.\nNote that this is the only member which is not derived from the output currently connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskG;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, OutputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputIndex_MetaData), NewProp_OutputIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, MaskR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskR_MetaData), NewProp_MaskR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, MaskG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskG_MetaData), NewProp_MaskG_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, MaskB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskB_MetaData), NewProp_MaskB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionInput, MaskA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskA_MetaData), NewProp_MaskA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	nullptr,
	"ExpressionInput",
	Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers),
	sizeof(FExpressionInput),
	alignof(FExpressionInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExpressionInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FExpressionInput

// Begin ScriptStruct FMaterialAttributesInput
struct Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics
{
	struct FExpressionInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FExpressionInput) < MAX_uint16);
	static_assert(alignof(FExpressionInput) < MAX_uint8);
	struct FMaterialAttributesInput : public FExpressionInput
	{
		int64 PropertyConnectedMask;
	};

	static_assert(sizeof(FMaterialAttributesInput) < MAX_uint16);
	static_assert(alignof(FMaterialAttributesInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyConnectedMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PropertyConnectedMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedMask = { "PropertyConnectedMask", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAttributesInput, PropertyConnectedMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyConnectedMask_MetaData), NewProp_PropertyConnectedMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FExpressionInput,
	nullptr,
	"MaterialAttributesInput",
	Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers),
	sizeof(FMaterialAttributesInput),
	alignof(FMaterialAttributesInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FMaterialAttributesInput

// Begin ScriptStruct FExpressionOutput
struct Z_Construct_UScriptStruct_FExpressionOutput_Statics
{
	struct FExpressionOutput
	{
		FName OutputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FExpressionOutput) < MAX_uint16);
	static_assert(alignof(FExpressionOutput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that represents an expression's output. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Struct that represents an expression's output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskG;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionOutput, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionOutput, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionOutput, MaskR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskR_MetaData), NewProp_MaskR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionOutput, MaskG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskG_MetaData), NewProp_MaskG_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionOutput, MaskB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskB_MetaData), NewProp_MaskB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionOutput, MaskA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskA_MetaData), NewProp_MaskA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	nullptr,
	"ExpressionOutput",
	Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers),
	sizeof(FExpressionOutput),
	alignof(FExpressionOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExpressionOutput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FExpressionOutput

// Begin ScriptStruct FExpressionExecOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpressionExecOutput;
class UScriptStruct* FExpressionExecOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpressionExecOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpressionExecOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpressionExecOutput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExpressionExecOutput"));
	}
	return Z_Registration_Info_UScriptStruct_ExpressionExecOutput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExpressionExecOutput>()
{
	return FExpressionExecOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExpressionExecOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpressionExecOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpressionExecOutput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewProp_Expression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ExpressionExecOutput",
	Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::PropPointers),
	sizeof(FExpressionExecOutput),
	alignof(FExpressionExecOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput()
{
	if (!Z_Registration_Info_UScriptStruct_ExpressionExecOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpressionExecOutput.InnerSingleton, Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExpressionExecOutput.InnerSingleton;
}
// End ScriptStruct FExpressionExecOutput

// Begin ScriptStruct FMaterialExpressionCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialExpressionCollection;
class UScriptStruct* FMaterialExpressionCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialExpressionCollection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialExpressionCollection"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialExpressionCollection>()
{
	return FMaterialExpressionCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
		{ "Comment", "/** Array of material expressions, excluding Comments.  Used by the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Array of material expressions, excluding Comments.  Used by the material editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorComments_MetaData[] = {
		{ "Comment", "/** Array of comments associated with this material; viewed in the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Array of comments associated with this material; viewed in the material editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecBegin_MetaData[] = {
		{ "Comment", "/** The execution begin expression, if material is using an exec wire */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The execution begin expression, if material is using an exec wire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorComments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorComments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpressionExecBegin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpressionExecEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialExpressionCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialExpressionCollection, Expressions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expressions_MetaData), NewProp_Expressions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments_Inner = { "EditorComments", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments = { "EditorComments", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialExpressionCollection, EditorComments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorComments_MetaData), NewProp_EditorComments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecBegin = { "ExpressionExecBegin", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialExpressionCollection, ExpressionExecBegin), Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionExecBegin_MetaData), NewProp_ExpressionExecBegin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecEnd = { "ExpressionExecEnd", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialExpressionCollection, ExpressionExecEnd), Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionExecEnd_MetaData), NewProp_ExpressionExecEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialExpressionCollection",
	Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::PropPointers),
	sizeof(FMaterialExpressionCollection),
	alignof(FMaterialExpressionCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialExpressionCollection()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.InnerSingleton, Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.InnerSingleton;
}
// End ScriptStruct FMaterialExpressionCollection

// Begin Class UMaterialExpression
void UMaterialExpression::StaticRegisterNativesUMaterialExpression()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpression);
UClass* Z_Construct_UClass_UMaterialExpression_NoRegister()
{
	return UMaterialExpression::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpression_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpression.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorX_MetaData[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorY_MetaData[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[] = {
		{ "Comment", "/** Expression's Graph representation */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Expression's Graph representation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphExpression_MetaData[] = {
		{ "Comment", "/** If exists, expresssion containing this expression within its subgraph. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If exists, expresssion containing this expression within its subgraph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionGuid_MetaData[] = {
		{ "Comment", "/** GUID to uniquely identify this node, to help the tutorials out */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "GUID to uniquely identify this node, to help the tutorials out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "/** \n\x09 * The material that this expression is currently being compiled in.  \n\x09 * This is not necessarily the object which owns this expression, for example a preview material compiling a material function's expressions.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The material that this expression is currently being compiled in.\nThis is not necessarily the object which owns this expression, for example a preview material compiling a material function's expressions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Comment", "/** \n\x09 * The material function that this expression is being used with, if any.\n\x09 * This will be NULL if the expression belongs to a function that is currently being edited, \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The material function that this expression is being used with, if any.\nThis will be NULL if the expression belongs to a function that is currently being edited," },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "Comment", "/** A description that level designers can add (shows in the material editor UI). */" },
		{ "DisplayAfter", "SortPriority" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "A description that level designers can add (shows in the material editor UI)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRealtimePreview_MetaData[] = {
		{ "Comment", "/** Set to true by RecursiveUpdateRealtimePreview() if the expression's preview needs to be updated in realtime in the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Set to true by RecursiveUpdateRealtimePreview() if the expression's preview needs to be updated in realtime in the material editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedToUpdatePreview_MetaData[] = {
		{ "Comment", "/** If true, we should update the preview next render. This is set when changing bRealtimePreview. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, we should update the preview next render. This is set when changing bRealtimePreview." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsParameterExpression_MetaData[] = {
		{ "Comment", "/** Indicates that this is a 'parameter' type of expression and should always be loaded (ie not cooked away) because we might want the default parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Indicates that this is a 'parameter' type of expression and should always be loaded (ie not cooked away) because we might want the default parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[] = {
		{ "Comment", "/** If true, the comment bubble will be visible in the graph editor */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, the comment bubble will be visible in the graph editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutputNameOnPin_MetaData[] = {
		{ "Comment", "/** If true, use the output name as the label for the pin */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, use the output name as the label for the pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMaskColorsOnPin_MetaData[] = {
		{ "Comment", "/** If true, changes the pin color to match the output mask */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, changes the pin color to match the output mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidePreviewWindow_MetaData[] = {
		{ "Comment", "/** If true, do not render the preview window for the expression */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, do not render the preview window for the expression" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[] = {
		{ "Comment", "/** If true, show a collapsed version of the node */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, show a collapsed version of the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShaderInputData_MetaData[] = {
		{ "Comment", "/** Whether the node represents an input to the shader or not.  Used to color the node's background. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether the node represents an input to the shader or not.  Used to color the node's background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputs_MetaData[] = {
		{ "Comment", "/** Whether to draw the expression's inputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether to draw the expression's inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutputs_MetaData[] = {
		{ "Comment", "/** Whether to draw the expression's outputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether to draw the expression's outputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuCategories_MetaData[] = {
		{ "Comment", "/** Localized categories to sort this expression into... */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Localized categories to sort this expression into..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Comment", "/** The expression's outputs, which are set in default properties by derived classes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The expression's outputs, which are set in default properties by derived classes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubgraphExpression;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialExpressionGuid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
	static void NewProp_bRealtimePreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRealtimePreview;
	static void NewProp_bNeedToUpdatePreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedToUpdatePreview;
	static void NewProp_bIsParameterExpression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParameterExpression;
	static void NewProp_bCommentBubbleVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible;
	static void NewProp_bShowOutputNameOnPin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutputNameOnPin;
	static void NewProp_bShowMaskColorsOnPin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMaskColorsOnPin;
	static void NewProp_bHidePreviewWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePreviewWindow;
	static void NewProp_bCollapsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapsed;
	static void NewProp_bShaderInputData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShaderInputData;
	static void NewProp_bShowInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputs;
	static void NewProp_bShowOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutputs;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MenuCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpression>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX = { "MaterialExpressionEditorX", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialExpressionEditorX_MetaData), NewProp_MaterialExpressionEditorX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY = { "MaterialExpressionEditorY", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialExpressionEditorY_MetaData), NewProp_MaterialExpressionEditorY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNode_MetaData), NewProp_GraphNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_SubgraphExpression = { "SubgraphExpression", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, SubgraphExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubgraphExpression_MetaData), NewProp_SubgraphExpression_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid = { "MaterialExpressionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialExpressionGuid_MetaData), NewProp_MaterialExpressionGuid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, Function), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Desc_MetaData), NewProp_Desc_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bRealtimePreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview = { "bRealtimePreview", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRealtimePreview_MetaData), NewProp_bRealtimePreview_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bNeedToUpdatePreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview = { "bNeedToUpdatePreview", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedToUpdatePreview_MetaData), NewProp_bNeedToUpdatePreview_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bIsParameterExpression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression = { "bIsParameterExpression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsParameterExpression_MetaData), NewProp_bIsParameterExpression_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bCommentBubbleVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible = { "bCommentBubbleVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCommentBubbleVisible_MetaData), NewProp_bCommentBubbleVisible_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bShowOutputNameOnPin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin = { "bShowOutputNameOnPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOutputNameOnPin_MetaData), NewProp_bShowOutputNameOnPin_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bShowMaskColorsOnPin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin = { "bShowMaskColorsOnPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMaskColorsOnPin_MetaData), NewProp_bShowMaskColorsOnPin_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bHidePreviewWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow = { "bHidePreviewWindow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidePreviewWindow_MetaData), NewProp_bHidePreviewWindow_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bCollapsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed = { "bCollapsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollapsed_MetaData), NewProp_bCollapsed_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bShaderInputData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData = { "bShaderInputData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShaderInputData_MetaData), NewProp_bShaderInputData_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bShowInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs = { "bShowInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInputs_MetaData), NewProp_bShowInputs_MetaData) };
void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_SetBit(void* Obj)
{
	((UMaterialExpression*)Obj)->bShowOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs = { "bShowOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOutputs_MetaData), NewProp_bShowOutputs_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_Inner = { "MenuCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories = { "MenuCategories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, MenuCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuCategories_MetaData), NewProp_MenuCategories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExpressionOutput, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpression, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpression_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_SubgraphExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpression_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpression_Statics::ClassParams = {
	&UMaterialExpression::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpression_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::PropPointers),
	0,
	0x000800B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpression()
{
	if (!Z_Registration_Info_UClass_UMaterialExpression.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpression.OuterSingleton, Z_Construct_UClass_UMaterialExpression_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpression.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpression>()
{
	return UMaterialExpression::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpression);
UMaterialExpression::~UMaterialExpression() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpression)
// End Class UMaterialExpression

// Begin Enum EPositionOrigin
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPositionOrigin;
static UEnum* EPositionOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPositionOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPositionOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPositionOrigin, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPositionOrigin"));
	}
	return Z_Registration_Info_UEnum_EPositionOrigin.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPositionOrigin>()
{
	return EPositionOrigin_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPositionOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "/** Absolute world position, i.e. relative to (0,0,0) */" },
		{ "Absolute.DisplayName", "Absolute World Position" },
		{ "Absolute.Name", "EPositionOrigin::Absolute" },
		{ "Absolute.ToolTip", "Absolute world position, i.e. relative to (0,0,0)" },
		{ "CameraRelative.Comment", "/** Camera relative world position, i.e. translated world space */" },
		{ "CameraRelative.DisplayName", "Camera Relative World Position" },
		{ "CameraRelative.Name", "EPositionOrigin::CameraRelative" },
		{ "CameraRelative.ToolTip", "Camera relative world position, i.e. translated world space" },
		{ "Comment", "/** Specifies what reference point should be used */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Specifies what reference point should be used" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPositionOrigin::Absolute", (int64)EPositionOrigin::Absolute },
		{ "EPositionOrigin::CameraRelative", (int64)EPositionOrigin::CameraRelative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPositionOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPositionOrigin",
	"EPositionOrigin",
	Z_Construct_UEnum_Engine_EPositionOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPositionOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPositionOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPositionOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPositionOrigin()
{
	if (!Z_Registration_Info_UEnum_EPositionOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPositionOrigin.InnerSingleton, Z_Construct_UEnum_Engine_EPositionOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPositionOrigin.InnerSingleton;
}
// End Enum EPositionOrigin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPositionOrigin_StaticEnum, TEXT("EPositionOrigin"), &Z_Registration_Info_UEnum_EPositionOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1574008864U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExpressionExecOutput::StaticStruct, Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewStructOps, TEXT("ExpressionExecOutput"), &Z_Registration_Info_UScriptStruct_ExpressionExecOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpressionExecOutput), 1760504373U) },
		{ FMaterialExpressionCollection::StaticStruct, Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewStructOps, TEXT("MaterialExpressionCollection"), &Z_Registration_Info_UScriptStruct_MaterialExpressionCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialExpressionCollection), 721167884U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpression, UMaterialExpression::StaticClass, TEXT("UMaterialExpression"), &Z_Registration_Info_UClass_UMaterialExpression, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpression), 877501719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_842612986(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
