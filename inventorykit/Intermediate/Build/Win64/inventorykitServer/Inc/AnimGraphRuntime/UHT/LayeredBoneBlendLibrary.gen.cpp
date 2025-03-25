// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/LayeredBoneBlendLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayeredBoneBlendLibrary() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredBoneBlendReference();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FLayeredBoneBlendReference
static_assert(std::is_polymorphic<FLayeredBoneBlendReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FLayeredBoneBlendReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference;
class UScriptStruct* FLayeredBoneBlendReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredBoneBlendReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("LayeredBoneBlendReference"));
	}
	return Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FLayeredBoneBlendReference>()
{
	return FLayeredBoneBlendReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredBoneBlendReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"LayeredBoneBlendReference",
	nullptr,
	0,
	sizeof(FLayeredBoneBlendReference),
	alignof(FLayeredBoneBlendReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredBoneBlendReference()
{
	if (!Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.InnerSingleton, Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.InnerSingleton;
}
// End ScriptStruct FLayeredBoneBlendReference

// Begin Class ULayeredBoneBlendLibrary Function ConvertToLayeredBlendPerBonePure
struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics
{
	struct LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms
	{
		FAnimNodeReference Node;
		FLayeredBoneBlendReference LayeredBoneBlend;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/** Get a layered bone blend context from an anim node context (pure). */" },
		{ "DisplayName", "Convert to Layered Bone Blend" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Get a layered bone blend context from an anim node context (pure)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayeredBoneBlend;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_LayeredBoneBlend = { "LayeredBoneBlend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms, LayeredBoneBlend), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(0, nullptr) }; // 828334458
void Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms), &Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_LayeredBoneBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "ConvertToLayeredBlendPerBonePure", nullptr, nullptr, Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execConvertToLayeredBlendPerBonePure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FLayeredBoneBlendReference,Z_Param_Out_LayeredBoneBlend);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(Z_Param_Out_Node,Z_Param_Out_LayeredBoneBlend,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class ULayeredBoneBlendLibrary Function ConvertToLayeredBlendPerBonePure

// Begin Class ULayeredBoneBlendLibrary Function ConvertToLayeredBoneBlend
struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics
{
	struct LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FLayeredBoneBlendReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/** Get a layered bone blend context from an anim node context. */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Get a layered bone blend context from an anim node context." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms, ReturnValue), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(0, nullptr) }; // 828334458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "ConvertToLayeredBoneBlend", nullptr, nullptr, Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execConvertToLayeredBoneBlend)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLayeredBoneBlendReference*)Z_Param__Result=ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class ULayeredBoneBlendLibrary Function ConvertToLayeredBoneBlend

// Begin Class ULayeredBoneBlendLibrary Function GetNumPoses
struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics
{
	struct LayeredBoneBlendLibrary_eventGetNumPoses_Parms
	{
		FLayeredBoneBlendReference LayeredBoneBlend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/** Get the number of poses that a layered bone blend node has (this does not include the base pose) */" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Get the number of poses that a layered bone blend node has (this does not include the base pose)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayeredBoneBlend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayeredBoneBlend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_LayeredBoneBlend = { "LayeredBoneBlend", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventGetNumPoses_Parms, LayeredBoneBlend), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayeredBoneBlend_MetaData), NewProp_LayeredBoneBlend_MetaData) }; // 828334458
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventGetNumPoses_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_LayeredBoneBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "GetNumPoses", nullptr, nullptr, Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::LayeredBoneBlendLibrary_eventGetNumPoses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::LayeredBoneBlendLibrary_eventGetNumPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execGetNumPoses)
{
	P_GET_STRUCT_REF(FLayeredBoneBlendReference,Z_Param_Out_LayeredBoneBlend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULayeredBoneBlendLibrary::GetNumPoses(Z_Param_Out_LayeredBoneBlend);
	P_NATIVE_END;
}
// End Class ULayeredBoneBlendLibrary Function GetNumPoses

// Begin Class ULayeredBoneBlendLibrary Function SetBlendMask
struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics
{
	struct LayeredBoneBlendLibrary_eventSetBlendMask_Parms
	{
		FAnimUpdateContext UpdateContext;
		FLayeredBoneBlendReference LayeredBoneBlend;
		int32 PoseIndex;
		FName BlendMaskName;
		FLayeredBoneBlendReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/**\n\x09 * Sets the currently-used blend mask for a blended input pose by name.\n\x09 * @param\x09UpdateContext\x09\x09The update context to use. This is used to extract the current skeleton to derive the blend mask from\n\x09 * @param\x09LayeredBoneBlend\x09""A reference to the node\n\x09 * @param\x09PoseIndex\x09\x09\x09The pose index to set the blend mask for\n\x09 * @param\x09""BlendMaskName\x09The name of the blend mask to use \n\x09 */" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Sets the currently-used blend mask for a blended input pose by name.\n@param       UpdateContext           The update context to use. This is used to extract the current skeleton to derive the blend mask from\n@param       LayeredBoneBlend        A reference to the node\n@param       PoseIndex                       The pose index to set the blend mask for\n@param       BlendMaskName   The name of the blend mask to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayeredBoneBlend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayeredBoneBlend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoseIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlendMaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_LayeredBoneBlend = { "LayeredBoneBlend", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, LayeredBoneBlend), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayeredBoneBlend_MetaData), NewProp_LayeredBoneBlend_MetaData) }; // 828334458
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_PoseIndex = { "PoseIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, PoseIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_BlendMaskName = { "BlendMaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, BlendMaskName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, ReturnValue), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(0, nullptr) }; // 828334458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_LayeredBoneBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_PoseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_BlendMaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "SetBlendMask", nullptr, nullptr, Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::LayeredBoneBlendLibrary_eventSetBlendMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::LayeredBoneBlendLibrary_eventSetBlendMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execSetBlendMask)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FLayeredBoneBlendReference,Z_Param_Out_LayeredBoneBlend);
	P_GET_PROPERTY(FIntProperty,Z_Param_PoseIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_BlendMaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLayeredBoneBlendReference*)Z_Param__Result=ULayeredBoneBlendLibrary::SetBlendMask(Z_Param_Out_UpdateContext,Z_Param_Out_LayeredBoneBlend,Z_Param_PoseIndex,Z_Param_BlendMaskName);
	P_NATIVE_END;
}
// End Class ULayeredBoneBlendLibrary Function SetBlendMask

// Begin Class ULayeredBoneBlendLibrary
void ULayeredBoneBlendLibrary::StaticRegisterNativesULayeredBoneBlendLibrary()
{
	UClass* Class = ULayeredBoneBlendLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToLayeredBlendPerBonePure", &ULayeredBoneBlendLibrary::execConvertToLayeredBlendPerBonePure },
		{ "ConvertToLayeredBoneBlend", &ULayeredBoneBlendLibrary::execConvertToLayeredBoneBlend },
		{ "GetNumPoses", &ULayeredBoneBlendLibrary::execGetNumPoses },
		{ "SetBlendMask", &ULayeredBoneBlendLibrary::execSetBlendMask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayeredBoneBlendLibrary);
UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary_NoRegister()
{
	return ULayeredBoneBlendLibrary::StaticClass();
}
struct Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes operations to be performed on a layered bone blend anim node.\n */" },
		{ "IncludePath", "LayeredBoneBlendLibrary.h" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on a layered bone blend anim node." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure, "ConvertToLayeredBlendPerBonePure" }, // 723221246
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend, "ConvertToLayeredBoneBlend" }, // 3618663716
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses, "GetNumPoses" }, // 3440881540
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask, "SetBlendMask" }, // 3639983073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayeredBoneBlendLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::ClassParams = {
	&ULayeredBoneBlendLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary()
{
	if (!Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.OuterSingleton, Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<ULayeredBoneBlendLibrary>()
{
	return ULayeredBoneBlendLibrary::StaticClass();
}
ULayeredBoneBlendLibrary::ULayeredBoneBlendLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULayeredBoneBlendLibrary);
ULayeredBoneBlendLibrary::~ULayeredBoneBlendLibrary() {}
// End Class ULayeredBoneBlendLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredBoneBlendReference::StaticStruct, Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::NewStructOps, TEXT("LayeredBoneBlendReference"), &Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredBoneBlendReference), 828334458U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULayeredBoneBlendLibrary, ULayeredBoneBlendLibrary::StaticClass, TEXT("ULayeredBoneBlendLibrary"), &Z_Registration_Info_UClass_ULayeredBoneBlendLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayeredBoneBlendLibrary), 278810584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_2046773180(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
