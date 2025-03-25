// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/MirrorAnimLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorAnimLibrary() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UMirrorAnimLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UMirrorAnimLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorAnimNodeReference();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FMirrorAnimNodeReference
static_assert(std::is_polymorphic<FMirrorAnimNodeReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FMirrorAnimNodeReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference;
class UScriptStruct* FMirrorAnimNodeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMirrorAnimNodeReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("MirrorAnimNodeReference"));
	}
	return Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FMirrorAnimNodeReference>()
{
	return FMirrorAnimNodeReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMirrorAnimNodeReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"MirrorAnimNodeReference",
	nullptr,
	0,
	sizeof(FMirrorAnimNodeReference),
	alignof(FMirrorAnimNodeReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMirrorAnimNodeReference()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference.InnerSingleton, Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference.InnerSingleton;
}
// End ScriptStruct FMirrorAnimNodeReference

// Begin Class UMirrorAnimLibrary Function ConvertToMirrorNode
struct Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics
{
	struct MirrorAnimLibrary_eventConvertToMirrorNode_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FMirrorAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Mirroring" },
		{ "Comment", "/** Get a mirror node context from an anim node context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Get a mirror node context from an anim node context" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventConvertToMirrorNode_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventConvertToMirrorNode_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventConvertToMirrorNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 2674501264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorAnimLibrary, nullptr, "ConvertToMirrorNode", nullptr, nullptr, Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::MirrorAnimLibrary_eventConvertToMirrorNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::MirrorAnimLibrary_eventConvertToMirrorNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorAnimLibrary::execConvertToMirrorNode)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMirrorAnimNodeReference*)Z_Param__Result=UMirrorAnimLibrary::ConvertToMirrorNode(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UMirrorAnimLibrary Function ConvertToMirrorNode

// Begin Class UMirrorAnimLibrary Function ConvertToMirrorNodePure
struct Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics
{
	struct MirrorAnimLibrary_eventConvertToMirrorNodePure_Parms
	{
		FAnimNodeReference Node;
		FMirrorAnimNodeReference MirrorNode;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Mirroring" },
		{ "Comment", "/** Get a mirror context from an anim node context (pure) */" },
		{ "DisplayName", "Convert to Mirror Node" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Get a mirror context from an anim node context (pure)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorNode;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventConvertToMirrorNodePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_MirrorNode = { "MirrorNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventConvertToMirrorNodePure_Parms, MirrorNode), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 2674501264
void Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((MirrorAnimLibrary_eventConvertToMirrorNodePure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MirrorAnimLibrary_eventConvertToMirrorNodePure_Parms), &Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_MirrorNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorAnimLibrary, nullptr, "ConvertToMirrorNodePure", nullptr, nullptr, Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::MirrorAnimLibrary_eventConvertToMirrorNodePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::MirrorAnimLibrary_eventConvertToMirrorNodePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorAnimLibrary::execConvertToMirrorNodePure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FMirrorAnimNodeReference,Z_Param_Out_MirrorNode);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMirrorAnimLibrary::ConvertToMirrorNodePure(Z_Param_Out_Node,Z_Param_Out_MirrorNode,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UMirrorAnimLibrary Function ConvertToMirrorNodePure

// Begin Class UMirrorAnimLibrary Function GetMirror
struct Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics
{
	struct MirrorAnimLibrary_eventGetMirror_Parms
	{
		FMirrorAnimNodeReference MirrorNode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Mirroring" },
		{ "Comment", "/** Get the mirror state */" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Get the mirror state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorNode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::NewProp_MirrorNode = { "MirrorNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventGetMirror_Parms, MirrorNode), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorNode_MetaData), NewProp_MirrorNode_MetaData) }; // 2674501264
void Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MirrorAnimLibrary_eventGetMirror_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MirrorAnimLibrary_eventGetMirror_Parms), &Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::NewProp_MirrorNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorAnimLibrary, nullptr, "GetMirror", nullptr, nullptr, Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::MirrorAnimLibrary_eventGetMirror_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::MirrorAnimLibrary_eventGetMirror_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorAnimLibrary::execGetMirror)
{
	P_GET_STRUCT_REF(FMirrorAnimNodeReference,Z_Param_Out_MirrorNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMirrorAnimLibrary::GetMirror(Z_Param_Out_MirrorNode);
	P_NATIVE_END;
}
// End Class UMirrorAnimLibrary Function GetMirror

// Begin Class UMirrorAnimLibrary Function GetMirrorDataTable
struct Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics
{
	struct MirrorAnimLibrary_eventGetMirrorDataTable_Parms
	{
		FMirrorAnimNodeReference MirrorNode;
		UMirrorDataTable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Mirroring" },
		{ "Comment", "/** Get MirrorDataTable used to perform mirroring*/" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Get MirrorDataTable used to perform mirroring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::NewProp_MirrorNode = { "MirrorNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventGetMirrorDataTable_Parms, MirrorNode), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorNode_MetaData), NewProp_MirrorNode_MetaData) }; // 2674501264
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventGetMirrorDataTable_Parms, ReturnValue), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::NewProp_MirrorNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorAnimLibrary, nullptr, "GetMirrorDataTable", nullptr, nullptr, Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::MirrorAnimLibrary_eventGetMirrorDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::MirrorAnimLibrary_eventGetMirrorDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorAnimLibrary::execGetMirrorDataTable)
{
	P_GET_STRUCT_REF(FMirrorAnimNodeReference,Z_Param_Out_MirrorNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMirrorDataTable**)Z_Param__Result=UMirrorAnimLibrary::GetMirrorDataTable(Z_Param_Out_MirrorNode);
	P_NATIVE_END;
}
// End Class UMirrorAnimLibrary Function GetMirrorDataTable

// Begin Class UMirrorAnimLibrary Function GetMirrorTransitionBlendTime
struct Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics
{
	struct MirrorAnimLibrary_eventGetMirrorTransitionBlendTime_Parms
	{
		FMirrorAnimNodeReference MirrorNode;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Mirroring" },
		{ "Comment", "/** Get how long to blend using inertialization when switching mirrored state */" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Get how long to blend using inertialization when switching mirrored state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::NewProp_MirrorNode = { "MirrorNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventGetMirrorTransitionBlendTime_Parms, MirrorNode), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorNode_MetaData), NewProp_MirrorNode_MetaData) }; // 2674501264
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventGetMirrorTransitionBlendTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::NewProp_MirrorNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorAnimLibrary, nullptr, "GetMirrorTransitionBlendTime", nullptr, nullptr, Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::MirrorAnimLibrary_eventGetMirrorTransitionBlendTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::MirrorAnimLibrary_eventGetMirrorTransitionBlendTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorAnimLibrary::execGetMirrorTransitionBlendTime)
{
	P_GET_STRUCT_REF(FMirrorAnimNodeReference,Z_Param_Out_MirrorNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMirrorAnimLibrary::GetMirrorTransitionBlendTime(Z_Param_Out_MirrorNode);
	P_NATIVE_END;
}
// End Class UMirrorAnimLibrary Function GetMirrorTransitionBlendTime

// Begin Class UMirrorAnimLibrary Function SetMirror
struct Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics
{
	struct MirrorAnimLibrary_eventSetMirror_Parms
	{
		FMirrorAnimNodeReference MirrorNode;
		bool bInMirror;
		FMirrorAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Mirroring" },
		{ "Comment", "/** Set the mirror state */" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Set the mirror state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorNode;
	static void NewProp_bInMirror_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMirror;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_MirrorNode = { "MirrorNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventSetMirror_Parms, MirrorNode), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorNode_MetaData), NewProp_MirrorNode_MetaData) }; // 2674501264
void Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_bInMirror_SetBit(void* Obj)
{
	((MirrorAnimLibrary_eventSetMirror_Parms*)Obj)->bInMirror = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_bInMirror = { "bInMirror", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MirrorAnimLibrary_eventSetMirror_Parms), &Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_bInMirror_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventSetMirror_Parms, ReturnValue), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 2674501264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_MirrorNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_bInMirror,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorAnimLibrary, nullptr, "SetMirror", nullptr, nullptr, Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::MirrorAnimLibrary_eventSetMirror_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::MirrorAnimLibrary_eventSetMirror_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorAnimLibrary::execSetMirror)
{
	P_GET_STRUCT_REF(FMirrorAnimNodeReference,Z_Param_Out_MirrorNode);
	P_GET_UBOOL(Z_Param_bInMirror);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMirrorAnimNodeReference*)Z_Param__Result=UMirrorAnimLibrary::SetMirror(Z_Param_Out_MirrorNode,Z_Param_bInMirror);
	P_NATIVE_END;
}
// End Class UMirrorAnimLibrary Function SetMirror

// Begin Class UMirrorAnimLibrary Function SetMirrorTransitionBlendTime
struct Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics
{
	struct MirrorAnimLibrary_eventSetMirrorTransitionBlendTime_Parms
	{
		FMirrorAnimNodeReference MirrorNode;
		float InBlendTime;
		FMirrorAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Mirroring" },
		{ "Comment", "/** Set how long to blend using inertialization when switching mirrored state */" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Set how long to blend using inertialization when switching mirrored state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::NewProp_MirrorNode = { "MirrorNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventSetMirrorTransitionBlendTime_Parms, MirrorNode), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorNode_MetaData), NewProp_MirrorNode_MetaData) }; // 2674501264
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::NewProp_InBlendTime = { "InBlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventSetMirrorTransitionBlendTime_Parms, InBlendTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MirrorAnimLibrary_eventSetMirrorTransitionBlendTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FMirrorAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 2674501264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::NewProp_MirrorNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::NewProp_InBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorAnimLibrary, nullptr, "SetMirrorTransitionBlendTime", nullptr, nullptr, Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::MirrorAnimLibrary_eventSetMirrorTransitionBlendTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::MirrorAnimLibrary_eventSetMirrorTransitionBlendTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorAnimLibrary::execSetMirrorTransitionBlendTime)
{
	P_GET_STRUCT_REF(FMirrorAnimNodeReference,Z_Param_Out_MirrorNode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMirrorAnimNodeReference*)Z_Param__Result=UMirrorAnimLibrary::SetMirrorTransitionBlendTime(Z_Param_Out_MirrorNode,Z_Param_InBlendTime);
	P_NATIVE_END;
}
// End Class UMirrorAnimLibrary Function SetMirrorTransitionBlendTime

// Begin Class UMirrorAnimLibrary
void UMirrorAnimLibrary::StaticRegisterNativesUMirrorAnimLibrary()
{
	UClass* Class = UMirrorAnimLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToMirrorNode", &UMirrorAnimLibrary::execConvertToMirrorNode },
		{ "ConvertToMirrorNodePure", &UMirrorAnimLibrary::execConvertToMirrorNodePure },
		{ "GetMirror", &UMirrorAnimLibrary::execGetMirror },
		{ "GetMirrorDataTable", &UMirrorAnimLibrary::execGetMirrorDataTable },
		{ "GetMirrorTransitionBlendTime", &UMirrorAnimLibrary::execGetMirrorTransitionBlendTime },
		{ "SetMirror", &UMirrorAnimLibrary::execSetMirror },
		{ "SetMirrorTransitionBlendTime", &UMirrorAnimLibrary::execSetMirrorTransitionBlendTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorAnimLibrary);
UClass* Z_Construct_UClass_UMirrorAnimLibrary_NoRegister()
{
	return UMirrorAnimLibrary::StaticClass();
}
struct Z_Construct_UClass_UMirrorAnimLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Exposes operations that can be run on a Mirror node via Anim Node Functions such as \"On Become Relevant\" and \"On Update\". */" },
		{ "IncludePath", "MirrorAnimLibrary.h" },
		{ "ModuleRelativePath", "Public/MirrorAnimLibrary.h" },
		{ "ToolTip", "Exposes operations that can be run on a Mirror node via Anim Node Functions such as \"On Become Relevant\" and \"On Update\"." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNode, "ConvertToMirrorNode" }, // 854238437
		{ &Z_Construct_UFunction_UMirrorAnimLibrary_ConvertToMirrorNodePure, "ConvertToMirrorNodePure" }, // 756913846
		{ &Z_Construct_UFunction_UMirrorAnimLibrary_GetMirror, "GetMirror" }, // 1348517179
		{ &Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorDataTable, "GetMirrorDataTable" }, // 1709121024
		{ &Z_Construct_UFunction_UMirrorAnimLibrary_GetMirrorTransitionBlendTime, "GetMirrorTransitionBlendTime" }, // 894411772
		{ &Z_Construct_UFunction_UMirrorAnimLibrary_SetMirror, "SetMirror" }, // 2157393494
		{ &Z_Construct_UFunction_UMirrorAnimLibrary_SetMirrorTransitionBlendTime, "SetMirrorTransitionBlendTime" }, // 1949591105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorAnimLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMirrorAnimLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorAnimLibrary_Statics::ClassParams = {
	&UMirrorAnimLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMirrorAnimLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMirrorAnimLibrary()
{
	if (!Z_Registration_Info_UClass_UMirrorAnimLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorAnimLibrary.OuterSingleton, Z_Construct_UClass_UMirrorAnimLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMirrorAnimLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UMirrorAnimLibrary>()
{
	return UMirrorAnimLibrary::StaticClass();
}
UMirrorAnimLibrary::UMirrorAnimLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorAnimLibrary);
UMirrorAnimLibrary::~UMirrorAnimLibrary() {}
// End Class UMirrorAnimLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMirrorAnimNodeReference::StaticStruct, Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics::NewStructOps, TEXT("MirrorAnimNodeReference"), &Z_Registration_Info_UScriptStruct_MirrorAnimNodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMirrorAnimNodeReference), 2674501264U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMirrorAnimLibrary, UMirrorAnimLibrary::StaticClass, TEXT("UMirrorAnimLibrary"), &Z_Registration_Info_UClass_UMirrorAnimLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorAnimLibrary), 3067735879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_2474609899(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
