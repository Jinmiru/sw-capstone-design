// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/ModifyCurveLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifyCurveLibrary() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UModifyCurveAnimLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UModifyCurveAnimLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FModifyCurveAnimNodeReference
static_assert(std::is_polymorphic<FModifyCurveAnimNodeReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FModifyCurveAnimNodeReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference;
class UScriptStruct* FModifyCurveAnimNodeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ModifyCurveAnimNodeReference"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FModifyCurveAnimNodeReference>()
{
	return FModifyCurveAnimNodeReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyCurveAnimNodeReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"ModifyCurveAnimNodeReference",
	nullptr,
	0,
	sizeof(FModifyCurveAnimNodeReference),
	alignof(FModifyCurveAnimNodeReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference.InnerSingleton, Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference.InnerSingleton;
}
// End ScriptStruct FModifyCurveAnimNodeReference

// Begin Class UModifyCurveAnimLibrary Function ConvertToModifyCurveNode
struct Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics
{
	struct ModifyCurveAnimLibrary_eventConvertToModifyCurveNode_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FModifyCurveAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/** Get a modify curve node context from an anim node context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
		{ "ToolTip", "Get a modify curve node context from an anim node context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventConvertToModifyCurveNode_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventConvertToModifyCurveNode_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventConvertToModifyCurveNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 927857528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyCurveAnimLibrary, nullptr, "ConvertToModifyCurveNode", nullptr, nullptr, Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::ModifyCurveAnimLibrary_eventConvertToModifyCurveNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::ModifyCurveAnimLibrary_eventConvertToModifyCurveNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModifyCurveAnimLibrary::execConvertToModifyCurveNode)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FModifyCurveAnimNodeReference*)Z_Param__Result=UModifyCurveAnimLibrary::ConvertToModifyCurveNode(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UModifyCurveAnimLibrary Function ConvertToModifyCurveNode

// Begin Class UModifyCurveAnimLibrary Function ConvertToModifyCurveNodePure
struct Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics
{
	struct ModifyCurveAnimLibrary_eventConvertToModifyCurveNodePure_Parms
	{
		FAnimNodeReference Node;
		FModifyCurveAnimNodeReference ModifyCurveNode;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/** Get a modify curve context from an anim node context (pure) */" },
		{ "DisplayName", "Convert to Modify Curve node" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
		{ "ToolTip", "Get a modify curve context from an anim node context (pure)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyCurveNode;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventConvertToModifyCurveNodePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_ModifyCurveNode = { "ModifyCurveNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventConvertToModifyCurveNodePure_Parms, ModifyCurveNode), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 927857528
void Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((ModifyCurveAnimLibrary_eventConvertToModifyCurveNodePure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModifyCurveAnimLibrary_eventConvertToModifyCurveNodePure_Parms), &Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_ModifyCurveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyCurveAnimLibrary, nullptr, "ConvertToModifyCurveNodePure", nullptr, nullptr, Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::ModifyCurveAnimLibrary_eventConvertToModifyCurveNodePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::ModifyCurveAnimLibrary_eventConvertToModifyCurveNodePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModifyCurveAnimLibrary::execConvertToModifyCurveNodePure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FModifyCurveAnimNodeReference,Z_Param_Out_ModifyCurveNode);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModifyCurveAnimLibrary::ConvertToModifyCurveNodePure(Z_Param_Out_Node,Z_Param_Out_ModifyCurveNode,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UModifyCurveAnimLibrary Function ConvertToModifyCurveNodePure

// Begin Class UModifyCurveAnimLibrary Function GetAlpha
struct Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics
{
	struct ModifyCurveAnimLibrary_eventGetAlpha_Parms
	{
		FModifyCurveAnimNodeReference ModifyCurveNode;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyCurveNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyCurveNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::NewProp_ModifyCurveNode = { "ModifyCurveNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventGetAlpha_Parms, ModifyCurveNode), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyCurveNode_MetaData), NewProp_ModifyCurveNode_MetaData) }; // 927857528
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventGetAlpha_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::NewProp_ModifyCurveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyCurveAnimLibrary, nullptr, "GetAlpha", nullptr, nullptr, Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::ModifyCurveAnimLibrary_eventGetAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::ModifyCurveAnimLibrary_eventGetAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModifyCurveAnimLibrary::execGetAlpha)
{
	P_GET_STRUCT_REF(FModifyCurveAnimNodeReference,Z_Param_Out_ModifyCurveNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UModifyCurveAnimLibrary::GetAlpha(Z_Param_Out_ModifyCurveNode);
	P_NATIVE_END;
}
// End Class UModifyCurveAnimLibrary Function GetAlpha

// Begin Class UModifyCurveAnimLibrary Function GetApplyMode
struct Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics
{
	struct ModifyCurveAnimLibrary_eventGetApplyMode_Parms
	{
		FModifyCurveAnimNodeReference ModifyCurveNode;
		EModifyCurveApplyMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyCurveNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyCurveNode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::NewProp_ModifyCurveNode = { "ModifyCurveNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventGetApplyMode_Parms, ModifyCurveNode), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyCurveNode_MetaData), NewProp_ModifyCurveNode_MetaData) }; // 927857528
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventGetApplyMode_Parms, ReturnValue), Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, METADATA_PARAMS(0, nullptr) }; // 2288180925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::NewProp_ModifyCurveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyCurveAnimLibrary, nullptr, "GetApplyMode", nullptr, nullptr, Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::ModifyCurveAnimLibrary_eventGetApplyMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::ModifyCurveAnimLibrary_eventGetApplyMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModifyCurveAnimLibrary::execGetApplyMode)
{
	P_GET_STRUCT_REF(FModifyCurveAnimNodeReference,Z_Param_Out_ModifyCurveNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EModifyCurveApplyMode*)Z_Param__Result=UModifyCurveAnimLibrary::GetApplyMode(Z_Param_Out_ModifyCurveNode);
	P_NATIVE_END;
}
// End Class UModifyCurveAnimLibrary Function GetApplyMode

// Begin Class UModifyCurveAnimLibrary Function SetAlpha
struct Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics
{
	struct ModifyCurveAnimLibrary_eventSetAlpha_Parms
	{
		FModifyCurveAnimNodeReference ModifyCurveNode;
		float InAlpha;
		FModifyCurveAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyCurveNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyCurveNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::NewProp_ModifyCurveNode = { "ModifyCurveNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetAlpha_Parms, ModifyCurveNode), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyCurveNode_MetaData), NewProp_ModifyCurveNode_MetaData) }; // 927857528
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::NewProp_InAlpha = { "InAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetAlpha_Parms, InAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetAlpha_Parms, ReturnValue), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 927857528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::NewProp_ModifyCurveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::NewProp_InAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyCurveAnimLibrary, nullptr, "SetAlpha", nullptr, nullptr, Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::ModifyCurveAnimLibrary_eventSetAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::ModifyCurveAnimLibrary_eventSetAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModifyCurveAnimLibrary::execSetAlpha)
{
	P_GET_STRUCT_REF(FModifyCurveAnimNodeReference,Z_Param_Out_ModifyCurveNode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FModifyCurveAnimNodeReference*)Z_Param__Result=UModifyCurveAnimLibrary::SetAlpha(Z_Param_Out_ModifyCurveNode,Z_Param_InAlpha);
	P_NATIVE_END;
}
// End Class UModifyCurveAnimLibrary Function SetAlpha

// Begin Class UModifyCurveAnimLibrary Function SetApplyMode
struct Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics
{
	struct ModifyCurveAnimLibrary_eventSetApplyMode_Parms
	{
		FModifyCurveAnimNodeReference ModifyCurveNode;
		EModifyCurveApplyMode InMode;
		FModifyCurveAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyCurveNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyCurveNode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_ModifyCurveNode = { "ModifyCurveNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetApplyMode_Parms, ModifyCurveNode), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyCurveNode_MetaData), NewProp_ModifyCurveNode_MetaData) }; // 927857528
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_InMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_InMode = { "InMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetApplyMode_Parms, InMode), Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, METADATA_PARAMS(0, nullptr) }; // 2288180925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetApplyMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 927857528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_ModifyCurveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_InMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_InMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyCurveAnimLibrary, nullptr, "SetApplyMode", nullptr, nullptr, Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::ModifyCurveAnimLibrary_eventSetApplyMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::ModifyCurveAnimLibrary_eventSetApplyMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModifyCurveAnimLibrary::execSetApplyMode)
{
	P_GET_STRUCT_REF(FModifyCurveAnimNodeReference,Z_Param_Out_ModifyCurveNode);
	P_GET_ENUM(EModifyCurveApplyMode,Z_Param_InMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FModifyCurveAnimNodeReference*)Z_Param__Result=UModifyCurveAnimLibrary::SetApplyMode(Z_Param_Out_ModifyCurveNode,EModifyCurveApplyMode(Z_Param_InMode));
	P_NATIVE_END;
}
// End Class UModifyCurveAnimLibrary Function SetApplyMode

// Begin Class UModifyCurveAnimLibrary Function SetCurveMap
struct Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics
{
	struct ModifyCurveAnimLibrary_eventSetCurveMap_Parms
	{
		FModifyCurveAnimNodeReference ModifyCurveNode;
		TMap<FName,float> InCurveMap;
		FModifyCurveAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyCurveNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurveMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyCurveNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InCurveMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InCurveMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InCurveMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_ModifyCurveNode = { "ModifyCurveNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetCurveMap_Parms, ModifyCurveNode), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyCurveNode_MetaData), NewProp_ModifyCurveNode_MetaData) }; // 927857528
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_InCurveMap_ValueProp = { "InCurveMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_InCurveMap_Key_KeyProp = { "InCurveMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_InCurveMap = { "InCurveMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetCurveMap_Parms, InCurveMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurveMap_MetaData), NewProp_InCurveMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModifyCurveAnimLibrary_eventSetCurveMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 927857528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_ModifyCurveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_InCurveMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_InCurveMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_InCurveMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyCurveAnimLibrary, nullptr, "SetCurveMap", nullptr, nullptr, Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::ModifyCurveAnimLibrary_eventSetCurveMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::ModifyCurveAnimLibrary_eventSetCurveMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModifyCurveAnimLibrary::execSetCurveMap)
{
	P_GET_STRUCT_REF(FModifyCurveAnimNodeReference,Z_Param_Out_ModifyCurveNode);
	P_GET_TMAP_REF(FName,float,Z_Param_Out_InCurveMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FModifyCurveAnimNodeReference*)Z_Param__Result=UModifyCurveAnimLibrary::SetCurveMap(Z_Param_Out_ModifyCurveNode,Z_Param_Out_InCurveMap);
	P_NATIVE_END;
}
// End Class UModifyCurveAnimLibrary Function SetCurveMap

// Begin Class UModifyCurveAnimLibrary
void UModifyCurveAnimLibrary::StaticRegisterNativesUModifyCurveAnimLibrary()
{
	UClass* Class = UModifyCurveAnimLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToModifyCurveNode", &UModifyCurveAnimLibrary::execConvertToModifyCurveNode },
		{ "ConvertToModifyCurveNodePure", &UModifyCurveAnimLibrary::execConvertToModifyCurveNodePure },
		{ "GetAlpha", &UModifyCurveAnimLibrary::execGetAlpha },
		{ "GetApplyMode", &UModifyCurveAnimLibrary::execGetApplyMode },
		{ "SetAlpha", &UModifyCurveAnimLibrary::execSetAlpha },
		{ "SetApplyMode", &UModifyCurveAnimLibrary::execSetApplyMode },
		{ "SetCurveMap", &UModifyCurveAnimLibrary::execSetCurveMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifyCurveAnimLibrary);
UClass* Z_Construct_UClass_UModifyCurveAnimLibrary_NoRegister()
{
	return UModifyCurveAnimLibrary::StaticClass();
}
struct Z_Construct_UClass_UModifyCurveAnimLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Exposes operations that can be run on a Modify Curve Node via Anim Node Functions such as \"On Become Relevant\" and \"On Update\". */" },
		{ "IncludePath", "ModifyCurveLibrary.h" },
		{ "ModuleRelativePath", "Public/ModifyCurveLibrary.h" },
		{ "ToolTip", "Exposes operations that can be run on a Modify Curve Node via Anim Node Functions such as \"On Become Relevant\" and \"On Update\"." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNode, "ConvertToModifyCurveNode" }, // 1724904479
		{ &Z_Construct_UFunction_UModifyCurveAnimLibrary_ConvertToModifyCurveNodePure, "ConvertToModifyCurveNodePure" }, // 2522165166
		{ &Z_Construct_UFunction_UModifyCurveAnimLibrary_GetAlpha, "GetAlpha" }, // 1838358887
		{ &Z_Construct_UFunction_UModifyCurveAnimLibrary_GetApplyMode, "GetApplyMode" }, // 1656604228
		{ &Z_Construct_UFunction_UModifyCurveAnimLibrary_SetAlpha, "SetAlpha" }, // 3848708428
		{ &Z_Construct_UFunction_UModifyCurveAnimLibrary_SetApplyMode, "SetApplyMode" }, // 174671650
		{ &Z_Construct_UFunction_UModifyCurveAnimLibrary_SetCurveMap, "SetCurveMap" }, // 375667695
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyCurveAnimLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyCurveAnimLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyCurveAnimLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyCurveAnimLibrary_Statics::ClassParams = {
	&UModifyCurveAnimLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyCurveAnimLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyCurveAnimLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyCurveAnimLibrary()
{
	if (!Z_Registration_Info_UClass_UModifyCurveAnimLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyCurveAnimLibrary.OuterSingleton, Z_Construct_UClass_UModifyCurveAnimLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyCurveAnimLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UModifyCurveAnimLibrary>()
{
	return UModifyCurveAnimLibrary::StaticClass();
}
UModifyCurveAnimLibrary::UModifyCurveAnimLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyCurveAnimLibrary);
UModifyCurveAnimLibrary::~UModifyCurveAnimLibrary() {}
// End Class UModifyCurveAnimLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModifyCurveAnimNodeReference::StaticStruct, Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference_Statics::NewStructOps, TEXT("ModifyCurveAnimNodeReference"), &Z_Registration_Info_UScriptStruct_ModifyCurveAnimNodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyCurveAnimNodeReference), 927857528U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModifyCurveAnimLibrary, UModifyCurveAnimLibrary::StaticClass, TEXT("UModifyCurveAnimLibrary"), &Z_Registration_Info_UClass_UModifyCurveAnimLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyCurveAnimLibrary), 341725042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_1446327658(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_ModifyCurveLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
